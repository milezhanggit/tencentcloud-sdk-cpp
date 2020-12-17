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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_GETEMAILIDENTITYRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_GETEMAILIDENTITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/DNSAttributes.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * GetEmailIdentity返回参数结构体
                */
                class GetEmailIdentityResponse : public AbstractModel
                {
                public:
                    GetEmailIdentityResponse();
                    ~GetEmailIdentityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取验证类型。固定值：DOMAIN
                     * @return IdentityType 验证类型。固定值：DOMAIN
                     */
                    std::string GetIdentityType() const;

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     */
                    bool IdentityTypeHasBeenSet() const;

                    /**
                     * 获取是否已通过验证
                     * @return VerifiedForSendingStatus 是否已通过验证
                     */
                    bool GetVerifiedForSendingStatus() const;

                    /**
                     * 判断参数 VerifiedForSendingStatus 是否已赋值
                     * @return VerifiedForSendingStatus 是否已赋值
                     */
                    bool VerifiedForSendingStatusHasBeenSet() const;

                    /**
                     * 获取DNS配置详情
                     * @return Attributes DNS配置详情
                     */
                    std::vector<DNSAttributes> GetAttributes() const;

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     */
                    bool AttributesHasBeenSet() const;

                private:

                    /**
                     * 验证类型。固定值：DOMAIN
                     */
                    std::string m_identityType;
                    bool m_identityTypeHasBeenSet;

                    /**
                     * 是否已通过验证
                     */
                    bool m_verifiedForSendingStatus;
                    bool m_verifiedForSendingStatusHasBeenSet;

                    /**
                     * DNS配置详情
                     */
                    std::vector<DNSAttributes> m_attributes;
                    bool m_attributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_GETEMAILIDENTITYRESPONSE_H_
