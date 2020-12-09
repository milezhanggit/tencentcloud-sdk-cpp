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

#include <tencentcloud/cdn/v20180606/model/BotJavaScript.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

BotJavaScript::BotJavaScript() :
    m_switchHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_ruleValueHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_redirectUrlHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome BotJavaScript::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Error("response `BotJavaScript.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Error("response `BotJavaScript.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleValue") && !value["RuleValue"].IsNull())
    {
        if (!value["RuleValue"].IsArray())
            return CoreInternalOutcome(Error("response `BotJavaScript.RuleValue` is not array type"));

        const Value &tmpValue = value["RuleValue"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleValue.push_back((*itr).GetString());
        }
        m_ruleValueHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Error("response `BotJavaScript.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RedirectUrl") && !value["RedirectUrl"].IsNull())
    {
        if (!value["RedirectUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `BotJavaScript.RedirectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectUrl = string(value["RedirectUrl"].GetString());
        m_redirectUrlHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BotJavaScript.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotJavaScript::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ruleValue.begin(); itr != m_ruleValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_actionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_redirectUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string BotJavaScript::GetSwitch() const
{
    return m_switch;
}

void BotJavaScript::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool BotJavaScript::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string BotJavaScript::GetRuleType() const
{
    return m_ruleType;
}

void BotJavaScript::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool BotJavaScript::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> BotJavaScript::GetRuleValue() const
{
    return m_ruleValue;
}

void BotJavaScript::SetRuleValue(const vector<string>& _ruleValue)
{
    m_ruleValue = _ruleValue;
    m_ruleValueHasBeenSet = true;
}

bool BotJavaScript::RuleValueHasBeenSet() const
{
    return m_ruleValueHasBeenSet;
}

string BotJavaScript::GetAction() const
{
    return m_action;
}

void BotJavaScript::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BotJavaScript::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string BotJavaScript::GetRedirectUrl() const
{
    return m_redirectUrl;
}

void BotJavaScript::SetRedirectUrl(const string& _redirectUrl)
{
    m_redirectUrl = _redirectUrl;
    m_redirectUrlHasBeenSet = true;
}

bool BotJavaScript::RedirectUrlHasBeenSet() const
{
    return m_redirectUrlHasBeenSet;
}

string BotJavaScript::GetUpdateTime() const
{
    return m_updateTime;
}

void BotJavaScript::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BotJavaScript::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

