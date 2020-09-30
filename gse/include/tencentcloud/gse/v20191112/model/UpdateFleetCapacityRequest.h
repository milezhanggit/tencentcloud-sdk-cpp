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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEFLEETCAPACITYREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEFLEETCAPACITYREQUEST_H_

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
                * UpdateFleetCapacity请求参数结构体
                */
                class UpdateFleetCapacityRequest : public AbstractModel
                {
                public:
                    UpdateFleetCapacityRequest();
                    ~UpdateFleetCapacityRequest() = default;
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
                     * 获取期望的服务器实例数
                     * @return DesiredInstances 期望的服务器实例数
                     */
                    uint64_t GetDesiredInstances() const;

                    /**
                     * 设置期望的服务器实例数
                     * @param DesiredInstances 期望的服务器实例数
                     */
                    void SetDesiredInstances(const uint64_t& _desiredInstances);

                    /**
                     * 判断参数 DesiredInstances 是否已赋值
                     * @return DesiredInstances 是否已赋值
                     */
                    bool DesiredInstancesHasBeenSet() const;

                    /**
                     * 获取服务器实例数最小限制
                     * @return MinSize 服务器实例数最小限制
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置服务器实例数最小限制
                     * @param MinSize 服务器实例数最小限制
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取服务器实例数最大限制
                     * @return MaxSize 服务器实例数最大限制
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置服务器实例数最大限制
                     * @param MaxSize 服务器实例数最大限制
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取服务器伸缩容间隔
                     * @return ScalingInterval 服务器伸缩容间隔
                     */
                    uint64_t GetScalingInterval() const;

                    /**
                     * 设置服务器伸缩容间隔
                     * @param ScalingInterval 服务器伸缩容间隔
                     */
                    void SetScalingInterval(const uint64_t& _scalingInterval);

                    /**
                     * 判断参数 ScalingInterval 是否已赋值
                     * @return ScalingInterval 是否已赋值
                     */
                    bool ScalingIntervalHasBeenSet() const;

                private:

                    /**
                     * 服务部署ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 期望的服务器实例数
                     */
                    uint64_t m_desiredInstances;
                    bool m_desiredInstancesHasBeenSet;

                    /**
                     * 服务器实例数最小限制
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 服务器实例数最大限制
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 服务器伸缩容间隔
                     */
                    uint64_t m_scalingInterval;
                    bool m_scalingIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEFLEETCAPACITYREQUEST_H_
