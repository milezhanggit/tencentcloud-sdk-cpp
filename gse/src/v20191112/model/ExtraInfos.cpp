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

#include <tencentcloud/gse/v20191112/model/ExtraInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace rapidjson;
using namespace std;

ExtraInfos::ExtraInfos() :
    m_instanceTypeHasBeenSet(false),
    m_totalInstancesHasBeenSet(false)
{
}

CoreInternalOutcome ExtraInfos::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExtraInfos.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalInstances") && !value["TotalInstances"].IsNull())
    {
        if (!value["TotalInstances"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ExtraInfos.TotalInstances` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalInstances = value["TotalInstances"].GetUint64();
        m_totalInstancesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtraInfos::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_totalInstancesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalInstances, allocator);
    }

}


string ExtraInfos::GetInstanceType() const
{
    return m_instanceType;
}

void ExtraInfos::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ExtraInfos::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t ExtraInfos::GetTotalInstances() const
{
    return m_totalInstances;
}

void ExtraInfos::SetTotalInstances(const uint64_t& _totalInstances)
{
    m_totalInstances = _totalInstances;
    m_totalInstancesHasBeenSet = true;
}

bool ExtraInfos::TotalInstancesHasBeenSet() const
{
    return m_totalInstancesHasBeenSet;
}

