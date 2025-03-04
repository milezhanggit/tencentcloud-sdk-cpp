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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMA_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 集成节点schema
                */
                class IntegrationNodeSchema : public AbstractModel
                {
                public:
                    IntegrationNodeSchema();
                    ~IntegrationNodeSchema() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取schema id
                     * @return Id schema id
                     */
                    std::string GetId() const;

                    /**
                     * 设置schema id
                     * @param Id schema id
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取schema名称
                     * @return Name schema名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置schema名称
                     * @param Name schema名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取schema类型
                     * @return Type schema类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置schema类型
                     * @param Type schema类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取schema值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value schema值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置schema值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value schema值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取schema拓展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties schema拓展属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> GetProperties() const;

                    /**
                     * 设置schema拓展属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Properties schema拓展属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProperties(const std::vector<RecordField>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * schema id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * schema名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * schema类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * schema值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * schema拓展属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordField> m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INTEGRATIONNODESCHEMA_H_
