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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWINFOREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeFlowInfo请求参数结构体
                */
                class DescribeFlowInfoRequest : public AbstractModel
                {
                public:
                    DescribeFlowInfoRequest();
                    ~DescribeFlowInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的流程ID列表，限制最大100个
                     * @return FlowIds 需要查询的流程ID列表，限制最大100个
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置需要查询的流程ID列表，限制最大100个
                     * @param FlowIds 需要查询的流程ID列表，限制最大100个
                     */
                    void SetFlowIds(const std::vector<std::string>& _flowIds);

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取调用方用户信息
                     * @return Operator 调用方用户信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息
                     * @param Operator 调用方用户信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 需要查询的流程ID列表，限制最大100个
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * 调用方用户信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWINFOREQUEST_H_
