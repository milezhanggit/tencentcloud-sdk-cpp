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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTSCDNLOGTASKSRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTSCDNLOGTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnLogTaskDetail.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ListScdnLogTasks返回参数结构体
                */
                class ListScdnLogTasksResponse : public AbstractModel
                {
                public:
                    ListScdnLogTasksResponse();
                    ~ListScdnLogTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取日志下载任务详情
                     * @return TaskList 日志下载任务详情
                     */
                    std::vector<ScdnLogTaskDetail> GetTaskList() const;

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     */
                    bool TaskListHasBeenSet() const;

                    /**
                     * 获取查询到的下载任务的总数
                     * @return TotalCount 查询到的下载任务的总数
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 日志下载任务详情
                     */
                    std::vector<ScdnLogTaskDetail> m_taskList;
                    bool m_taskListHasBeenSet;

                    /**
                     * 查询到的下载任务的总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTSCDNLOGTASKSRESPONSE_H_
