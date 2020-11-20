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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNRESOURCERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNRESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunVpcSubnet.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseRunResource返回参数结构体
                */
                class DescribeCloudBaseRunResourceResponse : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunResourceResponse();
                    ~DescribeCloudBaseRunResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取集群状态(creating/succ)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterStatus 集群状态(creating/succ)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取虚拟集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualClusterId 虚拟集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVirtualClusterId() const;

                    /**
                     * 判断参数 VirtualClusterId 是否已赋值
                     * @return VirtualClusterId 是否已赋值
                     */
                    bool VirtualClusterIdHasBeenSet() const;

                    /**
                     * 获取vpc id信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpc id信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取子网信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetIds 子网信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudBaseRunVpcSubnet> GetSubnetIds() const;

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                private:

                    /**
                     * 集群状态(creating/succ)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 虚拟集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualClusterId;
                    bool m_virtualClusterIdHasBeenSet;

                    /**
                     * vpc id信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 子网信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudBaseRunVpcSubnet> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNRESOURCERESPONSE_H_
