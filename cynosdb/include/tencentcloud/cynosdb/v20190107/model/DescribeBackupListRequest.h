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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBackupList请求参数结构体
                */
                class DescribeBackupListRequest : public AbstractModel
                {
                public:
                    DescribeBackupListRequest();
                    ~DescribeBackupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取备份文件列表大小，取值范围(0,100]
                     * @return Limit 备份文件列表大小，取值范围(0,100]
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置备份文件列表大小，取值范围(0,100]
                     * @param Limit 备份文件列表大小，取值范围(0,100]
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取备份文件列表偏移，取值范围[0,INF)
                     * @return Offset 备份文件列表偏移，取值范围[0,INF)
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置备份文件列表偏移，取值范围[0,INF)
                     * @param Offset 备份文件列表偏移，取值范围[0,INF)
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取数据库类型，取值范围: 
<li> MYSQL </li>
                     * @return DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型，取值范围: 
<li> MYSQL </li>
                     * @param DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取备份ID
                     * @return BackupIds 备份ID
                     */
                    std::vector<int64_t> GetBackupIds() const;

                    /**
                     * 设置备份ID
                     * @param BackupIds 备份ID
                     */
                    void SetBackupIds(const std::vector<int64_t>& _backupIds);

                    /**
                     * 判断参数 BackupIds 是否已赋值
                     * @return BackupIds 是否已赋值
                     */
                    bool BackupIdsHasBeenSet() const;

                    /**
                     * 获取备份类型，可选值：snapshot，快照备份； logic，逻辑备份
                     * @return BackupType 备份类型，可选值：snapshot，快照备份； logic，逻辑备份
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份类型，可选值：snapshot，快照备份； logic，逻辑备份
                     * @param BackupType 备份类型，可选值：snapshot，快照备份； logic，逻辑备份
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取备份方式，可选值：auto，自动备份；manual，手动备
                     * @return BackupMethod 备份方式，可选值：auto，自动备份；manual，手动备
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份方式，可选值：auto，自动备份；manual，手动备
                     * @param BackupMethod 备份方式，可选值：auto，自动备份；manual，手动备
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取快照类型，可选值：full，全量；increment，增量
                     * @return SnapShotType 快照类型，可选值：full，全量；increment，增量
                     */
                    std::string GetSnapShotType() const;

                    /**
                     * 设置快照类型，可选值：full，全量；increment，增量
                     * @param SnapShotType 快照类型，可选值：full，全量；increment，增量
                     */
                    void SetSnapShotType(const std::string& _snapShotType);

                    /**
                     * 判断参数 SnapShotType 是否已赋值
                     * @return SnapShotType 是否已赋值
                     */
                    bool SnapShotTypeHasBeenSet() const;

                    /**
                     * 获取备份开始时间
                     * @return StartTime 备份开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份开始时间
                     * @param StartTime 备份开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取备份结束时间
                     * @return EndTime 备份结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置备份结束时间
                     * @param EndTime 备份结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取备份文件名，模糊查询
                     * @return FileNames 备份文件名，模糊查询
                     */
                    std::vector<std::string> GetFileNames() const;

                    /**
                     * 设置备份文件名，模糊查询
                     * @param FileNames 备份文件名，模糊查询
                     */
                    void SetFileNames(const std::vector<std::string>& _fileNames);

                    /**
                     * 判断参数 FileNames 是否已赋值
                     * @return FileNames 是否已赋值
                     */
                    bool FileNamesHasBeenSet() const;

                    /**
                     * 获取备份备注名，模糊查询
                     * @return BackupNames 备份备注名，模糊查询
                     */
                    std::vector<std::string> GetBackupNames() const;

                    /**
                     * 设置备份备注名，模糊查询
                     * @param BackupNames 备份备注名，模糊查询
                     */
                    void SetBackupNames(const std::vector<std::string>& _backupNames);

                    /**
                     * 判断参数 BackupNames 是否已赋值
                     * @return BackupNames 是否已赋值
                     */
                    bool BackupNamesHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 备份文件列表大小，取值范围(0,100]
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 备份文件列表偏移，取值范围[0,INF)
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 备份ID
                     */
                    std::vector<int64_t> m_backupIds;
                    bool m_backupIdsHasBeenSet;

                    /**
                     * 备份类型，可选值：snapshot，快照备份； logic，逻辑备份
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份方式，可选值：auto，自动备份；manual，手动备
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 快照类型，可选值：full，全量；increment，增量
                     */
                    std::string m_snapShotType;
                    bool m_snapShotTypeHasBeenSet;

                    /**
                     * 备份开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 备份文件名，模糊查询
                     */
                    std::vector<std::string> m_fileNames;
                    bool m_fileNamesHasBeenSet;

                    /**
                     * 备份备注名，模糊查询
                     */
                    std::vector<std::string> m_backupNames;
                    bool m_backupNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTREQUEST_H_
