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

#include <tencentcloud/postgres/v20170312/model/AddDBInstanceToReadOnlyGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

AddDBInstanceToReadOnlyGroupRequest::AddDBInstanceToReadOnlyGroupRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_readOnlyGroupIdHasBeenSet(false)
{
}

string AddDBInstanceToReadOnlyGroupRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReadOnlyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_readOnlyGroupId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddDBInstanceToReadOnlyGroupRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void AddDBInstanceToReadOnlyGroupRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool AddDBInstanceToReadOnlyGroupRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string AddDBInstanceToReadOnlyGroupRequest::GetReadOnlyGroupId() const
{
    return m_readOnlyGroupId;
}

void AddDBInstanceToReadOnlyGroupRequest::SetReadOnlyGroupId(const string& _readOnlyGroupId)
{
    m_readOnlyGroupId = _readOnlyGroupId;
    m_readOnlyGroupIdHasBeenSet = true;
}

bool AddDBInstanceToReadOnlyGroupRequest::ReadOnlyGroupIdHasBeenSet() const
{
    return m_readOnlyGroupIdHasBeenSet;
}


