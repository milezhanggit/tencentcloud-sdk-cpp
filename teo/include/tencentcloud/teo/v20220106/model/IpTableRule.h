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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_IPTABLERULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_IPTABLERULE_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 详细规则。
                */
                class IpTableRule : public AbstractModel
                {
                public:
                    IpTableRule();
                    ~IpTableRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleID 规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleID 规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取处置动作。
1. drop 拦截
2. trans放行
3. monitor观察
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 处置动作。
1. drop 拦截
2. trans放行
3. monitor观察
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAction() const;

                    /**
                     * 设置处置动作。
1. drop 拦截
2. trans放行
3. monitor观察
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Action 处置动作。
1. drop 拦截
2. trans放行
3. monitor观察
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取类型匹配。
1. ip 根据ip
2. area 根据区域
3. ua 根据User-Agent
4. referer 根据Referer
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchFrom 类型匹配。
1. ip 根据ip
2. area 根据区域
3. ua 根据User-Agent
4. referer 根据Referer
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMatchFrom() const;

                    /**
                     * 设置类型匹配。
1. ip 根据ip
2. area 根据区域
3. ua 根据User-Agent
4. referer 根据Referer
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MatchFrom 类型匹配。
1. ip 根据ip
2. area 根据区域
3. ua 根据User-Agent
4. referer 根据Referer
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMatchFrom(const std::string& _matchFrom);

                    /**
                     * 判断参数 MatchFrom 是否已赋值
                     * @return MatchFrom 是否已赋值
                     */
                    bool MatchFromHasBeenSet() const;

                    /**
                     * 获取匹配内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchContent 匹配内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置匹配内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MatchContent 匹配内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     */
                    bool MatchContentHasBeenSet() const;

                    /**
                     * 获取更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 处置动作。
1. drop 拦截
2. trans放行
3. monitor观察
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 类型匹配。
1. ip 根据ip
2. area 根据区域
3. ua 根据User-Agent
4. referer 根据Referer
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * 匹配内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                    /**
                     * 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_IPTABLERULE_H_
