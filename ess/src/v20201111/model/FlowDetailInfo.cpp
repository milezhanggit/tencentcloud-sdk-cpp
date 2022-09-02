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

#include <tencentcloud/ess/v20201111/model/FlowDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowDetailInfo::FlowDetailInfo() :
    m_flowIdHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_flowStatusHasBeenSet(false),
    m_flowMessageHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_flowApproverInfosHasBeenSet(false)
{
}

CoreInternalOutcome FlowDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("FlowType") && !value["FlowType"].IsNull())
    {
        if (!value["FlowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowType = string(value["FlowType"].GetString());
        m_flowTypeHasBeenSet = true;
    }

    if (value.HasMember("FlowStatus") && !value["FlowStatus"].IsNull())
    {
        if (!value["FlowStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowStatus = value["FlowStatus"].GetInt64();
        m_flowStatusHasBeenSet = true;
    }

    if (value.HasMember("FlowMessage") && !value["FlowMessage"].IsNull())
    {
        if (!value["FlowMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowMessage = string(value["FlowMessage"].GetString());
        m_flowMessageHasBeenSet = true;
    }

    if (value.HasMember("FlowDescription") && !value["FlowDescription"].IsNull())
    {
        if (!value["FlowDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowDescription = string(value["FlowDescription"].GetString());
        m_flowDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.CreatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = value["CreatedOn"].GetInt64();
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("FlowApproverInfos") && !value["FlowApproverInfos"].IsNull())
    {
        if (!value["FlowApproverInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowDetailInfo.FlowApproverInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowApproverInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowApproverDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowApproverInfos.push_back(item);
        }
        m_flowApproverInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowStatus, allocator);
    }

    if (m_flowMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_flowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdOn, allocator);
    }

    if (m_flowApproverInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowApproverInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowApproverInfos.begin(); itr != m_flowApproverInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FlowDetailInfo::GetFlowId() const
{
    return m_flowId;
}

void FlowDetailInfo::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool FlowDetailInfo::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string FlowDetailInfo::GetFlowName() const
{
    return m_flowName;
}

void FlowDetailInfo::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool FlowDetailInfo::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

string FlowDetailInfo::GetFlowType() const
{
    return m_flowType;
}

void FlowDetailInfo::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool FlowDetailInfo::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

int64_t FlowDetailInfo::GetFlowStatus() const
{
    return m_flowStatus;
}

void FlowDetailInfo::SetFlowStatus(const int64_t& _flowStatus)
{
    m_flowStatus = _flowStatus;
    m_flowStatusHasBeenSet = true;
}

bool FlowDetailInfo::FlowStatusHasBeenSet() const
{
    return m_flowStatusHasBeenSet;
}

string FlowDetailInfo::GetFlowMessage() const
{
    return m_flowMessage;
}

void FlowDetailInfo::SetFlowMessage(const string& _flowMessage)
{
    m_flowMessage = _flowMessage;
    m_flowMessageHasBeenSet = true;
}

bool FlowDetailInfo::FlowMessageHasBeenSet() const
{
    return m_flowMessageHasBeenSet;
}

string FlowDetailInfo::GetFlowDescription() const
{
    return m_flowDescription;
}

void FlowDetailInfo::SetFlowDescription(const string& _flowDescription)
{
    m_flowDescription = _flowDescription;
    m_flowDescriptionHasBeenSet = true;
}

bool FlowDetailInfo::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

int64_t FlowDetailInfo::GetCreatedOn() const
{
    return m_createdOn;
}

void FlowDetailInfo::SetCreatedOn(const int64_t& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool FlowDetailInfo::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

vector<FlowApproverDetail> FlowDetailInfo::GetFlowApproverInfos() const
{
    return m_flowApproverInfos;
}

void FlowDetailInfo::SetFlowApproverInfos(const vector<FlowApproverDetail>& _flowApproverInfos)
{
    m_flowApproverInfos = _flowApproverInfos;
    m_flowApproverInfosHasBeenSet = true;
}

bool FlowDetailInfo::FlowApproverInfosHasBeenSet() const
{
    return m_flowApproverInfosHasBeenSet;
}

