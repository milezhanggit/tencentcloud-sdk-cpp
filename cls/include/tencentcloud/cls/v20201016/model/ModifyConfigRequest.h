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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONFIGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ExtractRuleInfo.h>
#include <tencentcloud/cls/v20201016/model/ExcludePathInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyConfig请求参数结构体
                */
                class ModifyConfigRequest : public AbstractModel
                {
                public:
                    ModifyConfigRequest();
                    ~ModifyConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取采集规则配置ID
                     * @return ConfigId 采集规则配置ID
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置采集规则配置ID
                     * @param ConfigId 采集规则配置ID
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取采集规则配置名称
                     * @return Name 采集规则配置名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置采集规则配置名称
                     * @param Name 采集规则配置名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取日志采集路径，包含文件名
                     * @return Path 日志采集路径，包含文件名
                     */
                    std::string GetPath() const;

                    /**
                     * 设置日志采集路径，包含文件名
                     * @param Path 日志采集路径，包含文件名
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
                     * @return LogType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
                     * @param LogType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取提取规则，如果设置了ExtractRule，则必须设置LogType
                     * @return ExtractRule 提取规则，如果设置了ExtractRule，则必须设置LogType
                     */
                    ExtractRuleInfo GetExtractRule() const;

                    /**
                     * 设置提取规则，如果设置了ExtractRule，则必须设置LogType
                     * @param ExtractRule 提取规则，如果设置了ExtractRule，则必须设置LogType
                     */
                    void SetExtractRule(const ExtractRuleInfo& _extractRule);

                    /**
                     * 判断参数 ExtractRule 是否已赋值
                     * @return ExtractRule 是否已赋值
                     */
                    bool ExtractRuleHasBeenSet() const;

                    /**
                     * 获取采集黑名单路径列表
                     * @return ExcludePaths 采集黑名单路径列表
                     */
                    std::vector<ExcludePathInfo> GetExcludePaths() const;

                    /**
                     * 设置采集黑名单路径列表
                     * @param ExcludePaths 采集黑名单路径列表
                     */
                    void SetExcludePaths(const std::vector<ExcludePathInfo>& _excludePaths);

                    /**
                     * 判断参数 ExcludePaths 是否已赋值
                     * @return ExcludePaths 是否已赋值
                     */
                    bool ExcludePathsHasBeenSet() const;

                    /**
                     * 获取采集配置关联的日志主题（TopicId）
                     * @return Output 采集配置关联的日志主题（TopicId）
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置采集配置关联的日志主题（TopicId）
                     * @param Output 采集配置关联的日志主题（TopicId）
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取用户自定义解析字符串，Json格式序列化的字符串
                     * @return UserDefineRule 用户自定义解析字符串，Json格式序列化的字符串
                     */
                    std::string GetUserDefineRule() const;

                    /**
                     * 设置用户自定义解析字符串，Json格式序列化的字符串
                     * @param UserDefineRule 用户自定义解析字符串，Json格式序列化的字符串
                     */
                    void SetUserDefineRule(const std::string& _userDefineRule);

                    /**
                     * 判断参数 UserDefineRule 是否已赋值
                     * @return UserDefineRule 是否已赋值
                     */
                    bool UserDefineRuleHasBeenSet() const;

                private:

                    /**
                     * 采集规则配置ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 采集规则配置名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 日志采集路径，包含文件名
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 提取规则，如果设置了ExtractRule，则必须设置LogType
                     */
                    ExtractRuleInfo m_extractRule;
                    bool m_extractRuleHasBeenSet;

                    /**
                     * 采集黑名单路径列表
                     */
                    std::vector<ExcludePathInfo> m_excludePaths;
                    bool m_excludePathsHasBeenSet;

                    /**
                     * 采集配置关联的日志主题（TopicId）
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 用户自定义解析字符串，Json格式序列化的字符串
                     */
                    std::string m_userDefineRule;
                    bool m_userDefineRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONFIGREQUEST_H_
