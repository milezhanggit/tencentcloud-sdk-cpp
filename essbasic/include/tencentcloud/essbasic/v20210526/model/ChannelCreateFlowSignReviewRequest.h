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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNREVIEWREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNREVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateFlowSignReview请求参数结构体
                */
                class ChannelCreateFlowSignReviewRequest : public AbstractModel
                {
                public:
                    ChannelCreateFlowSignReviewRequest();
                    ~ChannelCreateFlowSignReviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @return Agent 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @param Agent 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取签署流程编号
                     * @return FlowId 签署流程编号
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置签署流程编号
                     * @param FlowId 签署流程编号
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取企业内部审核结果
PASS: 通过
REJECT: 拒绝
                     * @return ReviewType 企业内部审核结果
PASS: 通过
REJECT: 拒绝
                     */
                    std::string GetReviewType() const;

                    /**
                     * 设置企业内部审核结果
PASS: 通过
REJECT: 拒绝
                     * @param ReviewType 企业内部审核结果
PASS: 通过
REJECT: 拒绝
                     */
                    void SetReviewType(const std::string& _reviewType);

                    /**
                     * 判断参数 ReviewType 是否已赋值
                     * @return ReviewType 是否已赋值
                     */
                    bool ReviewTypeHasBeenSet() const;

                    /**
                     * 获取审核原因 
当ReviewType 是REJECT 时此字段必填,字符串长度不超过200
                     * @return ReviewMessage 审核原因 
当ReviewType 是REJECT 时此字段必填,字符串长度不超过200
                     */
                    std::string GetReviewMessage() const;

                    /**
                     * 设置审核原因 
当ReviewType 是REJECT 时此字段必填,字符串长度不超过200
                     * @param ReviewMessage 审核原因 
当ReviewType 是REJECT 时此字段必填,字符串长度不超过200
                     */
                    void SetReviewMessage(const std::string& _reviewMessage);

                    /**
                     * 判断参数 ReviewMessage 是否已赋值
                     * @return ReviewMessage 是否已赋值
                     */
                    bool ReviewMessageHasBeenSet() const;

                private:

                    /**
                     * 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 签署流程编号
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 企业内部审核结果
PASS: 通过
REJECT: 拒绝
                     */
                    std::string m_reviewType;
                    bool m_reviewTypeHasBeenSet;

                    /**
                     * 审核原因 
当ReviewType 是REJECT 时此字段必填,字符串长度不超过200
                     */
                    std::string m_reviewMessage;
                    bool m_reviewMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNREVIEWREQUEST_H_
