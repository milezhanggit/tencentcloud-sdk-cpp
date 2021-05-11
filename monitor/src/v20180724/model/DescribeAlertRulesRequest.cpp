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

#include <tencentcloud/monitor/v20180724/model/DescribeAlertRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

DescribeAlertRulesRequest::DescribeAlertRulesRequest() :
    m_instanceIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleStateHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string DescribeAlertRulesRequest::ToJsonString() const
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

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleState, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAlertRulesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeAlertRulesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeAlertRulesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeAlertRulesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAlertRulesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAlertRulesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAlertRulesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAlertRulesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAlertRulesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeAlertRulesRequest::GetRuleId() const
{
    return m_ruleId;
}

void DescribeAlertRulesRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeAlertRulesRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t DescribeAlertRulesRequest::GetRuleState() const
{
    return m_ruleState;
}

void DescribeAlertRulesRequest::SetRuleState(const int64_t& _ruleState)
{
    m_ruleState = _ruleState;
    m_ruleStateHasBeenSet = true;
}

bool DescribeAlertRulesRequest::RuleStateHasBeenSet() const
{
    return m_ruleStateHasBeenSet;
}

string DescribeAlertRulesRequest::GetRuleName() const
{
    return m_ruleName;
}

void DescribeAlertRulesRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DescribeAlertRulesRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string DescribeAlertRulesRequest::GetType() const
{
    return m_type;
}

void DescribeAlertRulesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeAlertRulesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


