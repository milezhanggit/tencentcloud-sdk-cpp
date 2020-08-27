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

#include <tencentcloud/aa/v20200224/model/InputManageMarketingRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aa::V20200224::Model;
using namespace rapidjson;
using namespace std;

InputManageMarketingRisk::InputManageMarketingRisk() :
    m_accountHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_postTimeHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_deviceTokenHasBeenSet(false),
    m_deviceBusinessIdHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_checkDeviceHasBeenSet(false),
    m_cookieHashHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_xForwardedForHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_vendorIdHasBeenSet(false),
    m_crowdAntiRushHasBeenSet(false),
    m_sceneCodeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

CoreInternalOutcome InputManageMarketingRisk::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.Account` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_account.Deserialize(value["Account"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accountHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("PostTime") && !value["PostTime"].IsNull())
    {
        if (!value["PostTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.PostTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = value["PostTime"].GetUint64();
        m_postTimeHasBeenSet = true;
    }

    if (value.HasMember("SceneType") && !value["SceneType"].IsNull())
    {
        if (!value["SceneType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.SceneType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sceneType = value["SceneType"].GetInt64();
        m_sceneTypeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceToken") && !value["DeviceToken"].IsNull())
    {
        if (!value["DeviceToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.DeviceToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceToken = string(value["DeviceToken"].GetString());
        m_deviceTokenHasBeenSet = true;
    }

    if (value.HasMember("DeviceBusinessId") && !value["DeviceBusinessId"].IsNull())
    {
        if (!value["DeviceBusinessId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.DeviceBusinessId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceBusinessId = value["DeviceBusinessId"].GetInt64();
        m_deviceBusinessIdHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.BusinessId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = value["BusinessId"].GetUint64();
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("EmailAddress") && !value["EmailAddress"].IsNull())
    {
        if (!value["EmailAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.EmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailAddress = string(value["EmailAddress"].GetString());
        m_emailAddressHasBeenSet = true;
    }

    if (value.HasMember("CheckDevice") && !value["CheckDevice"].IsNull())
    {
        if (!value["CheckDevice"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.CheckDevice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkDevice = value["CheckDevice"].GetInt64();
        m_checkDeviceHasBeenSet = true;
    }

    if (value.HasMember("CookieHash") && !value["CookieHash"].IsNull())
    {
        if (!value["CookieHash"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.CookieHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cookieHash = string(value["CookieHash"].GetString());
        m_cookieHashHasBeenSet = true;
    }

    if (value.HasMember("Referer") && !value["Referer"].IsNull())
    {
        if (!value["Referer"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.Referer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referer = string(value["Referer"].GetString());
        m_refererHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("XForwardedFor") && !value["XForwardedFor"].IsNull())
    {
        if (!value["XForwardedFor"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.XForwardedFor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedFor = string(value["XForwardedFor"].GetString());
        m_xForwardedForHasBeenSet = true;
    }

    if (value.HasMember("MacAddress") && !value["MacAddress"].IsNull())
    {
        if (!value["MacAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.MacAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macAddress = string(value["MacAddress"].GetString());
        m_macAddressHasBeenSet = true;
    }

    if (value.HasMember("VendorId") && !value["VendorId"].IsNull())
    {
        if (!value["VendorId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.VendorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendorId = string(value["VendorId"].GetString());
        m_vendorIdHasBeenSet = true;
    }

    if (value.HasMember("CrowdAntiRush") && !value["CrowdAntiRush"].IsNull())
    {
        if (!value["CrowdAntiRush"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.CrowdAntiRush` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_crowdAntiRush.Deserialize(value["CrowdAntiRush"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_crowdAntiRushHasBeenSet = true;
    }

    if (value.HasMember("SceneCode") && !value["SceneCode"].IsNull())
    {
        if (!value["SceneCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.SceneCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneCode = string(value["SceneCode"].GetString());
        m_sceneCodeHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsArray())
            return CoreInternalOutcome(Error("response `InputManageMarketingRisk.Details` is not array type"));

        const Value &tmpValue = value["Details"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_details.push_back(item);
        }
        m_detailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputManageMarketingRisk::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_accountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_account.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_postTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postTime, allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sceneType, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deviceToken.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceBusinessIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceBusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceBusinessId, allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_businessId, allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_emailAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_emailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_checkDeviceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CheckDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkDevice, allocator);
    }

    if (m_cookieHashHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CookieHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cookieHash.c_str(), allocator).Move(), allocator);
    }

    if (m_refererHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_referer.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_xForwardedForHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "XForwardedFor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_xForwardedFor.c_str(), allocator).Move(), allocator);
    }

    if (m_macAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MacAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_macAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VendorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vendorId.c_str(), allocator).Move(), allocator);
    }

    if (m_crowdAntiRushHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CrowdAntiRush";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_crowdAntiRush.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sceneCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sceneCode.c_str(), allocator).Move(), allocator);
    }

    if (m_detailsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


AccountInfo InputManageMarketingRisk::GetAccount() const
{
    return m_account;
}

void InputManageMarketingRisk::SetAccount(const AccountInfo& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool InputManageMarketingRisk::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string InputManageMarketingRisk::GetUserIp() const
{
    return m_userIp;
}

void InputManageMarketingRisk::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool InputManageMarketingRisk::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

uint64_t InputManageMarketingRisk::GetPostTime() const
{
    return m_postTime;
}

void InputManageMarketingRisk::SetPostTime(const uint64_t& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool InputManageMarketingRisk::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

int64_t InputManageMarketingRisk::GetSceneType() const
{
    return m_sceneType;
}

void InputManageMarketingRisk::SetSceneType(const int64_t& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool InputManageMarketingRisk::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string InputManageMarketingRisk::GetUserId() const
{
    return m_userId;
}

void InputManageMarketingRisk::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool InputManageMarketingRisk::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string InputManageMarketingRisk::GetDeviceToken() const
{
    return m_deviceToken;
}

void InputManageMarketingRisk::SetDeviceToken(const string& _deviceToken)
{
    m_deviceToken = _deviceToken;
    m_deviceTokenHasBeenSet = true;
}

bool InputManageMarketingRisk::DeviceTokenHasBeenSet() const
{
    return m_deviceTokenHasBeenSet;
}

int64_t InputManageMarketingRisk::GetDeviceBusinessId() const
{
    return m_deviceBusinessId;
}

void InputManageMarketingRisk::SetDeviceBusinessId(const int64_t& _deviceBusinessId)
{
    m_deviceBusinessId = _deviceBusinessId;
    m_deviceBusinessIdHasBeenSet = true;
}

bool InputManageMarketingRisk::DeviceBusinessIdHasBeenSet() const
{
    return m_deviceBusinessIdHasBeenSet;
}

uint64_t InputManageMarketingRisk::GetBusinessId() const
{
    return m_businessId;
}

void InputManageMarketingRisk::SetBusinessId(const uint64_t& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool InputManageMarketingRisk::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string InputManageMarketingRisk::GetNickname() const
{
    return m_nickname;
}

void InputManageMarketingRisk::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool InputManageMarketingRisk::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string InputManageMarketingRisk::GetEmailAddress() const
{
    return m_emailAddress;
}

void InputManageMarketingRisk::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool InputManageMarketingRisk::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

int64_t InputManageMarketingRisk::GetCheckDevice() const
{
    return m_checkDevice;
}

void InputManageMarketingRisk::SetCheckDevice(const int64_t& _checkDevice)
{
    m_checkDevice = _checkDevice;
    m_checkDeviceHasBeenSet = true;
}

bool InputManageMarketingRisk::CheckDeviceHasBeenSet() const
{
    return m_checkDeviceHasBeenSet;
}

string InputManageMarketingRisk::GetCookieHash() const
{
    return m_cookieHash;
}

void InputManageMarketingRisk::SetCookieHash(const string& _cookieHash)
{
    m_cookieHash = _cookieHash;
    m_cookieHashHasBeenSet = true;
}

bool InputManageMarketingRisk::CookieHashHasBeenSet() const
{
    return m_cookieHashHasBeenSet;
}

string InputManageMarketingRisk::GetReferer() const
{
    return m_referer;
}

void InputManageMarketingRisk::SetReferer(const string& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool InputManageMarketingRisk::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

string InputManageMarketingRisk::GetUserAgent() const
{
    return m_userAgent;
}

void InputManageMarketingRisk::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool InputManageMarketingRisk::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string InputManageMarketingRisk::GetXForwardedFor() const
{
    return m_xForwardedFor;
}

void InputManageMarketingRisk::SetXForwardedFor(const string& _xForwardedFor)
{
    m_xForwardedFor = _xForwardedFor;
    m_xForwardedForHasBeenSet = true;
}

bool InputManageMarketingRisk::XForwardedForHasBeenSet() const
{
    return m_xForwardedForHasBeenSet;
}

string InputManageMarketingRisk::GetMacAddress() const
{
    return m_macAddress;
}

void InputManageMarketingRisk::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool InputManageMarketingRisk::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string InputManageMarketingRisk::GetVendorId() const
{
    return m_vendorId;
}

void InputManageMarketingRisk::SetVendorId(const string& _vendorId)
{
    m_vendorId = _vendorId;
    m_vendorIdHasBeenSet = true;
}

bool InputManageMarketingRisk::VendorIdHasBeenSet() const
{
    return m_vendorIdHasBeenSet;
}

CrowdAntiRushInfo InputManageMarketingRisk::GetCrowdAntiRush() const
{
    return m_crowdAntiRush;
}

void InputManageMarketingRisk::SetCrowdAntiRush(const CrowdAntiRushInfo& _crowdAntiRush)
{
    m_crowdAntiRush = _crowdAntiRush;
    m_crowdAntiRushHasBeenSet = true;
}

bool InputManageMarketingRisk::CrowdAntiRushHasBeenSet() const
{
    return m_crowdAntiRushHasBeenSet;
}

string InputManageMarketingRisk::GetSceneCode() const
{
    return m_sceneCode;
}

void InputManageMarketingRisk::SetSceneCode(const string& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool InputManageMarketingRisk::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

vector<InputDetails> InputManageMarketingRisk::GetDetails() const
{
    return m_details;
}

void InputManageMarketingRisk::SetDetails(const vector<InputDetails>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool InputManageMarketingRisk::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

