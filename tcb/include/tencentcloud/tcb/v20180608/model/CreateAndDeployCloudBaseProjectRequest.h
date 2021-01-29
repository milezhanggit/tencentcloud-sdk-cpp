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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEANDDEPLOYCLOUDBASEPROJECTREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEANDDEPLOYCLOUDBASEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CodeSource.h>
#include <tencentcloud/tcb/v20180608/model/KVPair.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateAndDeployCloudBaseProject请求参数结构体
                */
                class CreateAndDeployCloudBaseProjectRequest : public AbstractModel
                {
                public:
                    CreateAndDeployCloudBaseProjectRequest();
                    ~CreateAndDeployCloudBaseProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目名
                     * @return Name 项目名
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名
                     * @param Name 项目名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取来源
                     * @return Source 来源
                     */
                    CodeSource GetSource() const;

                    /**
                     * 设置来源
                     * @param Source 来源
                     */
                    void SetSource(const CodeSource& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param EnvId 环境id
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取项目类型, 枚举值为: framework-oneclick,qci-extension-cicd
                     * @return Type 项目类型, 枚举值为: framework-oneclick,qci-extension-cicd
                     */
                    std::string GetType() const;

                    /**
                     * 设置项目类型, 枚举值为: framework-oneclick,qci-extension-cicd
                     * @param Type 项目类型, 枚举值为: framework-oneclick,qci-extension-cicd
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取环境变量
                     * @return Parameters 环境变量
                     */
                    std::vector<KVPair> GetParameters() const;

                    /**
                     * 设置环境变量
                     * @param Parameters 环境变量
                     */
                    void SetParameters(const std::vector<KVPair>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取环境别名
                     * @return EnvAlias 环境别名
                     */
                    std::string GetEnvAlias() const;

                    /**
                     * 设置环境别名
                     * @param EnvAlias 环境别名
                     */
                    void SetEnvAlias(const std::string& _envAlias);

                    /**
                     * 判断参数 EnvAlias 是否已赋值
                     * @return EnvAlias 是否已赋值
                     */
                    bool EnvAliasHasBeenSet() const;

                    /**
                     * 获取rc.json的内容
                     * @return RcJson rc.json的内容
                     */
                    std::string GetRcJson() const;

                    /**
                     * 设置rc.json的内容
                     * @param RcJson rc.json的内容
                     */
                    void SetRcJson(const std::string& _rcJson);

                    /**
                     * 判断参数 RcJson 是否已赋值
                     * @return RcJson 是否已赋值
                     */
                    bool RcJsonHasBeenSet() const;

                    /**
                     * 获取插件配置内容
                     * @return AddonConfig 插件配置内容
                     */
                    std::string GetAddonConfig() const;

                    /**
                     * 设置插件配置内容
                     * @param AddonConfig 插件配置内容
                     */
                    void SetAddonConfig(const std::string& _addonConfig);

                    /**
                     * 判断参数 AddonConfig 是否已赋值
                     * @return AddonConfig 是否已赋值
                     */
                    bool AddonConfigHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签
                     * @param Tags 标签
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取网络配置
                     * @return NetworkConfig 网络配置
                     */
                    std::string GetNetworkConfig() const;

                    /**
                     * 设置网络配置
                     * @param NetworkConfig 网络配置
                     */
                    void SetNetworkConfig(const std::string& _networkConfig);

                    /**
                     * 判断参数 NetworkConfig 是否已赋值
                     * @return NetworkConfig 是否已赋值
                     */
                    bool NetworkConfigHasBeenSet() const;

                    /**
                     * 获取免费额度的"basic", 不使用的用""
                     * @return FreeQuota 免费额度的"basic", 不使用的用""
                     */
                    std::string GetFreeQuota() const;

                    /**
                     * 设置免费额度的"basic", 不使用的用""
                     * @param FreeQuota 免费额度的"basic", 不使用的用""
                     */
                    void SetFreeQuota(const std::string& _freeQuota);

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     */
                    bool FreeQuotaHasBeenSet() const;

                private:

                    /**
                     * 项目名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 来源
                     */
                    CodeSource m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 项目类型, 枚举值为: framework-oneclick,qci-extension-cicd
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::vector<KVPair> m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 环境别名
                     */
                    std::string m_envAlias;
                    bool m_envAliasHasBeenSet;

                    /**
                     * rc.json的内容
                     */
                    std::string m_rcJson;
                    bool m_rcJsonHasBeenSet;

                    /**
                     * 插件配置内容
                     */
                    std::string m_addonConfig;
                    bool m_addonConfigHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 网络配置
                     */
                    std::string m_networkConfig;
                    bool m_networkConfigHasBeenSet;

                    /**
                     * 免费额度的"basic", 不使用的用""
                     */
                    std::string m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEANDDEPLOYCLOUDBASEPROJECTREQUEST_H_
