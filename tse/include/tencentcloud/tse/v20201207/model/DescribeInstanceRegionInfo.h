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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEINSTANCEREGIONINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEINSTANCEREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/VpcInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 实例地域信息描述
                */
                class DescribeInstanceRegionInfo : public AbstractModel
                {
                public:
                    DescribeInstanceRegionInfo();
                    ~DescribeInstanceRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎部署地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineRegion 引擎部署地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置引擎部署地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EngineRegion 引擎部署地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEngineRegion(const std::string& _engineRegion);

                    /**
                     * 判断参数 EngineRegion 是否已赋值
                     * @return EngineRegion 是否已赋值
                     */
                    bool EngineRegionHasBeenSet() const;

                    /**
                     * 获取引擎在该地域的副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replica 引擎在该地域的副本数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetReplica() const;

                    /**
                     * 设置引擎在该地域的副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Replica 引擎在该地域的副本数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReplica(const int64_t& _replica);

                    /**
                     * 判断参数 Replica 是否已赋值
                     * @return Replica 是否已赋值
                     */
                    bool ReplicaHasBeenSet() const;

                    /**
                     * 获取引擎在该地域的规格id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecId 引擎在该地域的规格id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置引擎在该地域的规格id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpecId 引擎在该地域的规格id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取内网的网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntranetVpcInfos 内网的网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcInfo> GetIntranetVpcInfos() const;

                    /**
                     * 设置内网的网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IntranetVpcInfos 内网的网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIntranetVpcInfos(const std::vector<VpcInfo>& _intranetVpcInfos);

                    /**
                     * 判断参数 IntranetVpcInfos 是否已赋值
                     * @return IntranetVpcInfos 是否已赋值
                     */
                    bool IntranetVpcInfosHasBeenSet() const;

                    /**
                     * 获取是否开公网
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableClientInternet 是否开公网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnableClientInternet() const;

                    /**
                     * 设置是否开公网
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableClientInternet 是否开公网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableClientInternet(const bool& _enableClientInternet);

                    /**
                     * 判断参数 EnableClientInternet 是否已赋值
                     * @return EnableClientInternet 是否已赋值
                     */
                    bool EnableClientInternetHasBeenSet() const;

                private:

                    /**
                     * 引擎部署地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * 引擎在该地域的副本数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replica;
                    bool m_replicaHasBeenSet;

                    /**
                     * 引擎在该地域的规格id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * 内网的网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcInfo> m_intranetVpcInfos;
                    bool m_intranetVpcInfosHasBeenSet;

                    /**
                     * 是否开公网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableClientInternet;
                    bool m_enableClientInternetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEINSTANCEREGIONINFO_H_
