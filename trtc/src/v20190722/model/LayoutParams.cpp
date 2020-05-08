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

#include <tencentcloud/trtc/v20190722/model/LayoutParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace rapidjson;
using namespace std;

LayoutParams::LayoutParams() :
    m_templateHasBeenSet(false),
    m_mainVideoUserIdHasBeenSet(false),
    m_mainVideoStreamTypeHasBeenSet(false)
{
}

CoreInternalOutcome LayoutParams::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Template") && !value["Template"].IsNull())
    {
        if (!value["Template"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LayoutParams.Template` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_template = value["Template"].GetUint64();
        m_templateHasBeenSet = true;
    }

    if (value.HasMember("MainVideoUserId") && !value["MainVideoUserId"].IsNull())
    {
        if (!value["MainVideoUserId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LayoutParams.MainVideoUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainVideoUserId = string(value["MainVideoUserId"].GetString());
        m_mainVideoUserIdHasBeenSet = true;
    }

    if (value.HasMember("MainVideoStreamType") && !value["MainVideoStreamType"].IsNull())
    {
        if (!value["MainVideoStreamType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LayoutParams.MainVideoStreamType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainVideoStreamType = value["MainVideoStreamType"].GetUint64();
        m_mainVideoStreamTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LayoutParams::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_templateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_template, allocator);
    }

    if (m_mainVideoUserIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MainVideoUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mainVideoUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_mainVideoStreamTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MainVideoStreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainVideoStreamType, allocator);
    }

}


uint64_t LayoutParams::GetTemplate() const
{
    return m_template;
}

void LayoutParams::SetTemplate(const uint64_t& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool LayoutParams::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

string LayoutParams::GetMainVideoUserId() const
{
    return m_mainVideoUserId;
}

void LayoutParams::SetMainVideoUserId(const string& _mainVideoUserId)
{
    m_mainVideoUserId = _mainVideoUserId;
    m_mainVideoUserIdHasBeenSet = true;
}

bool LayoutParams::MainVideoUserIdHasBeenSet() const
{
    return m_mainVideoUserIdHasBeenSet;
}

uint64_t LayoutParams::GetMainVideoStreamType() const
{
    return m_mainVideoStreamType;
}

void LayoutParams::SetMainVideoStreamType(const uint64_t& _mainVideoStreamType)
{
    m_mainVideoStreamType = _mainVideoStreamType;
    m_mainVideoStreamTypeHasBeenSet = true;
}

bool LayoutParams::MainVideoStreamTypeHasBeenSet() const
{
    return m_mainVideoStreamTypeHasBeenSet;
}

