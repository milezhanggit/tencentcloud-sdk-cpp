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

#include <tencentcloud/ckafka/v20190819/model/KafkaParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

KafkaParam::KafkaParam() :
    m_selfBuiltHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_offsetTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_enableTolerationHasBeenSet(false),
    m_qpsLimitHasBeenSet(false)
{
}

CoreInternalOutcome KafkaParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SelfBuilt") && !value["SelfBuilt"].IsNull())
    {
        if (!value["SelfBuilt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaParam.SelfBuilt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selfBuilt = value["SelfBuilt"].GetBool();
        m_selfBuiltHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaParam.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("OffsetType") && !value["OffsetType"].IsNull())
    {
        if (!value["OffsetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaParam.OffsetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offsetType = string(value["OffsetType"].GetString());
        m_offsetTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaParam.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaParam.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaParam.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaParam.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaParam.PartitionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetInt64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("EnableToleration") && !value["EnableToleration"].IsNull())
    {
        if (!value["EnableToleration"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaParam.EnableToleration` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableToleration = value["EnableToleration"].GetBool();
        m_enableTolerationHasBeenSet = true;
    }

    if (value.HasMember("QpsLimit") && !value["QpsLimit"].IsNull())
    {
        if (!value["QpsLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaParam.QpsLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qpsLimit = value["QpsLimit"].GetUint64();
        m_qpsLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KafkaParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_selfBuiltHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfBuilt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfBuilt, allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offsetType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_enableTolerationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableToleration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableToleration, allocator);
    }

    if (m_qpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qpsLimit, allocator);
    }

}


bool KafkaParam::GetSelfBuilt() const
{
    return m_selfBuilt;
}

void KafkaParam::SetSelfBuilt(const bool& _selfBuilt)
{
    m_selfBuilt = _selfBuilt;
    m_selfBuiltHasBeenSet = true;
}

bool KafkaParam::SelfBuiltHasBeenSet() const
{
    return m_selfBuiltHasBeenSet;
}

string KafkaParam::GetResource() const
{
    return m_resource;
}

void KafkaParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool KafkaParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string KafkaParam::GetTopic() const
{
    return m_topic;
}

void KafkaParam::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool KafkaParam::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string KafkaParam::GetOffsetType() const
{
    return m_offsetType;
}

void KafkaParam::SetOffsetType(const string& _offsetType)
{
    m_offsetType = _offsetType;
    m_offsetTypeHasBeenSet = true;
}

bool KafkaParam::OffsetTypeHasBeenSet() const
{
    return m_offsetTypeHasBeenSet;
}

uint64_t KafkaParam::GetStartTime() const
{
    return m_startTime;
}

void KafkaParam::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool KafkaParam::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string KafkaParam::GetResourceName() const
{
    return m_resourceName;
}

void KafkaParam::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool KafkaParam::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

int64_t KafkaParam::GetZoneId() const
{
    return m_zoneId;
}

void KafkaParam::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool KafkaParam::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string KafkaParam::GetTopicId() const
{
    return m_topicId;
}

void KafkaParam::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool KafkaParam::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t KafkaParam::GetPartitionNum() const
{
    return m_partitionNum;
}

void KafkaParam::SetPartitionNum(const int64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool KafkaParam::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

bool KafkaParam::GetEnableToleration() const
{
    return m_enableToleration;
}

void KafkaParam::SetEnableToleration(const bool& _enableToleration)
{
    m_enableToleration = _enableToleration;
    m_enableTolerationHasBeenSet = true;
}

bool KafkaParam::EnableTolerationHasBeenSet() const
{
    return m_enableTolerationHasBeenSet;
}

uint64_t KafkaParam::GetQpsLimit() const
{
    return m_qpsLimit;
}

void KafkaParam::SetQpsLimit(const uint64_t& _qpsLimit)
{
    m_qpsLimit = _qpsLimit;
    m_qpsLimitHasBeenSet = true;
}

bool KafkaParam::QpsLimitHasBeenSet() const
{
    return m_qpsLimitHasBeenSet;
}

