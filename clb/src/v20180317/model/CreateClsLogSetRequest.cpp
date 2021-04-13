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

#include <tencentcloud/clb/v20180317/model/CreateClsLogSetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

CreateClsLogSetRequest::CreateClsLogSetRequest() :
    m_periodHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_logsetTypeHasBeenSet(false)
{
}

string CreateClsLogSetRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogsetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_logsetType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateClsLogSetRequest::GetPeriod() const
{
    return m_period;
}

void CreateClsLogSetRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateClsLogSetRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateClsLogSetRequest::GetLogsetName() const
{
    return m_logsetName;
}

void CreateClsLogSetRequest::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool CreateClsLogSetRequest::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

string CreateClsLogSetRequest::GetLogsetType() const
{
    return m_logsetType;
}

void CreateClsLogSetRequest::SetLogsetType(const string& _logsetType)
{
    m_logsetType = _logsetType;
    m_logsetTypeHasBeenSet = true;
}

bool CreateClsLogSetRequest::LogsetTypeHasBeenSet() const
{
    return m_logsetTypeHasBeenSet;
}


