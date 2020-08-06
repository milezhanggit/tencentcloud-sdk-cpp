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

#include <tencentcloud/iai/v20180301/model/UpgradeGroupFaceModelVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20180301::Model;
using namespace rapidjson;
using namespace std;

UpgradeGroupFaceModelVersionRequest::UpgradeGroupFaceModelVersionRequest() :
    m_groupIdHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false)
{
}

string UpgradeGroupFaceModelVersionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_faceModelVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_faceModelVersion.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeGroupFaceModelVersionRequest::GetGroupId() const
{
    return m_groupId;
}

void UpgradeGroupFaceModelVersionRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UpgradeGroupFaceModelVersionRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string UpgradeGroupFaceModelVersionRequest::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

void UpgradeGroupFaceModelVersionRequest::SetFaceModelVersion(const string& _faceModelVersion)
{
    m_faceModelVersion = _faceModelVersion;
    m_faceModelVersionHasBeenSet = true;
}

bool UpgradeGroupFaceModelVersionRequest::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}


