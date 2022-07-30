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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_COPYSCENARIORESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_COPYSCENARIORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * CopyScenario返回参数结构体
                */
                class CopyScenarioResponse : public AbstractModel
                {
                public:
                    CopyScenarioResponse();
                    ~CopyScenarioResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取复制出的新场景 ID
                     * @return ScenarioId 复制出的新场景 ID
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     */
                    bool ScenarioIdHasBeenSet() const;

                private:

                    /**
                     * 复制出的新场景 ID
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_COPYSCENARIORESPONSE_H_
