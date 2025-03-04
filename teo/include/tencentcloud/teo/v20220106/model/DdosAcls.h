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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACLS_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACLS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DDoSAcl.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ddos端口过滤
                */
                class DdosAcls : public AbstractModel
                {
                public:
                    DdosAcls();
                    ~DdosAcls() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取端口过滤规则数组。
                     * @return Acl 端口过滤规则数组。
                     */
                    std::vector<DDoSAcl> GetAcl() const;

                    /**
                     * 设置端口过滤规则数组。
                     * @param Acl 端口过滤规则数组。
                     */
                    void SetAcl(const std::vector<DDoSAcl>& _acl);

                    /**
                     * 判断参数 Acl 是否已赋值
                     * @return Acl 是否已赋值
                     */
                    bool AclHasBeenSet() const;

                    /**
                     * 获取清空规则标识，取值有：
<li>off ：清空端口过滤规则列表，Acl无需填写。 ；</li>
<li>on ：配置端口过滤规则，需填写Acl参数。</li>默认值为on。
                     * @return Switch 清空规则标识，取值有：
<li>off ：清空端口过滤规则列表，Acl无需填写。 ；</li>
<li>on ：配置端口过滤规则，需填写Acl参数。</li>默认值为on。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置清空规则标识，取值有：
<li>off ：清空端口过滤规则列表，Acl无需填写。 ；</li>
<li>on ：配置端口过滤规则，需填写Acl参数。</li>默认值为on。
                     * @param Switch 清空规则标识，取值有：
<li>off ：清空端口过滤规则列表，Acl无需填写。 ；</li>
<li>on ：配置端口过滤规则，需填写Acl参数。</li>默认值为on。
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * 端口过滤规则数组。
                     */
                    std::vector<DDoSAcl> m_acl;
                    bool m_aclHasBeenSet;

                    /**
                     * 清空规则标识，取值有：
<li>off ：清空端口过滤规则列表，Acl无需填写。 ；</li>
<li>on ：配置端口过滤规则，需填写Acl参数。</li>默认值为on。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACLS_H_
