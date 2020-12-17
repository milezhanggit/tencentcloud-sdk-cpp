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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_CREATEEMAILIDENTITYREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_CREATEEMAILIDENTITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * CreateEmailIdentity请求参数结构体
                */
                class CreateEmailIdentityRequest : public AbstractModel
                {
                public:
                    CreateEmailIdentityRequest();
                    ~CreateEmailIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取您的发信域名，建议使用三级以上域名。比如：mail.qcloud.com。
                     * @return EmailIdentity 您的发信域名，建议使用三级以上域名。比如：mail.qcloud.com。
                     */
                    std::string GetEmailIdentity() const;

                    /**
                     * 设置您的发信域名，建议使用三级以上域名。比如：mail.qcloud.com。
                     * @param EmailIdentity 您的发信域名，建议使用三级以上域名。比如：mail.qcloud.com。
                     */
                    void SetEmailIdentity(const std::string& _emailIdentity);

                    /**
                     * 判断参数 EmailIdentity 是否已赋值
                     * @return EmailIdentity 是否已赋值
                     */
                    bool EmailIdentityHasBeenSet() const;

                private:

                    /**
                     * 您的发信域名，建议使用三级以上域名。比如：mail.qcloud.com。
                     */
                    std::string m_emailIdentity;
                    bool m_emailIdentityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_CREATEEMAILIDENTITYREQUEST_H_
