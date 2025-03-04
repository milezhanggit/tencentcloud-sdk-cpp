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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL7ANALYSISDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL7ANALYSISDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeTimingL7AnalysisData请求参数结构体
                */
                class DescribeTimingL7AnalysisDataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL7AnalysisDataRequest();
                    ~DescribeTimingL7AnalysisDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RFC3339标准，客户端时间
                     * @return StartTime RFC3339标准，客户端时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置RFC3339标准，客户端时间
                     * @param StartTime RFC3339标准，客户端时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取RFC3339标准，客户端时间
                     * @return EndTime RFC3339标准，客户端时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置RFC3339标准，客户端时间
                     * @param EndTime RFC3339标准，客户端时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取指标列表，支持的指标
l7Flow_outFlux: 访问流量
l7Flow_request: 访问请求数
l7Flow_outBandwidth: 访问带宽
                     * @return MetricNames 指标列表，支持的指标
l7Flow_outFlux: 访问流量
l7Flow_request: 访问请求数
l7Flow_outBandwidth: 访问带宽
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置指标列表，支持的指标
l7Flow_outFlux: 访问流量
l7Flow_request: 访问请求数
l7Flow_outBandwidth: 访问带宽
                     * @param MetricNames 指标列表，支持的指标
l7Flow_outFlux: 访问流量
l7Flow_request: 访问请求数
l7Flow_outBandwidth: 访问带宽
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取时间间隔，选填{min, 5min, hour, day, week}
                     * @return Interval 时间间隔，选填{min, 5min, hour, day, week}
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置时间间隔，选填{min, 5min, hour, day, week}
                     * @param Interval 时间间隔，选填{min, 5min, hour, day, week}
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取ZoneId数组
                     * @return ZoneIds ZoneId数组
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置ZoneId数组
                     * @param ZoneIds ZoneId数组
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取筛选条件
                     * @return Filters 筛选条件
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置筛选条件
                     * @param Filters 筛选条件
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     * @return Area 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    std::string GetArea() const;

                    /**
                     * 设置加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     * @param Area 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * RFC3339标准，客户端时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * RFC3339标准，客户端时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指标列表，支持的指标
l7Flow_outFlux: 访问流量
l7Flow_request: 访问请求数
l7Flow_outBandwidth: 访问带宽
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * 时间间隔，选填{min, 5min, hour, day, week}
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * ZoneId数组
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 筛选条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL7ANALYSISDATAREQUEST_H_
