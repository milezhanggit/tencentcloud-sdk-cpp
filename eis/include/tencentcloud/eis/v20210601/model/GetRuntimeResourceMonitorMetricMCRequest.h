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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMERESOURCEMONITORMETRICMCREQUEST_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMERESOURCEMONITORMETRICMCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            namespace Model
            {
                /**
                * GetRuntimeResourceMonitorMetricMC请求参数结构体
                */
                class GetRuntimeResourceMonitorMetricMCRequest : public AbstractModel
                {
                public:
                    GetRuntimeResourceMonitorMetricMCRequest();
                    ~GetRuntimeResourceMonitorMetricMCRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取运行时id
                     * @return RuntimeId 运行时id
                     */
                    int64_t GetRuntimeId() const;

                    /**
                     * 设置运行时id
                     * @param RuntimeId 运行时id
                     */
                    void SetRuntimeId(const int64_t& _runtimeId);

                    /**
                     * 判断参数 RuntimeId 是否已赋值
                     * @return RuntimeId 是否已赋值
                     */
                    bool RuntimeIdHasBeenSet() const;

                    /**
                     * 获取起始时间
                     * @return StartTime 起始时间
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param StartTime 起始时间
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param EndTime 结束时间
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取指标类型：0:CPU, 1:MemUsageBytes, 2:K8sWorkloadNetworkReceiveBytesBw, 3:K8sWorkloadNetworkTransmitBytesBw
                     * @return MetricType 指标类型：0:CPU, 1:MemUsageBytes, 2:K8sWorkloadNetworkReceiveBytesBw, 3:K8sWorkloadNetworkTransmitBytesBw
                     */
                    int64_t GetMetricType() const;

                    /**
                     * 设置指标类型：0:CPU, 1:MemUsageBytes, 2:K8sWorkloadNetworkReceiveBytesBw, 3:K8sWorkloadNetworkTransmitBytesBw
                     * @param MetricType 指标类型：0:CPU, 1:MemUsageBytes, 2:K8sWorkloadNetworkReceiveBytesBw, 3:K8sWorkloadNetworkTransmitBytesBw
                     */
                    void SetMetricType(const int64_t& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取是否返回百分比数值，仅支持CPU，Memory
                     * @return RateType 是否返回百分比数值，仅支持CPU，Memory
                     */
                    bool GetRateType() const;

                    /**
                     * 设置是否返回百分比数值，仅支持CPU，Memory
                     * @param RateType 是否返回百分比数值，仅支持CPU，Memory
                     */
                    void SetRateType(const bool& _rateType);

                    /**
                     * 判断参数 RateType 是否已赋值
                     * @return RateType 是否已赋值
                     */
                    bool RateTypeHasBeenSet() const;

                    /**
                     * 获取采样粒度：60(s), 300(s), 3600(s), 86400(s)
                     * @return Interval 采样粒度：60(s), 300(s), 3600(s), 86400(s)
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置采样粒度：60(s), 300(s), 3600(s), 86400(s)
                     * @param Interval 采样粒度：60(s), 300(s), 3600(s), 86400(s)
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * 运行时id
                     */
                    int64_t m_runtimeId;
                    bool m_runtimeIdHasBeenSet;

                    /**
                     * 起始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指标类型：0:CPU, 1:MemUsageBytes, 2:K8sWorkloadNetworkReceiveBytesBw, 3:K8sWorkloadNetworkTransmitBytesBw
                     */
                    int64_t m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * 是否返回百分比数值，仅支持CPU，Memory
                     */
                    bool m_rateType;
                    bool m_rateTypeHasBeenSet;

                    /**
                     * 采样粒度：60(s), 300(s), 3600(s), 86400(s)
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMERESOURCEMONITORMETRICMCREQUEST_H_
