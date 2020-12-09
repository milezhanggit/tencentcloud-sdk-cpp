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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDIRECTCONNECTGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDIRECTCONNECTGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDirectConnectGateway请求参数结构体
                */
                class CreateDirectConnectGatewayRequest : public AbstractModel
                {
                public:
                    CreateDirectConnectGatewayRequest();
                    ~CreateDirectConnectGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专线网关名称
                     * @return DirectConnectGatewayName 专线网关名称
                     */
                    std::string GetDirectConnectGatewayName() const;

                    /**
                     * 设置专线网关名称
                     * @param DirectConnectGatewayName 专线网关名称
                     */
                    void SetDirectConnectGatewayName(const std::string& _directConnectGatewayName);

                    /**
                     * 判断参数 DirectConnectGatewayName 是否已赋值
                     * @return DirectConnectGatewayName 是否已赋值
                     */
                    bool DirectConnectGatewayNameHasBeenSet() const;

                    /**
                     * 获取关联网络类型，可选值：
<li>VPC - 私有网络</li>
<li>CCN - 云联网</li>
                     * @return NetworkType 关联网络类型，可选值：
<li>VPC - 私有网络</li>
<li>CCN - 云联网</li>
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置关联网络类型，可选值：
<li>VPC - 私有网络</li>
<li>CCN - 云联网</li>
                     * @param NetworkType 关联网络类型，可选值：
<li>VPC - 私有网络</li>
<li>CCN - 云联网</li>
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取<li>NetworkType 为 VPC 时，这里传值为私有网络实例ID</li>
<li>NetworkType 为 CCN 时，这里传值为云联网实例ID</li>
                     * @return NetworkInstanceId <li>NetworkType 为 VPC 时，这里传值为私有网络实例ID</li>
<li>NetworkType 为 CCN 时，这里传值为云联网实例ID</li>
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置<li>NetworkType 为 VPC 时，这里传值为私有网络实例ID</li>
<li>NetworkType 为 CCN 时，这里传值为云联网实例ID</li>
                     * @param NetworkInstanceId <li>NetworkType 为 VPC 时，这里传值为私有网络实例ID</li>
<li>NetworkType 为 CCN 时，这里传值为云联网实例ID</li>
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取网关类型，可选值：
<li>NORMAL - （默认）标准型，注：云联网只支持标准型</li>
<li>NAT - NAT型</li>NAT类型支持网络地址转换配置，类型确定后不能修改；一个私有网络可以创建一个NAT类型的专线网关和一个非NAT类型的专线网关
                     * @return GatewayType 网关类型，可选值：
<li>NORMAL - （默认）标准型，注：云联网只支持标准型</li>
<li>NAT - NAT型</li>NAT类型支持网络地址转换配置，类型确定后不能修改；一个私有网络可以创建一个NAT类型的专线网关和一个非NAT类型的专线网关
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置网关类型，可选值：
<li>NORMAL - （默认）标准型，注：云联网只支持标准型</li>
<li>NAT - NAT型</li>NAT类型支持网络地址转换配置，类型确定后不能修改；一个私有网络可以创建一个NAT类型的专线网关和一个非NAT类型的专线网关
                     * @param GatewayType 网关类型，可选值：
<li>NORMAL - （默认）标准型，注：云联网只支持标准型</li>
<li>NAT - NAT型</li>NAT类型支持网络地址转换配置，类型确定后不能修改；一个私有网络可以创建一个NAT类型的专线网关和一个非NAT类型的专线网关
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取云联网路由发布模式，可选值：`standard`（标准模式）、`exquisite`（精细模式）。只有云联网类型专线网关才支持`ModeType`。
                     * @return ModeType 云联网路由发布模式，可选值：`standard`（标准模式）、`exquisite`（精细模式）。只有云联网类型专线网关才支持`ModeType`。
                     */
                    std::string GetModeType() const;

                    /**
                     * 设置云联网路由发布模式，可选值：`standard`（标准模式）、`exquisite`（精细模式）。只有云联网类型专线网关才支持`ModeType`。
                     * @param ModeType 云联网路由发布模式，可选值：`standard`（标准模式）、`exquisite`（精细模式）。只有云联网类型专线网关才支持`ModeType`。
                     */
                    void SetModeType(const std::string& _modeType);

                    /**
                     * 判断参数 ModeType 是否已赋值
                     * @return ModeType 是否已赋值
                     */
                    bool ModeTypeHasBeenSet() const;

                private:

                    /**
                     * 专线网关名称
                     */
                    std::string m_directConnectGatewayName;
                    bool m_directConnectGatewayNameHasBeenSet;

                    /**
                     * 关联网络类型，可选值：
<li>VPC - 私有网络</li>
<li>CCN - 云联网</li>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <li>NetworkType 为 VPC 时，这里传值为私有网络实例ID</li>
<li>NetworkType 为 CCN 时，这里传值为云联网实例ID</li>
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * 网关类型，可选值：
<li>NORMAL - （默认）标准型，注：云联网只支持标准型</li>
<li>NAT - NAT型</li>NAT类型支持网络地址转换配置，类型确定后不能修改；一个私有网络可以创建一个NAT类型的专线网关和一个非NAT类型的专线网关
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 云联网路由发布模式，可选值：`standard`（标准模式）、`exquisite`（精细模式）。只有云联网类型专线网关才支持`ModeType`。
                     */
                    std::string m_modeType;
                    bool m_modeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEDIRECTCONNECTGATEWAYREQUEST_H_
