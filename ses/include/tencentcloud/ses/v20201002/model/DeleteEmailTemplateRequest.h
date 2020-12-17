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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_DELETEEMAILTEMPLATEREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_DELETEEMAILTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteEmailTemplate请求参数结构体
                */
                class DeleteEmailTemplateRequest : public AbstractModel
                {
                public:
                    DeleteEmailTemplateRequest();
                    ~DeleteEmailTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取删除发信模版
                     * @return TemplateID 删除发信模版
                     */
                    uint64_t GetTemplateID() const;

                    /**
                     * 设置删除发信模版
                     * @param TemplateID 删除发信模版
                     */
                    void SetTemplateID(const uint64_t& _templateID);

                    /**
                     * 判断参数 TemplateID 是否已赋值
                     * @return TemplateID 是否已赋值
                     */
                    bool TemplateIDHasBeenSet() const;

                private:

                    /**
                     * 删除发信模版
                     */
                    uint64_t m_templateID;
                    bool m_templateIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_DELETEEMAILTEMPLATEREQUEST_H_
