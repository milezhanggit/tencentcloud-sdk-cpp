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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_CREATECUSTOMIZATIONREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_CREATECUSTOMIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * CreateCustomization请求参数结构体
                */
                class CreateCustomizationRequest : public AbstractModel
                {
                public:
                    CreateCustomizationRequest();
                    ~CreateCustomizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID，登录控制台创建应用得到的AppID
                     * @return BizId 应用 ID，登录控制台创建应用得到的AppID
                     */
                    int64_t GetBizId() const;

                    /**
                     * 设置应用 ID，登录控制台创建应用得到的AppID
                     * @param BizId 应用 ID，登录控制台创建应用得到的AppID
                     */
                    void SetBizId(const int64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     * @return TextUrl 文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     */
                    std::string GetTextUrl() const;

                    /**
                     * 设置文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     * @param TextUrl 文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     */
                    void SetTextUrl(const std::string& _textUrl);

                    /**
                     * 判断参数 TextUrl 是否已赋值
                     * @return TextUrl 是否已赋值
                     */
                    bool TextUrlHasBeenSet() const;

                private:

                    /**
                     * 应用 ID，登录控制台创建应用得到的AppID
                     */
                    int64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 文本文件的下载地址，服务会从该地址下载文件，目前仅支持腾讯云cos
                     */
                    std::string m_textUrl;
                    bool m_textUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_CREATECUSTOMIZATIONREQUEST_H_
