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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STORAGEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STORAGEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/CloudStorage.h>
#include <tencentcloud/trtc/v20190722/model/CloudVod.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 第三方存储参数。
                */
                class StorageParams : public AbstractModel
                {
                public:
                    StorageParams();
                    ~StorageParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方云存储的账号信息（暂不支持）。
                     * @return CloudStorage 第三方云存储的账号信息（暂不支持）。
                     */
                    CloudStorage GetCloudStorage() const;

                    /**
                     * 设置第三方云存储的账号信息（暂不支持）。
                     * @param CloudStorage 第三方云存储的账号信息（暂不支持）。
                     */
                    void SetCloudStorage(const CloudStorage& _cloudStorage);

                    /**
                     * 判断参数 CloudStorage 是否已赋值
                     * @return CloudStorage 是否已赋值
                     */
                    bool CloudStorageHasBeenSet() const;

                    /**
                     * 获取腾讯云云点播的账号信息（必填，目前仅支持存储至腾讯云云点播）。
                     * @return CloudVod 腾讯云云点播的账号信息（必填，目前仅支持存储至腾讯云云点播）。
                     */
                    CloudVod GetCloudVod() const;

                    /**
                     * 设置腾讯云云点播的账号信息（必填，目前仅支持存储至腾讯云云点播）。
                     * @param CloudVod 腾讯云云点播的账号信息（必填，目前仅支持存储至腾讯云云点播）。
                     */
                    void SetCloudVod(const CloudVod& _cloudVod);

                    /**
                     * 判断参数 CloudVod 是否已赋值
                     * @return CloudVod 是否已赋值
                     */
                    bool CloudVodHasBeenSet() const;

                private:

                    /**
                     * 第三方云存储的账号信息（暂不支持）。
                     */
                    CloudStorage m_cloudStorage;
                    bool m_cloudStorageHasBeenSet;

                    /**
                     * 腾讯云云点播的账号信息（必填，目前仅支持存储至腾讯云云点播）。
                     */
                    CloudVod m_cloudVod;
                    bool m_cloudVodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STORAGEPARAMS_H_
