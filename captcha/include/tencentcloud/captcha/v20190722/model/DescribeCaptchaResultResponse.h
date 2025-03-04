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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTRESPONSE_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaResult返回参数结构体
                */
                class DescribeCaptchaResultResponse : public AbstractModel
                {
                public:
                    DescribeCaptchaResultResponse();
                    ~DescribeCaptchaResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取1 OK 验证通过
6 user code len error 验证码长度不匹配，请检查请求是否带Randstr参数，Randstr参数大小写是否有误
7 captcha no match 验证码答案不匹配/Randstr参数不匹配，请重新生成Randstr、Ticket进行校验
8 verify timeout 验证码签名超时，票据已过期，请重新生成Randstr、Ticket票进行校验
9 Sequnce repeat 验证码签名重放，票据重复使用，请重新生成Randstr、Ticket进行校验
10 Sequnce invalid 验证码签名序列
11 Cookie invalid 验证码cookie信息不合法，非法请求，可能存在不规范接入
12 sig len error 签名长度错误
13 verify ip no match ip不匹配，非法请求，可能存在不规范接入
15 decrypt fail 验证码签名解密失败，票据校验失败，请检查Ticket票据是否与前端返回Ticket一致
16 appid no match 验证码强校验appid错误，前端代码 data-appid 和后端 CaptchaAppId 所填写的值，必须和 验证码控制台 中【验证详情】>【基础配置】内的 AppID 一致,请检查CaptchaAppId是否为控制台基础配置界面系统分配的APPID
17 cmd no much 验证码系统命令不匹配
18 uin no match 号码不匹配
19 seq redirect 重定向验证
20 opt no vcode 操作使用pt免验证码校验错误
21 diff 差别，验证错误 
该情况出现原因一般为，当验证码前端生成terror格式票据并进行后端票据校验时，用户网络较差，该情况下仍会返回可用票据，业务侧可以自行根据需要，进行票据生成或做其他处理。详情参见 [验证码Web前端接入-异常处理文档](https://cloud.tencent.com/document/product/1110/36841#.E5.BC.82.E5.B8.B8.E5.A4.84.E7.90.86)。
22 captcha type not match 验证码类型与拉取时不一致
23 verify type error 验证类型错误
24 invalid pkg 非法请求包
25 bad visitor 策略拦截
26 system busy 系统内部错误
100 param err appsecretkey 参数校验错误，CaptchaAppId 与对应 AppSecretKey 不一致，需检查 AppSecretKey 参数是否有误。其中 CaptchaAppId、 AppSecretKey 在 验证码控制台 的【验证详情】>【基础配置】中获取
104 Ticket Reuse 票据重复使用，同个票据验证多次，请重新生成Randstr、Ticket进行校验
                     * @return CaptchaCode 1 OK 验证通过
6 user code len error 验证码长度不匹配，请检查请求是否带Randstr参数，Randstr参数大小写是否有误
7 captcha no match 验证码答案不匹配/Randstr参数不匹配，请重新生成Randstr、Ticket进行校验
8 verify timeout 验证码签名超时，票据已过期，请重新生成Randstr、Ticket票进行校验
9 Sequnce repeat 验证码签名重放，票据重复使用，请重新生成Randstr、Ticket进行校验
10 Sequnce invalid 验证码签名序列
11 Cookie invalid 验证码cookie信息不合法，非法请求，可能存在不规范接入
12 sig len error 签名长度错误
13 verify ip no match ip不匹配，非法请求，可能存在不规范接入
15 decrypt fail 验证码签名解密失败，票据校验失败，请检查Ticket票据是否与前端返回Ticket一致
16 appid no match 验证码强校验appid错误，前端代码 data-appid 和后端 CaptchaAppId 所填写的值，必须和 验证码控制台 中【验证详情】>【基础配置】内的 AppID 一致,请检查CaptchaAppId是否为控制台基础配置界面系统分配的APPID
17 cmd no much 验证码系统命令不匹配
18 uin no match 号码不匹配
19 seq redirect 重定向验证
20 opt no vcode 操作使用pt免验证码校验错误
21 diff 差别，验证错误 
该情况出现原因一般为，当验证码前端生成terror格式票据并进行后端票据校验时，用户网络较差，该情况下仍会返回可用票据，业务侧可以自行根据需要，进行票据生成或做其他处理。详情参见 [验证码Web前端接入-异常处理文档](https://cloud.tencent.com/document/product/1110/36841#.E5.BC.82.E5.B8.B8.E5.A4.84.E7.90.86)。
22 captcha type not match 验证码类型与拉取时不一致
23 verify type error 验证类型错误
24 invalid pkg 非法请求包
25 bad visitor 策略拦截
26 system busy 系统内部错误
100 param err appsecretkey 参数校验错误，CaptchaAppId 与对应 AppSecretKey 不一致，需检查 AppSecretKey 参数是否有误。其中 CaptchaAppId、 AppSecretKey 在 验证码控制台 的【验证详情】>【基础配置】中获取
104 Ticket Reuse 票据重复使用，同个票据验证多次，请重新生成Randstr、Ticket进行校验
                     */
                    int64_t GetCaptchaCode() const;

                    /**
                     * 判断参数 CaptchaCode 是否已赋值
                     * @return CaptchaCode 是否已赋值
                     */
                    bool CaptchaCodeHasBeenSet() const;

                    /**
                     * 获取状态描述及验证错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CaptchaMsg 状态描述及验证错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCaptchaMsg() const;

                    /**
                     * 判断参数 CaptchaMsg 是否已赋值
                     * @return CaptchaMsg 是否已赋值
                     */
                    bool CaptchaMsgHasBeenSet() const;

                    /**
                     * 获取无感验证模式下，该参数返回验证结果：
EvilLevel=0 请求无恶意
EvilLevel=100 请求有恶意
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EvilLevel 无感验证模式下，该参数返回验证结果：
EvilLevel=0 请求无恶意
EvilLevel=100 请求有恶意
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEvilLevel() const;

                    /**
                     * 判断参数 EvilLevel 是否已赋值
                     * @return EvilLevel 是否已赋值
                     */
                    bool EvilLevelHasBeenSet() const;

                    /**
                     * 获取前端获取验证码时间，时间戳格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GetCaptchaTime 前端获取验证码时间，时间戳格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetGetCaptchaTime() const;

                    /**
                     * 判断参数 GetCaptchaTime 是否已赋值
                     * @return GetCaptchaTime 是否已赋值
                     */
                    bool GetCaptchaTimeHasBeenSet() const;

                private:

                    /**
                     * 1 OK 验证通过
6 user code len error 验证码长度不匹配，请检查请求是否带Randstr参数，Randstr参数大小写是否有误
7 captcha no match 验证码答案不匹配/Randstr参数不匹配，请重新生成Randstr、Ticket进行校验
8 verify timeout 验证码签名超时，票据已过期，请重新生成Randstr、Ticket票进行校验
9 Sequnce repeat 验证码签名重放，票据重复使用，请重新生成Randstr、Ticket进行校验
10 Sequnce invalid 验证码签名序列
11 Cookie invalid 验证码cookie信息不合法，非法请求，可能存在不规范接入
12 sig len error 签名长度错误
13 verify ip no match ip不匹配，非法请求，可能存在不规范接入
15 decrypt fail 验证码签名解密失败，票据校验失败，请检查Ticket票据是否与前端返回Ticket一致
16 appid no match 验证码强校验appid错误，前端代码 data-appid 和后端 CaptchaAppId 所填写的值，必须和 验证码控制台 中【验证详情】>【基础配置】内的 AppID 一致,请检查CaptchaAppId是否为控制台基础配置界面系统分配的APPID
17 cmd no much 验证码系统命令不匹配
18 uin no match 号码不匹配
19 seq redirect 重定向验证
20 opt no vcode 操作使用pt免验证码校验错误
21 diff 差别，验证错误 
该情况出现原因一般为，当验证码前端生成terror格式票据并进行后端票据校验时，用户网络较差，该情况下仍会返回可用票据，业务侧可以自行根据需要，进行票据生成或做其他处理。详情参见 [验证码Web前端接入-异常处理文档](https://cloud.tencent.com/document/product/1110/36841#.E5.BC.82.E5.B8.B8.E5.A4.84.E7.90.86)。
22 captcha type not match 验证码类型与拉取时不一致
23 verify type error 验证类型错误
24 invalid pkg 非法请求包
25 bad visitor 策略拦截
26 system busy 系统内部错误
100 param err appsecretkey 参数校验错误，CaptchaAppId 与对应 AppSecretKey 不一致，需检查 AppSecretKey 参数是否有误。其中 CaptchaAppId、 AppSecretKey 在 验证码控制台 的【验证详情】>【基础配置】中获取
104 Ticket Reuse 票据重复使用，同个票据验证多次，请重新生成Randstr、Ticket进行校验
                     */
                    int64_t m_captchaCode;
                    bool m_captchaCodeHasBeenSet;

                    /**
                     * 状态描述及验证错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_captchaMsg;
                    bool m_captchaMsgHasBeenSet;

                    /**
                     * 无感验证模式下，该参数返回验证结果：
EvilLevel=0 请求无恶意
EvilLevel=100 请求有恶意
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_evilLevel;
                    bool m_evilLevelHasBeenSet;

                    /**
                     * 前端获取验证码时间，时间戳格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_getCaptchaTime;
                    bool m_getCaptchaTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTRESPONSE_H_
