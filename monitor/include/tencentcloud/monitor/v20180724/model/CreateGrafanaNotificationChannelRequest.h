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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANANOTIFICATIONCHANNELREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANANOTIFICATIONCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateGrafanaNotificationChannel请求参数结构体
                */
                class CreateGrafanaNotificationChannelRequest : public AbstractModel
                {
                public:
                    CreateGrafanaNotificationChannelRequest();
                    ~CreateGrafanaNotificationChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param InstanceId 实例 ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取渠道名
                     * @return ChannelName 渠道名
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名
                     * @param ChannelName 渠道名
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取默认为1，已废弃，请使用 OrganizationIds
                     * @return OrgId 默认为1，已废弃，请使用 OrganizationIds
                     */
                    int64_t GetOrgId() const;

                    /**
                     * 设置默认为1，已废弃，请使用 OrganizationIds
                     * @param OrgId 默认为1，已废弃，请使用 OrganizationIds
                     */
                    void SetOrgId(const int64_t& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取接受告警通道 ID 数组
                     * @return Receivers 接受告警通道 ID 数组
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置接受告警通道 ID 数组
                     * @param Receivers 接受告警通道 ID 数组
                     */
                    void SetReceivers(const std::vector<std::string>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取额外组织 ID 数组，已废弃，请使用 OrganizationIds
                     * @return ExtraOrgIds 额外组织 ID 数组，已废弃，请使用 OrganizationIds
                     */
                    std::vector<std::string> GetExtraOrgIds() const;

                    /**
                     * 设置额外组织 ID 数组，已废弃，请使用 OrganizationIds
                     * @param ExtraOrgIds 额外组织 ID 数组，已废弃，请使用 OrganizationIds
                     */
                    void SetExtraOrgIds(const std::vector<std::string>& _extraOrgIds);

                    /**
                     * 判断参数 ExtraOrgIds 是否已赋值
                     * @return ExtraOrgIds 是否已赋值
                     */
                    bool ExtraOrgIdsHasBeenSet() const;

                    /**
                     * 获取生效的所有组织 ID 数组，默认为 ["1"]
                     * @return OrganizationIds 生效的所有组织 ID 数组，默认为 ["1"]
                     */
                    std::vector<std::string> GetOrganizationIds() const;

                    /**
                     * 设置生效的所有组织 ID 数组，默认为 ["1"]
                     * @param OrganizationIds 生效的所有组织 ID 数组，默认为 ["1"]
                     */
                    void SetOrganizationIds(const std::vector<std::string>& _organizationIds);

                    /**
                     * 判断参数 OrganizationIds 是否已赋值
                     * @return OrganizationIds 是否已赋值
                     */
                    bool OrganizationIdsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 渠道名
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 默认为1，已废弃，请使用 OrganizationIds
                     */
                    int64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * 接受告警通道 ID 数组
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 额外组织 ID 数组，已废弃，请使用 OrganizationIds
                     */
                    std::vector<std::string> m_extraOrgIds;
                    bool m_extraOrgIdsHasBeenSet;

                    /**
                     * 生效的所有组织 ID 数组，默认为 ["1"]
                     */
                    std::vector<std::string> m_organizationIds;
                    bool m_organizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANANOTIFICATIONCHANNELREQUEST_H_
