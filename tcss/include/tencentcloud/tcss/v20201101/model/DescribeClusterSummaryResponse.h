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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeClusterSummary返回参数结构体
                */
                class DescribeClusterSummaryResponse : public AbstractModel
                {
                public:
                    DescribeClusterSummaryResponse();
                    ~DescribeClusterSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群总数
                     * @return TotalCount 集群总数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取有风险的集群数量
                     * @return RiskClusterCount 有风险的集群数量
                     */
                    uint64_t GetRiskClusterCount() const;

                    /**
                     * 判断参数 RiskClusterCount 是否已赋值
                     * @return RiskClusterCount 是否已赋值
                     */
                    bool RiskClusterCountHasBeenSet() const;

                    /**
                     * 获取未检查的集群数量
                     * @return UncheckClusterCount 未检查的集群数量
                     */
                    uint64_t GetUncheckClusterCount() const;

                    /**
                     * 判断参数 UncheckClusterCount 是否已赋值
                     * @return UncheckClusterCount 是否已赋值
                     */
                    bool UncheckClusterCountHasBeenSet() const;

                    /**
                     * 获取托管集群数量
                     * @return ManagedClusterCount 托管集群数量
                     */
                    uint64_t GetManagedClusterCount() const;

                    /**
                     * 判断参数 ManagedClusterCount 是否已赋值
                     * @return ManagedClusterCount 是否已赋值
                     */
                    bool ManagedClusterCountHasBeenSet() const;

                    /**
                     * 获取独立集群数量
                     * @return IndependentClusterCount 独立集群数量
                     */
                    uint64_t GetIndependentClusterCount() const;

                    /**
                     * 判断参数 IndependentClusterCount 是否已赋值
                     * @return IndependentClusterCount 是否已赋值
                     */
                    bool IndependentClusterCountHasBeenSet() const;

                    /**
                     * 获取无风险的集群数量
                     * @return NoRiskClusterCount 无风险的集群数量
                     */
                    uint64_t GetNoRiskClusterCount() const;

                    /**
                     * 判断参数 NoRiskClusterCount 是否已赋值
                     * @return NoRiskClusterCount 是否已赋值
                     */
                    bool NoRiskClusterCountHasBeenSet() const;

                    /**
                     * 获取已经检查集群数
                     * @return CheckedClusterCount 已经检查集群数
                     */
                    uint64_t GetCheckedClusterCount() const;

                    /**
                     * 判断参数 CheckedClusterCount 是否已赋值
                     * @return CheckedClusterCount 是否已赋值
                     */
                    bool CheckedClusterCountHasBeenSet() const;

                    /**
                     * 获取自动检查集群数
                     * @return AutoCheckClusterCount 自动检查集群数
                     */
                    uint64_t GetAutoCheckClusterCount() const;

                    /**
                     * 判断参数 AutoCheckClusterCount 是否已赋值
                     * @return AutoCheckClusterCount 是否已赋值
                     */
                    bool AutoCheckClusterCountHasBeenSet() const;

                    /**
                     * 获取手动检查集群数
                     * @return ManualCheckClusterCount 手动检查集群数
                     */
                    uint64_t GetManualCheckClusterCount() const;

                    /**
                     * 判断参数 ManualCheckClusterCount 是否已赋值
                     * @return ManualCheckClusterCount 是否已赋值
                     */
                    bool ManualCheckClusterCountHasBeenSet() const;

                    /**
                     * 获取检查失败集群数
                     * @return FailedClusterCount 检查失败集群数
                     */
                    uint64_t GetFailedClusterCount() const;

                    /**
                     * 判断参数 FailedClusterCount 是否已赋值
                     * @return FailedClusterCount 是否已赋值
                     */
                    bool FailedClusterCountHasBeenSet() const;

                private:

                    /**
                     * 集群总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 有风险的集群数量
                     */
                    uint64_t m_riskClusterCount;
                    bool m_riskClusterCountHasBeenSet;

                    /**
                     * 未检查的集群数量
                     */
                    uint64_t m_uncheckClusterCount;
                    bool m_uncheckClusterCountHasBeenSet;

                    /**
                     * 托管集群数量
                     */
                    uint64_t m_managedClusterCount;
                    bool m_managedClusterCountHasBeenSet;

                    /**
                     * 独立集群数量
                     */
                    uint64_t m_independentClusterCount;
                    bool m_independentClusterCountHasBeenSet;

                    /**
                     * 无风险的集群数量
                     */
                    uint64_t m_noRiskClusterCount;
                    bool m_noRiskClusterCountHasBeenSet;

                    /**
                     * 已经检查集群数
                     */
                    uint64_t m_checkedClusterCount;
                    bool m_checkedClusterCountHasBeenSet;

                    /**
                     * 自动检查集群数
                     */
                    uint64_t m_autoCheckClusterCount;
                    bool m_autoCheckClusterCountHasBeenSet;

                    /**
                     * 手动检查集群数
                     */
                    uint64_t m_manualCheckClusterCount;
                    bool m_manualCheckClusterCountHasBeenSet;

                    /**
                     * 检查失败集群数
                     */
                    uint64_t m_failedClusterCount;
                    bool m_failedClusterCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERSUMMARYRESPONSE_H_
