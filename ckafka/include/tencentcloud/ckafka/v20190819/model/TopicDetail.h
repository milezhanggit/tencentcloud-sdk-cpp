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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAIL_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Config.h>
#include <tencentcloud/ckafka/v20190819/model/TopicRetentionTimeConfigRsp.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 主题详情
                */
                class TopicDetail : public AbstractModel
                {
                public:
                    TopicDetail();
                    ~TopicDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名称
                     * @return TopicName 主题名称
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称
                     * @param TopicName 主题名称
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取主题ID
                     * @return TopicId 主题ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题ID
                     * @param TopicId 主题ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取分区数
                     * @return PartitionNum 分区数
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置分区数
                     * @param PartitionNum 分区数
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return ReplicaNum 副本数
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置副本数
                     * @param ReplicaNum 副本数
                     */
                    void SetReplicaNum(const int64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Note 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Note 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取是否开启ip鉴权白名单，true表示开启，false表示不开启
                     * @return EnableWhiteList 是否开启ip鉴权白名单，true表示开启，false表示不开启
                     */
                    bool GetEnableWhiteList() const;

                    /**
                     * 设置是否开启ip鉴权白名单，true表示开启，false表示不开启
                     * @param EnableWhiteList 是否开启ip鉴权白名单，true表示开启，false表示不开启
                     */
                    void SetEnableWhiteList(const bool& _enableWhiteList);

                    /**
                     * 判断参数 EnableWhiteList 是否已赋值
                     * @return EnableWhiteList 是否已赋值
                     */
                    bool EnableWhiteListHasBeenSet() const;

                    /**
                     * 获取ip白名单中ip个数
                     * @return IpWhiteListCount ip白名单中ip个数
                     */
                    int64_t GetIpWhiteListCount() const;

                    /**
                     * 设置ip白名单中ip个数
                     * @param IpWhiteListCount ip白名单中ip个数
                     */
                    void SetIpWhiteListCount(const int64_t& _ipWhiteListCount);

                    /**
                     * 判断参数 IpWhiteListCount 是否已赋值
                     * @return IpWhiteListCount 是否已赋值
                     */
                    bool IpWhiteListCountHasBeenSet() const;

                    /**
                     * 获取数据备份cos bucket: 转存到cos 的bucket地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForwardCosBucket 数据备份cos bucket: 转存到cos 的bucket地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetForwardCosBucket() const;

                    /**
                     * 设置数据备份cos bucket: 转存到cos 的bucket地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ForwardCosBucket 数据备份cos bucket: 转存到cos 的bucket地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetForwardCosBucket(const std::string& _forwardCosBucket);

                    /**
                     * 判断参数 ForwardCosBucket 是否已赋值
                     * @return ForwardCosBucket 是否已赋值
                     */
                    bool ForwardCosBucketHasBeenSet() const;

                    /**
                     * 获取数据备份cos 状态： 1 不开启数据备份，0 开启数据备份
                     * @return ForwardStatus 数据备份cos 状态： 1 不开启数据备份，0 开启数据备份
                     */
                    int64_t GetForwardStatus() const;

                    /**
                     * 设置数据备份cos 状态： 1 不开启数据备份，0 开启数据备份
                     * @param ForwardStatus 数据备份cos 状态： 1 不开启数据备份，0 开启数据备份
                     */
                    void SetForwardStatus(const int64_t& _forwardStatus);

                    /**
                     * 判断参数 ForwardStatus 是否已赋值
                     * @return ForwardStatus 是否已赋值
                     */
                    bool ForwardStatusHasBeenSet() const;

                    /**
                     * 获取数据备份到cos的周期频率
                     * @return ForwardInterval 数据备份到cos的周期频率
                     */
                    int64_t GetForwardInterval() const;

                    /**
                     * 设置数据备份到cos的周期频率
                     * @param ForwardInterval 数据备份到cos的周期频率
                     */
                    void SetForwardInterval(const int64_t& _forwardInterval);

                    /**
                     * 判断参数 ForwardInterval 是否已赋值
                     * @return ForwardInterval 是否已赋值
                     */
                    bool ForwardIntervalHasBeenSet() const;

                    /**
                     * 获取高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config 高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Config GetConfig() const;

                    /**
                     * 设置高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Config 高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfig(const Config& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取消息保留时间配置(用于动态配置变更记录)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionTimeConfig 消息保留时间配置(用于动态配置变更记录)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TopicRetentionTimeConfigRsp GetRetentionTimeConfig() const;

                    /**
                     * 设置消息保留时间配置(用于动态配置变更记录)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RetentionTimeConfig 消息保留时间配置(用于动态配置变更记录)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRetentionTimeConfig(const TopicRetentionTimeConfigRsp& _retentionTimeConfig);

                    /**
                     * 判断参数 RetentionTimeConfig 是否已赋值
                     * @return RetentionTimeConfig 是否已赋值
                     */
                    bool RetentionTimeConfigHasBeenSet() const;

                    /**
                     * 获取0:正常，1：已删除，2：删除中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 0:正常，1：已删除，2：删除中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0:正常，1：已删除，2：删除中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 0:正常，1：已删除，2：删除中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 分区数
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * 副本数
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否开启ip鉴权白名单，true表示开启，false表示不开启
                     */
                    bool m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * ip白名单中ip个数
                     */
                    int64_t m_ipWhiteListCount;
                    bool m_ipWhiteListCountHasBeenSet;

                    /**
                     * 数据备份cos bucket: 转存到cos 的bucket地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_forwardCosBucket;
                    bool m_forwardCosBucketHasBeenSet;

                    /**
                     * 数据备份cos 状态： 1 不开启数据备份，0 开启数据备份
                     */
                    int64_t m_forwardStatus;
                    bool m_forwardStatusHasBeenSet;

                    /**
                     * 数据备份到cos的周期频率
                     */
                    int64_t m_forwardInterval;
                    bool m_forwardIntervalHasBeenSet;

                    /**
                     * 高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Config m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 消息保留时间配置(用于动态配置变更记录)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TopicRetentionTimeConfigRsp m_retentionTimeConfig;
                    bool m_retentionTimeConfigHasBeenSet;

                    /**
                     * 0:正常，1：已删除，2：删除中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAIL_H_
