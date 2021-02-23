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

#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceActionHistoryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace rapidjson;
using namespace std;

DescribeDeviceActionHistoryResponse::DescribeDeviceActionHistoryResponse() :
    m_totalCountsHasBeenSet(false),
    m_actionHistoriesHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_listoverHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceActionHistoryResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TotalCounts") && !rsp["TotalCounts"].IsNull())
    {
        if (!rsp["TotalCounts"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalCounts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCounts = rsp["TotalCounts"].GetUint64();
        m_totalCountsHasBeenSet = true;
    }

    if (rsp.HasMember("ActionHistories") && !rsp["ActionHistories"].IsNull())
    {
        if (!rsp["ActionHistories"].IsArray())
            return CoreInternalOutcome(Error("response `ActionHistories` is not array type"));

        const Value &tmpValue = rsp["ActionHistories"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ActionHistory item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actionHistories.push_back(item);
        }
        m_actionHistoriesHasBeenSet = true;
    }

    if (rsp.HasMember("Context") && !rsp["Context"].IsNull())
    {
        if (!rsp["Context"].IsString())
        {
            return CoreInternalOutcome(Error("response `Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(rsp["Context"].GetString());
        m_contextHasBeenSet = true;
    }

    if (rsp.HasMember("Listover") && !rsp["Listover"].IsNull())
    {
        if (!rsp["Listover"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Listover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_listover = rsp["Listover"].GetBool();
        m_listoverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeDeviceActionHistoryResponse::GetTotalCounts() const
{
    return m_totalCounts;
}

bool DescribeDeviceActionHistoryResponse::TotalCountsHasBeenSet() const
{
    return m_totalCountsHasBeenSet;
}

vector<ActionHistory> DescribeDeviceActionHistoryResponse::GetActionHistories() const
{
    return m_actionHistories;
}

bool DescribeDeviceActionHistoryResponse::ActionHistoriesHasBeenSet() const
{
    return m_actionHistoriesHasBeenSet;
}

string DescribeDeviceActionHistoryResponse::GetContext() const
{
    return m_context;
}

bool DescribeDeviceActionHistoryResponse::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

bool DescribeDeviceActionHistoryResponse::GetListover() const
{
    return m_listover;
}

bool DescribeDeviceActionHistoryResponse::ListoverHasBeenSet() const
{
    return m_listoverHasBeenSet;
}


