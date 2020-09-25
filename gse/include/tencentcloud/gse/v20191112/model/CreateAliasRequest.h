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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_CREATEALIASREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_CREATEALIASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/RoutingStrategy.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CreateAlias请求参数结构体
                */
                class CreateAliasRequest : public AbstractModel
                {
                public:
                    CreateAliasRequest();
                    ~CreateAliasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取名字，长度不小于1字符不超过1024字符
                     * @return Name 名字，长度不小于1字符不超过1024字符
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字，长度不小于1字符不超过1024字符
                     * @param Name 名字，长度不小于1字符不超过1024字符
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取别名的路由配置
                     * @return RoutingStrategy 别名的路由配置
                     */
                    RoutingStrategy GetRoutingStrategy() const;

                    /**
                     * 设置别名的路由配置
                     * @param RoutingStrategy 别名的路由配置
                     */
                    void SetRoutingStrategy(const RoutingStrategy& _routingStrategy);

                    /**
                     * 判断参数 RoutingStrategy 是否已赋值
                     * @return RoutingStrategy 是否已赋值
                     */
                    bool RoutingStrategyHasBeenSet() const;

                    /**
                     * 获取别名的可读说明，长度不小于1字符不超过1024字符
                     * @return Description 别名的可读说明，长度不小于1字符不超过1024字符
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置别名的可读说明，长度不小于1字符不超过1024字符
                     * @param Description 别名的可读说明，长度不小于1字符不超过1024字符
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 名字，长度不小于1字符不超过1024字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 别名的路由配置
                     */
                    RoutingStrategy m_routingStrategy;
                    bool m_routingStrategyHasBeenSet;

                    /**
                     * 别名的可读说明，长度不小于1字符不超过1024字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_CREATEALIASREQUEST_H_
