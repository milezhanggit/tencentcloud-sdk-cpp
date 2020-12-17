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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_GETEMAILTEMPLATERESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_GETEMAILTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/TemplateContent.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * GetEmailTemplate返回参数结构体
                */
                class GetEmailTemplateResponse : public AbstractModel
                {
                public:
                    GetEmailTemplateResponse();
                    ~GetEmailTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取模板内容数据
                     * @return TemplateContent 模板内容数据
                     */
                    TemplateContent GetTemplateContent() const;

                    /**
                     * 判断参数 TemplateContent 是否已赋值
                     * @return TemplateContent 是否已赋值
                     */
                    bool TemplateContentHasBeenSet() const;

                private:

                    /**
                     * 模板内容数据
                     */
                    TemplateContent m_templateContent;
                    bool m_templateContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_GETEMAILTEMPLATERESPONSE_H_
