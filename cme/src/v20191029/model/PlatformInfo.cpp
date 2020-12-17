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

#include <tencentcloud/cme/v20191029/model/PlatformInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

PlatformInfo::PlatformInfo() :
    m_platformHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vodSubAppIdHasBeenSet(false),
    m_licenseIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome PlatformInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Error("response `PlatformInfo.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `PlatformInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("VodSubAppId") && !value["VodSubAppId"].IsNull())
    {
        if (!value["VodSubAppId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PlatformInfo.VodSubAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vodSubAppId = value["VodSubAppId"].GetUint64();
        m_vodSubAppIdHasBeenSet = true;
    }

    if (value.HasMember("LicenseId") && !value["LicenseId"].IsNull())
    {
        if (!value["LicenseId"].IsString())
        {
            return CoreInternalOutcome(Error("response `PlatformInfo.LicenseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseId = string(value["LicenseId"].GetString());
        m_licenseIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `PlatformInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `PlatformInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlatformInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_platformHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_vodSubAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VodSubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vodSubAppId, allocator);
    }

    if (m_licenseIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LicenseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_licenseId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string PlatformInfo::GetPlatform() const
{
    return m_platform;
}

void PlatformInfo::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool PlatformInfo::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string PlatformInfo::GetDescription() const
{
    return m_description;
}

void PlatformInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PlatformInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t PlatformInfo::GetVodSubAppId() const
{
    return m_vodSubAppId;
}

void PlatformInfo::SetVodSubAppId(const uint64_t& _vodSubAppId)
{
    m_vodSubAppId = _vodSubAppId;
    m_vodSubAppIdHasBeenSet = true;
}

bool PlatformInfo::VodSubAppIdHasBeenSet() const
{
    return m_vodSubAppIdHasBeenSet;
}

string PlatformInfo::GetLicenseId() const
{
    return m_licenseId;
}

void PlatformInfo::SetLicenseId(const string& _licenseId)
{
    m_licenseId = _licenseId;
    m_licenseIdHasBeenSet = true;
}

bool PlatformInfo::LicenseIdHasBeenSet() const
{
    return m_licenseIdHasBeenSet;
}

string PlatformInfo::GetCreateTime() const
{
    return m_createTime;
}

void PlatformInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PlatformInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PlatformInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void PlatformInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PlatformInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

