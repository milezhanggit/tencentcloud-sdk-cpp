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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/Filter.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribeInternetAddress请求参数结构体
                */
                class DescribeInternetAddressRequest : public AbstractModel
                {
                public:
                    DescribeInternetAddressRequest();
                    ~DescribeInternetAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param Offset 偏移量，默认为0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值100
                     * @return Limit 返回数量，默认为20，最大值100
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值100
                     * @param Limit 返回数量，默认为20，最大值100
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤条件：
<li>AddrType, 地址类型。0：BGP 1; 1: 电信， 2：移动， 3：联通</li>
<li>AddrProto地址类型。0：IPv4 1:IPv6</li>
<li>Status 地址状态。 0：使用中， 1：已停用， 2：已退还</li>
<li>Subnet 互联网公网地址，数组</li>
<InstanceIds>互联网公网地址ID，数组</li>
                     * @return Filters 过滤条件：
<li>AddrType, 地址类型。0：BGP 1; 1: 电信， 2：移动， 3：联通</li>
<li>AddrProto地址类型。0：IPv4 1:IPv6</li>
<li>Status 地址状态。 0：使用中， 1：已停用， 2：已退还</li>
<li>Subnet 互联网公网地址，数组</li>
<InstanceIds>互联网公网地址ID，数组</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件：
<li>AddrType, 地址类型。0：BGP 1; 1: 电信， 2：移动， 3：联通</li>
<li>AddrProto地址类型。0：IPv4 1:IPv6</li>
<li>Status 地址状态。 0：使用中， 1：已停用， 2：已退还</li>
<li>Subnet 互联网公网地址，数组</li>
<InstanceIds>互联网公网地址ID，数组</li>
                     * @param Filters 过滤条件：
<li>AddrType, 地址类型。0：BGP 1; 1: 电信， 2：移动， 3：联通</li>
<li>AddrProto地址类型。0：IPv4 1:IPv6</li>
<li>Status 地址状态。 0：使用中， 1：已停用， 2：已退还</li>
<li>Subnet 互联网公网地址，数组</li>
<InstanceIds>互联网公网地址ID，数组</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件：
<li>AddrType, 地址类型。0：BGP 1; 1: 电信， 2：移动， 3：联通</li>
<li>AddrProto地址类型。0：IPv4 1:IPv6</li>
<li>Status 地址状态。 0：使用中， 1：已停用， 2：已退还</li>
<li>Subnet 互联网公网地址，数组</li>
<InstanceIds>互联网公网地址ID，数组</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEINTERNETADDRESSREQUEST_H_
