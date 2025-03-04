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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONNECTRESOURCERESOURCEIDRESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONNECTRESOURCERESOURCEIDRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 返回连接源的Id
                */
                class ConnectResourceResourceIdResp : public AbstractModel
                {
                public:
                    ConnectResourceResourceIdResp();
                    ~ConnectResourceResourceIdResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接源的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 连接源的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置连接源的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceId 连接源的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 连接源的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONNECTRESOURCERESOURCEIDRESP_H_
