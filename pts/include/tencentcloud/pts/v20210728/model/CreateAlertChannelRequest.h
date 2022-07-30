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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CREATEALERTCHANNELREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CREATEALERTCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * CreateAlertChannel请求参数结构体
                */
                class CreateAlertChannelRequest : public AbstractModel
                {
                public:
                    CreateAlertChannelRequest();
                    ~CreateAlertChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notice ID
                     * @return NoticeId Notice ID
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置Notice ID
                     * @param NoticeId Notice ID
                     */
                    void SetNoticeId(const std::string& _noticeId);

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     */
                    bool NoticeIdHasBeenSet() const;

                    /**
                     * 获取项目 ID
                     * @return ProjectId 项目 ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 ID
                     * @param ProjectId 项目 ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取AMP Consumer ID
                     * @return AMPConsumerId AMP Consumer ID
                     */
                    std::string GetAMPConsumerId() const;

                    /**
                     * 设置AMP Consumer ID
                     * @param AMPConsumerId AMP Consumer ID
                     */
                    void SetAMPConsumerId(const std::string& _aMPConsumerId);

                    /**
                     * 判断参数 AMPConsumerId 是否已赋值
                     * @return AMPConsumerId 是否已赋值
                     */
                    bool AMPConsumerIdHasBeenSet() const;

                private:

                    /**
                     * Notice ID
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * 项目 ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * AMP Consumer ID
                     */
                    std::string m_aMPConsumerId;
                    bool m_aMPConsumerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CREATEALERTCHANNELREQUEST_H_
