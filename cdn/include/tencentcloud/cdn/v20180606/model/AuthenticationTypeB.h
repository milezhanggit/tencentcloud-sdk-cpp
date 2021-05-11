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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATIONTYPEB_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATIONTYPEB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 时间戳防盗链模式 B 配置（B 模式正在进行平台升级，暂不支持配置）
                */
                class AuthenticationTypeB : public AbstractModel
                {
                public:
                    AuthenticationTypeB();
                    ~AuthenticationTypeB() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计算签名的密钥
仅允许大小写字母与数字，长度 6~32 位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey 计算签名的密钥
仅允许大小写字母与数字，长度 6~32 位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置计算签名的密钥
仅允许大小写字母与数字，长度 6~32 位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SecretKey 计算签名的密钥
仅允许大小写字母与数字，长度 6~32 位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取签名过期时间设置
单位为秒，最大可设置为 630720000
                     * @return ExpireTime 签名过期时间设置
单位为秒，最大可设置为 630720000
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置签名过期时间设置
单位为秒，最大可设置为 630720000
                     * @param ExpireTime 签名过期时间设置
单位为秒，最大可设置为 630720000
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取鉴权/不做鉴权的文件扩展名列表设置
如果包含字符 *  则表示所有文件
                     * @return FileExtensions 鉴权/不做鉴权的文件扩展名列表设置
如果包含字符 *  则表示所有文件
                     */
                    std::vector<std::string> GetFileExtensions() const;

                    /**
                     * 设置鉴权/不做鉴权的文件扩展名列表设置
如果包含字符 *  则表示所有文件
                     * @param FileExtensions 鉴权/不做鉴权的文件扩展名列表设置
如果包含字符 *  则表示所有文件
                     */
                    void SetFileExtensions(const std::vector<std::string>& _fileExtensions);

                    /**
                     * 判断参数 FileExtensions 是否已赋值
                     * @return FileExtensions 是否已赋值
                     */
                    bool FileExtensionsHasBeenSet() const;

                    /**
                     * 获取whitelist：白名单，表示对除了 FileExtensions 列表之外的所有类型进行鉴权
blacklist：黑名单，表示仅对 FileExtensions 中的类型进行鉴权
                     * @return FilterType whitelist：白名单，表示对除了 FileExtensions 列表之外的所有类型进行鉴权
blacklist：黑名单，表示仅对 FileExtensions 中的类型进行鉴权
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置whitelist：白名单，表示对除了 FileExtensions 列表之外的所有类型进行鉴权
blacklist：黑名单，表示仅对 FileExtensions 中的类型进行鉴权
                     * @param FilterType whitelist：白名单，表示对除了 FileExtensions 列表之外的所有类型进行鉴权
blacklist：黑名单，表示仅对 FileExtensions 中的类型进行鉴权
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                private:

                    /**
                     * 计算签名的密钥
仅允许大小写字母与数字，长度 6~32 位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 签名过期时间设置
单位为秒，最大可设置为 630720000
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 鉴权/不做鉴权的文件扩展名列表设置
如果包含字符 *  则表示所有文件
                     */
                    std::vector<std::string> m_fileExtensions;
                    bool m_fileExtensionsHasBeenSet;

                    /**
                     * whitelist：白名单，表示对除了 FileExtensions 列表之外的所有类型进行鉴权
blacklist：黑名单，表示仅对 FileExtensions 中的类型进行鉴权
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATIONTYPEB_H_
