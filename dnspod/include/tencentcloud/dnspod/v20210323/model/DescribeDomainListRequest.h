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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLISTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDomainList请求参数结构体
                */
                class DescribeDomainListRequest : public AbstractModel
                {
                public:
                    DescribeDomainListRequest();
                    ~DescribeDomainListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名分组类型，默认为ALL。可取值为ALL，MINE，SHARE，ISMARK，PAUSE，VIP，RECENT，SHARE_OUT。
                     * @return Type 域名分组类型，默认为ALL。可取值为ALL，MINE，SHARE，ISMARK，PAUSE，VIP，RECENT，SHARE_OUT。
                     */
                    std::string GetType() const;

                    /**
                     * 设置域名分组类型，默认为ALL。可取值为ALL，MINE，SHARE，ISMARK，PAUSE，VIP，RECENT，SHARE_OUT。
                     * @param Type 域名分组类型，默认为ALL。可取值为ALL，MINE，SHARE，ISMARK，PAUSE，VIP，RECENT，SHARE_OUT。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取记录开始的偏移, 第一条记录为 0, 依次类推。默认值为0。
                     * @return Offset 记录开始的偏移, 第一条记录为 0, 依次类推。默认值为0。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置记录开始的偏移, 第一条记录为 0, 依次类推。默认值为0。
                     * @param Offset 记录开始的偏移, 第一条记录为 0, 依次类推。默认值为0。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取要获取的域名数量, 比如获取20个, 则为20。默认值为3000。
                     * @return Limit 要获取的域名数量, 比如获取20个, 则为20。默认值为3000。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置要获取的域名数量, 比如获取20个, 则为20。默认值为3000。
                     * @param Limit 要获取的域名数量, 比如获取20个, 则为20。默认值为3000。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分组ID, 获取指定分组的域名
                     * @return GroupId 分组ID, 获取指定分组的域名
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置分组ID, 获取指定分组的域名
                     * @param GroupId 分组ID, 获取指定分组的域名
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取根据关键字搜索域名
                     * @return Keyword 根据关键字搜索域名
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置根据关键字搜索域名
                     * @param Keyword 根据关键字搜索域名
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 域名分组类型，默认为ALL。可取值为ALL，MINE，SHARE，ISMARK，PAUSE，VIP，RECENT，SHARE_OUT。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 记录开始的偏移, 第一条记录为 0, 依次类推。默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 要获取的域名数量, 比如获取20个, 则为20。默认值为3000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分组ID, 获取指定分组的域名
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 根据关键字搜索域名
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLISTREQUEST_H_
