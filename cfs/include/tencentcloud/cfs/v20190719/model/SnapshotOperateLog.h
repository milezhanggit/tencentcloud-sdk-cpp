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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTOPERATELOG_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTOPERATELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 快照操作日志
                */
                class SnapshotOperateLog : public AbstractModel
                {
                public:
                    SnapshotOperateLog();
                    ~SnapshotOperateLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作类型
                     * @return Action 操作类型
                     */
                    std::string GetAction() const;

                    /**
                     * 设置操作类型
                     * @param Action 操作类型
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取操作时间
                     * @return ActionTime 操作时间
                     */
                    std::string GetActionTime() const;

                    /**
                     * 设置操作时间
                     * @param ActionTime 操作时间
                     */
                    void SetActionTime(const std::string& _actionTime);

                    /**
                     * 判断参数 ActionTime 是否已赋值
                     * @return ActionTime 是否已赋值
                     */
                    bool ActionTimeHasBeenSet() const;

                    /**
                     * 获取操作名称
                     * @return ActionName 操作名称
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置操作名称
                     * @param ActionName 操作名称
                     */
                    void SetActionName(const std::string& _actionName);

                    /**
                     * 判断参数 ActionName 是否已赋值
                     * @return ActionName 是否已赋值
                     */
                    bool ActionNameHasBeenSet() const;

                    /**
                     * 获取操作者
                     * @return Operator 操作者
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者
                     * @param Operator 操作者
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取结果
                     * @return Result 结果
                     */
                    uint64_t GetResult() const;

                    /**
                     * 设置结果
                     * @param Result 结果
                     */
                    void SetResult(const uint64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 操作类型
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 操作时间
                     */
                    std::string m_actionTime;
                    bool m_actionTimeHasBeenSet;

                    /**
                     * 操作名称
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * 操作者
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 结果
                     */
                    uint64_t m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTOPERATELOG_H_
