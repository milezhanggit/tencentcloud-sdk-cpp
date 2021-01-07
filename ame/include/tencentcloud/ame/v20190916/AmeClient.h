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

#ifndef TENCENTCLOUD_AME_V20190916_AMECLIENT_H_
#define TENCENTCLOUD_AME_V20190916_AMECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ame/v20190916/model/DescribeAuthInfoRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeAuthInfoResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicPurchasedRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicPurchasedResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeItemByIdRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeItemByIdResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeItemsRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeItemsResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeLyricRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeLyricResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeMusicRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeMusicResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribePackageItemsRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribePackageItemsResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribePackagesRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribePackagesResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeStationsRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeStationsResponse.h>
#include <tencentcloud/ame/v20190916/model/ReportDataRequest.h>
#include <tencentcloud/ame/v20190916/model/ReportDataResponse.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            class AmeClient : public AbstractClient
            {
            public:
                AmeClient(const Credential &credential, const std::string &region);
                AmeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::DescribeAuthInfoResponse> DescribeAuthInfoOutcome;
                typedef std::future<DescribeAuthInfoOutcome> DescribeAuthInfoOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeAuthInfoRequest&, DescribeAuthInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeCloudMusicResponse> DescribeCloudMusicOutcome;
                typedef std::future<DescribeCloudMusicOutcome> DescribeCloudMusicOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeCloudMusicRequest&, DescribeCloudMusicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudMusicAsyncHandler;
                typedef Outcome<Error, Model::DescribeCloudMusicPurchasedResponse> DescribeCloudMusicPurchasedOutcome;
                typedef std::future<DescribeCloudMusicPurchasedOutcome> DescribeCloudMusicPurchasedOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeCloudMusicPurchasedRequest&, DescribeCloudMusicPurchasedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudMusicPurchasedAsyncHandler;
                typedef Outcome<Error, Model::DescribeItemByIdResponse> DescribeItemByIdOutcome;
                typedef std::future<DescribeItemByIdOutcome> DescribeItemByIdOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeItemByIdRequest&, DescribeItemByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeItemByIdAsyncHandler;
                typedef Outcome<Error, Model::DescribeItemsResponse> DescribeItemsOutcome;
                typedef std::future<DescribeItemsOutcome> DescribeItemsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeItemsRequest&, DescribeItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeItemsAsyncHandler;
                typedef Outcome<Error, Model::DescribeLyricResponse> DescribeLyricOutcome;
                typedef std::future<DescribeLyricOutcome> DescribeLyricOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeLyricRequest&, DescribeLyricOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLyricAsyncHandler;
                typedef Outcome<Error, Model::DescribeMusicResponse> DescribeMusicOutcome;
                typedef std::future<DescribeMusicOutcome> DescribeMusicOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeMusicRequest&, DescribeMusicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMusicAsyncHandler;
                typedef Outcome<Error, Model::DescribePackageItemsResponse> DescribePackageItemsOutcome;
                typedef std::future<DescribePackageItemsOutcome> DescribePackageItemsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribePackageItemsRequest&, DescribePackageItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackageItemsAsyncHandler;
                typedef Outcome<Error, Model::DescribePackagesResponse> DescribePackagesOutcome;
                typedef std::future<DescribePackagesOutcome> DescribePackagesOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribePackagesRequest&, DescribePackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackagesAsyncHandler;
                typedef Outcome<Error, Model::DescribeStationsResponse> DescribeStationsOutcome;
                typedef std::future<DescribeStationsOutcome> DescribeStationsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeStationsRequest&, DescribeStationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStationsAsyncHandler;
                typedef Outcome<Error, Model::ReportDataResponse> ReportDataOutcome;
                typedef std::future<ReportDataOutcome> ReportDataOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::ReportDataRequest&, ReportDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportDataAsyncHandler;



                /**
                 *获取授权项目信息列表
                 * @param req DescribeAuthInfoRequest
                 * @return DescribeAuthInfoOutcome
                 */
                DescribeAuthInfoOutcome DescribeAuthInfo(const Model::DescribeAuthInfoRequest &request);
                void DescribeAuthInfoAsync(const Model::DescribeAuthInfoRequest& request, const DescribeAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthInfoOutcomeCallable DescribeAuthInfoCallable(const Model::DescribeAuthInfoRequest& request);

                /**
                 *获取云音乐播放信息接口
                 * @param req DescribeCloudMusicRequest
                 * @return DescribeCloudMusicOutcome
                 */
                DescribeCloudMusicOutcome DescribeCloudMusic(const Model::DescribeCloudMusicRequest &request);
                void DescribeCloudMusicAsync(const Model::DescribeCloudMusicRequest& request, const DescribeCloudMusicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudMusicOutcomeCallable DescribeCloudMusicCallable(const Model::DescribeCloudMusicRequest& request);

                /**
                 *获取授权项目下已购云音乐列表
                 * @param req DescribeCloudMusicPurchasedRequest
                 * @return DescribeCloudMusicPurchasedOutcome
                 */
                DescribeCloudMusicPurchasedOutcome DescribeCloudMusicPurchased(const Model::DescribeCloudMusicPurchasedRequest &request);
                void DescribeCloudMusicPurchasedAsync(const Model::DescribeCloudMusicPurchasedRequest& request, const DescribeCloudMusicPurchasedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudMusicPurchasedOutcomeCallable DescribeCloudMusicPurchasedCallable(const Model::DescribeCloudMusicPurchasedRequest& request);

                /**
                 *根据歌曲ID查询歌曲信息
                 * @param req DescribeItemByIdRequest
                 * @return DescribeItemByIdOutcome
                 */
                DescribeItemByIdOutcome DescribeItemById(const Model::DescribeItemByIdRequest &request);
                void DescribeItemByIdAsync(const Model::DescribeItemByIdRequest& request, const DescribeItemByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeItemByIdOutcomeCallable DescribeItemByIdCallable(const Model::DescribeItemByIdRequest& request);

                /**
                 *该服务后续会停用，不再建议使用
                 * @param req DescribeItemsRequest
                 * @return DescribeItemsOutcome
                 */
                DescribeItemsOutcome DescribeItems(const Model::DescribeItemsRequest &request);
                void DescribeItemsAsync(const Model::DescribeItemsRequest& request, const DescribeItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeItemsOutcomeCallable DescribeItemsCallable(const Model::DescribeItemsRequest& request);

                /**
                 *根据接口的模式及歌曲ID来取得歌词信息。
                 * @param req DescribeLyricRequest
                 * @return DescribeLyricOutcome
                 */
                DescribeLyricOutcome DescribeLyric(const Model::DescribeLyricRequest &request);
                void DescribeLyricAsync(const Model::DescribeLyricRequest& request, const DescribeLyricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLyricOutcomeCallable DescribeLyricCallable(const Model::DescribeLyricRequest& request);

                /**
                 *获取曲库包歌曲播放信息接口
                 * @param req DescribeMusicRequest
                 * @return DescribeMusicOutcome
                 */
                DescribeMusicOutcome DescribeMusic(const Model::DescribeMusicRequest &request);
                void DescribeMusicAsync(const Model::DescribeMusicRequest& request, const DescribeMusicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMusicOutcomeCallable DescribeMusicCallable(const Model::DescribeMusicRequest& request);

                /**
                 *获取曲库包下已核销歌曲列表接口
                 * @param req DescribePackageItemsRequest
                 * @return DescribePackageItemsOutcome
                 */
                DescribePackageItemsOutcome DescribePackageItems(const Model::DescribePackageItemsRequest &request);
                void DescribePackageItemsAsync(const Model::DescribePackageItemsRequest& request, const DescribePackageItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePackageItemsOutcomeCallable DescribePackageItemsCallable(const Model::DescribePackageItemsRequest& request);

                /**
                 *获取已购曲库包列表接口
                 * @param req DescribePackagesRequest
                 * @return DescribePackagesOutcome
                 */
                DescribePackagesOutcome DescribePackages(const Model::DescribePackagesRequest &request);
                void DescribePackagesAsync(const Model::DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePackagesOutcomeCallable DescribePackagesCallable(const Model::DescribePackagesRequest& request);

                /**
                 *该服务后续会停用，不再建议使用
                 * @param req DescribeStationsRequest
                 * @return DescribeStationsOutcome
                 */
                DescribeStationsOutcome DescribeStations(const Model::DescribeStationsRequest &request);
                void DescribeStationsAsync(const Model::DescribeStationsRequest& request, const DescribeStationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStationsOutcomeCallable DescribeStationsCallable(const Model::DescribeStationsRequest& request);

                /**
                 *客户上报用户数据功能，为了更好地为用户提供优质服务
                 * @param req ReportDataRequest
                 * @return ReportDataOutcome
                 */
                ReportDataOutcome ReportData(const Model::ReportDataRequest &request);
                void ReportDataAsync(const Model::ReportDataRequest& request, const ReportDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportDataOutcomeCallable ReportDataCallable(const Model::ReportDataRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_AMECLIENT_H_
