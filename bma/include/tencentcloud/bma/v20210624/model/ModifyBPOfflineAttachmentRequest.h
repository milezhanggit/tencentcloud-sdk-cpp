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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYBPOFFLINEATTACHMENTREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYBPOFFLINEATTACHMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * ModifyBPOfflineAttachment请求参数结构体
                */
                class ModifyBPOfflineAttachmentRequest : public AbstractModel
                {
                public:
                    ModifyBPOfflineAttachmentRequest();
                    ~ModifyBPOfflineAttachmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取xx
                     * @return LicenseName xx
                     */
                    std::string GetLicenseName() const;

                    /**
                     * 设置xx
                     * @param LicenseName xx
                     */
                    void SetLicenseName(const std::string& _licenseName);

                    /**
                     * 判断参数 LicenseName 是否已赋值
                     * @return LicenseName 是否已赋值
                     */
                    bool LicenseNameHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return AuthorizationName xx
                     */
                    std::string GetAuthorizationName() const;

                    /**
                     * 设置xx
                     * @param AuthorizationName xx
                     */
                    void SetAuthorizationName(const std::string& _authorizationName);

                    /**
                     * 判断参数 AuthorizationName 是否已赋值
                     * @return AuthorizationName 是否已赋值
                     */
                    bool AuthorizationNameHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return BrandName xx
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置xx
                     * @param BrandName xx
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return BrandCertificateName xx
                     */
                    std::string GetBrandCertificateName() const;

                    /**
                     * 设置xx
                     * @param BrandCertificateName xx
                     */
                    void SetBrandCertificateName(const std::string& _brandCertificateName);

                    /**
                     * 判断参数 BrandCertificateName 是否已赋值
                     * @return BrandCertificateName 是否已赋值
                     */
                    bool BrandCertificateNameHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return TransferName xx
                     */
                    std::string GetTransferName() const;

                    /**
                     * 设置xx
                     * @param TransferName xx
                     */
                    void SetTransferName(const std::string& _transferName);

                    /**
                     * 判断参数 TransferName 是否已赋值
                     * @return TransferName 是否已赋值
                     */
                    bool TransferNameHasBeenSet() const;

                private:

                    /**
                     * xx
                     */
                    std::string m_licenseName;
                    bool m_licenseNameHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_authorizationName;
                    bool m_authorizationNameHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_brandCertificateName;
                    bool m_brandCertificateNameHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_transferName;
                    bool m_transferNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYBPOFFLINEATTACHMENTREQUEST_H_
