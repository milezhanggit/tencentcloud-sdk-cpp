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

#include <tencentcloud/iotvideo/v20201215/model/CreateProductRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace rapidjson;
using namespace std;

CreateProductRequest::CreateProductRequest() :
    m_productNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_productVaildYearsHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_chipOsHasBeenSet(false),
    m_chipManufactureIdHasBeenSet(false),
    m_chipIdHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_encryptionTypeHasBeenSet(false)
{
}

string CreateProductRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deviceType, allocator);
    }

    if (m_productVaildYearsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductVaildYears";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_productVaildYears, allocator);
    }

    if (m_featuresHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Features";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_features.begin(); itr != m_features.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_chipOsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChipOs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chipOs.c_str(), allocator).Move(), allocator);
    }

    if (m_chipManufactureIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChipManufactureId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chipManufactureId.c_str(), allocator).Move(), allocator);
    }

    if (m_chipIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChipId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chipId.c_str(), allocator).Move(), allocator);
    }

    if (m_productDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EncryptionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encryptionType, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProductRequest::GetProductName() const
{
    return m_productName;
}

void CreateProductRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CreateProductRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

uint64_t CreateProductRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateProductRequest::SetDeviceType(const uint64_t& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateProductRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

uint64_t CreateProductRequest::GetProductVaildYears() const
{
    return m_productVaildYears;
}

void CreateProductRequest::SetProductVaildYears(const uint64_t& _productVaildYears)
{
    m_productVaildYears = _productVaildYears;
    m_productVaildYearsHasBeenSet = true;
}

bool CreateProductRequest::ProductVaildYearsHasBeenSet() const
{
    return m_productVaildYearsHasBeenSet;
}

vector<string> CreateProductRequest::GetFeatures() const
{
    return m_features;
}

void CreateProductRequest::SetFeatures(const vector<string>& _features)
{
    m_features = _features;
    m_featuresHasBeenSet = true;
}

bool CreateProductRequest::FeaturesHasBeenSet() const
{
    return m_featuresHasBeenSet;
}

string CreateProductRequest::GetChipOs() const
{
    return m_chipOs;
}

void CreateProductRequest::SetChipOs(const string& _chipOs)
{
    m_chipOs = _chipOs;
    m_chipOsHasBeenSet = true;
}

bool CreateProductRequest::ChipOsHasBeenSet() const
{
    return m_chipOsHasBeenSet;
}

string CreateProductRequest::GetChipManufactureId() const
{
    return m_chipManufactureId;
}

void CreateProductRequest::SetChipManufactureId(const string& _chipManufactureId)
{
    m_chipManufactureId = _chipManufactureId;
    m_chipManufactureIdHasBeenSet = true;
}

bool CreateProductRequest::ChipManufactureIdHasBeenSet() const
{
    return m_chipManufactureIdHasBeenSet;
}

string CreateProductRequest::GetChipId() const
{
    return m_chipId;
}

void CreateProductRequest::SetChipId(const string& _chipId)
{
    m_chipId = _chipId;
    m_chipIdHasBeenSet = true;
}

bool CreateProductRequest::ChipIdHasBeenSet() const
{
    return m_chipIdHasBeenSet;
}

string CreateProductRequest::GetProductDescription() const
{
    return m_productDescription;
}

void CreateProductRequest::SetProductDescription(const string& _productDescription)
{
    m_productDescription = _productDescription;
    m_productDescriptionHasBeenSet = true;
}

bool CreateProductRequest::ProductDescriptionHasBeenSet() const
{
    return m_productDescriptionHasBeenSet;
}

uint64_t CreateProductRequest::GetEncryptionType() const
{
    return m_encryptionType;
}

void CreateProductRequest::SetEncryptionType(const uint64_t& _encryptionType)
{
    m_encryptionType = _encryptionType;
    m_encryptionTypeHasBeenSet = true;
}

bool CreateProductRequest::EncryptionTypeHasBeenSet() const
{
    return m_encryptionTypeHasBeenSet;
}


