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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeInstanceSpecs请求参数结构体
                */
                class DescribeInstanceSpecsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSpecsRequest();
                    ~DescribeInstanceSpecsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库类型，取值范围: 
<li> MYSQL </li>
                     * @return DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型，取值范围: 
<li> MYSQL </li>
                     * @param DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取是否需要返回可用区信息
                     * @return IncludeZoneStocks 是否需要返回可用区信息
                     */
                    bool GetIncludeZoneStocks() const;

                    /**
                     * 设置是否需要返回可用区信息
                     * @param IncludeZoneStocks 是否需要返回可用区信息
                     */
                    void SetIncludeZoneStocks(const bool& _includeZoneStocks);

                    /**
                     * 判断参数 IncludeZoneStocks 是否已赋值
                     * @return IncludeZoneStocks 是否已赋值
                     */
                    bool IncludeZoneStocksHasBeenSet() const;

                private:

                    /**
                     * 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 是否需要返回可用区信息
                     */
                    bool m_includeZoneStocks;
                    bool m_includeZoneStocksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSREQUEST_H_
