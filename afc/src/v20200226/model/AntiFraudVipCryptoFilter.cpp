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

#include <tencentcloud/afc/v20200226/model/AntiFraudVipCryptoFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Afc::V20200226::Model;
using namespace std;

AntiFraudVipCryptoFilter::AntiFraudVipCryptoFilter() :
    m_cryptoTypeHasBeenSet(false),
    m_cryptoContentHasBeenSet(false)
{
}

CoreInternalOutcome AntiFraudVipCryptoFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CryptoType") && !value["CryptoType"].IsNull())
    {
        if (!value["CryptoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipCryptoFilter.CryptoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cryptoType = string(value["CryptoType"].GetString());
        m_cryptoTypeHasBeenSet = true;
    }

    if (value.HasMember("CryptoContent") && !value["CryptoContent"].IsNull())
    {
        if (!value["CryptoContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AntiFraudVipCryptoFilter.CryptoContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cryptoContent = string(value["CryptoContent"].GetString());
        m_cryptoContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AntiFraudVipCryptoFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cryptoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CryptoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cryptoType.c_str(), allocator).Move(), allocator);
    }

    if (m_cryptoContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CryptoContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cryptoContent.c_str(), allocator).Move(), allocator);
    }

}


string AntiFraudVipCryptoFilter::GetCryptoType() const
{
    return m_cryptoType;
}

void AntiFraudVipCryptoFilter::SetCryptoType(const string& _cryptoType)
{
    m_cryptoType = _cryptoType;
    m_cryptoTypeHasBeenSet = true;
}

bool AntiFraudVipCryptoFilter::CryptoTypeHasBeenSet() const
{
    return m_cryptoTypeHasBeenSet;
}

string AntiFraudVipCryptoFilter::GetCryptoContent() const
{
    return m_cryptoContent;
}

void AntiFraudVipCryptoFilter::SetCryptoContent(const string& _cryptoContent)
{
    m_cryptoContent = _cryptoContent;
    m_cryptoContentHasBeenSet = true;
}

bool AntiFraudVipCryptoFilter::CryptoContentHasBeenSet() const
{
    return m_cryptoContentHasBeenSet;
}

