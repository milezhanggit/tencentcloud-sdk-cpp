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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ATTRIBUTES_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ATTRIBUTES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 采样日志附带属性
                */
                class Attributes : public AbstractModel
                {
                public:
                    Attributes();
                    ~Attributes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取采用请求返回码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 采用请求返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置采用请求返回码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 采用请求返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取采样请求结果码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 采样请求结果码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResult() const;

                    /**
                     * 设置采样请求结果码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Result 采样请求结果码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取采样请求API
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Service 采样请求API
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetService() const;

                    /**
                     * 设置采样请求API
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Service 采样请求API
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取采样请求调用方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method 采样请求调用方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置采样请求调用方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Method 采样请求调用方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取采样请求延时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 采样请求延时时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置采样请求延时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Duration 采样请求延时时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 采用请求返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 采样请求结果码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 采样请求API
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 采样请求调用方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 采样请求延时时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ATTRIBUTES_H_
