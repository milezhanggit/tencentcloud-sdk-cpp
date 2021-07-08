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

#include <tencentcloud/cam/v20190116/model/SecretIdLastUsed.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

SecretIdLastUsed::SecretIdLastUsed() :
    m_secretIdHasBeenSet(false),
    m_lastUsedDateHasBeenSet(false)
{
}

CoreInternalOutcome SecretIdLastUsed::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecretId") && !value["SecretId"].IsNull())
    {
        if (!value["SecretId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretIdLastUsed.SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(value["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (value.HasMember("LastUsedDate") && !value["LastUsedDate"].IsNull())
    {
        if (!value["LastUsedDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretIdLastUsed.LastUsedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUsedDate = string(value["LastUsedDate"].GetString());
        m_lastUsedDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecretIdLastUsed::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUsedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUsedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUsedDate.c_str(), allocator).Move(), allocator);
    }

}


string SecretIdLastUsed::GetSecretId() const
{
    return m_secretId;
}

void SecretIdLastUsed::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool SecretIdLastUsed::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string SecretIdLastUsed::GetLastUsedDate() const
{
    return m_lastUsedDate;
}

void SecretIdLastUsed::SetLastUsedDate(const string& _lastUsedDate)
{
    m_lastUsedDate = _lastUsedDate;
    m_lastUsedDateHasBeenSet = true;
}

bool SecretIdLastUsed::LastUsedDateHasBeenSet() const
{
    return m_lastUsedDateHasBeenSet;
}

