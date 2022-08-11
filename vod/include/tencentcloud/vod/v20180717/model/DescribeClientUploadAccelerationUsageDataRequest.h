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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLIENTUPLOADACCELERATIONUSAGEDATAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLIENTUPLOADACCELERATIONUSAGEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeClientUploadAccelerationUsageData请求参数结构体
                */
                class DescribeClientUploadAccelerationUsageDataRequest : public AbstractModel
                {
                public:
                    DescribeClientUploadAccelerationUsageDataRequest();
                    ~DescribeClientUploadAccelerationUsageDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @return StartTime 起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @param StartTime 起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @return EndTime 结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @param EndTime 结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<b>点播 [子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * @return SubAppId <b>点播 [子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播 [子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * @param SubAppId <b>点播 [子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取客户端上传加速类型，取值有：
<li> AccelerationWithHTTP：HTTP 传输方式的上传加速。</li>
<li> AccelerationWithQUIC：QUIC 传输方式的上传加速。</li>
默认查询所有加速类型的用量 。
                     * @return Type 客户端上传加速类型，取值有：
<li> AccelerationWithHTTP：HTTP 传输方式的上传加速。</li>
<li> AccelerationWithQUIC：QUIC 传输方式的上传加速。</li>
默认查询所有加速类型的用量 。
                     */
                    std::string GetType() const;

                    /**
                     * 设置客户端上传加速类型，取值有：
<li> AccelerationWithHTTP：HTTP 传输方式的上传加速。</li>
<li> AccelerationWithQUIC：QUIC 传输方式的上传加速。</li>
默认查询所有加速类型的用量 。
                     * @param Type 客户端上传加速类型，取值有：
<li> AccelerationWithHTTP：HTTP 传输方式的上传加速。</li>
<li> AccelerationWithQUIC：QUIC 传输方式的上传加速。</li>
默认查询所有加速类型的用量 。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <b>点播 [子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 客户端上传加速类型，取值有：
<li> AccelerationWithHTTP：HTTP 传输方式的上传加速。</li>
<li> AccelerationWithQUIC：QUIC 传输方式的上传加速。</li>
默认查询所有加速类型的用量 。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLIENTUPLOADACCELERATIONUSAGEDATAREQUEST_H_
