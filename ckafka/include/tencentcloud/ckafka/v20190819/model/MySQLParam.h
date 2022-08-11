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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MYSQLPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MYSQLPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/RecordMapping.h>
#include <tencentcloud/ckafka/v20190819/model/DropCls.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * MySQL类型入参
                */
                class MySQLParam : public AbstractModel
                {
                public:
                    MySQLParam();
                    ~MySQLParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MySQL的数据库名称，"*"为全数据库
                     * @return Database MySQL的数据库名称，"*"为全数据库
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置MySQL的数据库名称，"*"为全数据库
                     * @param Database MySQL的数据库名称，"*"为全数据库
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取MySQL的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     * @return Table MySQL的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     */
                    std::string GetTable() const;

                    /**
                     * 设置MySQL的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     * @param Table MySQL的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取该MySQL在连接管理内的Id
                     * @return Resource 该MySQL在连接管理内的Id
                     */
                    std::string GetResource() const;

                    /**
                     * 设置该MySQL在连接管理内的Id
                     * @param Resource 该MySQL在连接管理内的Id
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取复制存量信息(schema_only不复制, initial全量)，默认位initial
                     * @return SnapshotMode 复制存量信息(schema_only不复制, initial全量)，默认位initial
                     */
                    std::string GetSnapshotMode() const;

                    /**
                     * 设置复制存量信息(schema_only不复制, initial全量)，默认位initial
                     * @param SnapshotMode 复制存量信息(schema_only不复制, initial全量)，默认位initial
                     */
                    void SetSnapshotMode(const std::string& _snapshotMode);

                    /**
                     * 判断参数 SnapshotMode 是否已赋值
                     * @return SnapshotMode 是否已赋值
                     */
                    bool SnapshotModeHasBeenSet() const;

                    /**
                     * 获取存放MySQL的Ddl信息的Topic，为空则默认不存放
                     * @return DdlTopic 存放MySQL的Ddl信息的Topic，为空则默认不存放
                     */
                    std::string GetDdlTopic() const;

                    /**
                     * 设置存放MySQL的Ddl信息的Topic，为空则默认不存放
                     * @param DdlTopic 存放MySQL的Ddl信息的Topic，为空则默认不存放
                     */
                    void SetDdlTopic(const std::string& _ddlTopic);

                    /**
                     * 判断参数 DdlTopic 是否已赋值
                     * @return DdlTopic 是否已赋值
                     */
                    bool DdlTopicHasBeenSet() const;

                    /**
                     * 获取"TABLE" 表示读取项为 table，"QUERY" 表示读取项为 query
                     * @return DataSourceMonitorMode "TABLE" 表示读取项为 table，"QUERY" 表示读取项为 query
                     */
                    std::string GetDataSourceMonitorMode() const;

                    /**
                     * 设置"TABLE" 表示读取项为 table，"QUERY" 表示读取项为 query
                     * @param DataSourceMonitorMode "TABLE" 表示读取项为 table，"QUERY" 表示读取项为 query
                     */
                    void SetDataSourceMonitorMode(const std::string& _dataSourceMonitorMode);

                    /**
                     * 判断参数 DataSourceMonitorMode 是否已赋值
                     * @return DataSourceMonitorMode 是否已赋值
                     */
                    bool DataSourceMonitorModeHasBeenSet() const;

                    /**
                     * 获取当 "DataMonitorMode"="TABLE" 时，传入需要读取的 Table；当 "DataMonitorMode"="QUERY" 时，传入需要读取的查询 sql 语句
                     * @return DataSourceMonitorResource 当 "DataMonitorMode"="TABLE" 时，传入需要读取的 Table；当 "DataMonitorMode"="QUERY" 时，传入需要读取的查询 sql 语句
                     */
                    std::string GetDataSourceMonitorResource() const;

                    /**
                     * 设置当 "DataMonitorMode"="TABLE" 时，传入需要读取的 Table；当 "DataMonitorMode"="QUERY" 时，传入需要读取的查询 sql 语句
                     * @param DataSourceMonitorResource 当 "DataMonitorMode"="TABLE" 时，传入需要读取的 Table；当 "DataMonitorMode"="QUERY" 时，传入需要读取的查询 sql 语句
                     */
                    void SetDataSourceMonitorResource(const std::string& _dataSourceMonitorResource);

                    /**
                     * 判断参数 DataSourceMonitorResource 是否已赋值
                     * @return DataSourceMonitorResource 是否已赋值
                     */
                    bool DataSourceMonitorResourceHasBeenSet() const;

                    /**
                     * 获取"TIMESTAMP" 表示增量列为时间戳类型，"INCREMENT" 表示增量列为自增 id 类型
                     * @return DataSourceIncrementMode "TIMESTAMP" 表示增量列为时间戳类型，"INCREMENT" 表示增量列为自增 id 类型
                     */
                    std::string GetDataSourceIncrementMode() const;

                    /**
                     * 设置"TIMESTAMP" 表示增量列为时间戳类型，"INCREMENT" 表示增量列为自增 id 类型
                     * @param DataSourceIncrementMode "TIMESTAMP" 表示增量列为时间戳类型，"INCREMENT" 表示增量列为自增 id 类型
                     */
                    void SetDataSourceIncrementMode(const std::string& _dataSourceIncrementMode);

                    /**
                     * 判断参数 DataSourceIncrementMode 是否已赋值
                     * @return DataSourceIncrementMode 是否已赋值
                     */
                    bool DataSourceIncrementModeHasBeenSet() const;

                    /**
                     * 获取传入需要监听的列名称
                     * @return DataSourceIncrementColumn 传入需要监听的列名称
                     */
                    std::string GetDataSourceIncrementColumn() const;

                    /**
                     * 设置传入需要监听的列名称
                     * @param DataSourceIncrementColumn 传入需要监听的列名称
                     */
                    void SetDataSourceIncrementColumn(const std::string& _dataSourceIncrementColumn);

                    /**
                     * 判断参数 DataSourceIncrementColumn 是否已赋值
                     * @return DataSourceIncrementColumn 是否已赋值
                     */
                    bool DataSourceIncrementColumnHasBeenSet() const;

                    /**
                     * 获取"HEAD" 表示复制存量 + 增量数据，"TAIL" 表示只复制增量数据
                     * @return DataSourceStartFrom "HEAD" 表示复制存量 + 增量数据，"TAIL" 表示只复制增量数据
                     */
                    std::string GetDataSourceStartFrom() const;

                    /**
                     * 设置"HEAD" 表示复制存量 + 增量数据，"TAIL" 表示只复制增量数据
                     * @param DataSourceStartFrom "HEAD" 表示复制存量 + 增量数据，"TAIL" 表示只复制增量数据
                     */
                    void SetDataSourceStartFrom(const std::string& _dataSourceStartFrom);

                    /**
                     * 判断参数 DataSourceStartFrom 是否已赋值
                     * @return DataSourceStartFrom 是否已赋值
                     */
                    bool DataSourceStartFromHasBeenSet() const;

                    /**
                     * 获取"INSERT" 表示使用 Insert 模式插入，"UPSERT" 表示使用 Upsert 模式插入
                     * @return DataTargetInsertMode "INSERT" 表示使用 Insert 模式插入，"UPSERT" 表示使用 Upsert 模式插入
                     */
                    std::string GetDataTargetInsertMode() const;

                    /**
                     * 设置"INSERT" 表示使用 Insert 模式插入，"UPSERT" 表示使用 Upsert 模式插入
                     * @param DataTargetInsertMode "INSERT" 表示使用 Insert 模式插入，"UPSERT" 表示使用 Upsert 模式插入
                     */
                    void SetDataTargetInsertMode(const std::string& _dataTargetInsertMode);

                    /**
                     * 判断参数 DataTargetInsertMode 是否已赋值
                     * @return DataTargetInsertMode 是否已赋值
                     */
                    bool DataTargetInsertModeHasBeenSet() const;

                    /**
                     * 获取当 "DataInsertMode"="UPSERT" 时，传入当前 upsert 时依赖的主键
                     * @return DataTargetPrimaryKeyField 当 "DataInsertMode"="UPSERT" 时，传入当前 upsert 时依赖的主键
                     */
                    std::string GetDataTargetPrimaryKeyField() const;

                    /**
                     * 设置当 "DataInsertMode"="UPSERT" 时，传入当前 upsert 时依赖的主键
                     * @param DataTargetPrimaryKeyField 当 "DataInsertMode"="UPSERT" 时，传入当前 upsert 时依赖的主键
                     */
                    void SetDataTargetPrimaryKeyField(const std::string& _dataTargetPrimaryKeyField);

                    /**
                     * 判断参数 DataTargetPrimaryKeyField 是否已赋值
                     * @return DataTargetPrimaryKeyField 是否已赋值
                     */
                    bool DataTargetPrimaryKeyFieldHasBeenSet() const;

                    /**
                     * 获取表与消息间的映射关系
                     * @return DataTargetRecordMapping 表与消息间的映射关系
                     */
                    std::vector<RecordMapping> GetDataTargetRecordMapping() const;

                    /**
                     * 设置表与消息间的映射关系
                     * @param DataTargetRecordMapping 表与消息间的映射关系
                     */
                    void SetDataTargetRecordMapping(const std::vector<RecordMapping>& _dataTargetRecordMapping);

                    /**
                     * 判断参数 DataTargetRecordMapping 是否已赋值
                     * @return DataTargetRecordMapping 是否已赋值
                     */
                    bool DataTargetRecordMappingHasBeenSet() const;

                    /**
                     * 获取事件路由到特定主题的正则表达式，默认为(.*)
                     * @return TopicRegex 事件路由到特定主题的正则表达式，默认为(.*)
                     */
                    std::string GetTopicRegex() const;

                    /**
                     * 设置事件路由到特定主题的正则表达式，默认为(.*)
                     * @param TopicRegex 事件路由到特定主题的正则表达式，默认为(.*)
                     */
                    void SetTopicRegex(const std::string& _topicRegex);

                    /**
                     * 判断参数 TopicRegex 是否已赋值
                     * @return TopicRegex 是否已赋值
                     */
                    bool TopicRegexHasBeenSet() const;

                    /**
                     * 获取TopicRegex的引用组，指定$1、$2等
                     * @return TopicReplacement TopicRegex的引用组，指定$1、$2等
                     */
                    std::string GetTopicReplacement() const;

                    /**
                     * 设置TopicRegex的引用组，指定$1、$2等
                     * @param TopicReplacement TopicRegex的引用组，指定$1、$2等
                     */
                    void SetTopicReplacement(const std::string& _topicReplacement);

                    /**
                     * 判断参数 TopicReplacement 是否已赋值
                     * @return TopicReplacement 是否已赋值
                     */
                    bool TopicReplacementHasBeenSet() const;

                    /**
                     * 获取格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
                     * @return KeyColumns 格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
                     */
                    std::string GetKeyColumns() const;

                    /**
                     * 设置格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
                     * @param KeyColumns 格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
                     */
                    void SetKeyColumns(const std::string& _keyColumns);

                    /**
                     * 判断参数 KeyColumns 是否已赋值
                     * @return KeyColumns 是否已赋值
                     */
                    bool KeyColumnsHasBeenSet() const;

                    /**
                     * 获取Mysql 是否抛弃解析失败的消息，默认为true
                     * @return DropInvalidMessage Mysql 是否抛弃解析失败的消息，默认为true
                     */
                    bool GetDropInvalidMessage() const;

                    /**
                     * 设置Mysql 是否抛弃解析失败的消息，默认为true
                     * @param DropInvalidMessage Mysql 是否抛弃解析失败的消息，默认为true
                     */
                    void SetDropInvalidMessage(const bool& _dropInvalidMessage);

                    /**
                     * 判断参数 DropInvalidMessage 是否已赋值
                     * @return DropInvalidMessage 是否已赋值
                     */
                    bool DropInvalidMessageHasBeenSet() const;

                    /**
                     * 获取当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     * @return DropCls 当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     */
                    DropCls GetDropCls() const;

                    /**
                     * 设置当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     * @param DropCls 当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     */
                    void SetDropCls(const DropCls& _dropCls);

                    /**
                     * 判断参数 DropCls 是否已赋值
                     * @return DropCls 是否已赋值
                     */
                    bool DropClsHasBeenSet() const;

                private:

                    /**
                     * MySQL的数据库名称，"*"为全数据库
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * MySQL的数据表名称，"*"为所监听的所有数据库中的非系统表，可以","间隔，监听多个数据表，但数据表需要以"数据库名.数据表名"的格式进行填写
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 该MySQL在连接管理内的Id
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 复制存量信息(schema_only不复制, initial全量)，默认位initial
                     */
                    std::string m_snapshotMode;
                    bool m_snapshotModeHasBeenSet;

                    /**
                     * 存放MySQL的Ddl信息的Topic，为空则默认不存放
                     */
                    std::string m_ddlTopic;
                    bool m_ddlTopicHasBeenSet;

                    /**
                     * "TABLE" 表示读取项为 table，"QUERY" 表示读取项为 query
                     */
                    std::string m_dataSourceMonitorMode;
                    bool m_dataSourceMonitorModeHasBeenSet;

                    /**
                     * 当 "DataMonitorMode"="TABLE" 时，传入需要读取的 Table；当 "DataMonitorMode"="QUERY" 时，传入需要读取的查询 sql 语句
                     */
                    std::string m_dataSourceMonitorResource;
                    bool m_dataSourceMonitorResourceHasBeenSet;

                    /**
                     * "TIMESTAMP" 表示增量列为时间戳类型，"INCREMENT" 表示增量列为自增 id 类型
                     */
                    std::string m_dataSourceIncrementMode;
                    bool m_dataSourceIncrementModeHasBeenSet;

                    /**
                     * 传入需要监听的列名称
                     */
                    std::string m_dataSourceIncrementColumn;
                    bool m_dataSourceIncrementColumnHasBeenSet;

                    /**
                     * "HEAD" 表示复制存量 + 增量数据，"TAIL" 表示只复制增量数据
                     */
                    std::string m_dataSourceStartFrom;
                    bool m_dataSourceStartFromHasBeenSet;

                    /**
                     * "INSERT" 表示使用 Insert 模式插入，"UPSERT" 表示使用 Upsert 模式插入
                     */
                    std::string m_dataTargetInsertMode;
                    bool m_dataTargetInsertModeHasBeenSet;

                    /**
                     * 当 "DataInsertMode"="UPSERT" 时，传入当前 upsert 时依赖的主键
                     */
                    std::string m_dataTargetPrimaryKeyField;
                    bool m_dataTargetPrimaryKeyFieldHasBeenSet;

                    /**
                     * 表与消息间的映射关系
                     */
                    std::vector<RecordMapping> m_dataTargetRecordMapping;
                    bool m_dataTargetRecordMappingHasBeenSet;

                    /**
                     * 事件路由到特定主题的正则表达式，默认为(.*)
                     */
                    std::string m_topicRegex;
                    bool m_topicRegexHasBeenSet;

                    /**
                     * TopicRegex的引用组，指定$1、$2等
                     */
                    std::string m_topicReplacement;
                    bool m_topicReplacementHasBeenSet;

                    /**
                     * 格式：库1.表1:字段1,字段2;库2.表2:字段2，表之间;（分号）隔开，字段之间,（逗号）隔开。不指定的表默认取表的主键
                     */
                    std::string m_keyColumns;
                    bool m_keyColumnsHasBeenSet;

                    /**
                     * Mysql 是否抛弃解析失败的消息，默认为true
                     */
                    bool m_dropInvalidMessage;
                    bool m_dropInvalidMessageHasBeenSet;

                    /**
                     * 当设置成员参数DropInvalidMessageToCls设置为true时,DropInvalidMessage参数失效
                     */
                    DropCls m_dropCls;
                    bool m_dropClsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MYSQLPARAM_H_
