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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetFaceIdResult请求参数结构体
                */
                class GetFaceIdResultRequest : public AbstractModel
                {
                public:
                    GetFaceIdResultRequest();
                    ~GetFaceIdResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SDK人脸核身流程的标识，调用GetFaceIdToken接口时生成。
                     * @return FaceIdToken SDK人脸核身流程的标识，调用GetFaceIdToken接口时生成。
                     */
                    std::string GetFaceIdToken() const;

                    /**
                     * 设置SDK人脸核身流程的标识，调用GetFaceIdToken接口时生成。
                     * @param FaceIdToken SDK人脸核身流程的标识，调用GetFaceIdToken接口时生成。
                     */
                    void SetFaceIdToken(const std::string& _faceIdToken);

                    /**
                     * 判断参数 FaceIdToken 是否已赋值
                     * @return FaceIdToken 是否已赋值
                     */
                    bool FaceIdTokenHasBeenSet() const;

                    /**
                     * 获取是否需要拉取视频，默认false不需要
                     * @return IsNeedVideo 是否需要拉取视频，默认false不需要
                     */
                    bool GetIsNeedVideo() const;

                    /**
                     * 设置是否需要拉取视频，默认false不需要
                     * @param IsNeedVideo 是否需要拉取视频，默认false不需要
                     */
                    void SetIsNeedVideo(const bool& _isNeedVideo);

                    /**
                     * 判断参数 IsNeedVideo 是否已赋值
                     * @return IsNeedVideo 是否已赋值
                     */
                    bool IsNeedVideoHasBeenSet() const;

                    /**
                     * 获取是否需要拉取截帧，默认false不需要
                     * @return IsNeedBestFrame 是否需要拉取截帧，默认false不需要
                     */
                    bool GetIsNeedBestFrame() const;

                    /**
                     * 设置是否需要拉取截帧，默认false不需要
                     * @param IsNeedBestFrame 是否需要拉取截帧，默认false不需要
                     */
                    void SetIsNeedBestFrame(const bool& _isNeedBestFrame);

                    /**
                     * 判断参数 IsNeedBestFrame 是否已赋值
                     * @return IsNeedBestFrame 是否已赋值
                     */
                    bool IsNeedBestFrameHasBeenSet() const;

                private:

                    /**
                     * SDK人脸核身流程的标识，调用GetFaceIdToken接口时生成。
                     */
                    std::string m_faceIdToken;
                    bool m_faceIdTokenHasBeenSet;

                    /**
                     * 是否需要拉取视频，默认false不需要
                     */
                    bool m_isNeedVideo;
                    bool m_isNeedVideoHasBeenSet;

                    /**
                     * 是否需要拉取截帧，默认false不需要
                     */
                    bool m_isNeedBestFrame;
                    bool m_isNeedBestFrameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTREQUEST_H_
