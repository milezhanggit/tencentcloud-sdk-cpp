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

#include <tencentcloud/es/v20180416/EsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Es::V20180416;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-16";
    const string ENDPOINT = "es.tencentcloudapi.com";
}

EsClient::EsClient(const Credential &credential, const string &region) :
    EsClient(credential, region, ClientProfile())
{
}

EsClient::EsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EsClient::CreateIndexOutcome EsClient::CreateIndex(const CreateIndexRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIndexResponse rsp = CreateIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIndexOutcome(rsp);
        else
            return CreateIndexOutcome(o.GetError());
    }
    else
    {
        return CreateIndexOutcome(outcome.GetError());
    }
}

void EsClient::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::CreateIndexOutcomeCallable EsClient::CreateIndexCallable(const CreateIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIndexOutcome()>>(
        [this, request]()
        {
            return this->CreateIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::CreateInstanceOutcome EsClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void EsClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::CreateInstanceOutcomeCallable EsClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::CreateLogstashInstanceOutcome EsClient::CreateLogstashInstance(const CreateLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogstashInstanceResponse rsp = CreateLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogstashInstanceOutcome(rsp);
        else
            return CreateLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::CreateLogstashInstanceAsync(const CreateLogstashInstanceRequest& request, const CreateLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLogstashInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::CreateLogstashInstanceOutcomeCallable EsClient::CreateLogstashInstanceCallable(const CreateLogstashInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLogstashInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateLogstashInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DeleteIndexOutcome EsClient::DeleteIndex(const DeleteIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIndexResponse rsp = DeleteIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIndexOutcome(rsp);
        else
            return DeleteIndexOutcome(o.GetError());
    }
    else
    {
        return DeleteIndexOutcome(outcome.GetError());
    }
}

void EsClient::DeleteIndexAsync(const DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DeleteIndexOutcomeCallable EsClient::DeleteIndexCallable(const DeleteIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIndexOutcome()>>(
        [this, request]()
        {
            return this->DeleteIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DeleteInstanceOutcome EsClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DeleteInstanceOutcomeCallable EsClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DeleteLogstashInstanceOutcome EsClient::DeleteLogstashInstance(const DeleteLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogstashInstanceResponse rsp = DeleteLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogstashInstanceOutcome(rsp);
        else
            return DeleteLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DeleteLogstashInstanceAsync(const DeleteLogstashInstanceRequest& request, const DeleteLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLogstashInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DeleteLogstashInstanceOutcomeCallable EsClient::DeleteLogstashInstanceCallable(const DeleteLogstashInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLogstashInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteLogstashInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DeleteLogstashPipelinesOutcome EsClient::DeleteLogstashPipelines(const DeleteLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogstashPipelinesResponse rsp = DeleteLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogstashPipelinesOutcome(rsp);
        else
            return DeleteLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return DeleteLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::DeleteLogstashPipelinesAsync(const DeleteLogstashPipelinesRequest& request, const DeleteLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLogstashPipelines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DeleteLogstashPipelinesOutcomeCallable EsClient::DeleteLogstashPipelinesCallable(const DeleteLogstashPipelinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLogstashPipelinesOutcome()>>(
        [this, request]()
        {
            return this->DeleteLogstashPipelines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeIndexListOutcome EsClient::DescribeIndexList(const DescribeIndexListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexListResponse rsp = DescribeIndexListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexListOutcome(rsp);
        else
            return DescribeIndexListOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexListOutcome(outcome.GetError());
    }
}

void EsClient::DescribeIndexListAsync(const DescribeIndexListRequest& request, const DescribeIndexListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIndexList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeIndexListOutcomeCallable EsClient::DescribeIndexListCallable(const DescribeIndexListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIndexListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIndexList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeIndexMetaOutcome EsClient::DescribeIndexMeta(const DescribeIndexMetaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexMeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexMetaResponse rsp = DescribeIndexMetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexMetaOutcome(rsp);
        else
            return DescribeIndexMetaOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexMetaOutcome(outcome.GetError());
    }
}

void EsClient::DescribeIndexMetaAsync(const DescribeIndexMetaRequest& request, const DescribeIndexMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIndexMeta(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeIndexMetaOutcomeCallable EsClient::DescribeIndexMetaCallable(const DescribeIndexMetaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIndexMetaOutcome()>>(
        [this, request]()
        {
            return this->DescribeIndexMeta(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeInstanceLogsOutcome EsClient::DescribeInstanceLogs(const DescribeInstanceLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogsResponse rsp = DescribeInstanceLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogsOutcome(rsp);
        else
            return DescribeInstanceLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstanceLogsAsync(const DescribeInstanceLogsRequest& request, const DescribeInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeInstanceLogsOutcomeCallable EsClient::DescribeInstanceLogsCallable(const DescribeInstanceLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeInstanceOperationsOutcome EsClient::DescribeInstanceOperations(const DescribeInstanceOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceOperationsResponse rsp = DescribeInstanceOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOperationsOutcome(rsp);
        else
            return DescribeInstanceOperationsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOperationsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstanceOperationsAsync(const DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceOperations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeInstanceOperationsOutcomeCallable EsClient::DescribeInstanceOperationsCallable(const DescribeInstanceOperationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceOperationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceOperations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeInstancesOutcome EsClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeInstancesOutcomeCallable EsClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeLogstashInstanceLogsOutcome EsClient::DescribeLogstashInstanceLogs(const DescribeLogstashInstanceLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashInstanceLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashInstanceLogsResponse rsp = DescribeLogstashInstanceLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashInstanceLogsOutcome(rsp);
        else
            return DescribeLogstashInstanceLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashInstanceLogsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashInstanceLogsAsync(const DescribeLogstashInstanceLogsRequest& request, const DescribeLogstashInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogstashInstanceLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeLogstashInstanceLogsOutcomeCallable EsClient::DescribeLogstashInstanceLogsCallable(const DescribeLogstashInstanceLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogstashInstanceLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogstashInstanceLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeLogstashInstanceOperationsOutcome EsClient::DescribeLogstashInstanceOperations(const DescribeLogstashInstanceOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashInstanceOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashInstanceOperationsResponse rsp = DescribeLogstashInstanceOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashInstanceOperationsOutcome(rsp);
        else
            return DescribeLogstashInstanceOperationsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashInstanceOperationsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashInstanceOperationsAsync(const DescribeLogstashInstanceOperationsRequest& request, const DescribeLogstashInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogstashInstanceOperations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeLogstashInstanceOperationsOutcomeCallable EsClient::DescribeLogstashInstanceOperationsCallable(const DescribeLogstashInstanceOperationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogstashInstanceOperationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogstashInstanceOperations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeLogstashInstancesOutcome EsClient::DescribeLogstashInstances(const DescribeLogstashInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashInstancesResponse rsp = DescribeLogstashInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashInstancesOutcome(rsp);
        else
            return DescribeLogstashInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashInstancesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashInstancesAsync(const DescribeLogstashInstancesRequest& request, const DescribeLogstashInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogstashInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeLogstashInstancesOutcomeCallable EsClient::DescribeLogstashInstancesCallable(const DescribeLogstashInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogstashInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogstashInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeLogstashPipelinesOutcome EsClient::DescribeLogstashPipelines(const DescribeLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashPipelinesResponse rsp = DescribeLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashPipelinesOutcome(rsp);
        else
            return DescribeLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashPipelinesAsync(const DescribeLogstashPipelinesRequest& request, const DescribeLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogstashPipelines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeLogstashPipelinesOutcomeCallable EsClient::DescribeLogstashPipelinesCallable(const DescribeLogstashPipelinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogstashPipelinesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogstashPipelines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeViewsOutcome EsClient::DescribeViews(const DescribeViewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeViews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeViewsResponse rsp = DescribeViewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeViewsOutcome(rsp);
        else
            return DescribeViewsOutcome(o.GetError());
    }
    else
    {
        return DescribeViewsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeViewsAsync(const DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeViews(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeViewsOutcomeCallable EsClient::DescribeViewsCallable(const DescribeViewsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeViewsOutcome()>>(
        [this, request]()
        {
            return this->DescribeViews(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DiagnoseInstanceOutcome EsClient::DiagnoseInstance(const DiagnoseInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DiagnoseInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DiagnoseInstanceResponse rsp = DiagnoseInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DiagnoseInstanceOutcome(rsp);
        else
            return DiagnoseInstanceOutcome(o.GetError());
    }
    else
    {
        return DiagnoseInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DiagnoseInstanceAsync(const DiagnoseInstanceRequest& request, const DiagnoseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DiagnoseInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DiagnoseInstanceOutcomeCallable EsClient::DiagnoseInstanceCallable(const DiagnoseInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DiagnoseInstanceOutcome()>>(
        [this, request]()
        {
            return this->DiagnoseInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::GetRequestTargetNodeTypesOutcome EsClient::GetRequestTargetNodeTypes(const GetRequestTargetNodeTypesRequest &request)
{
    auto outcome = MakeRequest(request, "GetRequestTargetNodeTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRequestTargetNodeTypesResponse rsp = GetRequestTargetNodeTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRequestTargetNodeTypesOutcome(rsp);
        else
            return GetRequestTargetNodeTypesOutcome(o.GetError());
    }
    else
    {
        return GetRequestTargetNodeTypesOutcome(outcome.GetError());
    }
}

void EsClient::GetRequestTargetNodeTypesAsync(const GetRequestTargetNodeTypesRequest& request, const GetRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRequestTargetNodeTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::GetRequestTargetNodeTypesOutcomeCallable EsClient::GetRequestTargetNodeTypesCallable(const GetRequestTargetNodeTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRequestTargetNodeTypesOutcome()>>(
        [this, request]()
        {
            return this->GetRequestTargetNodeTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::RestartInstanceOutcome EsClient::RestartInstance(const RestartInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartInstanceResponse rsp = RestartInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartInstanceOutcome(rsp);
        else
            return RestartInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartInstanceOutcome(outcome.GetError());
    }
}

void EsClient::RestartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::RestartInstanceOutcomeCallable EsClient::RestartInstanceCallable(const RestartInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestartInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::RestartKibanaOutcome EsClient::RestartKibana(const RestartKibanaRequest &request)
{
    auto outcome = MakeRequest(request, "RestartKibana");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartKibanaResponse rsp = RestartKibanaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartKibanaOutcome(rsp);
        else
            return RestartKibanaOutcome(o.GetError());
    }
    else
    {
        return RestartKibanaOutcome(outcome.GetError());
    }
}

void EsClient::RestartKibanaAsync(const RestartKibanaRequest& request, const RestartKibanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartKibana(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::RestartKibanaOutcomeCallable EsClient::RestartKibanaCallable(const RestartKibanaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartKibanaOutcome()>>(
        [this, request]()
        {
            return this->RestartKibana(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::RestartLogstashInstanceOutcome EsClient::RestartLogstashInstance(const RestartLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartLogstashInstanceResponse rsp = RestartLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartLogstashInstanceOutcome(rsp);
        else
            return RestartLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::RestartLogstashInstanceAsync(const RestartLogstashInstanceRequest& request, const RestartLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartLogstashInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::RestartLogstashInstanceOutcomeCallable EsClient::RestartLogstashInstanceCallable(const RestartLogstashInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartLogstashInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestartLogstashInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::RestartNodesOutcome EsClient::RestartNodes(const RestartNodesRequest &request)
{
    auto outcome = MakeRequest(request, "RestartNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartNodesResponse rsp = RestartNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartNodesOutcome(rsp);
        else
            return RestartNodesOutcome(o.GetError());
    }
    else
    {
        return RestartNodesOutcome(outcome.GetError());
    }
}

void EsClient::RestartNodesAsync(const RestartNodesRequest& request, const RestartNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::RestartNodesOutcomeCallable EsClient::RestartNodesCallable(const RestartNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartNodesOutcome()>>(
        [this, request]()
        {
            return this->RestartNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::SaveAndDeployLogstashPipelineOutcome EsClient::SaveAndDeployLogstashPipeline(const SaveAndDeployLogstashPipelineRequest &request)
{
    auto outcome = MakeRequest(request, "SaveAndDeployLogstashPipeline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveAndDeployLogstashPipelineResponse rsp = SaveAndDeployLogstashPipelineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveAndDeployLogstashPipelineOutcome(rsp);
        else
            return SaveAndDeployLogstashPipelineOutcome(o.GetError());
    }
    else
    {
        return SaveAndDeployLogstashPipelineOutcome(outcome.GetError());
    }
}

void EsClient::SaveAndDeployLogstashPipelineAsync(const SaveAndDeployLogstashPipelineRequest& request, const SaveAndDeployLogstashPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SaveAndDeployLogstashPipeline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::SaveAndDeployLogstashPipelineOutcomeCallable EsClient::SaveAndDeployLogstashPipelineCallable(const SaveAndDeployLogstashPipelineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SaveAndDeployLogstashPipelineOutcome()>>(
        [this, request]()
        {
            return this->SaveAndDeployLogstashPipeline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::StartLogstashPipelinesOutcome EsClient::StartLogstashPipelines(const StartLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "StartLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartLogstashPipelinesResponse rsp = StartLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartLogstashPipelinesOutcome(rsp);
        else
            return StartLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return StartLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::StartLogstashPipelinesAsync(const StartLogstashPipelinesRequest& request, const StartLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartLogstashPipelines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::StartLogstashPipelinesOutcomeCallable EsClient::StartLogstashPipelinesCallable(const StartLogstashPipelinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartLogstashPipelinesOutcome()>>(
        [this, request]()
        {
            return this->StartLogstashPipelines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::StopLogstashPipelinesOutcome EsClient::StopLogstashPipelines(const StopLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "StopLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLogstashPipelinesResponse rsp = StopLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLogstashPipelinesOutcome(rsp);
        else
            return StopLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return StopLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::StopLogstashPipelinesAsync(const StopLogstashPipelinesRequest& request, const StopLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopLogstashPipelines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::StopLogstashPipelinesOutcomeCallable EsClient::StopLogstashPipelinesCallable(const StopLogstashPipelinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopLogstashPipelinesOutcome()>>(
        [this, request]()
        {
            return this->StopLogstashPipelines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateDiagnoseSettingsOutcome EsClient::UpdateDiagnoseSettings(const UpdateDiagnoseSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDiagnoseSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDiagnoseSettingsResponse rsp = UpdateDiagnoseSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDiagnoseSettingsOutcome(rsp);
        else
            return UpdateDiagnoseSettingsOutcome(o.GetError());
    }
    else
    {
        return UpdateDiagnoseSettingsOutcome(outcome.GetError());
    }
}

void EsClient::UpdateDiagnoseSettingsAsync(const UpdateDiagnoseSettingsRequest& request, const UpdateDiagnoseSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDiagnoseSettings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateDiagnoseSettingsOutcomeCallable EsClient::UpdateDiagnoseSettingsCallable(const UpdateDiagnoseSettingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDiagnoseSettingsOutcome()>>(
        [this, request]()
        {
            return this->UpdateDiagnoseSettings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateDictionariesOutcome EsClient::UpdateDictionaries(const UpdateDictionariesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDictionaries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDictionariesResponse rsp = UpdateDictionariesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDictionariesOutcome(rsp);
        else
            return UpdateDictionariesOutcome(o.GetError());
    }
    else
    {
        return UpdateDictionariesOutcome(outcome.GetError());
    }
}

void EsClient::UpdateDictionariesAsync(const UpdateDictionariesRequest& request, const UpdateDictionariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDictionaries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateDictionariesOutcomeCallable EsClient::UpdateDictionariesCallable(const UpdateDictionariesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDictionariesOutcome()>>(
        [this, request]()
        {
            return this->UpdateDictionaries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateIndexOutcome EsClient::UpdateIndex(const UpdateIndexRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateIndexResponse rsp = UpdateIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateIndexOutcome(rsp);
        else
            return UpdateIndexOutcome(o.GetError());
    }
    else
    {
        return UpdateIndexOutcome(outcome.GetError());
    }
}

void EsClient::UpdateIndexAsync(const UpdateIndexRequest& request, const UpdateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateIndexOutcomeCallable EsClient::UpdateIndexCallable(const UpdateIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateIndexOutcome()>>(
        [this, request]()
        {
            return this->UpdateIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateInstanceOutcome EsClient::UpdateInstance(const UpdateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateInstanceResponse rsp = UpdateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateInstanceOutcome(rsp);
        else
            return UpdateInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpdateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateInstanceOutcomeCallable EsClient::UpdateInstanceCallable(const UpdateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpdateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateJdkOutcome EsClient::UpdateJdk(const UpdateJdkRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateJdk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateJdkResponse rsp = UpdateJdkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateJdkOutcome(rsp);
        else
            return UpdateJdkOutcome(o.GetError());
    }
    else
    {
        return UpdateJdkOutcome(outcome.GetError());
    }
}

void EsClient::UpdateJdkAsync(const UpdateJdkRequest& request, const UpdateJdkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateJdk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateJdkOutcomeCallable EsClient::UpdateJdkCallable(const UpdateJdkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateJdkOutcome()>>(
        [this, request]()
        {
            return this->UpdateJdk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateLogstashInstanceOutcome EsClient::UpdateLogstashInstance(const UpdateLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLogstashInstanceResponse rsp = UpdateLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLogstashInstanceOutcome(rsp);
        else
            return UpdateLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpdateLogstashInstanceAsync(const UpdateLogstashInstanceRequest& request, const UpdateLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateLogstashInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateLogstashInstanceOutcomeCallable EsClient::UpdateLogstashInstanceCallable(const UpdateLogstashInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateLogstashInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpdateLogstashInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateLogstashPipelineDescOutcome EsClient::UpdateLogstashPipelineDesc(const UpdateLogstashPipelineDescRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLogstashPipelineDesc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLogstashPipelineDescResponse rsp = UpdateLogstashPipelineDescResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLogstashPipelineDescOutcome(rsp);
        else
            return UpdateLogstashPipelineDescOutcome(o.GetError());
    }
    else
    {
        return UpdateLogstashPipelineDescOutcome(outcome.GetError());
    }
}

void EsClient::UpdateLogstashPipelineDescAsync(const UpdateLogstashPipelineDescRequest& request, const UpdateLogstashPipelineDescAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateLogstashPipelineDesc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateLogstashPipelineDescOutcomeCallable EsClient::UpdateLogstashPipelineDescCallable(const UpdateLogstashPipelineDescRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateLogstashPipelineDescOutcome()>>(
        [this, request]()
        {
            return this->UpdateLogstashPipelineDesc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdatePluginsOutcome EsClient::UpdatePlugins(const UpdatePluginsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePlugins");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePluginsResponse rsp = UpdatePluginsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePluginsOutcome(rsp);
        else
            return UpdatePluginsOutcome(o.GetError());
    }
    else
    {
        return UpdatePluginsOutcome(outcome.GetError());
    }
}

void EsClient::UpdatePluginsAsync(const UpdatePluginsRequest& request, const UpdatePluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePlugins(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdatePluginsOutcomeCallable EsClient::UpdatePluginsCallable(const UpdatePluginsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePluginsOutcome()>>(
        [this, request]()
        {
            return this->UpdatePlugins(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateRequestTargetNodeTypesOutcome EsClient::UpdateRequestTargetNodeTypes(const UpdateRequestTargetNodeTypesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRequestTargetNodeTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRequestTargetNodeTypesResponse rsp = UpdateRequestTargetNodeTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRequestTargetNodeTypesOutcome(rsp);
        else
            return UpdateRequestTargetNodeTypesOutcome(o.GetError());
    }
    else
    {
        return UpdateRequestTargetNodeTypesOutcome(outcome.GetError());
    }
}

void EsClient::UpdateRequestTargetNodeTypesAsync(const UpdateRequestTargetNodeTypesRequest& request, const UpdateRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRequestTargetNodeTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateRequestTargetNodeTypesOutcomeCallable EsClient::UpdateRequestTargetNodeTypesCallable(const UpdateRequestTargetNodeTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRequestTargetNodeTypesOutcome()>>(
        [this, request]()
        {
            return this->UpdateRequestTargetNodeTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpgradeInstanceOutcome EsClient::UpgradeInstance(const UpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeInstanceResponse rsp = UpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeInstanceOutcome(rsp);
        else
            return UpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpgradeInstanceOutcomeCallable EsClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpgradeLicenseOutcome EsClient::UpgradeLicense(const UpgradeLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeLicenseResponse rsp = UpgradeLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeLicenseOutcome(rsp);
        else
            return UpgradeLicenseOutcome(o.GetError());
    }
    else
    {
        return UpgradeLicenseOutcome(outcome.GetError());
    }
}

void EsClient::UpgradeLicenseAsync(const UpgradeLicenseRequest& request, const UpgradeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpgradeLicenseOutcomeCallable EsClient::UpgradeLicenseCallable(const UpgradeLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeLicenseOutcome()>>(
        [this, request]()
        {
            return this->UpgradeLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

