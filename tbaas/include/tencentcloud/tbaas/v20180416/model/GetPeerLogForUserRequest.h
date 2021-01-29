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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETPEERLOGFORUSERREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETPEERLOGFORUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetPeerLogForUser请求参数结构体
                */
                class GetPeerLogForUserRequest : public AbstractModel
                {
                public:
                    GetPeerLogForUserRequest();
                    ~GetPeerLogForUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，本接口取值：peer_mng
                     * @return Module 模块名，本接口取值：peer_mng
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，本接口取值：peer_mng
                     * @param Module 模块名，本接口取值：peer_mng
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名，本接口取值：peer_log_for_user
                     * @return Operation 操作名，本接口取值：peer_log_for_user
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名，本接口取值：peer_log_for_user
                     * @param Operation 操作名，本接口取值：peer_log_for_user
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取区块链网络ID，可在区块链网络详情或列表中获取
                     * @return ClusterId 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置区块链网络ID，可在区块链网络详情或列表中获取
                     * @param ClusterId 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取调用合约的组织名称
                     * @return GroupName 调用合约的组织名称
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置调用合约的组织名称
                     * @param GroupName 调用合约的组织名称
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return PeerName 节点名称
                     */
                    std::string GetPeerName() const;

                    /**
                     * 设置节点名称
                     * @param PeerName 节点名称
                     */
                    void SetPeerName(const std::string& _peerName);

                    /**
                     * 判断参数 PeerName 是否已赋值
                     * @return PeerName 是否已赋值
                     */
                    bool PeerNameHasBeenSet() const;

                    /**
                     * 获取日志开始时间，如"2020-11-24 19:49:25"
                     * @return BeginTime 日志开始时间，如"2020-11-24 19:49:25"
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置日志开始时间，如"2020-11-24 19:49:25"
                     * @param BeginTime 日志开始时间，如"2020-11-24 19:49:25"
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取返回日志行数的最大值，系统设定该参数最大为1000，且一行日志的最大字节数是500，即最大返回50万个字节数的日志数据
                     * @return RowNum 返回日志行数的最大值，系统设定该参数最大为1000，且一行日志的最大字节数是500，即最大返回50万个字节数的日志数据
                     */
                    int64_t GetRowNum() const;

                    /**
                     * 设置返回日志行数的最大值，系统设定该参数最大为1000，且一行日志的最大字节数是500，即最大返回50万个字节数的日志数据
                     * @param RowNum 返回日志行数的最大值，系统设定该参数最大为1000，且一行日志的最大字节数是500，即最大返回50万个字节数的日志数据
                     */
                    void SetRowNum(const int64_t& _rowNum);

                    /**
                     * 判断参数 RowNum 是否已赋值
                     * @return RowNum 是否已赋值
                     */
                    bool RowNumHasBeenSet() const;

                private:

                    /**
                     * 模块名，本接口取值：peer_mng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名，本接口取值：peer_log_for_user
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 区块链网络ID，可在区块链网络详情或列表中获取
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 调用合约的组织名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_peerName;
                    bool m_peerNameHasBeenSet;

                    /**
                     * 日志开始时间，如"2020-11-24 19:49:25"
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 返回日志行数的最大值，系统设定该参数最大为1000，且一行日志的最大字节数是500，即最大返回50万个字节数的日志数据
                     */
                    int64_t m_rowNum;
                    bool m_rowNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETPEERLOGFORUSERREQUEST_H_
