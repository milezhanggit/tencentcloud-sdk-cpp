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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEGROUPDEVICESREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEGROUPDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeGroupDevices请求参数结构体
                */
                class DescribeGroupDevicesRequest : public AbstractModel
                {
                public:
                    DescribeGroupDevicesRequest();
                    ~DescribeGroupDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param GroupId 分组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认0
                     * @return Offset 偏移量，默认0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0
                     * @param Offset 偏移量，默认0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制值，默认200
                     * @return Limit 限制值，默认200
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制值，默认200
                     * @param Limit 限制值，默认200
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取设备名称，根据设备名称模糊匹配时必填
                     * @return NickName 设备名称，根据设备名称模糊匹配时必填
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置设备名称，根据设备名称模糊匹配时必填
                     * @param NickName 设备名称，根据设备名称模糊匹配时必填
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取过滤不可录制设备
                     * @return Recordable 过滤不可录制设备
                     */
                    int64_t GetRecordable() const;

                    /**
                     * 设置过滤不可录制设备
                     * @param Recordable 过滤不可录制设备
                     */
                    void SetRecordable(const int64_t& _recordable);

                    /**
                     * 判断参数 Recordable 是否已赋值
                     * @return Recordable 是否已赋值
                     */
                    bool RecordableHasBeenSet() const;

                private:

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 偏移量，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制值，默认200
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 设备名称，根据设备名称模糊匹配时必填
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 过滤不可录制设备
                     */
                    int64_t m_recordable;
                    bool m_recordableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEGROUPDEVICESREQUEST_H_
