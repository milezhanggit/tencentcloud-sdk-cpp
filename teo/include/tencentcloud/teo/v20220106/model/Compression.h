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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_COMPRESSION_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_COMPRESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 智能压缩配置
                */
                class Compression : public AbstractModel
                {
                public:
                    Compression();
                    ~Compression() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能压缩配置开关
on：开启
off：关闭
                     * @return Switch 智能压缩配置开关
on：开启
off：关闭
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置智能压缩配置开关
on：开启
off：关闭
                     * @param Switch 智能压缩配置开关
on：开启
off：关闭
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取支持的压缩算法列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Algorithms 支持的压缩算法列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetAlgorithms() const;

                    /**
                     * 设置支持的压缩算法列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Algorithms 支持的压缩算法列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlgorithms(const std::vector<std::string>& _algorithms);

                    /**
                     * 判断参数 Algorithms 是否已赋值
                     * @return Algorithms 是否已赋值
                     */
                    bool AlgorithmsHasBeenSet() const;

                private:

                    /**
                     * 智能压缩配置开关
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 支持的压缩算法列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_algorithms;
                    bool m_algorithmsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_COMPRESSION_H_
