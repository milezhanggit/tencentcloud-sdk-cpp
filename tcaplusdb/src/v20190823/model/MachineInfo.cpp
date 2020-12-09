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

#include <tencentcloud/tcaplusdb/v20190823/model/MachineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

MachineInfo::MachineInfo() :
    m_machineTypeHasBeenSet(false),
    m_machineNumHasBeenSet(false)
{
}

CoreInternalOutcome MachineInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Error("response `MachineInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("MachineNum") && !value["MachineNum"].IsNull())
    {
        if (!value["MachineNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MachineInfo.MachineNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_machineNum = value["MachineNum"].GetInt64();
        m_machineNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_machineTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineNum, allocator);
    }

}


string MachineInfo::GetMachineType() const
{
    return m_machineType;
}

void MachineInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool MachineInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

int64_t MachineInfo::GetMachineNum() const
{
    return m_machineNum;
}

void MachineInfo::SetMachineNum(const int64_t& _machineNum)
{
    m_machineNum = _machineNum;
    m_machineNumHasBeenSet = true;
}

bool MachineInfo::MachineNumHasBeenSet() const
{
    return m_machineNumHasBeenSet;
}

