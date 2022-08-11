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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKDATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/SecEntry.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeDDosAttackData返回参数结构体
                */
                class DescribeDDosAttackDataResponse : public AbstractModel
                {
                public:
                    DescribeDDosAttackDataResponse();
                    ~DescribeDDosAttackDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DDos攻击数据内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data DDos攻击数据内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecEntry> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取请求响应状态，取值有：
<li>1 ：失败 ；</li>
<li>0 ：成功 。</li>
                     * @return Status 请求响应状态，取值有：
<li>1 ：失败 ；</li>
<li>0 ：成功 。</li>
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取请求响应信息。
                     * @return Msg 请求响应信息。
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取查询时间粒度，取值有：
<li>min ：1分钟 ；</li>
<li>5min ：5分钟 ；</li>
<li>hour ：1小时 ；</li>
<li>day ：1天 。</li>
                     * @return Interval 查询时间粒度，取值有：
<li>min ：1分钟 ；</li>
<li>5min ：5分钟 ；</li>
<li>hour ：1小时 ；</li>
<li>day ：1天 。</li>
                     */
                    std::string GetInterval() const;

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * DDos攻击数据内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecEntry> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 请求响应状态，取值有：
<li>1 ：失败 ；</li>
<li>0 ：成功 。</li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 请求响应信息。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 查询时间粒度，取值有：
<li>min ：1分钟 ；</li>
<li>5min ：5分钟 ；</li>
<li>hour ：1小时 ；</li>
<li>day ：1天 。</li>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKDATARESPONSE_H_
