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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_REMOVEWORKSPACEREQUEST_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_REMOVEWORKSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * RemoveWorkspace请求参数结构体
                */
                class RemoveWorkspaceRequest : public AbstractModel
                {
                public:
                    RemoveWorkspaceRequest();
                    ~RemoveWorkspaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return CloudStudioSessionTeam 无
                     */
                    std::string GetCloudStudioSessionTeam() const;

                    /**
                     * 设置无
                     * @param CloudStudioSessionTeam 无
                     */
                    void SetCloudStudioSessionTeam(const std::string& _cloudStudioSessionTeam);

                    /**
                     * 判断参数 CloudStudioSessionTeam 是否已赋值
                     * @return CloudStudioSessionTeam 是否已赋值
                     */
                    bool CloudStudioSessionTeamHasBeenSet() const;

                    /**
                     * 获取无
                     * @return SpaceKey 无
                     */
                    std::string GetSpaceKey() const;

                    /**
                     * 设置无
                     * @param SpaceKey 无
                     */
                    void SetSpaceKey(const std::string& _spaceKey);

                    /**
                     * 判断参数 SpaceKey 是否已赋值
                     * @return SpaceKey 是否已赋值
                     */
                    bool SpaceKeyHasBeenSet() const;

                    /**
                     * 获取是否强制，true或者false
                     * @return Force 是否强制，true或者false
                     */
                    bool GetForce() const;

                    /**
                     * 设置是否强制，true或者false
                     * @param Force 是否强制，true或者false
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    std::string m_cloudStudioSessionTeam;
                    bool m_cloudStudioSessionTeamHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_spaceKey;
                    bool m_spaceKeyHasBeenSet;

                    /**
                     * 是否强制，true或者false
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_REMOVEWORKSPACEREQUEST_H_
