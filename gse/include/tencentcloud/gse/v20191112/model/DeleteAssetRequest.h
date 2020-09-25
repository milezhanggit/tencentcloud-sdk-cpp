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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DELETEASSETREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DELETEASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DeleteAsset请求参数结构体
                */
                class DeleteAssetRequest : public AbstractModel
                {
                public:
                    DeleteAssetRequest();
                    ~DeleteAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生成包ID
                     * @return AssetId 生成包ID
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置生成包ID
                     * @param AssetId 生成包ID
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     */
                    bool AssetIdHasBeenSet() const;

                private:

                    /**
                     * 生成包ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DELETEASSETREQUEST_H_
