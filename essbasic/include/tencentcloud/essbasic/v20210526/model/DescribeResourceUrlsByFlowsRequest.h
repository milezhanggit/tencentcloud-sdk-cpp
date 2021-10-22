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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBERESOURCEURLSBYFLOWSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBERESOURCEURLSBYFLOWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeResourceUrlsByFlows请求参数结构体
                */
                class DescribeResourceUrlsByFlowsRequest : public AbstractModel
                {
                public:
                    DescribeResourceUrlsByFlowsRequest();
                    ~DescribeResourceUrlsByFlowsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道应用相关信息
                     * @return Agent 渠道应用相关信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置渠道应用相关信息
                     * @param Agent 渠道应用相关信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取操作者的信息
                     * @return Operator 操作者的信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息
                     * @param Operator 操作者的信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取查询资源所对应的流程Id
                     * @return FlowIds 查询资源所对应的流程Id
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置查询资源所对应的流程Id
                     * @param FlowIds 查询资源所对应的流程Id
                     */
                    void SetFlowIds(const std::vector<std::string>& _flowIds);

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     */
                    bool FlowIdsHasBeenSet() const;

                private:

                    /**
                     * 渠道应用相关信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 操作者的信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 查询资源所对应的流程Id
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBERESOURCEURLSBYFLOWSREQUEST_H_
