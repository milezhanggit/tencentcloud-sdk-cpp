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

#include <tencentcloud/gse/v20191112/model/Asset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace rapidjson;
using namespace std;

Asset::Asset() :
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetVersionHasBeenSet(false),
    m_operateSystemHasBeenSet(false),
    m_stautsHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_bindFleetNumHasBeenSet(false)
{
}

CoreInternalOutcome Asset::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Asset.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Asset.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetVersion") && !value["AssetVersion"].IsNull())
    {
        if (!value["AssetVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Asset.AssetVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetVersion = string(value["AssetVersion"].GetString());
        m_assetVersionHasBeenSet = true;
    }

    if (value.HasMember("OperateSystem") && !value["OperateSystem"].IsNull())
    {
        if (!value["OperateSystem"].IsString())
        {
            return CoreInternalOutcome(Error("response `Asset.OperateSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateSystem = string(value["OperateSystem"].GetString());
        m_operateSystemHasBeenSet = true;
    }

    if (value.HasMember("Stauts") && !value["Stauts"].IsNull())
    {
        if (!value["Stauts"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Asset.Stauts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stauts = value["Stauts"].GetInt64();
        m_stautsHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsString())
        {
            return CoreInternalOutcome(Error("response `Asset.Size` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_size = string(value["Size"].GetString());
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Asset.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BindFleetNum") && !value["BindFleetNum"].IsNull())
    {
        if (!value["BindFleetNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Asset.BindFleetNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindFleetNum = value["BindFleetNum"].GetInt64();
        m_bindFleetNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Asset::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssetVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_assetVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_operateSystemHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OperateSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_operateSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_stautsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Stauts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stauts, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_size.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bindFleetNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BindFleetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindFleetNum, allocator);
    }

}


string Asset::GetAssetId() const
{
    return m_assetId;
}

void Asset::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool Asset::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string Asset::GetAssetName() const
{
    return m_assetName;
}

void Asset::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool Asset::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string Asset::GetAssetVersion() const
{
    return m_assetVersion;
}

void Asset::SetAssetVersion(const string& _assetVersion)
{
    m_assetVersion = _assetVersion;
    m_assetVersionHasBeenSet = true;
}

bool Asset::AssetVersionHasBeenSet() const
{
    return m_assetVersionHasBeenSet;
}

string Asset::GetOperateSystem() const
{
    return m_operateSystem;
}

void Asset::SetOperateSystem(const string& _operateSystem)
{
    m_operateSystem = _operateSystem;
    m_operateSystemHasBeenSet = true;
}

bool Asset::OperateSystemHasBeenSet() const
{
    return m_operateSystemHasBeenSet;
}

int64_t Asset::GetStauts() const
{
    return m_stauts;
}

void Asset::SetStauts(const int64_t& _stauts)
{
    m_stauts = _stauts;
    m_stautsHasBeenSet = true;
}

bool Asset::StautsHasBeenSet() const
{
    return m_stautsHasBeenSet;
}

string Asset::GetSize() const
{
    return m_size;
}

void Asset::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool Asset::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string Asset::GetCreateTime() const
{
    return m_createTime;
}

void Asset::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Asset::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Asset::GetBindFleetNum() const
{
    return m_bindFleetNum;
}

void Asset::SetBindFleetNum(const int64_t& _bindFleetNum)
{
    m_bindFleetNum = _bindFleetNum;
    m_bindFleetNumHasBeenSet = true;
}

bool Asset::BindFleetNumHasBeenSet() const
{
    return m_bindFleetNumHasBeenSet;
}

