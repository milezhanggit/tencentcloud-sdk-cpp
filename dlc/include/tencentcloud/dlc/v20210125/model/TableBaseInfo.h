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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TABLEBASEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TABLEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据表配置信息
                */
                class TableBaseInfo : public AbstractModel
                {
                public:
                    TableBaseInfo();
                    ~TableBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该数据表所属数据库名字
                     * @return DatabaseName 该数据表所属数据库名字
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置该数据表所属数据库名字
                     * @param DatabaseName 该数据表所属数据库名字
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取数据表名字
                     * @return TableName 数据表名字
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置数据表名字
                     * @param TableName 数据表名字
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取该数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceConnectionName 该数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置该数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasourceConnectionName 该数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取该数据表备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableComment 该数据表备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableComment() const;

                    /**
                     * 设置该数据表备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableComment 该数据表备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableComment(const std::string& _tableComment);

                    /**
                     * 判断参数 TableComment 是否已赋值
                     * @return TableComment 是否已赋值
                     */
                    bool TableCommentHasBeenSet() const;

                    /**
                     * 获取具体类型，表or视图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 具体类型，表or视图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置具体类型，表or视图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 具体类型，表or视图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数据格式类型，hive，iceberg等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableFormat 数据格式类型，hive，iceberg等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableFormat() const;

                    /**
                     * 设置数据格式类型，hive，iceberg等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableFormat 数据格式类型，hive，iceberg等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableFormat(const std::string& _tableFormat);

                    /**
                     * 判断参数 TableFormat 是否已赋值
                     * @return TableFormat 是否已赋值
                     */
                    bool TableFormatHasBeenSet() const;

                    /**
                     * 获取建表用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAlias 建表用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置建表用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserAlias 建表用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取建表用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserSubUin 建表用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserSubUin() const;

                    /**
                     * 设置建表用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserSubUin 建表用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserSubUin(const std::string& _userSubUin);

                    /**
                     * 判断参数 UserSubUin 是否已赋值
                     * @return UserSubUin 是否已赋值
                     */
                    bool UserSubUinHasBeenSet() const;

                private:

                    /**
                     * 该数据表所属数据库名字
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据表名字
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 该数据表所属数据源名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 该数据表备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                    /**
                     * 具体类型，表or视图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据格式类型，hive，iceberg等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableFormat;
                    bool m_tableFormatHasBeenSet;

                    /**
                     * 建表用户昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * 建表用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userSubUin;
                    bool m_userSubUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TABLEBASEINFO_H_
