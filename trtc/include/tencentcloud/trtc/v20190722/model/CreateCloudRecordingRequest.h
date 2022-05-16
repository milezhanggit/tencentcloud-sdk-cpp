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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDRECORDINGREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDRECORDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/RecordParams.h>
#include <tencentcloud/trtc/v20190722/model/StorageParams.h>
#include <tencentcloud/trtc/v20190722/model/MixTranscodeParams.h>
#include <tencentcloud/trtc/v20190722/model/MixLayoutParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateCloudRecording请求参数结构体
                */
                class CreateCloudRecordingRequest : public AbstractModel
                {
                public:
                    CreateCloudRecordingRequest();
                    ~CreateCloudRecordingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和录制的房间所对应的SdkAppId相同。
                     * @return SdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和录制的房间所对应的SdkAppId相同。
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和录制的房间所对应的SdkAppId相同。
                     * @param SdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和录制的房间所对应的SdkAppId相同。
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，录制的TRTC房间所对应的RoomId。
                     * @return RoomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，录制的TRTC房间所对应的RoomId。
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，录制的TRTC房间所对应的RoomId。
                     * @param RoomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，录制的TRTC房间所对应的RoomId。
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取录制服务在TRTC房间使用的[UserId](https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者录制服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     * @return UserId 录制服务在TRTC房间使用的[UserId](https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者录制服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置录制服务在TRTC房间使用的[UserId](https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者录制服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     * @param UserId 录制服务在TRTC房间使用的[UserId](https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者录制服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取云端录制加入房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @return UserSig 云端录制加入房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置云端录制加入房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     * @param UserSig 云端录制加入房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取云端录制控制参数。
                     * @return RecordParams 云端录制控制参数。
                     */
                    RecordParams GetRecordParams() const;

                    /**
                     * 设置云端录制控制参数。
                     * @param RecordParams 云端录制控制参数。
                     */
                    void SetRecordParams(const RecordParams& _recordParams);

                    /**
                     * 判断参数 RecordParams 是否已赋值
                     * @return RecordParams 是否已赋值
                     */
                    bool RecordParamsHasBeenSet() const;

                    /**
                     * 获取云端录制文件上传到云存储的参数。
                     * @return StorageParams 云端录制文件上传到云存储的参数。
                     */
                    StorageParams GetStorageParams() const;

                    /**
                     * 设置云端录制文件上传到云存储的参数。
                     * @param StorageParams 云端录制文件上传到云存储的参数。
                     */
                    void SetStorageParams(const StorageParams& _storageParams);

                    /**
                     * 判断参数 StorageParams 是否已赋值
                     * @return StorageParams 是否已赋值
                     */
                    bool StorageParamsHasBeenSet() const;

                    /**
                     * 获取TRTC房间号的类型，必须和录制的房间所对应的RoomId类型相同:
0: 字符串类型的RoomId
1: 32位整型的RoomId（默认）
                     * @return RoomIdType TRTC房间号的类型，必须和录制的房间所对应的RoomId类型相同:
0: 字符串类型的RoomId
1: 32位整型的RoomId（默认）
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置TRTC房间号的类型，必须和录制的房间所对应的RoomId类型相同:
0: 字符串类型的RoomId
1: 32位整型的RoomId（默认）
                     * @param RoomIdType TRTC房间号的类型，必须和录制的房间所对应的RoomId类型相同:
0: 字符串类型的RoomId
1: 32位整型的RoomId（默认）
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取混流的转码参数，录制模式为混流的时候可以设置。
                     * @return MixTranscodeParams 混流的转码参数，录制模式为混流的时候可以设置。
                     */
                    MixTranscodeParams GetMixTranscodeParams() const;

                    /**
                     * 设置混流的转码参数，录制模式为混流的时候可以设置。
                     * @param MixTranscodeParams 混流的转码参数，录制模式为混流的时候可以设置。
                     */
                    void SetMixTranscodeParams(const MixTranscodeParams& _mixTranscodeParams);

                    /**
                     * 判断参数 MixTranscodeParams 是否已赋值
                     * @return MixTranscodeParams 是否已赋值
                     */
                    bool MixTranscodeParamsHasBeenSet() const;

                    /**
                     * 获取混流的布局参数，录制模式为混流的时候可以设置。
                     * @return MixLayoutParams 混流的布局参数，录制模式为混流的时候可以设置。
                     */
                    MixLayoutParams GetMixLayoutParams() const;

                    /**
                     * 设置混流的布局参数，录制模式为混流的时候可以设置。
                     * @param MixLayoutParams 混流的布局参数，录制模式为混流的时候可以设置。
                     */
                    void SetMixLayoutParams(const MixLayoutParams& _mixLayoutParams);

                    /**
                     * 判断参数 MixLayoutParams 是否已赋值
                     * @return MixLayoutParams 是否已赋值
                     */
                    bool MixLayoutParamsHasBeenSet() const;

                    /**
                     * 获取接口可以调用的时效性，从成功开启录制并获得任务ID后开始计算，超时后无法调用查询、更新和停止等接口，但是录制任务不会停止。 参数的单位是小时，默认72小时（3天），最大可设置720小时（30天），最小设置6小时。举例说明：如果不设置该参数，那么开始录制成功后，查询、更新和停止录制的调用时效为72个小时。
                     * @return ResourceExpiredHour 接口可以调用的时效性，从成功开启录制并获得任务ID后开始计算，超时后无法调用查询、更新和停止等接口，但是录制任务不会停止。 参数的单位是小时，默认72小时（3天），最大可设置720小时（30天），最小设置6小时。举例说明：如果不设置该参数，那么开始录制成功后，查询、更新和停止录制的调用时效为72个小时。
                     */
                    uint64_t GetResourceExpiredHour() const;

                    /**
                     * 设置接口可以调用的时效性，从成功开启录制并获得任务ID后开始计算，超时后无法调用查询、更新和停止等接口，但是录制任务不会停止。 参数的单位是小时，默认72小时（3天），最大可设置720小时（30天），最小设置6小时。举例说明：如果不设置该参数，那么开始录制成功后，查询、更新和停止录制的调用时效为72个小时。
                     * @param ResourceExpiredHour 接口可以调用的时效性，从成功开启录制并获得任务ID后开始计算，超时后无法调用查询、更新和停止等接口，但是录制任务不会停止。 参数的单位是小时，默认72小时（3天），最大可设置720小时（30天），最小设置6小时。举例说明：如果不设置该参数，那么开始录制成功后，查询、更新和停止录制的调用时效为72个小时。
                     */
                    void SetResourceExpiredHour(const uint64_t& _resourceExpiredHour);

                    /**
                     * 判断参数 ResourceExpiredHour 是否已赋值
                     * @return ResourceExpiredHour 是否已赋值
                     */
                    bool ResourceExpiredHourHasBeenSet() const;

                    /**
                     * 获取TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey]（https://cloud.tencent.com/document/product/647/32240） 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。
                     * @return PrivateMapKey TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey]（https://cloud.tencent.com/document/product/647/32240） 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。
                     */
                    std::string GetPrivateMapKey() const;

                    /**
                     * 设置TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey]（https://cloud.tencent.com/document/product/647/32240） 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。
                     * @param PrivateMapKey TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey]（https://cloud.tencent.com/document/product/647/32240） 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。
                     */
                    void SetPrivateMapKey(const std::string& _privateMapKey);

                    /**
                     * 判断参数 PrivateMapKey 是否已赋值
                     * @return PrivateMapKey 是否已赋值
                     */
                    bool PrivateMapKeyHasBeenSet() const;

                private:

                    /**
                     * TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和录制的房间所对应的SdkAppId相同。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，录制的TRTC房间所对应的RoomId。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 录制服务在TRTC房间使用的[UserId](https://cloud.tencent.com/document/product/647/46351#userid)，注意这个userId不能与其他TRTC或者录制服务等已经使用的UserId重复，建议可以把房间ID作为userId的标识的一部分。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 云端录制加入房间的用户签名，当前 UserId 对应的验证签名，相当于登录密码，具体计算方法请参考TRTC计算[UserSig](https://cloud.tencent.com/document/product/647/45910#UserSig)的方案。
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * 云端录制控制参数。
                     */
                    RecordParams m_recordParams;
                    bool m_recordParamsHasBeenSet;

                    /**
                     * 云端录制文件上传到云存储的参数。
                     */
                    StorageParams m_storageParams;
                    bool m_storageParamsHasBeenSet;

                    /**
                     * TRTC房间号的类型，必须和录制的房间所对应的RoomId类型相同:
0: 字符串类型的RoomId
1: 32位整型的RoomId（默认）
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * 混流的转码参数，录制模式为混流的时候可以设置。
                     */
                    MixTranscodeParams m_mixTranscodeParams;
                    bool m_mixTranscodeParamsHasBeenSet;

                    /**
                     * 混流的布局参数，录制模式为混流的时候可以设置。
                     */
                    MixLayoutParams m_mixLayoutParams;
                    bool m_mixLayoutParamsHasBeenSet;

                    /**
                     * 接口可以调用的时效性，从成功开启录制并获得任务ID后开始计算，超时后无法调用查询、更新和停止等接口，但是录制任务不会停止。 参数的单位是小时，默认72小时（3天），最大可设置720小时（30天），最小设置6小时。举例说明：如果不设置该参数，那么开始录制成功后，查询、更新和停止录制的调用时效为72个小时。
                     */
                    uint64_t m_resourceExpiredHour;
                    bool m_resourceExpiredHourHasBeenSet;

                    /**
                     * TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey]（https://cloud.tencent.com/document/product/647/32240） 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。
                     */
                    std::string m_privateMapKey;
                    bool m_privateMapKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDRECORDINGREQUEST_H_
