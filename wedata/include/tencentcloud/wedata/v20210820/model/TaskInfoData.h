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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFODATA_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskExtInfo.h>
#include <tencentcloud/wedata/v20210820/model/ParamInfo.h>
#include <tencentcloud/wedata/v20210820/model/DependencyConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务信息数据
                */
                class TaskInfoData : public AbstractModel
                {
                public:
                    TaskInfoData();
                    ~TaskInfoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskId 任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WorkflowId 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WorkflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectIdent 项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProjectIdent() const;

                    /**
                     * 设置项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectIdent 项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectIdent(const std::string& _projectIdent);

                    /**
                     * 判断参数 ProjectIdent 是否已赋值
                     * @return ProjectIdent 是否已赋值
                     */
                    bool ProjectIdentHasBeenSet() const;

                    /**
                     * 获取任务状态，'Y','F','O','T','INVALID' 分别表示调度中、已停止、已暂停、停止中、已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态，'Y','F','O','T','INVALID' 分别表示调度中、已停止、已暂停、停止中、已失效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，'Y','F','O','T','INVALID' 分别表示调度中、已停止、已暂停、停止中、已失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 任务状态，'Y','F','O','T','INVALID' 分别表示调度中、已停止、已暂停、停止中、已失效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderName 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFolderName() const;

                    /**
                     * 设置文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FolderName 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFolderName(const std::string& _folderName);

                    /**
                     * 判断参数 FolderName 是否已赋值
                     * @return FolderName 是否已赋值
                     */
                    bool FolderNameHasBeenSet() const;

                    /**
                     * 获取文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderId 文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FolderId 文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCharge 负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InCharge 负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取跨工作流虚拟任务标识；true标识跨工作流任务；false标识本工作流任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualFlag 跨工作流虚拟任务标识；true标识跨工作流任务；false标识本工作流任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置跨工作流虚拟任务标识；true标识跨工作流任务；false标识本工作流任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VirtualFlag 跨工作流虚拟任务标识；true标识跨工作流任务；false标识本工作流任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVirtualFlag(const bool& _virtualFlag);

                    /**
                     * 判断参数 VirtualFlag 是否已赋值
                     * @return VirtualFlag 是否已赋值
                     */
                    bool VirtualFlagHasBeenSet() const;

                    /**
                     * 获取延时实例生成时间(延时调度)，转换为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayTime 延时实例生成时间(延时调度)，转换为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置延时实例生成时间(延时调度)，转换为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DelayTime 延时实例生成时间(延时调度)，转换为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取crontab表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabExpression crontab表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置crontab表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CrontabExpression crontab表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCrontabExpression(const std::string& _crontabExpression);

                    /**
                     * 判断参数 CrontabExpression 是否已赋值
                     * @return CrontabExpression 是否已赋值
                     */
                    bool CrontabExpressionHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdate 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastUpdate 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastUpdate(const std::string& _lastUpdate);

                    /**
                     * 判断参数 LastUpdate 是否已赋值
                     * @return LastUpdate 是否已赋值
                     */
                    bool LastUpdateHasBeenSet() const;

                    /**
                     * 获取生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime 执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExecutionStartTime 执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime 执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExecutionEndTime 执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                    /**
                     * 获取周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType 周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCycleType() const;

                    /**
                     * 设置周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CycleType 周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCycleType(const int64_t& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取步长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleStep 步长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCycleStep() const;

                    /**
                     * 设置步长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CycleStep 步长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCycleStep(const int64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取延时执行时间（延时执行) 对应为 开始时间 状态为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupTime 延时执行时间（延时执行) 对应为 开始时间 状态为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStartupTime() const;

                    /**
                     * 设置延时执行时间（延时执行) 对应为 开始时间 状态为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartupTime 延时执行时间（延时执行) 对应为 开始时间 状态为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartupTime(const int64_t& _startupTime);

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取重试等待时间,单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryWait 重试等待时间,单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRetryWait() const;

                    /**
                     * 设置重试等待时间,单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RetryWait 重试等待时间,单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRetryWait(const int64_t& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取是否可重试
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Retriable 是否可重试
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRetriable() const;

                    /**
                     * 设置是否可重试
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Retriable 是否可重试
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRetriable(const int64_t& _retriable);

                    /**
                     * 判断参数 Retriable 是否已赋值
                     * @return Retriable 是否已赋值
                     */
                    bool RetriableHasBeenSet() const;

                    /**
                     * 获取调度扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction 调度扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置调度扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskAction 调度扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TryLimit 运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTryLimit() const;

                    /**
                     * 设置运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TryLimit 运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTryLimit(const int64_t& _tryLimit);

                    /**
                     * 判断参数 TryLimit 是否已赋值
                     * @return TryLimit 是否已赋值
                     */
                    bool TryLimitHasBeenSet() const;

                    /**
                     * 获取运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunPriority 运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRunPriority() const;

                    /**
                     * 设置运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunPriority 运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunPriority(const int64_t& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取指定的运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerIp 指定的运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置指定的运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BrokerIp 指定的运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取最小数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinDateTime 最小数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMinDateTime() const;

                    /**
                     * 设置最小数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MinDateTime 最小数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMinDateTime(const std::string& _minDateTime);

                    /**
                     * 判断参数 MinDateTime 是否已赋值
                     * @return MinDateTime 是否已赋值
                     */
                    bool MinDateTimeHasBeenSet() const;

                    /**
                     * 获取最大数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDateTime 最大数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMaxDateTime() const;

                    /**
                     * 设置最大数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxDateTime 最大数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxDateTime(const std::string& _maxDateTime);

                    /**
                     * 判断参数 MaxDateTime 是否已赋值
                     * @return MaxDateTime 是否已赋值
                     */
                    bool MaxDateTimeHasBeenSet() const;

                    /**
                     * 获取是否自身依赖 是1 否2 并行3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfDepend 是否自身依赖 是1 否2 并行3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSelfDepend() const;

                    /**
                     * 设置是否自身依赖 是1 否2 并行3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SelfDepend 是否自身依赖 是1 否2 并行3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSelfDepend(const int64_t& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     */
                    bool SelfDependHasBeenSet() const;

                    /**
                     * 获取扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskExt 扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskExtInfo> GetTaskExt() const;

                    /**
                     * 设置扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskExt 扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskExt(const std::vector<TaskExtInfo>& _taskExt);

                    /**
                     * 判断参数 TaskExt 是否已赋值
                     * @return TaskExt 是否已赋值
                     */
                    bool TaskExtHasBeenSet() const;

                    /**
                     * 获取任务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Notes 任务备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置任务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Notes 任务备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YarnQueue 队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param YarnQueue 队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetYarnQueue(const std::string& _yarnQueue);

                    /**
                     * 判断参数 YarnQueue 是否已赋值
                     * @return YarnQueue 是否已赋值
                     */
                    bool YarnQueueHasBeenSet() const;

                    /**
                     * 获取任务版本是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Submit 任务版本是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置任务版本是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Submit 任务版本是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取最新调度计划变更时间 仅生产态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSchedulerCommitTime 最新调度计划变更时间 仅生产态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastSchedulerCommitTime() const;

                    /**
                     * 设置最新调度计划变更时间 仅生产态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastSchedulerCommitTime 最新调度计划变更时间 仅生产态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastSchedulerCommitTime(const std::string& _lastSchedulerCommitTime);

                    /**
                     * 判断参数 LastSchedulerCommitTime 是否已赋值
                     * @return LastSchedulerCommitTime 是否已赋值
                     */
                    bool LastSchedulerCommitTimeHasBeenSet() const;

                    /**
                     * 获取仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NormalizedJobStartTime 仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNormalizedJobStartTime() const;

                    /**
                     * 设置仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NormalizedJobStartTime 仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNormalizedJobStartTime(const std::string& _normalizedJobStartTime);

                    /**
                     * 判断参数 NormalizedJobStartTime 是否已赋值
                     * @return NormalizedJobStartTime 是否已赋值
                     */
                    bool NormalizedJobStartTimeHasBeenSet() const;

                    /**
                     * 获取源数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceServer 源数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSourceServer() const;

                    /**
                     * 设置源数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SourceServer 源数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSourceServer(const std::string& _sourceServer);

                    /**
                     * 判断参数 SourceServer 是否已赋值
                     * @return SourceServer 是否已赋值
                     */
                    bool SourceServerHasBeenSet() const;

                    /**
                     * 获取创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creater 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreater() const;

                    /**
                     * 设置创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Creater 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreater(const std::string& _creater);

                    /**
                     * 判断参数 Creater 是否已赋值
                     * @return Creater 是否已赋值
                     */
                    bool CreaterHasBeenSet() const;

                    /**
                     * 获取分支，依赖关系，and/or, 默认and
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyRel 分支，依赖关系，and/or, 默认and
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDependencyRel() const;

                    /**
                     * 设置分支，依赖关系，and/or, 默认and
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DependencyRel 分支，依赖关系，and/or, 默认and
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDependencyRel(const std::string& _dependencyRel);

                    /**
                     * 判断参数 DependencyRel 是否已赋值
                     * @return DependencyRel 是否已赋值
                     */
                    bool DependencyRelHasBeenSet() const;

                    /**
                     * 获取是否支持工作流依赖 yes / no 默认 no
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyWorkflow 是否支持工作流依赖 yes / no 默认 no
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置是否支持工作流依赖 yes / no 默认 no
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DependencyWorkflow 是否支持工作流依赖 yes / no 默认 no
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDependencyWorkflow(const std::string& _dependencyWorkflow);

                    /**
                     * 判断参数 DependencyWorkflow 是否已赋值
                     * @return DependencyWorkflow 是否已赋值
                     */
                    bool DependencyWorkflowHasBeenSet() const;

                    /**
                     * 获取任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamInfo> GetParams() const;

                    /**
                     * 设置任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Params 任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetParams(const std::vector<ParamInfo>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取最后修改的人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUser 最后修改的人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置最后修改的人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateUser 最后修改的人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取最后修改的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 最后修改的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后修改的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 最后修改的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取最后修改的人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserId 最后修改的人Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置最后修改的人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateUserId 最后修改的人Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateUserId(const std::string& _updateUserId);

                    /**
                     * 判断参数 UpdateUserId 是否已赋值
                     * @return UpdateUserId 是否已赋值
                     */
                    bool UpdateUserIdHasBeenSet() const;

                    /**
                     * 获取调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerDesc 调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSchedulerDesc() const;

                    /**
                     * 设置调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SchedulerDesc 调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSchedulerDesc(const std::string& _schedulerDesc);

                    /**
                     * 判断参数 SchedulerDesc 是否已赋值
                     * @return SchedulerDesc 是否已赋值
                     */
                    bool SchedulerDescHasBeenSet() const;

                    /**
                     * 获取资源组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroup 资源组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置资源组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceGroup 资源组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取版本提交说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionDesc 版本提交说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersionDesc() const;

                    /**
                     * 设置版本提交说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VersionDesc 版本提交说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersionDesc(const std::string& _versionDesc);

                    /**
                     * 判断参数 VersionDesc 是否已赋值
                     * @return VersionDesc 是否已赋值
                     */
                    bool VersionDescHasBeenSet() const;

                    /**
                     * 获取真实工作流Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealWorkflowId 真实工作流Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRealWorkflowId() const;

                    /**
                     * 设置真实工作流Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealWorkflowId 真实工作流Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealWorkflowId(const std::string& _realWorkflowId);

                    /**
                     * 判断参数 RealWorkflowId 是否已赋值
                     * @return RealWorkflowId 是否已赋值
                     */
                    bool RealWorkflowIdHasBeenSet() const;

                    /**
                     * 获取目标数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetServer 目标数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetServer() const;

                    /**
                     * 设置目标数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetServer 目标数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetServer(const std::string& _targetServer);

                    /**
                     * 判断参数 TargetServer 是否已赋值
                     * @return TargetServer 是否已赋值
                     */
                    bool TargetServerHasBeenSet() const;

                    /**
                     * 获取依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependencyConfigs 依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependencyConfig> GetDependencyConfigs() const;

                    /**
                     * 设置依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DependencyConfigs 依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDependencyConfigs(const std::vector<DependencyConfig>& _dependencyConfigs);

                    /**
                     * 判断参数 DependencyConfigs 是否已赋值
                     * @return DependencyConfigs 是否已赋值
                     */
                    bool DependencyConfigsHasBeenSet() const;

                    /**
                     * 获取虚拟任务状态1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualTaskStatus 虚拟任务状态1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVirtualTaskStatus() const;

                    /**
                     * 设置虚拟任务状态1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VirtualTaskStatus 虚拟任务状态1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVirtualTaskStatus(const std::string& _virtualTaskStatus);

                    /**
                     * 判断参数 VirtualTaskStatus 是否已赋值
                     * @return VirtualTaskStatus 是否已赋值
                     */
                    bool VirtualTaskStatusHasBeenSet() const;

                    /**
                     * 获取虚拟任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualTaskId 虚拟任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVirtualTaskId() const;

                    /**
                     * 设置虚拟任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VirtualTaskId 虚拟任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVirtualTaskId(const std::string& _virtualTaskId);

                    /**
                     * 判断参数 VirtualTaskId 是否已赋值
                     * @return VirtualTaskId 是否已赋值
                     */
                    bool VirtualTaskIdHasBeenSet() const;

                private:

                    /**
                     * 任务Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 工作流id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectIdent;
                    bool m_projectIdentHasBeenSet;

                    /**
                     * 任务状态，'Y','F','O','T','INVALID' 分别表示调度中、已停止、已暂停、停止中、已失效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 文件夹名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderName;
                    bool m_folderNameHasBeenSet;

                    /**
                     * 文件夹id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 跨工作流虚拟任务标识；true标识跨工作流任务；false标识本工作流任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                    /**
                     * 延时实例生成时间(延时调度)，转换为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * crontab表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * 生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 执行时间左闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 执行时间右闭区间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * 周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 步长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 延时执行时间（延时执行) 对应为 开始时间 状态为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * 重试等待时间,单位分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * 是否可重试
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retriable;
                    bool m_retriableHasBeenSet;

                    /**
                     * 调度扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 运行次数限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * 运行优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 指定的运行节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 最小数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_minDateTime;
                    bool m_minDateTimeHasBeenSet;

                    /**
                     * 最大数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maxDateTime;
                    bool m_maxDateTimeHasBeenSet;

                    /**
                     * 是否自身依赖 是1 否2 并行3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * 扩展属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskExtInfo> m_taskExt;
                    bool m_taskExtHasBeenSet;

                    /**
                     * 任务备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * 队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * 任务版本是否已提交
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * 最新调度计划变更时间 仅生产态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastSchedulerCommitTime;
                    bool m_lastSchedulerCommitTimeHasBeenSet;

                    /**
                     * 仅生产态存储于生产态序列化任务信息, 减少base CPU重复密集计算
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_normalizedJobStartTime;
                    bool m_normalizedJobStartTimeHasBeenSet;

                    /**
                     * 源数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceServer;
                    bool m_sourceServerHasBeenSet;

                    /**
                     * 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creater;
                    bool m_createrHasBeenSet;

                    /**
                     * 分支，依赖关系，and/or, 默认and
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyRel;
                    bool m_dependencyRelHasBeenSet;

                    /**
                     * 是否支持工作流依赖 yes / no 默认 no
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * 任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamInfo> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 最后修改的人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * 最后修改的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 最后修改的人Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * 调度计划
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDesc;
                    bool m_schedulerDescHasBeenSet;

                    /**
                     * 资源组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * 版本提交说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionDesc;
                    bool m_versionDescHasBeenSet;

                    /**
                     * 真实工作流Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realWorkflowId;
                    bool m_realWorkflowIdHasBeenSet;

                    /**
                     * 目标数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetServer;
                    bool m_targetServerHasBeenSet;

                    /**
                     * 依赖配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependencyConfig> m_dependencyConfigs;
                    bool m_dependencyConfigsHasBeenSet;

                    /**
                     * 虚拟任务状态1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualTaskStatus;
                    bool m_virtualTaskStatusHasBeenSet;

                    /**
                     * 虚拟任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualTaskId;
                    bool m_virtualTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFODATA_H_
