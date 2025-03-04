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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSLAVEZONEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSLAVEZONEREQUEST_H_

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
                * ModifyClusterSlaveZone请求参数结构体
                */
                class ModifyClusterSlaveZoneRequest : public AbstractModel
                {
                public:
                    ModifyClusterSlaveZoneRequest();
                    ~ModifyClusterSlaveZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param ClusterId 集群Id
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取旧从可用区
                     * @return OldSlaveZone 旧从可用区
                     */
                    std::string GetOldSlaveZone() const;

                    /**
                     * 设置旧从可用区
                     * @param OldSlaveZone 旧从可用区
                     */
                    void SetOldSlaveZone(const std::string& _oldSlaveZone);

                    /**
                     * 判断参数 OldSlaveZone 是否已赋值
                     * @return OldSlaveZone 是否已赋值
                     */
                    bool OldSlaveZoneHasBeenSet() const;

                    /**
                     * 获取新从可用区
                     * @return NewSlaveZone 新从可用区
                     */
                    std::string GetNewSlaveZone() const;

                    /**
                     * 设置新从可用区
                     * @param NewSlaveZone 新从可用区
                     */
                    void SetNewSlaveZone(const std::string& _newSlaveZone);

                    /**
                     * 判断参数 NewSlaveZone 是否已赋值
                     * @return NewSlaveZone 是否已赋值
                     */
                    bool NewSlaveZoneHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 旧从可用区
                     */
                    std::string m_oldSlaveZone;
                    bool m_oldSlaveZoneHasBeenSet;

                    /**
                     * 新从可用区
                     */
                    std::string m_newSlaveZone;
                    bool m_newSlaveZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSLAVEZONEREQUEST_H_
