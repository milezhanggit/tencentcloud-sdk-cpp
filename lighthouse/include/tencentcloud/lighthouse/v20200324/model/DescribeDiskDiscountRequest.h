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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKDISCOUNTREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKDISCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDiskDiscount请求参数结构体
                */
                class DescribeDiskDiscountRequest : public AbstractModel
                {
                public:
                    DescribeDiskDiscountRequest();
                    ~DescribeDiskDiscountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云硬盘类型, 取值: "CLOUD_PREMIUM"。
                     * @return DiskType 云硬盘类型, 取值: "CLOUD_PREMIUM"。
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置云硬盘类型, 取值: "CLOUD_PREMIUM"。
                     * @param DiskType 云硬盘类型, 取值: "CLOUD_PREMIUM"。
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取云硬盘大小。
                     * @return DiskSize 云硬盘大小。
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置云硬盘大小。
                     * @param DiskSize 云硬盘大小。
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取指定云硬盘备份点配额，不传时默认为不带备份点配额。目前只支持不带或设置1个云硬盘备份点配额。
                     * @return DiskBackupQuota 指定云硬盘备份点配额，不传时默认为不带备份点配额。目前只支持不带或设置1个云硬盘备份点配额。
                     */
                    int64_t GetDiskBackupQuota() const;

                    /**
                     * 设置指定云硬盘备份点配额，不传时默认为不带备份点配额。目前只支持不带或设置1个云硬盘备份点配额。
                     * @param DiskBackupQuota 指定云硬盘备份点配额，不传时默认为不带备份点配额。目前只支持不带或设置1个云硬盘备份点配额。
                     */
                    void SetDiskBackupQuota(const int64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                private:

                    /**
                     * 云硬盘类型, 取值: "CLOUD_PREMIUM"。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 云硬盘大小。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 指定云硬盘备份点配额，不传时默认为不带备份点配额。目前只支持不带或设置1个云硬盘备份点配额。
                     */
                    int64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKDISCOUNTREQUEST_H_
