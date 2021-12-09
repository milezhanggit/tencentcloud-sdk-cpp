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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINALIASINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINALIASINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 域名别名信息
                */
                class DomainAliasInfo : public AbstractModel
                {
                public:
                    DomainAliasInfo();
                    ~DomainAliasInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名别名ID
                     * @return Id 域名别名ID
                     */
                    int64_t GetId() const;

                    /**
                     * 设置域名别名ID
                     * @param Id 域名别名ID
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取域名别名
                     * @return DomainAlias 域名别名
                     */
                    std::string GetDomainAlias() const;

                    /**
                     * 设置域名别名
                     * @param DomainAlias 域名别名
                     */
                    void SetDomainAlias(const std::string& _domainAlias);

                    /**
                     * 判断参数 DomainAlias 是否已赋值
                     * @return DomainAlias 是否已赋值
                     */
                    bool DomainAliasHasBeenSet() const;

                private:

                    /**
                     * 域名别名ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 域名别名
                     */
                    std::string m_domainAlias;
                    bool m_domainAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINALIASINFO_H_
