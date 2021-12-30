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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSREGIONDETIAL_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSREGIONDETIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 根据源站查询的可用加速区域信息及对应的可选带宽和并发量。
                */
                class AccessRegionDetial : public AbstractModel
                {
                public:
                    AccessRegionDetial();
                    ~AccessRegionDetial() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区域ID
                     * @return RegionId 区域ID
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置区域ID
                     * @param RegionId 区域ID
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域的中文或英文名称
                     * @return RegionName 区域的中文或英文名称
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置区域的中文或英文名称
                     * @param RegionName 区域的中文或英文名称
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取可选的并发量取值数组
                     * @return ConcurrentList 可选的并发量取值数组
                     */
                    std::vector<int64_t> GetConcurrentList() const;

                    /**
                     * 设置可选的并发量取值数组
                     * @param ConcurrentList 可选的并发量取值数组
                     */
                    void SetConcurrentList(const std::vector<int64_t>& _concurrentList);

                    /**
                     * 判断参数 ConcurrentList 是否已赋值
                     * @return ConcurrentList 是否已赋值
                     */
                    bool ConcurrentListHasBeenSet() const;

                    /**
                     * 获取可选的带宽取值数组
                     * @return BandwidthList 可选的带宽取值数组
                     */
                    std::vector<int64_t> GetBandwidthList() const;

                    /**
                     * 设置可选的带宽取值数组
                     * @param BandwidthList 可选的带宽取值数组
                     */
                    void SetBandwidthList(const std::vector<int64_t>& _bandwidthList);

                    /**
                     * 判断参数 BandwidthList 是否已赋值
                     * @return BandwidthList 是否已赋值
                     */
                    bool BandwidthListHasBeenSet() const;

                    /**
                     * 获取机房所属大区
                     * @return RegionArea 机房所属大区
                     */
                    std::string GetRegionArea() const;

                    /**
                     * 设置机房所属大区
                     * @param RegionArea 机房所属大区
                     */
                    void SetRegionArea(const std::string& _regionArea);

                    /**
                     * 判断参数 RegionArea 是否已赋值
                     * @return RegionArea 是否已赋值
                     */
                    bool RegionAreaHasBeenSet() const;

                    /**
                     * 获取机房所属大区名
                     * @return RegionAreaName 机房所属大区名
                     */
                    std::string GetRegionAreaName() const;

                    /**
                     * 设置机房所属大区名
                     * @param RegionAreaName 机房所属大区名
                     */
                    void SetRegionAreaName(const std::string& _regionAreaName);

                    /**
                     * 判断参数 RegionAreaName 是否已赋值
                     * @return RegionAreaName 是否已赋值
                     */
                    bool RegionAreaNameHasBeenSet() const;

                    /**
                     * 获取机房类型, dc表示DataCenter数据中心, ec表示EdgeComputing边缘节点
                     * @return IDCType 机房类型, dc表示DataCenter数据中心, ec表示EdgeComputing边缘节点
                     */
                    std::string GetIDCType() const;

                    /**
                     * 设置机房类型, dc表示DataCenter数据中心, ec表示EdgeComputing边缘节点
                     * @param IDCType 机房类型, dc表示DataCenter数据中心, ec表示EdgeComputing边缘节点
                     */
                    void SetIDCType(const std::string& _iDCType);

                    /**
                     * 判断参数 IDCType 是否已赋值
                     * @return IDCType 是否已赋值
                     */
                    bool IDCTypeHasBeenSet() const;

                private:

                    /**
                     * 区域ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域的中文或英文名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 可选的并发量取值数组
                     */
                    std::vector<int64_t> m_concurrentList;
                    bool m_concurrentListHasBeenSet;

                    /**
                     * 可选的带宽取值数组
                     */
                    std::vector<int64_t> m_bandwidthList;
                    bool m_bandwidthListHasBeenSet;

                    /**
                     * 机房所属大区
                     */
                    std::string m_regionArea;
                    bool m_regionAreaHasBeenSet;

                    /**
                     * 机房所属大区名
                     */
                    std::string m_regionAreaName;
                    bool m_regionAreaNameHasBeenSet;

                    /**
                     * 机房类型, dc表示DataCenter数据中心, ec表示EdgeComputing边缘节点
                     */
                    std::string m_iDCType;
                    bool m_iDCTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSREGIONDETIAL_H_
