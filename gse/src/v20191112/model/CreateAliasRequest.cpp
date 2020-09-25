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

#include <tencentcloud/gse/v20191112/model/CreateAliasRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace rapidjson;
using namespace std;

CreateAliasRequest::CreateAliasRequest() :
    m_nameHasBeenSet(false),
    m_routingStrategyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateAliasRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_routingStrategyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoutingStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_routingStrategy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAliasRequest::GetName() const
{
    return m_name;
}

void CreateAliasRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAliasRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

RoutingStrategy CreateAliasRequest::GetRoutingStrategy() const
{
    return m_routingStrategy;
}

void CreateAliasRequest::SetRoutingStrategy(const RoutingStrategy& _routingStrategy)
{
    m_routingStrategy = _routingStrategy;
    m_routingStrategyHasBeenSet = true;
}

bool CreateAliasRequest::RoutingStrategyHasBeenSet() const
{
    return m_routingStrategyHasBeenSet;
}

string CreateAliasRequest::GetDescription() const
{
    return m_description;
}

void CreateAliasRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAliasRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


