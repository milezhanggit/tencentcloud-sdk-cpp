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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_QUERYACTIVITYJOINLISTREQUEST_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_QUERYACTIVITYJOINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * QueryActivityJoinList请求参数结构体
                */
                class QueryActivityJoinListRequest : public AbstractModel
                {
                public:
                    QueryActivityJoinListRequest();
                    ~QueryActivityJoinListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取活动id
                     * @return ActivityId 活动id
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置活动id
                     * @param ActivityId 活动id
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取分页游标，对应结果返回的NextCursor,首次请求保持为空
                     * @return Cursor 分页游标，对应结果返回的NextCursor,首次请求保持为空
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置分页游标，对应结果返回的NextCursor,首次请求保持为空
                     * @param Cursor 分页游标，对应结果返回的NextCursor,首次请求保持为空
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取单页数据限制
                     * @return Limit 单页数据限制
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页数据限制
                     * @param Limit 单页数据限制
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 活动id
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 分页游标，对应结果返回的NextCursor,首次请求保持为空
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * 单页数据限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_QUERYACTIVITYJOINLISTREQUEST_H_
