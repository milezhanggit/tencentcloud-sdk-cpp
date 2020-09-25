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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBESCALINGPOLICIESREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBESCALINGPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeScalingPolicies请求参数结构体
                */
                class DescribeScalingPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeScalingPoliciesRequest();
                    ~DescribeScalingPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务部署ID
                     * @return FleetId 服务部署ID
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务部署ID
                     * @param FleetId 服务部署ID
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取状态过滤条件，取值：ACTIVE表示活跃
                     * @return StatusFilter 状态过滤条件，取值：ACTIVE表示活跃
                     */
                    std::string GetStatusFilter() const;

                    /**
                     * 设置状态过滤条件，取值：ACTIVE表示活跃
                     * @param StatusFilter 状态过滤条件，取值：ACTIVE表示活跃
                     */
                    void SetStatusFilter(const std::string& _statusFilter);

                    /**
                     * 判断参数 StatusFilter 是否已赋值
                     * @return StatusFilter 是否已赋值
                     */
                    bool StatusFilterHasBeenSet() const;

                    /**
                     * 获取返回结果偏移，最小值0
                     * @return Offset 返回结果偏移，最小值0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置返回结果偏移，最小值0
                     * @param Offset 返回结果偏移，最小值0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取结果返回最大数量，最小值0，最大值100
                     * @return Limit 结果返回最大数量，最小值0，最大值100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置结果返回最大数量，最小值0，最大值100
                     * @param Limit 结果返回最大数量，最小值0，最大值100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 服务部署ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 状态过滤条件，取值：ACTIVE表示活跃
                     */
                    std::string m_statusFilter;
                    bool m_statusFilterHasBeenSet;

                    /**
                     * 返回结果偏移，最小值0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 结果返回最大数量，最小值0，最大值100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBESCALINGPOLICIESREQUEST_H_
