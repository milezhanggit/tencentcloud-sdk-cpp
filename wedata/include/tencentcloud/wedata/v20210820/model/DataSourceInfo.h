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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据源对象
                */
                class DataSourceInfo : public AbstractModel
                {
                public:
                    DataSourceInfo();
                    ~DataSourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取若数据源列表为绑定数据库，则为db名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 若数据源列表为绑定数据库，则为db名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置若数据源列表为绑定数据库，则为db名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatabaseName 若数据源列表为绑定数据库，则为db名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ID 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instance 数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Instance 数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取数据源名称，在相同SpaceName下，数据源名称不能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 数据源名称，在相同SpaceName下，数据源名称不能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据源名称，在相同SpaceName下，数据源名称不能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 数据源名称，在相同SpaceName下，数据源名称不能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Region 数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数据源所属的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 数据源所属的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置数据源所属的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 数据源所属的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取应用ID AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 应用ID AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置应用ID AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppId 应用ID AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取业务侧数据源的配置信息扩展
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizParams 业务侧数据源的配置信息扩展
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBizParams() const;

                    /**
                     * 设置业务侧数据源的配置信息扩展
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BizParams 业务侧数据源的配置信息扩展
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBizParams(const std::string& _bizParams);

                    /**
                     * 判断参数 BizParams 是否已赋值
                     * @return BizParams 是否已赋值
                     */
                    bool BizParamsHasBeenSet() const;

                    /**
                     * 获取数据源类别：绑定引擎、绑定数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category 数据源类别：绑定引擎、绑定数据库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置数据源类别：绑定引擎、绑定数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Category 数据源类别：绑定引擎、绑定数据库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取数据源展示名，为了可视化查看
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Display 数据源展示名，为了可视化查看
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDisplay() const;

                    /**
                     * 设置数据源展示名，为了可视化查看
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Display 数据源展示名，为了可视化查看
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisplay(const std::string& _display);

                    /**
                     * 判断参数 Display 是否已赋值
                     * @return Display 是否已赋值
                     */
                    bool DisplayHasBeenSet() const;

                    /**
                     * 获取数据源责任人账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerAccount 数据源责任人账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOwnerAccount() const;

                    /**
                     * 设置数据源责任人账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OwnerAccount 数据源责任人账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOwnerAccount(const std::string& _ownerAccount);

                    /**
                     * 判断参数 OwnerAccount 是否已赋值
                     * @return OwnerAccount 是否已赋值
                     */
                    bool OwnerAccountHasBeenSet() const;

                    /**
                     * 获取数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetParams() const;

                    /**
                     * 设置数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Params 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取数据源数据源的可见性，1为可见、0为不可见。默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 数据源数据源的可见性，1为可见、0为不可见。默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置数据源数据源的可见性，1为可见、0为不可见。默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 数据源数据源的可见性，1为可见、0为不可见。默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取数据源责任人账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerAccountName 数据源责任人账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置数据源责任人账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OwnerAccountName 数据源责任人账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取归属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerProjectId 归属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOwnerProjectId() const;

                    /**
                     * 设置归属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OwnerProjectId 归属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOwnerProjectId(const std::string& _ownerProjectId);

                    /**
                     * 判断参数 OwnerProjectId 是否已赋值
                     * @return OwnerProjectId 是否已赋值
                     */
                    bool OwnerProjectIdHasBeenSet() const;

                    /**
                     * 获取归属项目Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerProjectName 归属项目Name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOwnerProjectName() const;

                    /**
                     * 设置归属项目Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OwnerProjectName 归属项目Name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOwnerProjectName(const std::string& _ownerProjectName);

                    /**
                     * 判断参数 OwnerProjectName 是否已赋值
                     * @return OwnerProjectName 是否已赋值
                     */
                    bool OwnerProjectNameHasBeenSet() const;

                    /**
                     * 获取归属项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerProjectIdent 归属项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOwnerProjectIdent() const;

                    /**
                     * 设置归属项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OwnerProjectIdent 归属项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOwnerProjectIdent(const std::string& _ownerProjectIdent);

                    /**
                     * 判断参数 OwnerProjectIdent 是否已赋值
                     * @return OwnerProjectIdent 是否已赋值
                     */
                    bool OwnerProjectIdentHasBeenSet() const;

                    /**
                     * 获取授权项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorityProjectName 授权项目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAuthorityProjectName() const;

                    /**
                     * 设置授权项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AuthorityProjectName 授权项目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuthorityProjectName(const std::string& _authorityProjectName);

                    /**
                     * 判断参数 AuthorityProjectName 是否已赋值
                     * @return AuthorityProjectName 是否已赋值
                     */
                    bool AuthorityProjectNameHasBeenSet() const;

                    /**
                     * 获取授权用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorityUserName 授权用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAuthorityUserName() const;

                    /**
                     * 设置授权用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AuthorityUserName 授权用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuthorityUserName(const std::string& _authorityUserName);

                    /**
                     * 判断参数 AuthorityUserName 是否已赋值
                     * @return AuthorityUserName 是否已赋值
                     */
                    bool AuthorityUserNameHasBeenSet() const;

                    /**
                     * 获取是否有编辑权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Edit 是否有编辑权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEdit() const;

                    /**
                     * 设置是否有编辑权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Edit 是否有编辑权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEdit(const bool& _edit);

                    /**
                     * 判断参数 Edit 是否已赋值
                     * @return Edit 是否已赋值
                     */
                    bool EditHasBeenSet() const;

                    /**
                     * 获取是否有授权权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Author 是否有授权权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetAuthor() const;

                    /**
                     * 设置是否有授权权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Author 是否有授权权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuthor(const bool& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取是否有转交权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deliver 是否有转交权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetDeliver() const;

                    /**
                     * 设置是否有转交权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Deliver 是否有转交权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeliver(const bool& _deliver);

                    /**
                     * 判断参数 Deliver 是否已赋值
                     * @return Deliver 是否已赋值
                     */
                    bool DeliverHasBeenSet() const;

                    /**
                     * 获取数据源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceStatus 数据源状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDataSourceStatus() const;

                    /**
                     * 设置数据源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DataSourceStatus 数据源状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDataSourceStatus(const std::string& _dataSourceStatus);

                    /**
                     * 判断参数 DataSourceStatus 是否已赋值
                     * @return DataSourceStatus 是否已赋值
                     */
                    bool DataSourceStatusHasBeenSet() const;

                    /**
                     * 获取时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Params json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamsString Params json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetParamsString() const;

                    /**
                     * 设置Params json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ParamsString Params json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetParamsString(const std::string& _paramsString);

                    /**
                     * 判断参数 ParamsString 是否已赋值
                     * @return ParamsString 是否已赋值
                     */
                    bool ParamsStringHasBeenSet() const;

                    /**
                     * 获取BizParams json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizParamsString BizParams json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBizParamsString() const;

                    /**
                     * 设置BizParams json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BizParamsString BizParams json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBizParamsString(const std::string& _bizParamsString);

                    /**
                     * 判断参数 BizParamsString 是否已赋值
                     * @return BizParamsString 是否已赋值
                     */
                    bool BizParamsStringHasBeenSet() const;

                private:

                    /**
                     * 若数据源列表为绑定数据库，则为db名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据源描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 数据源引擎的实例ID，如CDB实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 数据源名称，在相同SpaceName下，数据源名称不能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据源引擎所属区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 数据源类型:枚举值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据源所属的集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 应用ID AppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 业务侧数据源的配置信息扩展
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizParams;
                    bool m_bizParamsHasBeenSet;

                    /**
                     * 数据源类别：绑定引擎、绑定数据库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 数据源展示名，为了可视化查看
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_display;
                    bool m_displayHasBeenSet;

                    /**
                     * 数据源责任人账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerAccount;
                    bool m_ownerAccountHasBeenSet;

                    /**
                     * 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 数据源数据源的可见性，1为可见、0为不可见。默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据源责任人账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 归属项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerProjectId;
                    bool m_ownerProjectIdHasBeenSet;

                    /**
                     * 归属项目Name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerProjectName;
                    bool m_ownerProjectNameHasBeenSet;

                    /**
                     * 归属项目标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerProjectIdent;
                    bool m_ownerProjectIdentHasBeenSet;

                    /**
                     * 授权项目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authorityProjectName;
                    bool m_authorityProjectNameHasBeenSet;

                    /**
                     * 授权用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authorityUserName;
                    bool m_authorityUserNameHasBeenSet;

                    /**
                     * 是否有编辑权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_edit;
                    bool m_editHasBeenSet;

                    /**
                     * 是否有授权权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * 是否有转交权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deliver;
                    bool m_deliverHasBeenSet;

                    /**
                     * 数据源状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceStatus;
                    bool m_dataSourceStatusHasBeenSet;

                    /**
                     * 时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Params json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramsString;
                    bool m_paramsStringHasBeenSet;

                    /**
                     * BizParams json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizParamsString;
                    bool m_bizParamsStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCEINFO_H_
