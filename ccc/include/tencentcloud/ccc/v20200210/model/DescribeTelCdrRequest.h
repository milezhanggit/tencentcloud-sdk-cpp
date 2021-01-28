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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeTelCdr请求参数结构体
                */
                class DescribeTelCdrRequest : public AbstractModel
                {
                public:
                    DescribeTelCdrRequest();
                    ~DescribeTelCdrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间戳，Unix 时间戳
                     * @return StartTimeStamp 起始时间戳，Unix 时间戳
                     */
                    int64_t GetStartTimeStamp() const;

                    /**
                     * 设置起始时间戳，Unix 时间戳
                     * @param StartTimeStamp 起始时间戳，Unix 时间戳
                     */
                    void SetStartTimeStamp(const int64_t& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取结束时间戳，Unix 时间戳
                     * @return EndTimeStamp 结束时间戳，Unix 时间戳
                     */
                    int64_t GetEndTimeStamp() const;

                    /**
                     * 设置结束时间戳，Unix 时间戳
                     * @param EndTimeStamp 结束时间戳，Unix 时间戳
                     */
                    void SetEndTimeStamp(const int64_t& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     */
                    bool EndTimeStampHasBeenSet() const;

                    /**
                     * 获取返回数据条数，上限（deprecated）
                     * @return Limit 返回数据条数，上限（deprecated）
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数据条数，上限（deprecated）
                     * @param Limit 返回数据条数，上限（deprecated）
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移（deprecated）
                     * @return Offset 偏移（deprecated）
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移（deprecated）
                     * @param Offset 偏移（deprecated）
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取实例 ID（deprecated）
                     * @return InstanceId 实例 ID（deprecated）
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置实例 ID（deprecated）
                     * @param InstanceId 实例 ID（deprecated）
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取应用 ID
                     * @return SdkAppId 应用 ID
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID
                     * @param SdkAppId 应用 ID
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分页尺寸，上限 100
                     * @return PageSize 分页尺寸，上限 100
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页尺寸，上限 100
                     * @param PageSize 分页尺寸，上限 100
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取分页页码，从 0 开始
                     * @return PageNumber 分页页码，从 0 开始
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页码，从 0 开始
                     * @param PageNumber 分页页码，从 0 开始
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * 起始时间戳，Unix 时间戳
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * 结束时间戳，Unix 时间戳
                     */
                    int64_t m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                    /**
                     * 返回数据条数，上限（deprecated）
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移（deprecated）
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 实例 ID（deprecated）
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 应用 ID
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分页尺寸，上限 100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页页码，从 0 开始
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_
