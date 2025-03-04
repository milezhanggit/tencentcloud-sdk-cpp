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

#include <tencentcloud/trtc/v20190722/TrtcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trtc::V20190722;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-22";
    const string ENDPOINT = "trtc.tencentcloudapi.com";
}

TrtcClient::TrtcClient(const Credential &credential, const string &region) :
    TrtcClient(credential, region, ClientProfile())
{
}

TrtcClient::TrtcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrtcClient::CreateCloudRecordingOutcome TrtcClient::CreateCloudRecording(const CreateCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudRecordingResponse rsp = CreateCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudRecordingOutcome(rsp);
        else
            return CreateCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return CreateCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::CreateCloudRecordingAsync(const CreateCloudRecordingRequest& request, const CreateCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::CreateCloudRecordingOutcomeCallable TrtcClient::CreateCloudRecordingCallable(const CreateCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::CreatePictureOutcome TrtcClient::CreatePicture(const CreatePictureRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePictureResponse rsp = CreatePictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePictureOutcome(rsp);
        else
            return CreatePictureOutcome(o.GetError());
    }
    else
    {
        return CreatePictureOutcome(outcome.GetError());
    }
}

void TrtcClient::CreatePictureAsync(const CreatePictureRequest& request, const CreatePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::CreatePictureOutcomeCallable TrtcClient::CreatePictureCallable(const CreatePictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePictureOutcome()>>(
        [this, request]()
        {
            return this->CreatePicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DeleteCloudRecordingOutcome TrtcClient::DeleteCloudRecording(const DeleteCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudRecordingResponse rsp = DeleteCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudRecordingOutcome(rsp);
        else
            return DeleteCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::DeleteCloudRecordingAsync(const DeleteCloudRecordingRequest& request, const DeleteCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DeleteCloudRecordingOutcomeCallable TrtcClient::DeleteCloudRecordingCallable(const DeleteCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DeletePictureOutcome TrtcClient::DeletePicture(const DeletePictureRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePictureResponse rsp = DeletePictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePictureOutcome(rsp);
        else
            return DeletePictureOutcome(o.GetError());
    }
    else
    {
        return DeletePictureOutcome(outcome.GetError());
    }
}

void TrtcClient::DeletePictureAsync(const DeletePictureRequest& request, const DeletePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DeletePictureOutcomeCallable TrtcClient::DeletePictureCallable(const DeletePictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePictureOutcome()>>(
        [this, request]()
        {
            return this->DeletePicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeCallDetailInfoOutcome TrtcClient::DescribeCallDetailInfo(const DescribeCallDetailInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallDetailInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallDetailInfoResponse rsp = DescribeCallDetailInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallDetailInfoOutcome(rsp);
        else
            return DescribeCallDetailInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCallDetailInfoOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeCallDetailInfoAsync(const DescribeCallDetailInfoRequest& request, const DescribeCallDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallDetailInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeCallDetailInfoOutcomeCallable TrtcClient::DescribeCallDetailInfoCallable(const DescribeCallDetailInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallDetailInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallDetailInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeCloudRecordingOutcome TrtcClient::DescribeCloudRecording(const DescribeCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRecordingResponse rsp = DescribeCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRecordingOutcome(rsp);
        else
            return DescribeCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeCloudRecordingAsync(const DescribeCloudRecordingRequest& request, const DescribeCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeCloudRecordingOutcomeCallable TrtcClient::DescribeCloudRecordingCallable(const DescribeCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeExternalTrtcMeasureOutcome TrtcClient::DescribeExternalTrtcMeasure(const DescribeExternalTrtcMeasureRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExternalTrtcMeasure");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExternalTrtcMeasureResponse rsp = DescribeExternalTrtcMeasureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExternalTrtcMeasureOutcome(rsp);
        else
            return DescribeExternalTrtcMeasureOutcome(o.GetError());
    }
    else
    {
        return DescribeExternalTrtcMeasureOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeExternalTrtcMeasureAsync(const DescribeExternalTrtcMeasureRequest& request, const DescribeExternalTrtcMeasureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExternalTrtcMeasure(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeExternalTrtcMeasureOutcomeCallable TrtcClient::DescribeExternalTrtcMeasureCallable(const DescribeExternalTrtcMeasureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExternalTrtcMeasureOutcome()>>(
        [this, request]()
        {
            return this->DescribeExternalTrtcMeasure(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribePictureOutcome TrtcClient::DescribePicture(const DescribePictureRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePictureResponse rsp = DescribePictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePictureOutcome(rsp);
        else
            return DescribePictureOutcome(o.GetError());
    }
    else
    {
        return DescribePictureOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribePictureAsync(const DescribePictureRequest& request, const DescribePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribePictureOutcomeCallable TrtcClient::DescribePictureCallable(const DescribePictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePictureOutcome()>>(
        [this, request]()
        {
            return this->DescribePicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeRecordStatisticOutcome TrtcClient::DescribeRecordStatistic(const DescribeRecordStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordStatisticResponse rsp = DescribeRecordStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordStatisticOutcome(rsp);
        else
            return DescribeRecordStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordStatisticOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRecordStatisticAsync(const DescribeRecordStatisticRequest& request, const DescribeRecordStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRecordStatisticOutcomeCallable TrtcClient::DescribeRecordStatisticCallable(const DescribeRecordStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeRoomInfoOutcome TrtcClient::DescribeRoomInfo(const DescribeRoomInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomInfoResponse rsp = DescribeRoomInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomInfoOutcome(rsp);
        else
            return DescribeRoomInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomInfoOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRoomInfoAsync(const DescribeRoomInfoRequest& request, const DescribeRoomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoomInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRoomInfoOutcomeCallable TrtcClient::DescribeRoomInfoCallable(const DescribeRoomInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoomInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeScaleInfoOutcome TrtcClient::DescribeScaleInfo(const DescribeScaleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScaleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScaleInfoResponse rsp = DescribeScaleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScaleInfoOutcome(rsp);
        else
            return DescribeScaleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeScaleInfoOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeScaleInfoAsync(const DescribeScaleInfoRequest& request, const DescribeScaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScaleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeScaleInfoOutcomeCallable TrtcClient::DescribeScaleInfoCallable(const DescribeScaleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScaleInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeScaleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeTrtcMcuTranscodeTimeOutcome TrtcClient::DescribeTrtcMcuTranscodeTime(const DescribeTrtcMcuTranscodeTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrtcMcuTranscodeTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrtcMcuTranscodeTimeResponse rsp = DescribeTrtcMcuTranscodeTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrtcMcuTranscodeTimeOutcome(rsp);
        else
            return DescribeTrtcMcuTranscodeTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeTrtcMcuTranscodeTimeOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTrtcMcuTranscodeTimeAsync(const DescribeTrtcMcuTranscodeTimeRequest& request, const DescribeTrtcMcuTranscodeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrtcMcuTranscodeTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTrtcMcuTranscodeTimeOutcomeCallable TrtcClient::DescribeTrtcMcuTranscodeTimeCallable(const DescribeTrtcMcuTranscodeTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrtcMcuTranscodeTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrtcMcuTranscodeTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeUnusualEventOutcome TrtcClient::DescribeUnusualEvent(const DescribeUnusualEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnusualEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnusualEventResponse rsp = DescribeUnusualEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnusualEventOutcome(rsp);
        else
            return DescribeUnusualEventOutcome(o.GetError());
    }
    else
    {
        return DescribeUnusualEventOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeUnusualEventAsync(const DescribeUnusualEventRequest& request, const DescribeUnusualEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnusualEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeUnusualEventOutcomeCallable TrtcClient::DescribeUnusualEventCallable(const DescribeUnusualEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnusualEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnusualEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeUserEventOutcome TrtcClient::DescribeUserEvent(const DescribeUserEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserEventResponse rsp = DescribeUserEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserEventOutcome(rsp);
        else
            return DescribeUserEventOutcome(o.GetError());
    }
    else
    {
        return DescribeUserEventOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeUserEventAsync(const DescribeUserEventRequest& request, const DescribeUserEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeUserEventOutcomeCallable TrtcClient::DescribeUserEventCallable(const DescribeUserEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeUserInfoOutcome TrtcClient::DescribeUserInfo(const DescribeUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserInfoResponse rsp = DescribeUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserInfoOutcome(rsp);
        else
            return DescribeUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserInfoOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeUserInfoAsync(const DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeUserInfoOutcomeCallable TrtcClient::DescribeUserInfoCallable(const DescribeUserInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DismissRoomOutcome TrtcClient::DismissRoom(const DismissRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomResponse rsp = DismissRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomOutcome(rsp);
        else
            return DismissRoomOutcome(o.GetError());
    }
    else
    {
        return DismissRoomOutcome(outcome.GetError());
    }
}

void TrtcClient::DismissRoomAsync(const DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DismissRoomOutcomeCallable TrtcClient::DismissRoomCallable(const DismissRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismissRoomOutcome()>>(
        [this, request]()
        {
            return this->DismissRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DismissRoomByStrRoomIdOutcome TrtcClient::DismissRoomByStrRoomId(const DismissRoomByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoomByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomByStrRoomIdResponse rsp = DismissRoomByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomByStrRoomIdOutcome(rsp);
        else
            return DismissRoomByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return DismissRoomByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::DismissRoomByStrRoomIdAsync(const DismissRoomByStrRoomIdRequest& request, const DismissRoomByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoomByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DismissRoomByStrRoomIdOutcomeCallable TrtcClient::DismissRoomByStrRoomIdCallable(const DismissRoomByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismissRoomByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->DismissRoomByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::ModifyCloudRecordingOutcome TrtcClient::ModifyCloudRecording(const ModifyCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudRecordingResponse rsp = ModifyCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudRecordingOutcome(rsp);
        else
            return ModifyCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::ModifyCloudRecordingAsync(const ModifyCloudRecordingRequest& request, const ModifyCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::ModifyCloudRecordingOutcomeCallable TrtcClient::ModifyCloudRecordingCallable(const ModifyCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::ModifyPictureOutcome TrtcClient::ModifyPicture(const ModifyPictureRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPictureResponse rsp = ModifyPictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPictureOutcome(rsp);
        else
            return ModifyPictureOutcome(o.GetError());
    }
    else
    {
        return ModifyPictureOutcome(outcome.GetError());
    }
}

void TrtcClient::ModifyPictureAsync(const ModifyPictureRequest& request, const ModifyPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::ModifyPictureOutcomeCallable TrtcClient::ModifyPictureCallable(const ModifyPictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPictureOutcome()>>(
        [this, request]()
        {
            return this->ModifyPicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::RemoveUserOutcome TrtcClient::RemoveUser(const RemoveUserRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserResponse rsp = RemoveUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserOutcome(rsp);
        else
            return RemoveUserOutcome(o.GetError());
    }
    else
    {
        return RemoveUserOutcome(outcome.GetError());
    }
}

void TrtcClient::RemoveUserAsync(const RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RemoveUserOutcomeCallable TrtcClient::RemoveUserCallable(const RemoveUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserOutcome()>>(
        [this, request]()
        {
            return this->RemoveUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::RemoveUserByStrRoomIdOutcome TrtcClient::RemoveUserByStrRoomId(const RemoveUserByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUserByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserByStrRoomIdResponse rsp = RemoveUserByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserByStrRoomIdOutcome(rsp);
        else
            return RemoveUserByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return RemoveUserByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::RemoveUserByStrRoomIdAsync(const RemoveUserByStrRoomIdRequest& request, const RemoveUserByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUserByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RemoveUserByStrRoomIdOutcomeCallable TrtcClient::RemoveUserByStrRoomIdCallable(const RemoveUserByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->RemoveUserByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::StartMCUMixTranscodeOutcome TrtcClient::StartMCUMixTranscode(const StartMCUMixTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "StartMCUMixTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMCUMixTranscodeResponse rsp = StartMCUMixTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMCUMixTranscodeOutcome(rsp);
        else
            return StartMCUMixTranscodeOutcome(o.GetError());
    }
    else
    {
        return StartMCUMixTranscodeOutcome(outcome.GetError());
    }
}

void TrtcClient::StartMCUMixTranscodeAsync(const StartMCUMixTranscodeRequest& request, const StartMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMCUMixTranscode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartMCUMixTranscodeOutcomeCallable TrtcClient::StartMCUMixTranscodeCallable(const StartMCUMixTranscodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMCUMixTranscodeOutcome()>>(
        [this, request]()
        {
            return this->StartMCUMixTranscode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::StartMCUMixTranscodeByStrRoomIdOutcome TrtcClient::StartMCUMixTranscodeByStrRoomId(const StartMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "StartMCUMixTranscodeByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMCUMixTranscodeByStrRoomIdResponse rsp = StartMCUMixTranscodeByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMCUMixTranscodeByStrRoomIdOutcome(rsp);
        else
            return StartMCUMixTranscodeByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return StartMCUMixTranscodeByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::StartMCUMixTranscodeByStrRoomIdAsync(const StartMCUMixTranscodeByStrRoomIdRequest& request, const StartMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMCUMixTranscodeByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartMCUMixTranscodeByStrRoomIdOutcomeCallable TrtcClient::StartMCUMixTranscodeByStrRoomIdCallable(const StartMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMCUMixTranscodeByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->StartMCUMixTranscodeByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::StopMCUMixTranscodeOutcome TrtcClient::StopMCUMixTranscode(const StopMCUMixTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "StopMCUMixTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMCUMixTranscodeResponse rsp = StopMCUMixTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMCUMixTranscodeOutcome(rsp);
        else
            return StopMCUMixTranscodeOutcome(o.GetError());
    }
    else
    {
        return StopMCUMixTranscodeOutcome(outcome.GetError());
    }
}

void TrtcClient::StopMCUMixTranscodeAsync(const StopMCUMixTranscodeRequest& request, const StopMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMCUMixTranscode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopMCUMixTranscodeOutcomeCallable TrtcClient::StopMCUMixTranscodeCallable(const StopMCUMixTranscodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMCUMixTranscodeOutcome()>>(
        [this, request]()
        {
            return this->StopMCUMixTranscode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::StopMCUMixTranscodeByStrRoomIdOutcome TrtcClient::StopMCUMixTranscodeByStrRoomId(const StopMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "StopMCUMixTranscodeByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMCUMixTranscodeByStrRoomIdResponse rsp = StopMCUMixTranscodeByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMCUMixTranscodeByStrRoomIdOutcome(rsp);
        else
            return StopMCUMixTranscodeByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return StopMCUMixTranscodeByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::StopMCUMixTranscodeByStrRoomIdAsync(const StopMCUMixTranscodeByStrRoomIdRequest& request, const StopMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMCUMixTranscodeByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopMCUMixTranscodeByStrRoomIdOutcomeCallable TrtcClient::StopMCUMixTranscodeByStrRoomIdCallable(const StopMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMCUMixTranscodeByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->StopMCUMixTranscodeByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

