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

#include <tencentcloud/mariadb/v20170312/model/SecurityGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace rapidjson;
using namespace std;

SecurityGroup::SecurityGroup() :
    m_projectIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_securityGroupNameHasBeenSet(false),
    m_securityGroupRemarkHasBeenSet(false),
    m_inboundHasBeenSet(false),
    m_outboundHasBeenSet(false)
{
}

CoreInternalOutcome SecurityGroup::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SecurityGroup.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupId") && !value["SecurityGroupId"].IsNull())
    {
        if (!value["SecurityGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroup.SecurityGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupId = string(value["SecurityGroupId"].GetString());
        m_securityGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupName") && !value["SecurityGroupName"].IsNull())
    {
        if (!value["SecurityGroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroup.SecurityGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupName = string(value["SecurityGroupName"].GetString());
        m_securityGroupNameHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupRemark") && !value["SecurityGroupRemark"].IsNull())
    {
        if (!value["SecurityGroupRemark"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecurityGroup.SecurityGroupRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityGroupRemark = string(value["SecurityGroupRemark"].GetString());
        m_securityGroupRemarkHasBeenSet = true;
    }

    if (value.HasMember("Inbound") && !value["Inbound"].IsNull())
    {
        if (!value["Inbound"].IsArray())
            return CoreInternalOutcome(Error("response `SecurityGroup.Inbound` is not array type"));

        const Value &tmpValue = value["Inbound"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupBound item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inbound.push_back(item);
        }
        m_inboundHasBeenSet = true;
    }

    if (value.HasMember("Outbound") && !value["Outbound"].IsNull())
    {
        if (!value["Outbound"].IsArray())
            return CoreInternalOutcome(Error("response `SecurityGroup.Outbound` is not array type"));

        const Value &tmpValue = value["Outbound"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupBound item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outbound.push_back(item);
        }
        m_outboundHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityGroup::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_securityGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupRemarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_securityGroupRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_inboundHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Inbound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inbound.begin(); itr != m_inbound.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outboundHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Outbound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outbound.begin(); itr != m_outbound.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t SecurityGroup::GetProjectId() const
{
    return m_projectId;
}

void SecurityGroup::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SecurityGroup::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SecurityGroup::GetCreateTime() const
{
    return m_createTime;
}

void SecurityGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SecurityGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SecurityGroup::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void SecurityGroup::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool SecurityGroup::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

string SecurityGroup::GetSecurityGroupName() const
{
    return m_securityGroupName;
}

void SecurityGroup::SetSecurityGroupName(const string& _securityGroupName)
{
    m_securityGroupName = _securityGroupName;
    m_securityGroupNameHasBeenSet = true;
}

bool SecurityGroup::SecurityGroupNameHasBeenSet() const
{
    return m_securityGroupNameHasBeenSet;
}

string SecurityGroup::GetSecurityGroupRemark() const
{
    return m_securityGroupRemark;
}

void SecurityGroup::SetSecurityGroupRemark(const string& _securityGroupRemark)
{
    m_securityGroupRemark = _securityGroupRemark;
    m_securityGroupRemarkHasBeenSet = true;
}

bool SecurityGroup::SecurityGroupRemarkHasBeenSet() const
{
    return m_securityGroupRemarkHasBeenSet;
}

vector<SecurityGroupBound> SecurityGroup::GetInbound() const
{
    return m_inbound;
}

void SecurityGroup::SetInbound(const vector<SecurityGroupBound>& _inbound)
{
    m_inbound = _inbound;
    m_inboundHasBeenSet = true;
}

bool SecurityGroup::InboundHasBeenSet() const
{
    return m_inboundHasBeenSet;
}

vector<SecurityGroupBound> SecurityGroup::GetOutbound() const
{
    return m_outbound;
}

void SecurityGroup::SetOutbound(const vector<SecurityGroupBound>& _outbound)
{
    m_outbound = _outbound;
    m_outboundHasBeenSet = true;
}

bool SecurityGroup::OutboundHasBeenSet() const
{
    return m_outboundHasBeenSet;
}

