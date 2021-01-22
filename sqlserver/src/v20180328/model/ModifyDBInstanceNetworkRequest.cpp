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

#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNetworkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

ModifyDBInstanceNetworkRequest::ModifyDBInstanceNetworkRequest() :
    m_instanceIdHasBeenSet(false),
    m_newVpcIdHasBeenSet(false),
    m_newSubnetIdHasBeenSet(false),
    m_oldIpRetainTimeHasBeenSet(false)
{
}

string ModifyDBInstanceNetworkRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_newVpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NewVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_newVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_newSubnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NewSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_newSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_oldIpRetainTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OldIpRetainTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_oldIpRetainTime, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceNetworkRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDBInstanceNetworkRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDBInstanceNetworkRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDBInstanceNetworkRequest::GetNewVpcId() const
{
    return m_newVpcId;
}

void ModifyDBInstanceNetworkRequest::SetNewVpcId(const string& _newVpcId)
{
    m_newVpcId = _newVpcId;
    m_newVpcIdHasBeenSet = true;
}

bool ModifyDBInstanceNetworkRequest::NewVpcIdHasBeenSet() const
{
    return m_newVpcIdHasBeenSet;
}

string ModifyDBInstanceNetworkRequest::GetNewSubnetId() const
{
    return m_newSubnetId;
}

void ModifyDBInstanceNetworkRequest::SetNewSubnetId(const string& _newSubnetId)
{
    m_newSubnetId = _newSubnetId;
    m_newSubnetIdHasBeenSet = true;
}

bool ModifyDBInstanceNetworkRequest::NewSubnetIdHasBeenSet() const
{
    return m_newSubnetIdHasBeenSet;
}

int64_t ModifyDBInstanceNetworkRequest::GetOldIpRetainTime() const
{
    return m_oldIpRetainTime;
}

void ModifyDBInstanceNetworkRequest::SetOldIpRetainTime(const int64_t& _oldIpRetainTime)
{
    m_oldIpRetainTime = _oldIpRetainTime;
    m_oldIpRetainTimeHasBeenSet = true;
}

bool ModifyDBInstanceNetworkRequest::OldIpRetainTimeHasBeenSet() const
{
    return m_oldIpRetainTimeHasBeenSet;
}


