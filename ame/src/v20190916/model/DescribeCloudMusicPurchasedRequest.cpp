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

#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicPurchasedRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace rapidjson;
using namespace std;

DescribeCloudMusicPurchasedRequest::DescribeCloudMusicPurchasedRequest() :
    m_authInfoIdHasBeenSet(false)
{
}

string DescribeCloudMusicPurchasedRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_authInfoIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthInfoId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_authInfoId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudMusicPurchasedRequest::GetAuthInfoId() const
{
    return m_authInfoId;
}

void DescribeCloudMusicPurchasedRequest::SetAuthInfoId(const string& _authInfoId)
{
    m_authInfoId = _authInfoId;
    m_authInfoIdHasBeenSet = true;
}

bool DescribeCloudMusicPurchasedRequest::AuthInfoIdHasBeenSet() const
{
    return m_authInfoIdHasBeenSet;
}


