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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEGRAFANANOTIFICATIONCHANNELREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEGRAFANANOTIFICATIONCHANNELREQUEST_H_

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
                * DeleteGrafanaNotificationChannel请求参数结构体
                */
                class DeleteGrafanaNotificationChannelRequest : public AbstractModel
                {
                public:
                    DeleteGrafanaNotificationChannelRequest();
                    ~DeleteGrafanaNotificationChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道 ID 数组
                     * @return ChannelIDs 通道 ID 数组
                     */
                    std::vector<std::string> GetChannelIDs() const;

                    /**
                     * 设置通道 ID 数组
                     * @param ChannelIDs 通道 ID 数组
                     */
                    void SetChannelIDs(const std::vector<std::string>& _channelIDs);

                    /**
                     * 判断参数 ChannelIDs 是否已赋值
                     * @return ChannelIDs 是否已赋值
                     */
                    bool ChannelIDsHasBeenSet() const;

                    /**
                     * 获取实例名
                     * @return InstanceId 实例名
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例名
                     * @param InstanceId 实例名
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 通道 ID 数组
                     */
                    std::vector<std::string> m_channelIDs;
                    bool m_channelIDsHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEGRAFANANOTIFICATIONCHANNELREQUEST_H_
