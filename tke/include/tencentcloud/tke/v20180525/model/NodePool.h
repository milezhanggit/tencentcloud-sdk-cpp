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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/NodeCountSummary.h>
#include <tencentcloud/tke/v20180525/model/Tag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 节点池描述
                */
                class NodePool : public AbstractModel
                {
                public:
                    NodePool();
                    ~NodePool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NodePoolId 资源池id
                     * @return NodePoolId NodePoolId 资源池id
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置NodePoolId 资源池id
                     * @param NodePoolId NodePoolId 资源池id
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取Name 资源池名称
                     * @return Name Name 资源池名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name 资源池名称
                     * @param Name Name 资源池名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取ClusterInstanceId 集群实例id
                     * @return ClusterInstanceId ClusterInstanceId 集群实例id
                     */
                    std::string GetClusterInstanceId() const;

                    /**
                     * 设置ClusterInstanceId 集群实例id
                     * @param ClusterInstanceId ClusterInstanceId 集群实例id
                     */
                    void SetClusterInstanceId(const std::string& _clusterInstanceId);

                    /**
                     * 判断参数 ClusterInstanceId 是否已赋值
                     * @return ClusterInstanceId 是否已赋值
                     */
                    bool ClusterInstanceIdHasBeenSet() const;

                    /**
                     * 获取LifeState 状态，当前节点池生命周期状态包括：creating，normal，updating，deleting，deleted
                     * @return LifeState LifeState 状态，当前节点池生命周期状态包括：creating，normal，updating，deleting，deleted
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置LifeState 状态，当前节点池生命周期状态包括：creating，normal，updating，deleting，deleted
                     * @param LifeState LifeState 状态，当前节点池生命周期状态包括：creating，normal，updating，deleting，deleted
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取LaunchConfigurationId 配置
                     * @return LaunchConfigurationId LaunchConfigurationId 配置
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置LaunchConfigurationId 配置
                     * @param LaunchConfigurationId LaunchConfigurationId 配置
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取AutoscalingGroupId 分组id
                     * @return AutoscalingGroupId AutoscalingGroupId 分组id
                     */
                    std::string GetAutoscalingGroupId() const;

                    /**
                     * 设置AutoscalingGroupId 分组id
                     * @param AutoscalingGroupId AutoscalingGroupId 分组id
                     */
                    void SetAutoscalingGroupId(const std::string& _autoscalingGroupId);

                    /**
                     * 判断参数 AutoscalingGroupId 是否已赋值
                     * @return AutoscalingGroupId 是否已赋值
                     */
                    bool AutoscalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Labels 标签
                     * @return Labels Labels 标签
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Labels 标签
                     * @param Labels Labels 标签
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Taints 污点标记
                     * @return Taints Taints 污点标记
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Taints 污点标记
                     * @param Taints Taints 污点标记
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取NodeCountSummary 节点列表
                     * @return NodeCountSummary NodeCountSummary 节点列表
                     */
                    NodeCountSummary GetNodeCountSummary() const;

                    /**
                     * 设置NodeCountSummary 节点列表
                     * @param NodeCountSummary NodeCountSummary 节点列表
                     */
                    void SetNodeCountSummary(const NodeCountSummary& _nodeCountSummary);

                    /**
                     * 判断参数 NodeCountSummary 是否已赋值
                     * @return NodeCountSummary 是否已赋值
                     */
                    bool NodeCountSummaryHasBeenSet() const;

                    /**
                     * 获取状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoscalingGroupStatus 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAutoscalingGroupStatus() const;

                    /**
                     * 设置状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoscalingGroupStatus 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoscalingGroupStatus(const std::string& _autoscalingGroupStatus);

                    /**
                     * 判断参数 AutoscalingGroupStatus 是否已赋值
                     * @return AutoscalingGroupStatus 是否已赋值
                     */
                    bool AutoscalingGroupStatusHasBeenSet() const;

                    /**
                     * 获取最大节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxNodesNum 最大节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxNodesNum() const;

                    /**
                     * 设置最大节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxNodesNum 最大节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxNodesNum(const int64_t& _maxNodesNum);

                    /**
                     * 判断参数 MaxNodesNum 是否已赋值
                     * @return MaxNodesNum 是否已赋值
                     */
                    bool MaxNodesNumHasBeenSet() const;

                    /**
                     * 获取最小节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinNodesNum 最小节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMinNodesNum() const;

                    /**
                     * 设置最小节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MinNodesNum 最小节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMinNodesNum(const int64_t& _minNodesNum);

                    /**
                     * 判断参数 MinNodesNum 是否已赋值
                     * @return MinNodesNum 是否已赋值
                     */
                    bool MinNodesNumHasBeenSet() const;

                    /**
                     * 获取期望的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DesiredNodesNum 期望的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDesiredNodesNum() const;

                    /**
                     * 设置期望的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DesiredNodesNum 期望的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDesiredNodesNum(const int64_t& _desiredNodesNum);

                    /**
                     * 判断参数 DesiredNodesNum 是否已赋值
                     * @return DesiredNodesNum 是否已赋值
                     */
                    bool DesiredNodesNumHasBeenSet() const;

                    /**
                     * 获取节点池osName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodePoolOs 节点池osName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNodePoolOs() const;

                    /**
                     * 设置节点池osName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodePoolOs 节点池osName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodePoolOs(const std::string& _nodePoolOs);

                    /**
                     * 判断参数 NodePoolOs 是否已赋值
                     * @return NodePoolOs 是否已赋值
                     */
                    bool NodePoolOsHasBeenSet() const;

                    /**
                     * 获取容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsCustomizeType 容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OsCustomizeType 容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageId 镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ImageId 镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取集群属于节点podCIDR大小自定义模式时，节点池需要带上pod数量属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DesiredPodNum 集群属于节点podCIDR大小自定义模式时，节点池需要带上pod数量属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDesiredPodNum() const;

                    /**
                     * 设置集群属于节点podCIDR大小自定义模式时，节点池需要带上pod数量属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DesiredPodNum 集群属于节点podCIDR大小自定义模式时，节点池需要带上pod数量属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDesiredPodNum(const int64_t& _desiredPodNum);

                    /**
                     * 判断参数 DesiredPodNum 是否已赋值
                     * @return DesiredPodNum 是否已赋值
                     */
                    bool DesiredPodNumHasBeenSet() const;

                    /**
                     * 获取用户自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserScript 用户自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置用户自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserScript 用户自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserScript(const std::string& _userScript);

                    /**
                     * 判断参数 UserScript 是否已赋值
                     * @return UserScript 是否已赋值
                     */
                    bool UserScriptHasBeenSet() const;

                    /**
                     * 获取资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeletionProtection 删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeletionProtection 删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * NodePoolId 资源池id
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * Name 资源池名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * ClusterInstanceId 集群实例id
                     */
                    std::string m_clusterInstanceId;
                    bool m_clusterInstanceIdHasBeenSet;

                    /**
                     * LifeState 状态，当前节点池生命周期状态包括：creating，normal，updating，deleting，deleted
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * LaunchConfigurationId 配置
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * AutoscalingGroupId 分组id
                     */
                    std::string m_autoscalingGroupId;
                    bool m_autoscalingGroupIdHasBeenSet;

                    /**
                     * Labels 标签
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Taints 污点标记
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * NodeCountSummary 节点列表
                     */
                    NodeCountSummary m_nodeCountSummary;
                    bool m_nodeCountSummaryHasBeenSet;

                    /**
                     * 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoscalingGroupStatus;
                    bool m_autoscalingGroupStatusHasBeenSet;

                    /**
                     * 最大节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxNodesNum;
                    bool m_maxNodesNumHasBeenSet;

                    /**
                     * 最小节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minNodesNum;
                    bool m_minNodesNumHasBeenSet;

                    /**
                     * 期望的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_desiredNodesNum;
                    bool m_desiredNodesNumHasBeenSet;

                    /**
                     * 节点池osName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodePoolOs;
                    bool m_nodePoolOsHasBeenSet;

                    /**
                     * 容器的镜像版本，"DOCKER_CUSTOMIZE"(容器定制版),"GENERAL"(普通版本，默认值)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * 镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 集群属于节点podCIDR大小自定义模式时，节点池需要带上pod数量属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_desiredPodNum;
                    bool m_desiredPodNumHasBeenSet;

                    /**
                     * 用户自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                    /**
                     * 资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 删除保护开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOL_H_
