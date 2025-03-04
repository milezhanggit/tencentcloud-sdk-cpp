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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音视频审核片段。
                */
                class ReviewAudioVideoSegmentItem : public AbstractModel
                {
                public:
                    ReviewAudioVideoSegmentItem();
                    ~ReviewAudioVideoSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取嫌疑片段起始的偏移时间，单位：秒。
                     * @return StartTimeOffset 嫌疑片段起始的偏移时间，单位：秒。
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置嫌疑片段起始的偏移时间，单位：秒。
                     * @param StartTimeOffset 嫌疑片段起始的偏移时间，单位：秒。
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取嫌疑片段结束的偏移时间，单位：秒。
                     * @return EndTimeOffset 嫌疑片段结束的偏移时间，单位：秒。
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置嫌疑片段结束的偏移时间，单位：秒。
                     * @param EndTimeOffset 嫌疑片段结束的偏移时间，单位：秒。
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取嫌疑片段涉及令人反感的信息的分数。
                     * @return Confidence 嫌疑片段涉及令人反感的信息的分数。
                     */
                    double GetConfidence() const;

                    /**
                     * 设置嫌疑片段涉及令人反感的信息的分数。
                     * @param Confidence 嫌疑片段涉及令人反感的信息的分数。
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取嫌疑片段鉴别涉及违规信息的结果建议，取值范围：
<li>review：疑似违规，建议复审；</li>
<li>block：确认违规，建议封禁。</li>
                     * @return Suggestion 嫌疑片段鉴别涉及违规信息的结果建议，取值范围：
<li>review：疑似违规，建议复审；</li>
<li>block：确认违规，建议封禁。</li>
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置嫌疑片段鉴别涉及违规信息的结果建议，取值范围：
<li>review：疑似违规，建议复审；</li>
<li>block：确认违规，建议封禁。</li>
                     * @param Suggestion 嫌疑片段鉴别涉及违规信息的结果建议，取值范围：
<li>review：疑似违规，建议复审；</li>
<li>block：确认违规，建议封禁。</li>
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取嫌疑片段最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terrorism：暴恐；</li>
<li>Political：令人不适宜的信息。</li>
                     * @return Label 嫌疑片段最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terrorism：暴恐；</li>
<li>Political：令人不适宜的信息。</li>
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置嫌疑片段最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terrorism：暴恐；</li>
<li>Political：令人不适宜的信息。</li>
                     * @param Label 嫌疑片段最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terrorism：暴恐；</li>
<li>Political：令人不适宜的信息。</li>
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取当 Form 为 Image 或 Voice 时有效，表示当前标签（Label）下的二级标签。
当 Form 为 Image 且 Label 为 Porn 时，取值范围：
<li>porn：色情；</li>
<li>vulgar：低俗。</li>

当 Form 为 Image 且 Label 为 Terrorism 时，取值范围：
<li>guns：武器枪支；</li>
<li>bloody：血腥画面；</li>
<li>banners：暴恐旗帜；</li>
<li> scenario：暴恐画面；</li>
<li>explosion：爆炸火灾。</li>

当 Form 为 Image 且 Label 为 Political 时，取值范围：
<li>violation_photo：违规图标；</li>
<li>nation_politician：国家领导人；</li>
<li>province_politician：省部级领导人；</li>
<li>county_politician：市/县级领导人；</li>
<li>sensitive_politician：敏感相关人物；</li>
<li>foreign_politician：国外政治人物；</li>
<li>sensitive_entertainment：敏感娱乐明星；</li>
<li>sensitive_military：敏感军事人物。</li>

当 Form 为 Voice 且 Label 为 Porn 时，取值范围：
<li>moan：娇喘。</li>
                     * @return SubLabel 当 Form 为 Image 或 Voice 时有效，表示当前标签（Label）下的二级标签。
当 Form 为 Image 且 Label 为 Porn 时，取值范围：
<li>porn：色情；</li>
<li>vulgar：低俗。</li>

当 Form 为 Image 且 Label 为 Terrorism 时，取值范围：
<li>guns：武器枪支；</li>
<li>bloody：血腥画面；</li>
<li>banners：暴恐旗帜；</li>
<li> scenario：暴恐画面；</li>
<li>explosion：爆炸火灾。</li>

当 Form 为 Image 且 Label 为 Political 时，取值范围：
<li>violation_photo：违规图标；</li>
<li>nation_politician：国家领导人；</li>
<li>province_politician：省部级领导人；</li>
<li>county_politician：市/县级领导人；</li>
<li>sensitive_politician：敏感相关人物；</li>
<li>foreign_politician：国外政治人物；</li>
<li>sensitive_entertainment：敏感娱乐明星；</li>
<li>sensitive_military：敏感军事人物。</li>

当 Form 为 Voice 且 Label 为 Porn 时，取值范围：
<li>moan：娇喘。</li>
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置当 Form 为 Image 或 Voice 时有效，表示当前标签（Label）下的二级标签。
当 Form 为 Image 且 Label 为 Porn 时，取值范围：
<li>porn：色情；</li>
<li>vulgar：低俗。</li>

当 Form 为 Image 且 Label 为 Terrorism 时，取值范围：
<li>guns：武器枪支；</li>
<li>bloody：血腥画面；</li>
<li>banners：暴恐旗帜；</li>
<li> scenario：暴恐画面；</li>
<li>explosion：爆炸火灾。</li>

当 Form 为 Image 且 Label 为 Political 时，取值范围：
<li>violation_photo：违规图标；</li>
<li>nation_politician：国家领导人；</li>
<li>province_politician：省部级领导人；</li>
<li>county_politician：市/县级领导人；</li>
<li>sensitive_politician：敏感相关人物；</li>
<li>foreign_politician：国外政治人物；</li>
<li>sensitive_entertainment：敏感娱乐明星；</li>
<li>sensitive_military：敏感军事人物。</li>

当 Form 为 Voice 且 Label 为 Porn 时，取值范围：
<li>moan：娇喘。</li>
                     * @param SubLabel 当 Form 为 Image 或 Voice 时有效，表示当前标签（Label）下的二级标签。
当 Form 为 Image 且 Label 为 Porn 时，取值范围：
<li>porn：色情；</li>
<li>vulgar：低俗。</li>

当 Form 为 Image 且 Label 为 Terrorism 时，取值范围：
<li>guns：武器枪支；</li>
<li>bloody：血腥画面；</li>
<li>banners：暴恐旗帜；</li>
<li> scenario：暴恐画面；</li>
<li>explosion：爆炸火灾。</li>

当 Form 为 Image 且 Label 为 Political 时，取值范围：
<li>violation_photo：违规图标；</li>
<li>nation_politician：国家领导人；</li>
<li>province_politician：省部级领导人；</li>
<li>county_politician：市/县级领导人；</li>
<li>sensitive_politician：敏感相关人物；</li>
<li>foreign_politician：国外政治人物；</li>
<li>sensitive_entertainment：敏感娱乐明星；</li>
<li>sensitive_military：敏感军事人物。</li>

当 Form 为 Voice 且 Label 为 Porn 时，取值范围：
<li>moan：娇喘。</li>
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取嫌疑片段违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字；</li>
<li>ASR：语音中的文字；</li>
<li>Voice：声音。</li>
                     * @return Form 嫌疑片段违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字；</li>
<li>ASR：语音中的文字；</li>
<li>Voice：声音。</li>
                     */
                    std::string GetForm() const;

                    /**
                     * 设置嫌疑片段违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字；</li>
<li>ASR：语音中的文字；</li>
<li>Voice：声音。</li>
                     * @param Form 嫌疑片段违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字；</li>
<li>ASR：语音中的文字；</li>
<li>Voice：声音。</li>
                     */
                    void SetForm(const std::string& _form);

                    /**
                     * 判断参数 Form 是否已赋值
                     * @return Form 是否已赋值
                     */
                    bool FormHasBeenSet() const;

                    /**
                     * 获取当 Form 为 Image 或 OCR 时有效，表示嫌疑人物、图标或文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * @return AreaCoordSet 当 Form 为 Image 或 OCR 时有效，表示嫌疑人物、图标或文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置当 Form 为 Image 或 OCR 时有效，表示嫌疑人物、图标或文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     * @param AreaCoordSet 当 Form 为 Image 或 OCR 时有效，表示嫌疑人物、图标或文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     */
                    bool AreaCoordSetHasBeenSet() const;

                    /**
                     * 获取当 Form 为 OCR 或 ASR 时有效，表示识别出来的 OCR 或 ASR 文本内容。
                     * @return Text 当 Form 为 OCR 或 ASR 时有效，表示识别出来的 OCR 或 ASR 文本内容。
                     */
                    std::string GetText() const;

                    /**
                     * 设置当 Form 为 OCR 或 ASR 时有效，表示识别出来的 OCR 或 ASR 文本内容。
                     * @param Text 当 Form 为 OCR 或 ASR 时有效，表示识别出来的 OCR 或 ASR 文本内容。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取当 Form 为 OCR 或 ASR 时有效，表示嫌疑片段命中的违规关键词列表。
                     * @return KeywordSet 当 Form 为 OCR 或 ASR 时有效，表示嫌疑片段命中的违规关键词列表。
                     */
                    std::vector<std::string> GetKeywordSet() const;

                    /**
                     * 设置当 Form 为 OCR 或 ASR 时有效，表示嫌疑片段命中的违规关键词列表。
                     * @param KeywordSet 当 Form 为 OCR 或 ASR 时有效，表示嫌疑片段命中的违规关键词列表。
                     */
                    void SetKeywordSet(const std::vector<std::string>& _keywordSet);

                    /**
                     * 判断参数 KeywordSet 是否已赋值
                     * @return KeywordSet 是否已赋值
                     */
                    bool KeywordSetHasBeenSet() const;

                private:

                    /**
                     * 嫌疑片段起始的偏移时间，单位：秒。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 嫌疑片段结束的偏移时间，单位：秒。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 嫌疑片段涉及令人反感的信息的分数。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 嫌疑片段鉴别涉及违规信息的结果建议，取值范围：
<li>review：疑似违规，建议复审；</li>
<li>block：确认违规，建议封禁。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 嫌疑片段最可能的违规的标签，取值范围：
<li>Porn：色情；</li>
<li>Terrorism：暴恐；</li>
<li>Political：令人不适宜的信息。</li>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 当 Form 为 Image 或 Voice 时有效，表示当前标签（Label）下的二级标签。
当 Form 为 Image 且 Label 为 Porn 时，取值范围：
<li>porn：色情；</li>
<li>vulgar：低俗。</li>

当 Form 为 Image 且 Label 为 Terrorism 时，取值范围：
<li>guns：武器枪支；</li>
<li>bloody：血腥画面；</li>
<li>banners：暴恐旗帜；</li>
<li> scenario：暴恐画面；</li>
<li>explosion：爆炸火灾。</li>

当 Form 为 Image 且 Label 为 Political 时，取值范围：
<li>violation_photo：违规图标；</li>
<li>nation_politician：国家领导人；</li>
<li>province_politician：省部级领导人；</li>
<li>county_politician：市/县级领导人；</li>
<li>sensitive_politician：敏感相关人物；</li>
<li>foreign_politician：国外政治人物；</li>
<li>sensitive_entertainment：敏感娱乐明星；</li>
<li>sensitive_military：敏感军事人物。</li>

当 Form 为 Voice 且 Label 为 Porn 时，取值范围：
<li>moan：娇喘。</li>
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 嫌疑片段违禁的形式，取值范围：
<li>Image：画面上的人物或图标；</li>
<li>OCR：画面上的文字；</li>
<li>ASR：语音中的文字；</li>
<li>Voice：声音。</li>
                     */
                    std::string m_form;
                    bool m_formHasBeenSet;

                    /**
                     * 当 Form 为 Image 或 OCR 时有效，表示嫌疑人物、图标或文字出现的区域坐标 (像素级)，[x1, y1, x2, y2]，即左上角坐标、右下角坐标。
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * 当 Form 为 OCR 或 ASR 时有效，表示识别出来的 OCR 或 ASR 文本内容。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 当 Form 为 OCR 或 ASR 时有效，表示嫌疑片段命中的违规关键词列表。
                     */
                    std::vector<std::string> m_keywordSet;
                    bool m_keywordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOSEGMENTITEM_H_
