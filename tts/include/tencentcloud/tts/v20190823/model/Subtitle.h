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

#ifndef TENCENTCLOUD_TTS_V20190823_MODEL_SUBTITLE_H_
#define TENCENTCLOUD_TTS_V20190823_MODEL_SUBTITLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tts
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 时间戳信息。
                */
                class Subtitle : public AbstractModel
                {
                public:
                    Subtitle();
                    ~Subtitle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取⽂本信息。
                     * @return Text ⽂本信息。
                     */
                    std::string GetText() const;

                    /**
                     * 设置⽂本信息。
                     * @param Text ⽂本信息。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取⽂本对应tts语⾳开始时间戳，单位ms。
                     * @return BeginTime ⽂本对应tts语⾳开始时间戳，单位ms。
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置⽂本对应tts语⾳开始时间戳，单位ms。
                     * @param BeginTime ⽂本对应tts语⾳开始时间戳，单位ms。
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取⽂本对应tts语⾳结束时间戳，单位ms。
                     * @return EndTime ⽂本对应tts语⾳结束时间戳，单位ms。
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置⽂本对应tts语⾳结束时间戳，单位ms。
                     * @param EndTime ⽂本对应tts语⾳结束时间戳，单位ms。
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取该字在整句中的开始位置，从0开始。
                     * @return BeginIndex 该字在整句中的开始位置，从0开始。
                     */
                    int64_t GetBeginIndex() const;

                    /**
                     * 设置该字在整句中的开始位置，从0开始。
                     * @param BeginIndex 该字在整句中的开始位置，从0开始。
                     */
                    void SetBeginIndex(const int64_t& _beginIndex);

                    /**
                     * 判断参数 BeginIndex 是否已赋值
                     * @return BeginIndex 是否已赋值
                     */
                    bool BeginIndexHasBeenSet() const;

                    /**
                     * 获取该字在整句中的结束位置，从0开始。
                     * @return EndIndex 该字在整句中的结束位置，从0开始。
                     */
                    int64_t GetEndIndex() const;

                    /**
                     * 设置该字在整句中的结束位置，从0开始。
                     * @param EndIndex 该字在整句中的结束位置，从0开始。
                     */
                    void SetEndIndex(const int64_t& _endIndex);

                    /**
                     * 判断参数 EndIndex 是否已赋值
                     * @return EndIndex 是否已赋值
                     */
                    bool EndIndexHasBeenSet() const;

                private:

                    /**
                     * ⽂本信息。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * ⽂本对应tts语⾳开始时间戳，单位ms。
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * ⽂本对应tts语⾳结束时间戳，单位ms。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 该字在整句中的开始位置，从0开始。
                     */
                    int64_t m_beginIndex;
                    bool m_beginIndexHasBeenSet;

                    /**
                     * 该字在整句中的结束位置，从0开始。
                     */
                    int64_t m_endIndex;
                    bool m_endIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TTS_V20190823_MODEL_SUBTITLE_H_
