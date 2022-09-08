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

#include <tencentcloud/tione/v20211111/model/ModelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModelInfo::ModelInfo() :
    m_modelVersionIdHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_modelSourceHasBeenSet(false),
    m_cosPathInfoHasBeenSet(false),
    m_algorithmFrameworkHasBeenSet(false),
    m_modelTypeHasBeenSet(false)
{
}

CoreInternalOutcome ModelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelVersionId") && !value["ModelVersionId"].IsNull())
    {
        if (!value["ModelVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersionId = string(value["ModelVersionId"].GetString());
        m_modelVersionIdHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("ModelSource") && !value["ModelSource"].IsNull())
    {
        if (!value["ModelSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelSource = string(value["ModelSource"].GetString());
        m_modelSourceHasBeenSet = true;
    }

    if (value.HasMember("CosPathInfo") && !value["CosPathInfo"].IsNull())
    {
        if (!value["CosPathInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.CosPathInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosPathInfo.Deserialize(value["CosPathInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosPathInfoHasBeenSet = true;
    }

    if (value.HasMember("AlgorithmFramework") && !value["AlgorithmFramework"].IsNull())
    {
        if (!value["AlgorithmFramework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.AlgorithmFramework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithmFramework = string(value["AlgorithmFramework"].GetString());
        m_algorithmFrameworkHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelInfo.ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(value["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelSource.c_str(), allocator).Move(), allocator);
    }

    if (m_cosPathInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPathInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosPathInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_algorithmFrameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgorithmFramework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithmFramework.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

}


string ModelInfo::GetModelVersionId() const
{
    return m_modelVersionId;
}

void ModelInfo::SetModelVersionId(const string& _modelVersionId)
{
    m_modelVersionId = _modelVersionId;
    m_modelVersionIdHasBeenSet = true;
}

bool ModelInfo::ModelVersionIdHasBeenSet() const
{
    return m_modelVersionIdHasBeenSet;
}

string ModelInfo::GetModelId() const
{
    return m_modelId;
}

void ModelInfo::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModelInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string ModelInfo::GetModelName() const
{
    return m_modelName;
}

void ModelInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ModelInfo::GetModelVersion() const
{
    return m_modelVersion;
}

void ModelInfo::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool ModelInfo::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string ModelInfo::GetModelSource() const
{
    return m_modelSource;
}

void ModelInfo::SetModelSource(const string& _modelSource)
{
    m_modelSource = _modelSource;
    m_modelSourceHasBeenSet = true;
}

bool ModelInfo::ModelSourceHasBeenSet() const
{
    return m_modelSourceHasBeenSet;
}

CosPathInfo ModelInfo::GetCosPathInfo() const
{
    return m_cosPathInfo;
}

void ModelInfo::SetCosPathInfo(const CosPathInfo& _cosPathInfo)
{
    m_cosPathInfo = _cosPathInfo;
    m_cosPathInfoHasBeenSet = true;
}

bool ModelInfo::CosPathInfoHasBeenSet() const
{
    return m_cosPathInfoHasBeenSet;
}

string ModelInfo::GetAlgorithmFramework() const
{
    return m_algorithmFramework;
}

void ModelInfo::SetAlgorithmFramework(const string& _algorithmFramework)
{
    m_algorithmFramework = _algorithmFramework;
    m_algorithmFrameworkHasBeenSet = true;
}

bool ModelInfo::AlgorithmFrameworkHasBeenSet() const
{
    return m_algorithmFrameworkHasBeenSet;
}

string ModelInfo::GetModelType() const
{
    return m_modelType;
}

void ModelInfo::SetModelType(const string& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool ModelInfo::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

