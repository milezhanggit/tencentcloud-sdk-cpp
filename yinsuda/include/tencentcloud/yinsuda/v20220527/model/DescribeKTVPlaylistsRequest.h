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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVPLAYLISTSREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVPLAYLISTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * DescribeKTVPlaylists请求参数结构体
                */
                class DescribeKTVPlaylistsRequest : public AbstractModel
                {
                public:
                    DescribeKTVPlaylistsRequest();
                    ~DescribeKTVPlaylistsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param AppName 应用名称。
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取用户标识。
                     * @return UserId 用户标识。
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户标识。
                     * @param UserId 用户标识。
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取类型列表，取值有：
<li>OfficialRec：官方推荐；</li>
<li>Customize：自定义。</li>
                     * @return Types 类型列表，取值有：
<li>OfficialRec：官方推荐；</li>
<li>Customize：自定义。</li>
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置类型列表，取值有：
<li>OfficialRec：官方推荐；</li>
<li>Customize：自定义。</li>
                     * @param Types 类型列表，取值有：
<li>OfficialRec：官方推荐；</li>
<li>Customize：自定义。</li>
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     */
                    bool TypesHasBeenSet() const;

                private:

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 用户标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 类型列表，取值有：
<li>OfficialRec：官方推荐；</li>
<li>Customize：自定义。</li>
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVPLAYLISTSREQUEST_H_
