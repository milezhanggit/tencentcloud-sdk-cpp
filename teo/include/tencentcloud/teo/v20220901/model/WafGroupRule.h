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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 托管规则详情
                */
                class WafGroupRule : public AbstractModel
                {
                public:
                    WafGroupRule();
                    ~WafGroupRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则id。
                     * @return RuleId 规则id。
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则id。
                     * @param RuleId 规则id。
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则描述。
                     * @return Description 规则描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述。
                     * @param Description 规则描述。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取等级描述。
                     * @return RuleLevelDesc 等级描述。
                     */
                    std::string GetRuleLevelDesc() const;

                    /**
                     * 设置等级描述。
                     * @param RuleLevelDesc 等级描述。
                     */
                    void SetRuleLevelDesc(const std::string& _ruleLevelDesc);

                    /**
                     * 判断参数 RuleLevelDesc 是否已赋值
                     * @return RuleLevelDesc 是否已赋值
                     */
                    bool RuleLevelDescHasBeenSet() const;

                    /**
                     * 获取规则标签。部分类型的规则不存在该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTags 规则标签。部分类型的规则不存在该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetRuleTags() const;

                    /**
                     * 设置规则标签。部分类型的规则不存在该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleTags 规则标签。部分类型的规则不存在该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleTags(const std::vector<std::string>& _ruleTags);

                    /**
                     * 判断参数 RuleTags 是否已赋值
                     * @return RuleTags 是否已赋值
                     */
                    bool RuleTagsHasBeenSet() const;

                    /**
                     * 获取更新时间，格式为YYYY-MM-DD hh:mm:ss。部分类型的规则不存在该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间，格式为YYYY-MM-DD hh:mm:ss。部分类型的规则不存在该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，格式为YYYY-MM-DD hh:mm:ss。部分类型的规则不存在该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间，格式为YYYY-MM-DD hh:mm:ss。部分类型的规则不存在该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取状态，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>为空时对应接口Status无意义，例如仅查询规则详情时。
                     * @return Status 状态，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>为空时对应接口Status无意义，例如仅查询规则详情时。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>为空时对应接口Status无意义，例如仅查询规则详情时。
                     * @param Status 状态，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>为空时对应接口Status无意义，例如仅查询规则详情时。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规则类型名。
                     * @return RuleTypeName 规则类型名。
                     */
                    std::string GetRuleTypeName() const;

                    /**
                     * 设置规则类型名。
                     * @param RuleTypeName 规则类型名。
                     */
                    void SetRuleTypeName(const std::string& _ruleTypeName);

                    /**
                     * 判断参数 RuleTypeName 是否已赋值
                     * @return RuleTypeName 是否已赋值
                     */
                    bool RuleTypeNameHasBeenSet() const;

                    /**
                     * 获取规则类型id。
                     * @return RuleTypeId 规则类型id。
                     */
                    int64_t GetRuleTypeId() const;

                    /**
                     * 设置规则类型id。
                     * @param RuleTypeId 规则类型id。
                     */
                    void SetRuleTypeId(const int64_t& _ruleTypeId);

                    /**
                     * 判断参数 RuleTypeId 是否已赋值
                     * @return RuleTypeId 是否已赋值
                     */
                    bool RuleTypeIdHasBeenSet() const;

                    /**
                     * 获取规则类型描述。
                     * @return RuleTypeDesc 规则类型描述。
                     */
                    std::string GetRuleTypeDesc() const;

                    /**
                     * 设置规则类型描述。
                     * @param RuleTypeDesc 规则类型描述。
                     */
                    void SetRuleTypeDesc(const std::string& _ruleTypeDesc);

                    /**
                     * 判断参数 RuleTypeDesc 是否已赋值
                     * @return RuleTypeDesc 是否已赋值
                     */
                    bool RuleTypeDescHasBeenSet() const;

                private:

                    /**
                     * 规则id。
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 等级描述。
                     */
                    std::string m_ruleLevelDesc;
                    bool m_ruleLevelDescHasBeenSet;

                    /**
                     * 规则标签。部分类型的规则不存在该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ruleTags;
                    bool m_ruleTagsHasBeenSet;

                    /**
                     * 更新时间，格式为YYYY-MM-DD hh:mm:ss。部分类型的规则不存在该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 状态，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>为空时对应接口Status无意义，例如仅查询规则详情时。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则类型名。
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * 规则类型id。
                     */
                    int64_t m_ruleTypeId;
                    bool m_ruleTypeIdHasBeenSet;

                    /**
                     * 规则类型描述。
                     */
                    std::string m_ruleTypeDesc;
                    bool m_ruleTypeDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPRULE_H_
