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

#include <tencentcloud/bma/v20210624/model/UpdateCRWorkResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

UpdateCRWorkResponse::UpdateCRWorkResponse() :
    m_workIdHasBeenSet(false),
    m_evidenceIdHasBeenSet(false)
{
}

CoreInternalOutcome UpdateCRWorkResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("WorkId") && !rsp["WorkId"].IsNull())
    {
        if (!rsp["WorkId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workId = rsp["WorkId"].GetInt64();
        m_workIdHasBeenSet = true;
    }

    if (rsp.HasMember("EvidenceId") && !rsp["EvidenceId"].IsNull())
    {
        if (!rsp["EvidenceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EvidenceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceId = rsp["EvidenceId"].GetInt64();
        m_evidenceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string UpdateCRWorkResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_workIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workId, allocator);
    }

    if (m_evidenceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evidenceId, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t UpdateCRWorkResponse::GetWorkId() const
{
    return m_workId;
}

bool UpdateCRWorkResponse::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

int64_t UpdateCRWorkResponse::GetEvidenceId() const
{
    return m_evidenceId;
}

bool UpdateCRWorkResponse::EvidenceIdHasBeenSet() const
{
    return m_evidenceIdHasBeenSet;
}


