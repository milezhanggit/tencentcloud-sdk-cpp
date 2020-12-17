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

#include <tencentcloud/ses/v20201002/model/BlackEmailAddress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace rapidjson;
using namespace std;

BlackEmailAddress::BlackEmailAddress() :
    m_bounceTimeHasBeenSet(false),
    m_emailAddressHasBeenSet(false)
{
}

CoreInternalOutcome BlackEmailAddress::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("BounceTime") && !value["BounceTime"].IsNull())
    {
        if (!value["BounceTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BlackEmailAddress.BounceTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bounceTime = string(value["BounceTime"].GetString());
        m_bounceTimeHasBeenSet = true;
    }

    if (value.HasMember("EmailAddress") && !value["EmailAddress"].IsNull())
    {
        if (!value["EmailAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `BlackEmailAddress.EmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailAddress = string(value["EmailAddress"].GetString());
        m_emailAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlackEmailAddress::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_bounceTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BounceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_bounceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_emailAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_emailAddress.c_str(), allocator).Move(), allocator);
    }

}


string BlackEmailAddress::GetBounceTime() const
{
    return m_bounceTime;
}

void BlackEmailAddress::SetBounceTime(const string& _bounceTime)
{
    m_bounceTime = _bounceTime;
    m_bounceTimeHasBeenSet = true;
}

bool BlackEmailAddress::BounceTimeHasBeenSet() const
{
    return m_bounceTimeHasBeenSet;
}

string BlackEmailAddress::GetEmailAddress() const
{
    return m_emailAddress;
}

void BlackEmailAddress::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool BlackEmailAddress::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

