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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_RESOURCE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/Sv.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 计费资源
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源 ID
                     * @return Id 资源 ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源 ID
                     * @param Id 资源 ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取付费模式
0 为后付费
1 为预付费
                     * @return PayMode 付费模式
0 为后付费
1 为预付费
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
0 为后付费
1 为预付费
                     * @param PayMode 付费模式
0 为后付费
1 为预付费
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取生效时间
                     * @return EnableTime 生效时间
                     */
                    std::string GetEnableTime() const;

                    /**
                     * 设置生效时间
                     * @param EnableTime 生效时间
                     */
                    void SetEnableTime(const std::string& _enableTime);

                    /**
                     * 判断参数 EnableTime 是否已赋值
                     * @return EnableTime 是否已赋值
                     */
                    bool EnableTimeHasBeenSet() const;

                    /**
                     * 获取失效时间
                     * @return ExpireTime 失效时间
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置失效时间
                     * @param ExpireTime 失效时间
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取套餐状态
                     * @return Status 套餐状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置套餐状态
                     * @param Status 套餐状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取询价参数
                     * @return Sv 询价参数
                     */
                    std::vector<Sv> GetSv() const;

                    /**
                     * 设置询价参数
                     * @param Sv 询价参数
                     */
                    void SetSv(const std::vector<Sv>& _sv);

                    /**
                     * 判断参数 Sv 是否已赋值
                     * @return Sv 是否已赋值
                     */
                    bool SvHasBeenSet() const;

                    /**
                     * 获取是否自动续费
0 表示默认状态
1 表示自动续费
2 表示不自动续费
                     * @return AutoRenewFlag 是否自动续费
0 表示默认状态
1 表示自动续费
2 表示不自动续费
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置是否自动续费
0 表示默认状态
1 表示自动续费
2 表示不自动续费
                     * @param AutoRenewFlag 是否自动续费
0 表示默认状态
1 表示自动续费
2 表示不自动续费
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取套餐关联资源ID
                     * @return PlanId 套餐关联资源ID
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置套餐关联资源ID
                     * @param PlanId 套餐关联资源ID
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     */
                    bool PlanIdHasBeenSet() const;

                private:

                    /**
                     * 资源 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 付费模式
0 为后付费
1 为预付费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 生效时间
                     */
                    std::string m_enableTime;
                    bool m_enableTimeHasBeenSet;

                    /**
                     * 失效时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 套餐状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 询价参数
                     */
                    std::vector<Sv> m_sv;
                    bool m_svHasBeenSet;

                    /**
                     * 是否自动续费
0 表示默认状态
1 表示自动续费
2 表示不自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 套餐关联资源ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_RESOURCE_H_
