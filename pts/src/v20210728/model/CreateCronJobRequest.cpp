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

#include <tencentcloud/pts/v20210728/model/CreateCronJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

CreateCronJobRequest::CreateCronJobRequest() :
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_scenarioIdHasBeenSet(false),
    m_scenarioNameHasBeenSet(false),
    m_frequencyTypeHasBeenSet(false),
    m_cronExpressionHasBeenSet(false),
    m_jobOwnerHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_noticeIdHasBeenSet(false),
    m_noteHasBeenSet(false)
{
}

string CreateCronJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenarioId.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenarioName.c_str(), allocator).Move(), allocator);
    }

    if (m_frequencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_frequencyType, allocator);
    }

    if (m_cronExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cronExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_jobOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobOwner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_noticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCronJobRequest::GetName() const
{
    return m_name;
}

void CreateCronJobRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCronJobRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCronJobRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateCronJobRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateCronJobRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateCronJobRequest::GetScenarioId() const
{
    return m_scenarioId;
}

void CreateCronJobRequest::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool CreateCronJobRequest::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

string CreateCronJobRequest::GetScenarioName() const
{
    return m_scenarioName;
}

void CreateCronJobRequest::SetScenarioName(const string& _scenarioName)
{
    m_scenarioName = _scenarioName;
    m_scenarioNameHasBeenSet = true;
}

bool CreateCronJobRequest::ScenarioNameHasBeenSet() const
{
    return m_scenarioNameHasBeenSet;
}

int64_t CreateCronJobRequest::GetFrequencyType() const
{
    return m_frequencyType;
}

void CreateCronJobRequest::SetFrequencyType(const int64_t& _frequencyType)
{
    m_frequencyType = _frequencyType;
    m_frequencyTypeHasBeenSet = true;
}

bool CreateCronJobRequest::FrequencyTypeHasBeenSet() const
{
    return m_frequencyTypeHasBeenSet;
}

string CreateCronJobRequest::GetCronExpression() const
{
    return m_cronExpression;
}

void CreateCronJobRequest::SetCronExpression(const string& _cronExpression)
{
    m_cronExpression = _cronExpression;
    m_cronExpressionHasBeenSet = true;
}

bool CreateCronJobRequest::CronExpressionHasBeenSet() const
{
    return m_cronExpressionHasBeenSet;
}

string CreateCronJobRequest::GetJobOwner() const
{
    return m_jobOwner;
}

void CreateCronJobRequest::SetJobOwner(const string& _jobOwner)
{
    m_jobOwner = _jobOwner;
    m_jobOwnerHasBeenSet = true;
}

bool CreateCronJobRequest::JobOwnerHasBeenSet() const
{
    return m_jobOwnerHasBeenSet;
}

string CreateCronJobRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateCronJobRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateCronJobRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateCronJobRequest::GetNoticeId() const
{
    return m_noticeId;
}

void CreateCronJobRequest::SetNoticeId(const string& _noticeId)
{
    m_noticeId = _noticeId;
    m_noticeIdHasBeenSet = true;
}

bool CreateCronJobRequest::NoticeIdHasBeenSet() const
{
    return m_noticeIdHasBeenSet;
}

string CreateCronJobRequest::GetNote() const
{
    return m_note;
}

void CreateCronJobRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool CreateCronJobRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}


