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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWGROUPBYFILESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWGROUPBYFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FlowFileInfo.h>
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
                * ChannelCreateFlowGroupByFiles请求参数结构体
                */
                class ChannelCreateFlowGroupByFilesRequest : public AbstractModel
                {
                public:
                    ChannelCreateFlowGroupByFilesRequest();
                    ~ChannelCreateFlowGroupByFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每个子合同的发起所需的信息，数量限制2-100
                     * @return FlowFileInfos 每个子合同的发起所需的信息，数量限制2-100
                     */
                    std::vector<FlowFileInfo> GetFlowFileInfos() const;

                    /**
                     * 设置每个子合同的发起所需的信息，数量限制2-100
                     * @param FlowFileInfos 每个子合同的发起所需的信息，数量限制2-100
                     */
                    void SetFlowFileInfos(const std::vector<FlowFileInfo>& _flowFileInfos);

                    /**
                     * 判断参数 FlowFileInfos 是否已赋值
                     * @return FlowFileInfos 是否已赋值
                     */
                    bool FlowFileInfosHasBeenSet() const;

                    /**
                     * 获取合同组名称，长度不超过200个字符
                     * @return FlowGroupName 合同组名称，长度不超过200个字符
                     */
                    std::string GetFlowGroupName() const;

                    /**
                     * 设置合同组名称，长度不超过200个字符
                     * @param FlowGroupName 合同组名称，长度不超过200个字符
                     */
                    void SetFlowGroupName(const std::string& _flowGroupName);

                    /**
                     * 判断参数 FlowGroupName 是否已赋值
                     * @return FlowGroupName 是否已赋值
                     */
                    bool FlowGroupNameHasBeenSet() const;

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

                private:

                    /**
                     * 每个子合同的发起所需的信息，数量限制2-100
                     */
                    std::vector<FlowFileInfo> m_flowFileInfos;
                    bool m_flowFileInfosHasBeenSet;

                    /**
                     * 合同组名称，长度不超过200个字符
                     */
                    std::string m_flowGroupName;
                    bool m_flowGroupNameHasBeenSet;

                    /**
                     * 渠道应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 操作者的信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWGROUPBYFILESREQUEST_H_
