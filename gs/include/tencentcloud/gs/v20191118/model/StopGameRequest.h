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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_STOPGAMEREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_STOPGAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * StopGame请求参数结构体
                */
                class StopGameRequest : public AbstractModel
                {
                public:
                    StopGameRequest();
                    ~StopGameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏用户ID
                     * @return UserId 游戏用户ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置游戏用户ID
                     * @param UserId 游戏用户ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取【多人游戏】游戏主机用户ID
                     * @return HostUserId 【多人游戏】游戏主机用户ID
                     */
                    std::string GetHostUserId() const;

                    /**
                     * 设置【多人游戏】游戏主机用户ID
                     * @param HostUserId 【多人游戏】游戏主机用户ID
                     */
                    void SetHostUserId(const std::string& _hostUserId);

                    /**
                     * 判断参数 HostUserId 是否已赋值
                     * @return HostUserId 是否已赋值
                     */
                    bool HostUserIdHasBeenSet() const;

                private:

                    /**
                     * 游戏用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 【多人游戏】游戏主机用户ID
                     */
                    std::string m_hostUserId;
                    bool m_hostUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_STOPGAMEREQUEST_H_
