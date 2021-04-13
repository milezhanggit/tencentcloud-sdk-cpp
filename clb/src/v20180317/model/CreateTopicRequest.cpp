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

#include <tencentcloud/clb/v20180317/model/CreateTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

CreateTopicRequest::CreateTopicRequest() :
    m_topicNameHasBeenSet(false),
    m_partitionCountHasBeenSet(false),
    m_topicTypeHasBeenSet(false)
{
}

string CreateTopicRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PartitionCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partitionCount, allocator);
    }

    if (m_topicTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_topicType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTopicRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateTopicRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateTopicRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t CreateTopicRequest::GetPartitionCount() const
{
    return m_partitionCount;
}

void CreateTopicRequest::SetPartitionCount(const uint64_t& _partitionCount)
{
    m_partitionCount = _partitionCount;
    m_partitionCountHasBeenSet = true;
}

bool CreateTopicRequest::PartitionCountHasBeenSet() const
{
    return m_partitionCountHasBeenSet;
}

string CreateTopicRequest::GetTopicType() const
{
    return m_topicType;
}

void CreateTopicRequest::SetTopicType(const string& _topicType)
{
    m_topicType = _topicType;
    m_topicTypeHasBeenSet = true;
}

bool CreateTopicRequest::TopicTypeHasBeenSet() const
{
    return m_topicTypeHasBeenSet;
}


