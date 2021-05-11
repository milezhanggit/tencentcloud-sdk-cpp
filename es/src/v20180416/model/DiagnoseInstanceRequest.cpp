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

#include <tencentcloud/es/v20180416/model/DiagnoseInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace rapidjson;
using namespace std;

DiagnoseInstanceRequest::DiagnoseInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_diagnoseJobsHasBeenSet(false),
    m_diagnoseIndicesHasBeenSet(false)
{
}

string DiagnoseInstanceRequest::ToJsonString() const
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

    if (m_diagnoseJobsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiagnoseJobs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_diagnoseJobs.begin(); itr != m_diagnoseJobs.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_diagnoseIndicesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiagnoseIndices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_diagnoseIndices.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DiagnoseInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DiagnoseInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DiagnoseInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> DiagnoseInstanceRequest::GetDiagnoseJobs() const
{
    return m_diagnoseJobs;
}

void DiagnoseInstanceRequest::SetDiagnoseJobs(const vector<string>& _diagnoseJobs)
{
    m_diagnoseJobs = _diagnoseJobs;
    m_diagnoseJobsHasBeenSet = true;
}

bool DiagnoseInstanceRequest::DiagnoseJobsHasBeenSet() const
{
    return m_diagnoseJobsHasBeenSet;
}

string DiagnoseInstanceRequest::GetDiagnoseIndices() const
{
    return m_diagnoseIndices;
}

void DiagnoseInstanceRequest::SetDiagnoseIndices(const string& _diagnoseIndices)
{
    m_diagnoseIndices = _diagnoseIndices;
    m_diagnoseIndicesHasBeenSet = true;
}

bool DiagnoseInstanceRequest::DiagnoseIndicesHasBeenSet() const
{
    return m_diagnoseIndicesHasBeenSet;
}


