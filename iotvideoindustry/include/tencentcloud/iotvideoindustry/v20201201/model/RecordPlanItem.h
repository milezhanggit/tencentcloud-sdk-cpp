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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDPLANITEM_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDPLANITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeviceItem.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 录制计划详情
                */
                class RecordPlanItem : public AbstractModel
                {
                public:
                    RecordPlanItem();
                    ~RecordPlanItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlanId 计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PlanId 计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取计划名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 计划名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置计划名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 计划名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取时间模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeTemplateId 时间模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTimeTemplateId() const;

                    /**
                     * 设置时间模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimeTemplateId 时间模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimeTemplateId(const std::string& _timeTemplateId);

                    /**
                     * 判断参数 TimeTemplateId 是否已赋值
                     * @return TimeTemplateId 是否已赋值
                     */
                    bool TimeTemplateIdHasBeenSet() const;

                    /**
                     * 获取时间模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeTemplateName 时间模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTimeTemplateName() const;

                    /**
                     * 设置时间模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimeTemplateName 时间模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimeTemplateName(const std::string& _timeTemplateName);

                    /**
                     * 判断参数 TimeTemplateName 是否已赋值
                     * @return TimeTemplateName 是否已赋值
                     */
                    bool TimeTemplateNameHasBeenSet() const;

                    /**
                     * 获取录制类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventId 录制类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置录制类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EventId 录制类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取绑定的设备列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Devices 绑定的设备列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceItem> GetDevices() const;

                    /**
                     * 设置绑定的设备列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Devices 绑定的设备列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDevices(const std::vector<DeviceItem>& _devices);

                    /**
                     * 判断参数 Devices 是否已赋值
                     * @return Devices 是否已赋值
                     */
                    bool DevicesHasBeenSet() const;

                private:

                    /**
                     * 计划ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 计划名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 时间模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeTemplateId;
                    bool m_timeTemplateIdHasBeenSet;

                    /**
                     * 时间模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeTemplateName;
                    bool m_timeTemplateNameHasBeenSet;

                    /**
                     * 录制类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 绑定的设备列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceItem> m_devices;
                    bool m_devicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDPLANITEM_H_
