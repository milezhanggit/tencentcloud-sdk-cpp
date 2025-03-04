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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETPOLICYITEMLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETPOLICYITEMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeComplianceAssetPolicyItemList请求参数结构体
                */
                class DescribeComplianceAssetPolicyItemListRequest : public AbstractModel
                {
                public:
                    DescribeComplianceAssetPolicyItemListRequest();
                    ~DescribeComplianceAssetPolicyItemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户资产的ID。
                     * @return CustomerAssetId 客户资产的ID。
                     */
                    uint64_t GetCustomerAssetId() const;

                    /**
                     * 设置客户资产的ID。
                     * @param CustomerAssetId 客户资产的ID。
                     */
                    void SetCustomerAssetId(const uint64_t& _customerAssetId);

                    /**
                     * 判断参数 CustomerAssetId 是否已赋值
                     * @return CustomerAssetId 是否已赋值
                     */
                    bool CustomerAssetIdHasBeenSet() const;

                    /**
                     * 获取起始偏移量，默认为0。
                     * @return Offset 起始偏移量，默认为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始偏移量，默认为0。
                     * @param Offset 起始偏移量，默认为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取要获取的数据量，默认为10，最大为100。
                     * @return Limit 要获取的数据量，默认为10，最大为100。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置要获取的数据量，默认为10，最大为100。
                     * @param Limit 要获取的数据量，默认为10，最大为100。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤器列表。Name字段支持
RiskLevel
                     * @return Filters 过滤器列表。Name字段支持
RiskLevel
                     */
                    std::vector<ComplianceFilters> GetFilters() const;

                    /**
                     * 设置过滤器列表。Name字段支持
RiskLevel
                     * @param Filters 过滤器列表。Name字段支持
RiskLevel
                     */
                    void SetFilters(const std::vector<ComplianceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 客户资产的ID。
                     */
                    uint64_t m_customerAssetId;
                    bool m_customerAssetIdHasBeenSet;

                    /**
                     * 起始偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 要获取的数据量，默认为10，最大为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤器列表。Name字段支持
RiskLevel
                     */
                    std::vector<ComplianceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETPOLICYITEMLISTREQUEST_H_
