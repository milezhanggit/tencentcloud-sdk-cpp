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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/FilterRuleInfo.h>
#include <tencentcloud/cls/v20201016/model/CompressInfo.h>
#include <tencentcloud/cls/v20201016/model/ContentInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 投递规则
                */
                class ShipperInfo : public AbstractModel
                {
                public:
                    ShipperInfo();
                    ~ShipperInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取投递规则ID
                     * @return ShipperId 投递规则ID
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置投递规则ID
                     * @param ShipperId 投递规则ID
                     */
                    void SetShipperId(const std::string& _shipperId);

                    /**
                     * 判断参数 ShipperId 是否已赋值
                     * @return ShipperId 是否已赋值
                     */
                    bool ShipperIdHasBeenSet() const;

                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param TopicId 日志主题ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取投递的bucket地址
                     * @return Bucket 投递的bucket地址
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置投递的bucket地址
                     * @param Bucket 投递的bucket地址
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取投递的前缀目录
                     * @return Prefix 投递的前缀目录
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置投递的前缀目录
                     * @param Prefix 投递的前缀目录
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取投递规则的名字
                     * @return ShipperName 投递规则的名字
                     */
                    std::string GetShipperName() const;

                    /**
                     * 设置投递规则的名字
                     * @param ShipperName 投递规则的名字
                     */
                    void SetShipperName(const std::string& _shipperName);

                    /**
                     * 判断参数 ShipperName 是否已赋值
                     * @return ShipperName 是否已赋值
                     */
                    bool ShipperNameHasBeenSet() const;

                    /**
                     * 获取投递的时间间隔，单位 秒
                     * @return Interval 投递的时间间隔，单位 秒
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置投递的时间间隔，单位 秒
                     * @param Interval 投递的时间间隔，单位 秒
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取投递的文件的最大值，单位 MB
                     * @return MaxSize 投递的文件的最大值，单位 MB
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置投递的文件的最大值，单位 MB
                     * @param MaxSize 投递的文件的最大值，单位 MB
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取是否生效
                     * @return Status 是否生效
                     */
                    bool GetStatus() const;

                    /**
                     * 设置是否生效
                     * @param Status 是否生效
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取投递日志的过滤规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterRules 投递日志的过滤规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterRuleInfo> GetFilterRules() const;

                    /**
                     * 设置投递日志的过滤规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FilterRules 投递日志的过滤规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFilterRules(const std::vector<FilterRuleInfo>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     */
                    bool FilterRulesHasBeenSet() const;

                    /**
                     * 获取投递日志的分区规则，支持strftime的时间格式表示
                     * @return Partition 投递日志的分区规则，支持strftime的时间格式表示
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置投递日志的分区规则，支持strftime的时间格式表示
                     * @param Partition 投递日志的分区规则，支持strftime的时间格式表示
                     */
                    void SetPartition(const std::string& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取投递日志的压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compress 投递日志的压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompressInfo GetCompress() const;

                    /**
                     * 设置投递日志的压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Compress 投递日志的压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompress(const CompressInfo& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取投递日志的内容格式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 投递日志的内容格式配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContentInfo GetContent() const;

                    /**
                     * 设置投递日志的内容格式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Content 投递日志的内容格式配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContent(const ContentInfo& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取投递日志的创建时间
                     * @return CreateTime 投递日志的创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置投递日志的创建时间
                     * @param CreateTime 投递日志的创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilenameMode 投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetFilenameMode() const;

                    /**
                     * 设置投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FilenameMode 投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFilenameMode(const uint64_t& _filenameMode);

                    /**
                     * 判断参数 FilenameMode 是否已赋值
                     * @return FilenameMode 是否已赋值
                     */
                    bool FilenameModeHasBeenSet() const;

                private:

                    /**
                     * 投递规则ID
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 投递的bucket地址
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 投递的前缀目录
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * 投递规则的名字
                     */
                    std::string m_shipperName;
                    bool m_shipperNameHasBeenSet;

                    /**
                     * 投递的时间间隔，单位 秒
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 投递的文件的最大值，单位 MB
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 是否生效
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 投递日志的过滤规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterRuleInfo> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                    /**
                     * 投递日志的分区规则，支持strftime的时间格式表示
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 投递日志的压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompressInfo m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * 投递日志的内容格式配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContentInfo m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 投递日志的创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 投递文件命名配置，0：随机数命名，1：投递时间命名，默认0（随机数命名）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_filenameMode;
                    bool m_filenameModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERINFO_H_
