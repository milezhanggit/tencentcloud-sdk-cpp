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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATERULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/RuleItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CreateRule请求参数结构体
                */
                class CreateRuleRequest : public AbstractModel
                {
                public:
                    CreateRuleRequest();
                    ~CreateRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param ZoneId 站点 ID。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取规则名称，名称字符串长度 1～255。
                     * @return RuleName 规则名称，名称字符串长度 1～255。
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称，名称字符串长度 1～255。
                     * @param RuleName 规则名称，名称字符串长度 1～255。
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则状态，取值有：
<li> enable: 启用； </li>
<li> disable: 未启用。</li>
                     * @return Status 规则状态，取值有：
<li> enable: 启用； </li>
<li> disable: 未启用。</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则状态，取值有：
<li> enable: 启用； </li>
<li> disable: 未启用。</li>
                     * @param Status 规则状态，取值有：
<li> enable: 启用； </li>
<li> disable: 未启用。</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规则内容。
                     * @return Rules 规则内容。
                     */
                    std::vector<RuleItem> GetRules() const;

                    /**
                     * 设置规则内容。
                     * @param Rules 规则内容。
                     */
                    void SetRules(const std::vector<RuleItem>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 规则名称，名称字符串长度 1～255。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则状态，取值有：
<li> enable: 启用； </li>
<li> disable: 未启用。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则内容。
                     */
                    std::vector<RuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATERULEREQUEST_H_
