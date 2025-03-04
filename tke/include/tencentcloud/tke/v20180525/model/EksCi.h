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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EKSCI_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EKSCI_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Container.h>
#include <tencentcloud/tke/v20180525/model/EksCiVolume.h>
#include <tencentcloud/tke/v20180525/model/SecurityContext.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * EksContainerInstance实例类型
                */
                class EksCi : public AbstractModel
                {
                public:
                    EksCi();
                    ~EksCi() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取EKS Cotainer Instance Id
                     * @return EksCiId EKS Cotainer Instance Id
                     */
                    std::string GetEksCiId() const;

                    /**
                     * 设置EKS Cotainer Instance Id
                     * @param EksCiId EKS Cotainer Instance Id
                     */
                    void SetEksCiId(const std::string& _eksCiId);

                    /**
                     * 判断参数 EksCiId 是否已赋值
                     * @return EksCiId 是否已赋值
                     */
                    bool EksCiIdHasBeenSet() const;

                    /**
                     * 获取EKS Cotainer Instance Name
                     * @return EksCiName EKS Cotainer Instance Name
                     */
                    std::string GetEksCiName() const;

                    /**
                     * 设置EKS Cotainer Instance Name
                     * @param EksCiName EKS Cotainer Instance Name
                     */
                    void SetEksCiName(const std::string& _eksCiName);

                    /**
                     * 判断参数 EksCiName 是否已赋值
                     * @return EksCiName 是否已赋值
                     */
                    bool EksCiNameHasBeenSet() const;

                    /**
                     * 获取内存大小
                     * @return Memory 内存大小
                     */
                    double GetMemory() const;

                    /**
                     * 设置内存大小
                     * @param Memory 内存大小
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取CPU大小
                     * @return Cpu CPU大小
                     */
                    double GetCpu() const;

                    /**
                     * 设置CPU大小
                     * @param Cpu CPU大小
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取安全组ID
                     * @return SecurityGroupIds 安全组ID
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID
                     * @param SecurityGroupIds 安全组ID
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取容器组的重启策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestartPolicy 容器组的重启策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 设置容器组的重启策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RestartPolicy 容器组的重启策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRestartPolicy(const std::string& _restartPolicy);

                    /**
                     * 判断参数 RestartPolicy 是否已赋值
                     * @return RestartPolicy 是否已赋值
                     */
                    bool RestartPolicyHasBeenSet() const;

                    /**
                     * 获取返回容器组创建状态：Pending，Running，Succeeded，Failed。其中：
Failed （运行失败）指的容器组退出，RestartPolilcy为Never， 有容器exitCode非0；
Succeeded（运行成功）指的是容器组退出了，RestartPolicy为Never或onFailure，所有容器exitCode都为0；
Failed和Succeeded这两种状态都会停止运行，停止计费。
Pending是创建中，Running是 运行中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 返回容器组创建状态：Pending，Running，Succeeded，Failed。其中：
Failed （运行失败）指的容器组退出，RestartPolilcy为Never， 有容器exitCode非0；
Succeeded（运行成功）指的是容器组退出了，RestartPolicy为Never或onFailure，所有容器exitCode都为0；
Failed和Succeeded这两种状态都会停止运行，停止计费。
Pending是创建中，Running是 运行中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置返回容器组创建状态：Pending，Running，Succeeded，Failed。其中：
Failed （运行失败）指的容器组退出，RestartPolilcy为Never， 有容器exitCode非0；
Succeeded（运行成功）指的是容器组退出了，RestartPolicy为Never或onFailure，所有容器exitCode都为0；
Failed和Succeeded这两种状态都会停止运行，停止计费。
Pending是创建中，Running是 运行中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 返回容器组创建状态：Pending，Running，Succeeded，Failed。其中：
Failed （运行失败）指的容器组退出，RestartPolilcy为Never， 有容器exitCode非0；
Succeeded（运行成功）指的是容器组退出了，RestartPolicy为Never或onFailure，所有容器exitCode都为0；
Failed和Succeeded这两种状态都会停止运行，停止计费。
Pending是创建中，Running是 运行中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取接到请求后的系统创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime 接到请求后的系统创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置接到请求后的系统创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreationTime 接到请求后的系统创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取容器全部成功退出后的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SucceededTime 容器全部成功退出后的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSucceededTime() const;

                    /**
                     * 设置容器全部成功退出后的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SucceededTime 容器全部成功退出后的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSucceededTime(const std::string& _succeededTime);

                    /**
                     * 判断参数 SucceededTime 是否已赋值
                     * @return SucceededTime 是否已赋值
                     */
                    bool SucceededTimeHasBeenSet() const;

                    /**
                     * 获取容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Containers 容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Container> GetContainers() const;

                    /**
                     * 设置容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Containers 容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContainers(const std::vector<Container>& _containers);

                    /**
                     * 判断参数 Containers 是否已赋值
                     * @return Containers 是否已赋值
                     */
                    bool ContainersHasBeenSet() const;

                    /**
                     * 获取数据卷信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EksCiVolume 数据卷信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EksCiVolume GetEksCiVolume() const;

                    /**
                     * 设置数据卷信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EksCiVolume 数据卷信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEksCiVolume(const EksCiVolume& _eksCiVolume);

                    /**
                     * 判断参数 EksCiVolume 是否已赋值
                     * @return EksCiVolume 是否已赋值
                     */
                    bool EksCiVolumeHasBeenSet() const;

                    /**
                     * 获取容器组运行的安全上下文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityContext 容器组运行的安全上下文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SecurityContext GetSecurityContext() const;

                    /**
                     * 设置容器组运行的安全上下文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SecurityContext 容器组运行的安全上下文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSecurityContext(const SecurityContext& _securityContext);

                    /**
                     * 判断参数 SecurityContext 是否已赋值
                     * @return SecurityContext 是否已赋值
                     */
                    bool SecurityContextHasBeenSet() const;

                    /**
                     * 获取内网ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIp 内网ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PrivateIp 内网ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取容器实例绑定的Eip地址，注意可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EipAddress 容器实例绑定的Eip地址，注意可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEipAddress() const;

                    /**
                     * 设置容器实例绑定的Eip地址，注意可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EipAddress 容器实例绑定的Eip地址，注意可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEipAddress(const std::string& _eipAddress);

                    /**
                     * 判断参数 EipAddress 是否已赋值
                     * @return EipAddress 是否已赋值
                     */
                    bool EipAddressHasBeenSet() const;

                    /**
                     * 获取GPU类型。如无使用GPU则不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuType GPU类型。如无使用GPU则不返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置GPU类型。如无使用GPU则不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GpuType GPU类型。如无使用GPU则不返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取CPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuType CPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置CPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CpuType CPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取GPU卡数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuCount GPU卡数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetGpuCount() const;

                    /**
                     * 设置GPU卡数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GpuCount GPU卡数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGpuCount(const uint64_t& _gpuCount);

                    /**
                     * 判断参数 GpuCount 是否已赋值
                     * @return GpuCount 是否已赋值
                     */
                    bool GpuCountHasBeenSet() const;

                    /**
                     * 获取实例所属VPC的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 实例所属VPC的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置实例所属VPC的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 实例所属VPC的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取实例所属子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 实例所属子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置实例所属子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId 实例所属子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取初始化容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitContainers 初始化容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Container> GetInitContainers() const;

                    /**
                     * 设置初始化容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InitContainers 初始化容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInitContainers(const std::vector<Container>& _initContainers);

                    /**
                     * 判断参数 InitContainers 是否已赋值
                     * @return InitContainers 是否已赋值
                     */
                    bool InitContainersHasBeenSet() const;

                    /**
                     * 获取为容器实例关联 CAM 角色，value 填写 CAM 角色名称，容器实例可获取该 CAM 角色包含的权限策略，方便 容器实例 内的程序进行如购买资源、读写存储等云资源操作。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CamRoleName 为容器实例关联 CAM 角色，value 填写 CAM 角色名称，容器实例可获取该 CAM 角色包含的权限策略，方便 容器实例 内的程序进行如购买资源、读写存储等云资源操作。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置为容器实例关联 CAM 角色，value 填写 CAM 角色名称，容器实例可获取该 CAM 角色包含的权限策略，方便 容器实例 内的程序进行如购买资源、读写存储等云资源操作。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CamRoleName 为容器实例关联 CAM 角色，value 填写 CAM 角色名称，容器实例可获取该 CAM 角色包含的权限策略，方便 容器实例 内的程序进行如购买资源、读写存储等云资源操作。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取自动为用户创建的EipId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoCreatedEipId 自动为用户创建的EipId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAutoCreatedEipId() const;

                    /**
                     * 设置自动为用户创建的EipId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoCreatedEipId 自动为用户创建的EipId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoCreatedEipId(const std::string& _autoCreatedEipId);

                    /**
                     * 判断参数 AutoCreatedEipId 是否已赋值
                     * @return AutoCreatedEipId 是否已赋值
                     */
                    bool AutoCreatedEipIdHasBeenSet() const;

                    /**
                     * 获取容器状态是否持久化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersistStatus 容器状态是否持久化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetPersistStatus() const;

                    /**
                     * 设置容器状态是否持久化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PersistStatus 容器状态是否持久化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPersistStatus(const bool& _persistStatus);

                    /**
                     * 判断参数 PersistStatus 是否已赋值
                     * @return PersistStatus 是否已赋值
                     */
                    bool PersistStatusHasBeenSet() const;

                private:

                    /**
                     * EKS Cotainer Instance Id
                     */
                    std::string m_eksCiId;
                    bool m_eksCiIdHasBeenSet;

                    /**
                     * EKS Cotainer Instance Name
                     */
                    std::string m_eksCiName;
                    bool m_eksCiNameHasBeenSet;

                    /**
                     * 内存大小
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * CPU大小
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 安全组ID
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 容器组的重启策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_restartPolicy;
                    bool m_restartPolicyHasBeenSet;

                    /**
                     * 返回容器组创建状态：Pending，Running，Succeeded，Failed。其中：
Failed （运行失败）指的容器组退出，RestartPolilcy为Never， 有容器exitCode非0；
Succeeded（运行成功）指的是容器组退出了，RestartPolicy为Never或onFailure，所有容器exitCode都为0；
Failed和Succeeded这两种状态都会停止运行，停止计费。
Pending是创建中，Running是 运行中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 接到请求后的系统创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 容器全部成功退出后的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_succeededTime;
                    bool m_succeededTimeHasBeenSet;

                    /**
                     * 容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Container> m_containers;
                    bool m_containersHasBeenSet;

                    /**
                     * 数据卷信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EksCiVolume m_eksCiVolume;
                    bool m_eksCiVolumeHasBeenSet;

                    /**
                     * 容器组运行的安全上下文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SecurityContext m_securityContext;
                    bool m_securityContextHasBeenSet;

                    /**
                     * 内网ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 容器实例绑定的Eip地址，注意可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eipAddress;
                    bool m_eipAddressHasBeenSet;

                    /**
                     * GPU类型。如无使用GPU则不返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * CPU类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * GPU卡数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gpuCount;
                    bool m_gpuCountHasBeenSet;

                    /**
                     * 实例所属VPC的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 实例所属子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 初始化容器列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Container> m_initContainers;
                    bool m_initContainersHasBeenSet;

                    /**
                     * 为容器实例关联 CAM 角色，value 填写 CAM 角色名称，容器实例可获取该 CAM 角色包含的权限策略，方便 容器实例 内的程序进行如购买资源、读写存储等云资源操作。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * 自动为用户创建的EipId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoCreatedEipId;
                    bool m_autoCreatedEipIdHasBeenSet;

                    /**
                     * 容器状态是否持久化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_persistStatus;
                    bool m_persistStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EKSCI_H_
