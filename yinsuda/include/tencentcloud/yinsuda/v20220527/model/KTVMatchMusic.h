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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMATCHMUSIC_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMATCHMUSIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/KTVMusicBaseInfo.h>
#include <tencentcloud/yinsuda/v20220527/model/KTVMatchRule.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 匹配歌曲信息。
                */
                class KTVMatchMusic : public AbstractModel
                {
                public:
                    KTVMatchMusic();
                    ~KTVMatchMusic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配到的歌曲基础信息。
                     * @return KTVMusicBaseInfo 匹配到的歌曲基础信息。
                     */
                    KTVMusicBaseInfo GetKTVMusicBaseInfo() const;

                    /**
                     * 设置匹配到的歌曲基础信息。
                     * @param KTVMusicBaseInfo 匹配到的歌曲基础信息。
                     */
                    void SetKTVMusicBaseInfo(const KTVMusicBaseInfo& _kTVMusicBaseInfo);

                    /**
                     * 判断参数 KTVMusicBaseInfo 是否已赋值
                     * @return KTVMusicBaseInfo 是否已赋值
                     */
                    bool KTVMusicBaseInfoHasBeenSet() const;

                    /**
                     * 获取命中规则。
                     * @return MatchRule 命中规则。
                     */
                    KTVMatchRule GetMatchRule() const;

                    /**
                     * 设置命中规则。
                     * @param MatchRule 命中规则。
                     */
                    void SetMatchRule(const KTVMatchRule& _matchRule);

                    /**
                     * 判断参数 MatchRule 是否已赋值
                     * @return MatchRule 是否已赋值
                     */
                    bool MatchRuleHasBeenSet() const;

                private:

                    /**
                     * 匹配到的歌曲基础信息。
                     */
                    KTVMusicBaseInfo m_kTVMusicBaseInfo;
                    bool m_kTVMusicBaseInfoHasBeenSet;

                    /**
                     * 命中规则。
                     */
                    KTVMatchRule m_matchRule;
                    bool m_matchRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVMATCHMUSIC_H_
