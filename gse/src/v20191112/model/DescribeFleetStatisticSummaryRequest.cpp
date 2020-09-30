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

#include <tencentcloud/gse/v20191112/model/DescribeFleetStatisticSummaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace rapidjson;
using namespace std;

DescribeFleetStatisticSummaryRequest::DescribeFleetStatisticSummaryRequest() :
    m_fleetIdHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribeFleetStatisticSummaryRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fleetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFleetStatisticSummaryRequest::GetFleetId() const
{
    return m_fleetId;
}

void DescribeFleetStatisticSummaryRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool DescribeFleetStatisticSummaryRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string DescribeFleetStatisticSummaryRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeFleetStatisticSummaryRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeFleetStatisticSummaryRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeFleetStatisticSummaryRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeFleetStatisticSummaryRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeFleetStatisticSummaryRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


