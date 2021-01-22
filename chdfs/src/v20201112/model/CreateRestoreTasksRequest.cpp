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

#include <tencentcloud/chdfs/v20201112/model/CreateRestoreTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace rapidjson;
using namespace std;

CreateRestoreTasksRequest::CreateRestoreTasksRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_restoreTasksHasBeenSet(false)
{
}

string CreateRestoreTasksRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreTasksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RestoreTasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_restoreTasks.begin(); itr != m_restoreTasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRestoreTasksRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CreateRestoreTasksRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CreateRestoreTasksRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

vector<RestoreTask> CreateRestoreTasksRequest::GetRestoreTasks() const
{
    return m_restoreTasks;
}

void CreateRestoreTasksRequest::SetRestoreTasks(const vector<RestoreTask>& _restoreTasks)
{
    m_restoreTasks = _restoreTasks;
    m_restoreTasksHasBeenSet = true;
}

bool CreateRestoreTasksRequest::RestoreTasksHasBeenSet() const
{
    return m_restoreTasksHasBeenSet;
}


