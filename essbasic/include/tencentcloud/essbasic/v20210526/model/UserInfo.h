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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USERINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 接口调用者信息
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户在渠道的编号，最大64位字符串
                     * @return OpenId 用户在渠道的编号，最大64位字符串
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户在渠道的编号，最大64位字符串
                     * @param OpenId 用户在渠道的编号，最大64位字符串
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取用户的来源渠道
                     * @return Channel 用户的来源渠道
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置用户的来源渠道
                     * @param Channel 用户的来源渠道
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取自定义用户编号
                     * @return CustomUserId 自定义用户编号
                     */
                    std::string GetCustomUserId() const;

                    /**
                     * 设置自定义用户编号
                     * @param CustomUserId 自定义用户编号
                     */
                    void SetCustomUserId(const std::string& _customUserId);

                    /**
                     * 判断参数 CustomUserId 是否已赋值
                     * @return CustomUserId 是否已赋值
                     */
                    bool CustomUserIdHasBeenSet() const;

                    /**
                     * 获取用户真实IP
                     * @return ClientIp 用户真实IP
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置用户真实IP
                     * @param ClientIp 用户真实IP
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取用户代理IP
                     * @return ProxyIp 用户代理IP
                     */
                    std::string GetProxyIp() const;

                    /**
                     * 设置用户代理IP
                     * @param ProxyIp 用户代理IP
                     */
                    void SetProxyIp(const std::string& _proxyIp);

                    /**
                     * 判断参数 ProxyIp 是否已赋值
                     * @return ProxyIp 是否已赋值
                     */
                    bool ProxyIpHasBeenSet() const;

                private:

                    /**
                     * 用户在渠道的编号，最大64位字符串
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 用户的来源渠道
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 自定义用户编号
                     */
                    std::string m_customUserId;
                    bool m_customUserIdHasBeenSet;

                    /**
                     * 用户真实IP
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 用户代理IP
                     */
                    std::string m_proxyIp;
                    bool m_proxyIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USERINFO_H_
