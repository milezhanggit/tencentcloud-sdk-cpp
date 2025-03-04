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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_YINSUDACLIENT_H_
#define TENCENTCLOUD_YINSUDA_V20220527_YINSUDACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/yinsuda/v20220527/model/BatchDescribeKTVMusicDetailsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/BatchDescribeKTVMusicDetailsResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/CreateKTVRobotRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/CreateKTVRobotResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVMatchMusicsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVMatchMusicsResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVMusicsByTagRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVMusicsByTagResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistDetailRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistDetailResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistsResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVRobotsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVRobotsResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVSuggestionsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVSuggestionsResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVTagsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVTagsResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DestroyKTVRobotRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DestroyKTVRobotResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/SearchKTVMusicsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/SearchKTVMusicsResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/SyncKTVRobotCommandRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/SyncKTVRobotCommandResponse.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            class YinsudaClient : public AbstractClient
            {
            public:
                YinsudaClient(const Credential &credential, const std::string &region);
                YinsudaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchDescribeKTVMusicDetailsResponse> BatchDescribeKTVMusicDetailsOutcome;
                typedef std::future<BatchDescribeKTVMusicDetailsOutcome> BatchDescribeKTVMusicDetailsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::BatchDescribeKTVMusicDetailsRequest&, BatchDescribeKTVMusicDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDescribeKTVMusicDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKTVRobotResponse> CreateKTVRobotOutcome;
                typedef std::future<CreateKTVRobotOutcome> CreateKTVRobotOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::CreateKTVRobotRequest&, CreateKTVRobotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKTVRobotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVMatchMusicsResponse> DescribeKTVMatchMusicsOutcome;
                typedef std::future<DescribeKTVMatchMusicsOutcome> DescribeKTVMatchMusicsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DescribeKTVMatchMusicsRequest&, DescribeKTVMatchMusicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVMatchMusicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVMusicsByTagResponse> DescribeKTVMusicsByTagOutcome;
                typedef std::future<DescribeKTVMusicsByTagOutcome> DescribeKTVMusicsByTagOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DescribeKTVMusicsByTagRequest&, DescribeKTVMusicsByTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVMusicsByTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVPlaylistDetailResponse> DescribeKTVPlaylistDetailOutcome;
                typedef std::future<DescribeKTVPlaylistDetailOutcome> DescribeKTVPlaylistDetailOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DescribeKTVPlaylistDetailRequest&, DescribeKTVPlaylistDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVPlaylistDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVPlaylistsResponse> DescribeKTVPlaylistsOutcome;
                typedef std::future<DescribeKTVPlaylistsOutcome> DescribeKTVPlaylistsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DescribeKTVPlaylistsRequest&, DescribeKTVPlaylistsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVPlaylistsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVRobotsResponse> DescribeKTVRobotsOutcome;
                typedef std::future<DescribeKTVRobotsOutcome> DescribeKTVRobotsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DescribeKTVRobotsRequest&, DescribeKTVRobotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVRobotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVSuggestionsResponse> DescribeKTVSuggestionsOutcome;
                typedef std::future<DescribeKTVSuggestionsOutcome> DescribeKTVSuggestionsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DescribeKTVSuggestionsRequest&, DescribeKTVSuggestionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVSuggestionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVTagsResponse> DescribeKTVTagsOutcome;
                typedef std::future<DescribeKTVTagsOutcome> DescribeKTVTagsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DescribeKTVTagsRequest&, DescribeKTVTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyKTVRobotResponse> DestroyKTVRobotOutcome;
                typedef std::future<DestroyKTVRobotOutcome> DestroyKTVRobotOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DestroyKTVRobotRequest&, DestroyKTVRobotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyKTVRobotAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchKTVMusicsResponse> SearchKTVMusicsOutcome;
                typedef std::future<SearchKTVMusicsOutcome> SearchKTVMusicsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::SearchKTVMusicsRequest&, SearchKTVMusicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchKTVMusicsAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncKTVRobotCommandResponse> SyncKTVRobotCommandOutcome;
                typedef std::future<SyncKTVRobotCommandOutcome> SyncKTVRobotCommandOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::SyncKTVRobotCommandRequest&, SyncKTVRobotCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncKTVRobotCommandAsyncHandler;



                /**
                 *批量获取歌曲详细信息，包括：歌词下载链接、播放凭证、音高数据下载链接信息等。
                 * @param req BatchDescribeKTVMusicDetailsRequest
                 * @return BatchDescribeKTVMusicDetailsOutcome
                 */
                BatchDescribeKTVMusicDetailsOutcome BatchDescribeKTVMusicDetails(const Model::BatchDescribeKTVMusicDetailsRequest &request);
                void BatchDescribeKTVMusicDetailsAsync(const Model::BatchDescribeKTVMusicDetailsRequest& request, const BatchDescribeKTVMusicDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDescribeKTVMusicDetailsOutcomeCallable BatchDescribeKTVMusicDetailsCallable(const Model::BatchDescribeKTVMusicDetailsRequest& request);

                /**
                 *创建机器人，支持进入 RTC 房间，播放曲库歌曲。
                 * @param req CreateKTVRobotRequest
                 * @return CreateKTVRobotOutcome
                 */
                CreateKTVRobotOutcome CreateKTVRobot(const Model::CreateKTVRobotRequest &request);
                void CreateKTVRobotAsync(const Model::CreateKTVRobotRequest& request, const CreateKTVRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKTVRobotOutcomeCallable CreateKTVRobotCallable(const Model::CreateKTVRobotRequest& request);

                /**
                 *根据输入的规则匹配曲库中的歌曲。
                 * @param req DescribeKTVMatchMusicsRequest
                 * @return DescribeKTVMatchMusicsOutcome
                 */
                DescribeKTVMatchMusicsOutcome DescribeKTVMatchMusics(const Model::DescribeKTVMatchMusicsRequest &request);
                void DescribeKTVMatchMusicsAsync(const Model::DescribeKTVMatchMusicsRequest& request, const DescribeKTVMatchMusicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVMatchMusicsOutcomeCallable DescribeKTVMatchMusicsCallable(const Model::DescribeKTVMatchMusicsRequest& request);

                /**
                 *通过标签过滤歌曲列表。
                 * @param req DescribeKTVMusicsByTagRequest
                 * @return DescribeKTVMusicsByTagOutcome
                 */
                DescribeKTVMusicsByTagOutcome DescribeKTVMusicsByTag(const Model::DescribeKTVMusicsByTagRequest &request);
                void DescribeKTVMusicsByTagAsync(const Model::DescribeKTVMusicsByTagRequest& request, const DescribeKTVMusicsByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVMusicsByTagOutcomeCallable DescribeKTVMusicsByTagCallable(const Model::DescribeKTVMusicsByTagRequest& request);

                /**
                 *根据歌单 Id 获取歌单详情。
                 * @param req DescribeKTVPlaylistDetailRequest
                 * @return DescribeKTVPlaylistDetailOutcome
                 */
                DescribeKTVPlaylistDetailOutcome DescribeKTVPlaylistDetail(const Model::DescribeKTVPlaylistDetailRequest &request);
                void DescribeKTVPlaylistDetailAsync(const Model::DescribeKTVPlaylistDetailRequest& request, const DescribeKTVPlaylistDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVPlaylistDetailOutcomeCallable DescribeKTVPlaylistDetailCallable(const Model::DescribeKTVPlaylistDetailRequest& request);

                /**
                 *获取歌单列表。
                 * @param req DescribeKTVPlaylistsRequest
                 * @return DescribeKTVPlaylistsOutcome
                 */
                DescribeKTVPlaylistsOutcome DescribeKTVPlaylists(const Model::DescribeKTVPlaylistsRequest &request);
                void DescribeKTVPlaylistsAsync(const Model::DescribeKTVPlaylistsRequest& request, const DescribeKTVPlaylistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVPlaylistsOutcomeCallable DescribeKTVPlaylistsCallable(const Model::DescribeKTVPlaylistsRequest& request);

                /**
                 *获取机器人列表，支持 Id、状态等过滤条件。
                 * @param req DescribeKTVRobotsRequest
                 * @return DescribeKTVRobotsOutcome
                 */
                DescribeKTVRobotsOutcome DescribeKTVRobots(const Model::DescribeKTVRobotsRequest &request);
                void DescribeKTVRobotsAsync(const Model::DescribeKTVRobotsRequest& request, const DescribeKTVRobotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVRobotsOutcomeCallable DescribeKTVRobotsCallable(const Model::DescribeKTVRobotsRequest& request);

                /**
                 *根据关键词获取联想词列表。
                 * @param req DescribeKTVSuggestionsRequest
                 * @return DescribeKTVSuggestionsOutcome
                 */
                DescribeKTVSuggestionsOutcome DescribeKTVSuggestions(const Model::DescribeKTVSuggestionsRequest &request);
                void DescribeKTVSuggestionsAsync(const Model::DescribeKTVSuggestionsRequest& request, const DescribeKTVSuggestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVSuggestionsOutcomeCallable DescribeKTVSuggestionsCallable(const Model::DescribeKTVSuggestionsRequest& request);

                /**
                 *获取标签分组及分组下的标签列表信息。
                 * @param req DescribeKTVTagsRequest
                 * @return DescribeKTVTagsOutcome
                 */
                DescribeKTVTagsOutcome DescribeKTVTags(const Model::DescribeKTVTagsRequest &request);
                void DescribeKTVTagsAsync(const Model::DescribeKTVTagsRequest& request, const DescribeKTVTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVTagsOutcomeCallable DescribeKTVTagsCallable(const Model::DescribeKTVTagsRequest& request);

                /**
                 *销毁机器人，机器人退出 RTC 房间。
                 * @param req DestroyKTVRobotRequest
                 * @return DestroyKTVRobotOutcome
                 */
                DestroyKTVRobotOutcome DestroyKTVRobot(const Model::DestroyKTVRobotRequest &request);
                void DestroyKTVRobotAsync(const Model::DestroyKTVRobotRequest& request, const DestroyKTVRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyKTVRobotOutcomeCallable DestroyKTVRobotCallable(const Model::DestroyKTVRobotRequest& request);

                /**
                 *根据关键词搜索歌曲，返回相关歌曲列表。
                 * @param req SearchKTVMusicsRequest
                 * @return SearchKTVMusicsOutcome
                 */
                SearchKTVMusicsOutcome SearchKTVMusics(const Model::SearchKTVMusicsRequest &request);
                void SearchKTVMusicsAsync(const Model::SearchKTVMusicsRequest& request, const SearchKTVMusicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchKTVMusicsOutcomeCallable SearchKTVMusicsCallable(const Model::SearchKTVMusicsRequest& request);

                /**
                 *下发操作机器人指令，支持播放、暂停、恢复、歌单设置等操作指令，实现对机器人行为的控制。
                 * @param req SyncKTVRobotCommandRequest
                 * @return SyncKTVRobotCommandOutcome
                 */
                SyncKTVRobotCommandOutcome SyncKTVRobotCommand(const Model::SyncKTVRobotCommandRequest &request);
                void SyncKTVRobotCommandAsync(const Model::SyncKTVRobotCommandRequest& request, const SyncKTVRobotCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncKTVRobotCommandOutcomeCallable SyncKTVRobotCommandCallable(const Model::SyncKTVRobotCommandRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_YINSUDACLIENT_H_
