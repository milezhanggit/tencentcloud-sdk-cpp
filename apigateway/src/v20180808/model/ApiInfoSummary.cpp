/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/apigateway/v20180808/model/ApiInfoSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ApiInfoSummary::ApiInfoSummary() :
    m_totalCountHasBeenSet(false),
    m_apiSetHasBeenSet(false)
{
}

CoreInternalOutcome ApiInfoSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ApiInfoSummary.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ApiSet") && !value["ApiSet"].IsNull())
    {
        if (!value["ApiSet"].IsArray())
            return CoreInternalOutcome(Error("response `ApiInfoSummary.ApiSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AvailableApiInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiSet.push_back(item);
        }
        m_apiSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiInfoSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_apiSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiSet.begin(); itr != m_apiSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ApiInfoSummary::GetTotalCount() const
{
    return m_totalCount;
}

void ApiInfoSummary::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ApiInfoSummary::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<AvailableApiInfo> ApiInfoSummary::GetApiSet() const
{
    return m_apiSet;
}

void ApiInfoSummary::SetApiSet(const vector<AvailableApiInfo>& _apiSet)
{
    m_apiSet = _apiSet;
    m_apiSetHasBeenSet = true;
}

bool ApiInfoSummary::ApiSetHasBeenSet() const
{
    return m_apiSetHasBeenSet;
}

