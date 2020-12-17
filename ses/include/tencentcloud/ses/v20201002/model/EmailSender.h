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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_EMAILSENDER_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_EMAILSENDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * 用于描述发件人相关信息
                */
                class EmailSender : public AbstractModel
                {
                public:
                    EmailSender();
                    ~EmailSender() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发信地址
                     * @return EmailAddress 发信地址
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置发信地址
                     * @param EmailAddress 发信地址
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     */
                    bool EmailAddressHasBeenSet() const;

                    /**
                     * 获取发信人别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmailSenderName 发信人别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEmailSenderName() const;

                    /**
                     * 设置发信人别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EmailSenderName 发信人别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEmailSenderName(const std::string& _emailSenderName);

                    /**
                     * 判断参数 EmailSenderName 是否已赋值
                     * @return EmailSenderName 是否已赋值
                     */
                    bool EmailSenderNameHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTimestamp 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCreatedTimestamp() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreatedTimestamp 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreatedTimestamp(const uint64_t& _createdTimestamp);

                    /**
                     * 判断参数 CreatedTimestamp 是否已赋值
                     * @return CreatedTimestamp 是否已赋值
                     */
                    bool CreatedTimestampHasBeenSet() const;

                private:

                    /**
                     * 发信地址
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * 发信人别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_emailSenderName;
                    bool m_emailSenderNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createdTimestamp;
                    bool m_createdTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_EMAILSENDER_H_
