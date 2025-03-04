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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETSTATISTICDATAREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETSTATISTICDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetStatisticData请求参数结构体
                */
                class GetStatisticDataRequest : public AbstractModel
                {
                public:
                    GetStatisticDataRequest();
                    ~GetStatisticDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备ID，设备ID="-1"获取所有设备流量统计
                     * @return DeviceId 设备ID，设备ID="-1"获取所有设备流量统计
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID，设备ID="-1"获取所有设备流量统计
                     * @param DeviceId 设备ID，设备ID="-1"获取所有设备流量统计
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取统计开始时间，单位：s
                     * @return BeginTime 统计开始时间，单位：s
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置统计开始时间，单位：s
                     * @param BeginTime 统计开始时间，单位：s
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取统计结束时间，单位：s
                     * @return EndTime 统计结束时间，单位：s
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置统计结束时间，单位：s
                     * @param EndTime 统计结束时间，单位：s
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取聚合粒度：
1:按小时统计
2:按天统计
                     * @return TimeGranularity 聚合粒度：
1:按小时统计
2:按天统计
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置聚合粒度：
1:按小时统计
2:按天统计
                     * @param TimeGranularity 聚合粒度：
1:按小时统计
2:按天统计
                     */
                    void SetTimeGranularity(const int64_t& _timeGranularity);

                    /**
                     * 判断参数 TimeGranularity 是否已赋值
                     * @return TimeGranularity 是否已赋值
                     */
                    bool TimeGranularityHasBeenSet() const;

                private:

                    /**
                     * 设备ID，设备ID="-1"获取所有设备流量统计
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 统计开始时间，单位：s
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 统计结束时间，单位：s
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 聚合粒度：
1:按小时统计
2:按天统计
                     */
                    int64_t m_timeGranularity;
                    bool m_timeGranularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETSTATISTICDATAREQUEST_H_
