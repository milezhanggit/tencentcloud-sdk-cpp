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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERECEIVER_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERECEIVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 告警通知接收者信息
                */
                class NoticeReceiver : public AbstractModel
                {
                public:
                    NoticeReceiver();
                    ~NoticeReceiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接受者类型。可选值：
<br><li> Uin - 用户ID
<br><li> Group - 用户组ID
暂不支持其余接收者类型。
                     * @return ReceiverType 接受者类型。可选值：
<br><li> Uin - 用户ID
<br><li> Group - 用户组ID
暂不支持其余接收者类型。
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置接受者类型。可选值：
<br><li> Uin - 用户ID
<br><li> Group - 用户组ID
暂不支持其余接收者类型。
                     * @param ReceiverType 接受者类型。可选值：
<br><li> Uin - 用户ID
<br><li> Group - 用户组ID
暂不支持其余接收者类型。
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取接收者。
                     * @return ReceiverIds 接收者。
                     */
                    std::vector<int64_t> GetReceiverIds() const;

                    /**
                     * 设置接收者。
                     * @param ReceiverIds 接收者。
                     */
                    void SetReceiverIds(const std::vector<int64_t>& _receiverIds);

                    /**
                     * 判断参数 ReceiverIds 是否已赋值
                     * @return ReceiverIds 是否已赋值
                     */
                    bool ReceiverIdsHasBeenSet() const;

                    /**
                     * 获取通知接收渠道。
<br><li> Email - 邮件
<br><li> Sms - 短信
<br><li> WeChat - 微信
<br><li> Phone - 电话
                     * @return ReceiverChannels 通知接收渠道。
<br><li> Email - 邮件
<br><li> Sms - 短信
<br><li> WeChat - 微信
<br><li> Phone - 电话
                     */
                    std::vector<std::string> GetReceiverChannels() const;

                    /**
                     * 设置通知接收渠道。
<br><li> Email - 邮件
<br><li> Sms - 短信
<br><li> WeChat - 微信
<br><li> Phone - 电话
                     * @param ReceiverChannels 通知接收渠道。
<br><li> Email - 邮件
<br><li> Sms - 短信
<br><li> WeChat - 微信
<br><li> Phone - 电话
                     */
                    void SetReceiverChannels(const std::vector<std::string>& _receiverChannels);

                    /**
                     * 判断参数 ReceiverChannels 是否已赋值
                     * @return ReceiverChannels 是否已赋值
                     */
                    bool ReceiverChannelsHasBeenSet() const;

                    /**
                     * 获取允许接收信息的开始时间。
                     * @return StartTime 允许接收信息的开始时间。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置允许接收信息的开始时间。
                     * @param StartTime 允许接收信息的开始时间。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取允许接收信息的结束时间。
                     * @return EndTime 允许接收信息的结束时间。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置允许接收信息的结束时间。
                     * @param EndTime 允许接收信息的结束时间。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取位序
                     * @return Index 位序
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置位序
                     * @param Index 位序
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 接受者类型。可选值：
<br><li> Uin - 用户ID
<br><li> Group - 用户组ID
暂不支持其余接收者类型。
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * 接收者。
                     */
                    std::vector<int64_t> m_receiverIds;
                    bool m_receiverIdsHasBeenSet;

                    /**
                     * 通知接收渠道。
<br><li> Email - 邮件
<br><li> Sms - 短信
<br><li> WeChat - 微信
<br><li> Phone - 电话
                     */
                    std::vector<std::string> m_receiverChannels;
                    bool m_receiverChannelsHasBeenSet;

                    /**
                     * 允许接收信息的开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 允许接收信息的结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 位序
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERECEIVER_H_
