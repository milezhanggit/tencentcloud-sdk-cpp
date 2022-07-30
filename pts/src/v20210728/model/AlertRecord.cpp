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

#include <tencentcloud/pts/v20210728/model/AlertRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

AlertRecord::AlertRecord() :
    m_alertRecordIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_scenarioIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_jobIdHasBeenSet(false)
{
}

CoreInternalOutcome AlertRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlertRecordId") && !value["AlertRecordId"].IsNull())
    {
        if (!value["AlertRecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertRecord.AlertRecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertRecordId = string(value["AlertRecordId"].GetString());
        m_alertRecordIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertRecord.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ScenarioId") && !value["ScenarioId"].IsNull())
    {
        if (!value["ScenarioId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertRecord.ScenarioId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scenarioId = string(value["ScenarioId"].GetString());
        m_scenarioIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlertRecord.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertRecord.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertRecord.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertRecord.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlertRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alertRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scenarioId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

}


string AlertRecord::GetAlertRecordId() const
{
    return m_alertRecordId;
}

void AlertRecord::SetAlertRecordId(const string& _alertRecordId)
{
    m_alertRecordId = _alertRecordId;
    m_alertRecordIdHasBeenSet = true;
}

bool AlertRecord::AlertRecordIdHasBeenSet() const
{
    return m_alertRecordIdHasBeenSet;
}

string AlertRecord::GetProjectId() const
{
    return m_projectId;
}

void AlertRecord::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AlertRecord::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string AlertRecord::GetScenarioId() const
{
    return m_scenarioId;
}

void AlertRecord::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool AlertRecord::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

AlertRecordStatus AlertRecord::GetStatus() const
{
    return m_status;
}

void AlertRecord::SetStatus(const AlertRecordStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlertRecord::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AlertRecord::GetCreatedAt() const
{
    return m_createdAt;
}

void AlertRecord::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool AlertRecord::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string AlertRecord::GetUpdatedAt() const
{
    return m_updatedAt;
}

void AlertRecord::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool AlertRecord::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string AlertRecord::GetJobId() const
{
    return m_jobId;
}

void AlertRecord::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool AlertRecord::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

