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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULETASK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/MediaMetaData.h>
#include <tencentcloud/mps/v20190612/model/ActivityResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 编排任务信息
                */
                class ScheduleTask : public AbstractModel
                {
                public:
                    ScheduleTask();
                    ~ScheduleTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取编排任务 ID。
                     * @return TaskId 编排任务 ID。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置编排任务 ID。
                     * @param TaskId 编排任务 ID。
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * @return Status 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     * @param Status 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取媒体处理的目标文件信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputInfo 媒体处理的目标文件信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置媒体处理的目标文件信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InputInfo 媒体处理的目标文件信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaData 原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MetaData 原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取编排任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityResultSet 编排任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ActivityResult> GetActivityResultSet() const;

                    /**
                     * 设置编排任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ActivityResultSet 编排任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetActivityResultSet(const std::vector<ActivityResult>& _activityResultSet);

                    /**
                     * 判断参数 ActivityResultSet 是否已赋值
                     * @return ActivityResultSet 是否已赋值
                     */
                    bool ActivityResultSetHasBeenSet() const;

                private:

                    /**
                     * 编排任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 媒体处理的目标文件信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * 编排任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ActivityResult> m_activityResultSet;
                    bool m_activityResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULETASK_H_
