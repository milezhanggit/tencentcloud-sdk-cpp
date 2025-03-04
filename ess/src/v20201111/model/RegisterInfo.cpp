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

#include <tencentcloud/ess/v20201111/model/RegisterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

RegisterInfo::RegisterInfo() :
    m_legalNameHasBeenSet(false),
    m_usccHasBeenSet(false)
{
}

CoreInternalOutcome RegisterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LegalName") && !value["LegalName"].IsNull())
    {
        if (!value["LegalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.LegalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalName = string(value["LegalName"].GetString());
        m_legalNameHasBeenSet = true;
    }

    if (value.HasMember("Uscc") && !value["Uscc"].IsNull())
    {
        if (!value["Uscc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegisterInfo.Uscc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uscc = string(value["Uscc"].GetString());
        m_usccHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegisterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_legalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalName.c_str(), allocator).Move(), allocator);
    }

    if (m_usccHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uscc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uscc.c_str(), allocator).Move(), allocator);
    }

}


string RegisterInfo::GetLegalName() const
{
    return m_legalName;
}

void RegisterInfo::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool RegisterInfo::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}

string RegisterInfo::GetUscc() const
{
    return m_uscc;
}

void RegisterInfo::SetUscc(const string& _uscc)
{
    m_uscc = _uscc;
    m_usccHasBeenSet = true;
}

bool RegisterInfo::UsccHasBeenSet() const
{
    return m_usccHasBeenSet;
}

