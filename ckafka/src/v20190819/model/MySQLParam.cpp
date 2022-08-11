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

#include <tencentcloud/ckafka/v20190819/model/MySQLParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

MySQLParam::MySQLParam() :
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_snapshotModeHasBeenSet(false),
    m_ddlTopicHasBeenSet(false),
    m_dataSourceMonitorModeHasBeenSet(false),
    m_dataSourceMonitorResourceHasBeenSet(false),
    m_dataSourceIncrementModeHasBeenSet(false),
    m_dataSourceIncrementColumnHasBeenSet(false),
    m_dataSourceStartFromHasBeenSet(false),
    m_dataTargetInsertModeHasBeenSet(false),
    m_dataTargetPrimaryKeyFieldHasBeenSet(false),
    m_dataTargetRecordMappingHasBeenSet(false),
    m_topicRegexHasBeenSet(false),
    m_topicReplacementHasBeenSet(false),
    m_keyColumnsHasBeenSet(false),
    m_dropInvalidMessageHasBeenSet(false),
    m_dropClsHasBeenSet(false)
{
}

CoreInternalOutcome MySQLParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("SnapshotMode") && !value["SnapshotMode"].IsNull())
    {
        if (!value["SnapshotMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.SnapshotMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotMode = string(value["SnapshotMode"].GetString());
        m_snapshotModeHasBeenSet = true;
    }

    if (value.HasMember("DdlTopic") && !value["DdlTopic"].IsNull())
    {
        if (!value["DdlTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.DdlTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ddlTopic = string(value["DdlTopic"].GetString());
        m_ddlTopicHasBeenSet = true;
    }

    if (value.HasMember("DataSourceMonitorMode") && !value["DataSourceMonitorMode"].IsNull())
    {
        if (!value["DataSourceMonitorMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.DataSourceMonitorMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceMonitorMode = string(value["DataSourceMonitorMode"].GetString());
        m_dataSourceMonitorModeHasBeenSet = true;
    }

    if (value.HasMember("DataSourceMonitorResource") && !value["DataSourceMonitorResource"].IsNull())
    {
        if (!value["DataSourceMonitorResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.DataSourceMonitorResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceMonitorResource = string(value["DataSourceMonitorResource"].GetString());
        m_dataSourceMonitorResourceHasBeenSet = true;
    }

    if (value.HasMember("DataSourceIncrementMode") && !value["DataSourceIncrementMode"].IsNull())
    {
        if (!value["DataSourceIncrementMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.DataSourceIncrementMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceIncrementMode = string(value["DataSourceIncrementMode"].GetString());
        m_dataSourceIncrementModeHasBeenSet = true;
    }

    if (value.HasMember("DataSourceIncrementColumn") && !value["DataSourceIncrementColumn"].IsNull())
    {
        if (!value["DataSourceIncrementColumn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.DataSourceIncrementColumn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceIncrementColumn = string(value["DataSourceIncrementColumn"].GetString());
        m_dataSourceIncrementColumnHasBeenSet = true;
    }

    if (value.HasMember("DataSourceStartFrom") && !value["DataSourceStartFrom"].IsNull())
    {
        if (!value["DataSourceStartFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.DataSourceStartFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceStartFrom = string(value["DataSourceStartFrom"].GetString());
        m_dataSourceStartFromHasBeenSet = true;
    }

    if (value.HasMember("DataTargetInsertMode") && !value["DataTargetInsertMode"].IsNull())
    {
        if (!value["DataTargetInsertMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.DataTargetInsertMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTargetInsertMode = string(value["DataTargetInsertMode"].GetString());
        m_dataTargetInsertModeHasBeenSet = true;
    }

    if (value.HasMember("DataTargetPrimaryKeyField") && !value["DataTargetPrimaryKeyField"].IsNull())
    {
        if (!value["DataTargetPrimaryKeyField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.DataTargetPrimaryKeyField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTargetPrimaryKeyField = string(value["DataTargetPrimaryKeyField"].GetString());
        m_dataTargetPrimaryKeyFieldHasBeenSet = true;
    }

    if (value.HasMember("DataTargetRecordMapping") && !value["DataTargetRecordMapping"].IsNull())
    {
        if (!value["DataTargetRecordMapping"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MySQLParam.DataTargetRecordMapping` is not array type"));

        const rapidjson::Value &tmpValue = value["DataTargetRecordMapping"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataTargetRecordMapping.push_back(item);
        }
        m_dataTargetRecordMappingHasBeenSet = true;
    }

    if (value.HasMember("TopicRegex") && !value["TopicRegex"].IsNull())
    {
        if (!value["TopicRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.TopicRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicRegex = string(value["TopicRegex"].GetString());
        m_topicRegexHasBeenSet = true;
    }

    if (value.HasMember("TopicReplacement") && !value["TopicReplacement"].IsNull())
    {
        if (!value["TopicReplacement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.TopicReplacement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicReplacement = string(value["TopicReplacement"].GetString());
        m_topicReplacementHasBeenSet = true;
    }

    if (value.HasMember("KeyColumns") && !value["KeyColumns"].IsNull())
    {
        if (!value["KeyColumns"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.KeyColumns` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyColumns = string(value["KeyColumns"].GetString());
        m_keyColumnsHasBeenSet = true;
    }

    if (value.HasMember("DropInvalidMessage") && !value["DropInvalidMessage"].IsNull())
    {
        if (!value["DropInvalidMessage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.DropInvalidMessage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dropInvalidMessage = value["DropInvalidMessage"].GetBool();
        m_dropInvalidMessageHasBeenSet = true;
    }

    if (value.HasMember("DropCls") && !value["DropCls"].IsNull())
    {
        if (!value["DropCls"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MySQLParam.DropCls` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dropCls.Deserialize(value["DropCls"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dropClsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MySQLParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotMode.c_str(), allocator).Move(), allocator);
    }

    if (m_ddlTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdlTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ddlTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceMonitorModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceMonitorMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceMonitorMode.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceMonitorResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceMonitorResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceMonitorResource.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceIncrementModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceIncrementMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceIncrementMode.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceIncrementColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceIncrementColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceIncrementColumn.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceStartFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceStartFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceStartFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTargetInsertModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTargetInsertMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTargetInsertMode.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTargetPrimaryKeyFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTargetPrimaryKeyField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTargetPrimaryKeyField.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTargetRecordMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTargetRecordMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataTargetRecordMapping.begin(); itr != m_dataTargetRecordMapping.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topicRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicRegex.c_str(), allocator).Move(), allocator);
    }

    if (m_topicReplacementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicReplacement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicReplacement.c_str(), allocator).Move(), allocator);
    }

    if (m_keyColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyColumns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyColumns.c_str(), allocator).Move(), allocator);
    }

    if (m_dropInvalidMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropInvalidMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropInvalidMessage, allocator);
    }

    if (m_dropClsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropCls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dropCls.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MySQLParam::GetDatabase() const
{
    return m_database;
}

void MySQLParam::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool MySQLParam::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string MySQLParam::GetTable() const
{
    return m_table;
}

void MySQLParam::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool MySQLParam::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string MySQLParam::GetResource() const
{
    return m_resource;
}

void MySQLParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool MySQLParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string MySQLParam::GetSnapshotMode() const
{
    return m_snapshotMode;
}

void MySQLParam::SetSnapshotMode(const string& _snapshotMode)
{
    m_snapshotMode = _snapshotMode;
    m_snapshotModeHasBeenSet = true;
}

bool MySQLParam::SnapshotModeHasBeenSet() const
{
    return m_snapshotModeHasBeenSet;
}

string MySQLParam::GetDdlTopic() const
{
    return m_ddlTopic;
}

void MySQLParam::SetDdlTopic(const string& _ddlTopic)
{
    m_ddlTopic = _ddlTopic;
    m_ddlTopicHasBeenSet = true;
}

bool MySQLParam::DdlTopicHasBeenSet() const
{
    return m_ddlTopicHasBeenSet;
}

string MySQLParam::GetDataSourceMonitorMode() const
{
    return m_dataSourceMonitorMode;
}

void MySQLParam::SetDataSourceMonitorMode(const string& _dataSourceMonitorMode)
{
    m_dataSourceMonitorMode = _dataSourceMonitorMode;
    m_dataSourceMonitorModeHasBeenSet = true;
}

bool MySQLParam::DataSourceMonitorModeHasBeenSet() const
{
    return m_dataSourceMonitorModeHasBeenSet;
}

string MySQLParam::GetDataSourceMonitorResource() const
{
    return m_dataSourceMonitorResource;
}

void MySQLParam::SetDataSourceMonitorResource(const string& _dataSourceMonitorResource)
{
    m_dataSourceMonitorResource = _dataSourceMonitorResource;
    m_dataSourceMonitorResourceHasBeenSet = true;
}

bool MySQLParam::DataSourceMonitorResourceHasBeenSet() const
{
    return m_dataSourceMonitorResourceHasBeenSet;
}

string MySQLParam::GetDataSourceIncrementMode() const
{
    return m_dataSourceIncrementMode;
}

void MySQLParam::SetDataSourceIncrementMode(const string& _dataSourceIncrementMode)
{
    m_dataSourceIncrementMode = _dataSourceIncrementMode;
    m_dataSourceIncrementModeHasBeenSet = true;
}

bool MySQLParam::DataSourceIncrementModeHasBeenSet() const
{
    return m_dataSourceIncrementModeHasBeenSet;
}

string MySQLParam::GetDataSourceIncrementColumn() const
{
    return m_dataSourceIncrementColumn;
}

void MySQLParam::SetDataSourceIncrementColumn(const string& _dataSourceIncrementColumn)
{
    m_dataSourceIncrementColumn = _dataSourceIncrementColumn;
    m_dataSourceIncrementColumnHasBeenSet = true;
}

bool MySQLParam::DataSourceIncrementColumnHasBeenSet() const
{
    return m_dataSourceIncrementColumnHasBeenSet;
}

string MySQLParam::GetDataSourceStartFrom() const
{
    return m_dataSourceStartFrom;
}

void MySQLParam::SetDataSourceStartFrom(const string& _dataSourceStartFrom)
{
    m_dataSourceStartFrom = _dataSourceStartFrom;
    m_dataSourceStartFromHasBeenSet = true;
}

bool MySQLParam::DataSourceStartFromHasBeenSet() const
{
    return m_dataSourceStartFromHasBeenSet;
}

string MySQLParam::GetDataTargetInsertMode() const
{
    return m_dataTargetInsertMode;
}

void MySQLParam::SetDataTargetInsertMode(const string& _dataTargetInsertMode)
{
    m_dataTargetInsertMode = _dataTargetInsertMode;
    m_dataTargetInsertModeHasBeenSet = true;
}

bool MySQLParam::DataTargetInsertModeHasBeenSet() const
{
    return m_dataTargetInsertModeHasBeenSet;
}

string MySQLParam::GetDataTargetPrimaryKeyField() const
{
    return m_dataTargetPrimaryKeyField;
}

void MySQLParam::SetDataTargetPrimaryKeyField(const string& _dataTargetPrimaryKeyField)
{
    m_dataTargetPrimaryKeyField = _dataTargetPrimaryKeyField;
    m_dataTargetPrimaryKeyFieldHasBeenSet = true;
}

bool MySQLParam::DataTargetPrimaryKeyFieldHasBeenSet() const
{
    return m_dataTargetPrimaryKeyFieldHasBeenSet;
}

vector<RecordMapping> MySQLParam::GetDataTargetRecordMapping() const
{
    return m_dataTargetRecordMapping;
}

void MySQLParam::SetDataTargetRecordMapping(const vector<RecordMapping>& _dataTargetRecordMapping)
{
    m_dataTargetRecordMapping = _dataTargetRecordMapping;
    m_dataTargetRecordMappingHasBeenSet = true;
}

bool MySQLParam::DataTargetRecordMappingHasBeenSet() const
{
    return m_dataTargetRecordMappingHasBeenSet;
}

string MySQLParam::GetTopicRegex() const
{
    return m_topicRegex;
}

void MySQLParam::SetTopicRegex(const string& _topicRegex)
{
    m_topicRegex = _topicRegex;
    m_topicRegexHasBeenSet = true;
}

bool MySQLParam::TopicRegexHasBeenSet() const
{
    return m_topicRegexHasBeenSet;
}

string MySQLParam::GetTopicReplacement() const
{
    return m_topicReplacement;
}

void MySQLParam::SetTopicReplacement(const string& _topicReplacement)
{
    m_topicReplacement = _topicReplacement;
    m_topicReplacementHasBeenSet = true;
}

bool MySQLParam::TopicReplacementHasBeenSet() const
{
    return m_topicReplacementHasBeenSet;
}

string MySQLParam::GetKeyColumns() const
{
    return m_keyColumns;
}

void MySQLParam::SetKeyColumns(const string& _keyColumns)
{
    m_keyColumns = _keyColumns;
    m_keyColumnsHasBeenSet = true;
}

bool MySQLParam::KeyColumnsHasBeenSet() const
{
    return m_keyColumnsHasBeenSet;
}

bool MySQLParam::GetDropInvalidMessage() const
{
    return m_dropInvalidMessage;
}

void MySQLParam::SetDropInvalidMessage(const bool& _dropInvalidMessage)
{
    m_dropInvalidMessage = _dropInvalidMessage;
    m_dropInvalidMessageHasBeenSet = true;
}

bool MySQLParam::DropInvalidMessageHasBeenSet() const
{
    return m_dropInvalidMessageHasBeenSet;
}

DropCls MySQLParam::GetDropCls() const
{
    return m_dropCls;
}

void MySQLParam::SetDropCls(const DropCls& _dropCls)
{
    m_dropCls = _dropCls;
    m_dropClsHasBeenSet = true;
}

bool MySQLParam::DropClsHasBeenSet() const
{
    return m_dropClsHasBeenSet;
}

