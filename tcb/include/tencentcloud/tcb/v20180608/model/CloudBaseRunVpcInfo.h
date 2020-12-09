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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNVPCINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNVPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * vpc信息
                */
                class CloudBaseRunVpcInfo : public AbstractModel
                {
                public:
                    CloudBaseRunVpcInfo();
                    ~CloudBaseRunVpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpc的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId vpc的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetIds 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetIds 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取创建类型(0=继承; 1=新建; 2=指定)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateType 创建类型(0=继承; 1=新建; 2=指定)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCreateType() const;

                    /**
                     * 设置创建类型(0=继承; 1=新建; 2=指定)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateType 创建类型(0=继承; 1=新建; 2=指定)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateType(const int64_t& _createType);

                    /**
                     * 判断参数 CreateType 是否已赋值
                     * @return CreateType 是否已赋值
                     */
                    bool CreateTypeHasBeenSet() const;

                private:

                    /**
                     * vpc的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 创建类型(0=继承; 1=新建; 2=指定)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createType;
                    bool m_createTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNVPCINFO_H_
