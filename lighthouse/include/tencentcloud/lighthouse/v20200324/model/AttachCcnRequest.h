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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ATTACHCCNREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ATTACHCCNREQUEST_H_

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
                * AttachCcn请求参数结构体
                */
                class AttachCcnRequest : public AbstractModel
                {
                public:
                    AttachCcnRequest();
                    ~AttachCcnRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云联网实例ID。
                     * @return CcnId 云联网实例ID。
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网实例ID。
                     * @param CcnId 云联网实例ID。
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                private:

                    /**
                     * 云联网实例ID。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_ATTACHCCNREQUEST_H_
