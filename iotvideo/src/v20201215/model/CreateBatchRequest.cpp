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

#include <tencentcloud/iotvideo/v20201215/model/CreateBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace rapidjson;
using namespace std;

CreateBatchRequest::CreateBatchRequest() :
    m_productIdHasBeenSet(false),
    m_devNumHasBeenSet(false),
    m_devPreHasBeenSet(false)
{
}

string CreateBatchRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_devNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DevNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_devNum, allocator);
    }

    if (m_devPreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DevPre";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_devPre.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBatchRequest::GetProductId() const
{
    return m_productId;
}

void CreateBatchRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateBatchRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t CreateBatchRequest::GetDevNum() const
{
    return m_devNum;
}

void CreateBatchRequest::SetDevNum(const uint64_t& _devNum)
{
    m_devNum = _devNum;
    m_devNumHasBeenSet = true;
}

bool CreateBatchRequest::DevNumHasBeenSet() const
{
    return m_devNumHasBeenSet;
}

string CreateBatchRequest::GetDevPre() const
{
    return m_devPre;
}

void CreateBatchRequest::SetDevPre(const string& _devPre)
{
    m_devPre = _devPre;
    m_devPreHasBeenSet = true;
}

bool CreateBatchRequest::DevPreHasBeenSet() const
{
    return m_devPreHasBeenSet;
}


