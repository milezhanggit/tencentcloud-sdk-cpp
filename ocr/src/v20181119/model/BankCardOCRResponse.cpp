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

#include <tencentcloud/ocr/v20181119/model/BankCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

BankCardOCRResponse::BankCardOCRResponse() :
    m_cardNoHasBeenSet(false),
    m_bankInfoHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_cardTypeHasBeenSet(false),
    m_cardNameHasBeenSet(false),
    m_borderCutImageHasBeenSet(false),
    m_cardNoImageHasBeenSet(false),
    m_warningCodeHasBeenSet(false)
{
}

CoreInternalOutcome BankCardOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CardNo") && !rsp["CardNo"].IsNull())
    {
        if (!rsp["CardNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `CardNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardNo = string(rsp["CardNo"].GetString());
        m_cardNoHasBeenSet = true;
    }

    if (rsp.HasMember("BankInfo") && !rsp["BankInfo"].IsNull())
    {
        if (!rsp["BankInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `BankInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankInfo = string(rsp["BankInfo"].GetString());
        m_bankInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ValidDate") && !rsp["ValidDate"].IsNull())
    {
        if (!rsp["ValidDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `ValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validDate = string(rsp["ValidDate"].GetString());
        m_validDateHasBeenSet = true;
    }

    if (rsp.HasMember("CardType") && !rsp["CardType"].IsNull())
    {
        if (!rsp["CardType"].IsString())
        {
            return CoreInternalOutcome(Error("response `CardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardType = string(rsp["CardType"].GetString());
        m_cardTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CardName") && !rsp["CardName"].IsNull())
    {
        if (!rsp["CardName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardName = string(rsp["CardName"].GetString());
        m_cardNameHasBeenSet = true;
    }

    if (rsp.HasMember("BorderCutImage") && !rsp["BorderCutImage"].IsNull())
    {
        if (!rsp["BorderCutImage"].IsString())
        {
            return CoreInternalOutcome(Error("response `BorderCutImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_borderCutImage = string(rsp["BorderCutImage"].GetString());
        m_borderCutImageHasBeenSet = true;
    }

    if (rsp.HasMember("CardNoImage") && !rsp["CardNoImage"].IsNull())
    {
        if (!rsp["CardNoImage"].IsString())
        {
            return CoreInternalOutcome(Error("response `CardNoImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardNoImage = string(rsp["CardNoImage"].GetString());
        m_cardNoImageHasBeenSet = true;
    }

    if (rsp.HasMember("WarningCode") && !rsp["WarningCode"].IsNull())
    {
        if (!rsp["WarningCode"].IsArray())
            return CoreInternalOutcome(Error("response `WarningCode` is not array type"));

        const Value &tmpValue = rsp["WarningCode"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warningCode.push_back((*itr).GetInt64());
        }
        m_warningCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string BankCardOCRResponse::GetCardNo() const
{
    return m_cardNo;
}

bool BankCardOCRResponse::CardNoHasBeenSet() const
{
    return m_cardNoHasBeenSet;
}

string BankCardOCRResponse::GetBankInfo() const
{
    return m_bankInfo;
}

bool BankCardOCRResponse::BankInfoHasBeenSet() const
{
    return m_bankInfoHasBeenSet;
}

string BankCardOCRResponse::GetValidDate() const
{
    return m_validDate;
}

bool BankCardOCRResponse::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

string BankCardOCRResponse::GetCardType() const
{
    return m_cardType;
}

bool BankCardOCRResponse::CardTypeHasBeenSet() const
{
    return m_cardTypeHasBeenSet;
}

string BankCardOCRResponse::GetCardName() const
{
    return m_cardName;
}

bool BankCardOCRResponse::CardNameHasBeenSet() const
{
    return m_cardNameHasBeenSet;
}

string BankCardOCRResponse::GetBorderCutImage() const
{
    return m_borderCutImage;
}

bool BankCardOCRResponse::BorderCutImageHasBeenSet() const
{
    return m_borderCutImageHasBeenSet;
}

string BankCardOCRResponse::GetCardNoImage() const
{
    return m_cardNoImage;
}

bool BankCardOCRResponse::CardNoImageHasBeenSet() const
{
    return m_cardNoImageHasBeenSet;
}

vector<int64_t> BankCardOCRResponse::GetWarningCode() const
{
    return m_warningCode;
}

bool BankCardOCRResponse::WarningCodeHasBeenSet() const
{
    return m_warningCodeHasBeenSet;
}


