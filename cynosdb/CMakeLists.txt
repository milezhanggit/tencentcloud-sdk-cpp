#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(cynosdb_public_header
  include/tencentcloud/cynosdb/v20190107/CynosdbClient.h
  )

set(cynosdb_public_header_model
  include/tencentcloud/cynosdb/v20190107/model/RemoveClusterSlaveZoneRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyClusterNameRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeRangeRequest.h
  include/tencentcloud/cynosdb/v20190107/model/InquirePriceRenewRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ObjectTask.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBackupConfigRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeAccountsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyMaintainPeriodConfigRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeRangeResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyBackupNameResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyClusterStorageRequest.h
  include/tencentcloud/cynosdb/v20190107/model/SwitchClusterZoneResponse.h
  include/tencentcloud/cynosdb/v20190107/model/AssociateSecurityGroupsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBinlogDownloadUrlRequest.h
  include/tencentcloud/cynosdb/v20190107/model/CreateAccountsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyInstanceNameRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeDBSecurityGroupsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeMaintainPeriodRequest.h
  include/tencentcloud/cynosdb/v20190107/model/AccountParam.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBinlogsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeInstancesResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ClusterInstanceDetail.h
  include/tencentcloud/cynosdb/v20190107/model/AddClusterSlaveZoneResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyClusterNameResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeClusterParamsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/IsolateInstanceResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyInstanceNameResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeParamTemplatesRequest.h
  include/tencentcloud/cynosdb/v20190107/model/PauseServerlessRequest.h
  include/tencentcloud/cynosdb/v20190107/model/RevokeAccountPrivilegesResponse.h
  include/tencentcloud/cynosdb/v20190107/model/CreateClustersResponse.h
  include/tencentcloud/cynosdb/v20190107/model/SetRenewFlagRequest.h
  include/tencentcloud/cynosdb/v20190107/model/CynosdbInstanceGrp.h
  include/tencentcloud/cynosdb/v20190107/model/SlowQueriesItem.h
  include/tencentcloud/cynosdb/v20190107/model/ActivateInstanceRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DatabaseTables.h
  include/tencentcloud/cynosdb/v20190107/model/AddClusterSlaveZoneRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeAccountAllGrantPrivilegesResponse.h
  include/tencentcloud/cynosdb/v20190107/model/RollbackDatabase.h
  include/tencentcloud/cynosdb/v20190107/model/DatabasePrivileges.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeClustersRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyClusterStorageResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeInstanceDetailResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyDBInstanceSecurityGroupsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeClusterParamLogsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeClusterInstanceGrpsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeResourcesByDealNameResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ResumeServerlessResponse.h
  include/tencentcloud/cynosdb/v20190107/model/CreateAccountsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/IsolateInstanceRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ExportInstanceSlowQueriesResponse.h
  include/tencentcloud/cynosdb/v20190107/model/SwitchClusterZoneRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeDBSecurityGroupsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/RollBackClusterRequest.h
  include/tencentcloud/cynosdb/v20190107/model/RollbackTable.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeClusterDetailRequest.h
  include/tencentcloud/cynosdb/v20190107/model/Tag.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeProjectSecurityGroupsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/RemoveClusterSlaveZoneResponse.h
  include/tencentcloud/cynosdb/v20190107/model/PauseServerlessResponse.h
  include/tencentcloud/cynosdb/v20190107/model/OfflineClusterRequest.h
  include/tencentcloud/cynosdb/v20190107/model/NewAccount.h
  include/tencentcloud/cynosdb/v20190107/model/BackupFileInfo.h
  include/tencentcloud/cynosdb/v20190107/model/TablePrivileges.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBinlogDownloadUrlResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBackupListRequest.h
  include/tencentcloud/cynosdb/v20190107/model/CynosdbInstance.h
  include/tencentcloud/cynosdb/v20190107/model/DbTable.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyClusterSlaveZoneResponse.h
  include/tencentcloud/cynosdb/v20190107/model/GrantAccountPrivilegesRequest.h
  include/tencentcloud/cynosdb/v20190107/model/BinlogItem.h
  include/tencentcloud/cynosdb/v20190107/model/CreateClustersRequest.h
  include/tencentcloud/cynosdb/v20190107/model/RollbackTableInfo.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeClustersResponse.h
  include/tencentcloud/cynosdb/v20190107/model/QueryFilter.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBackupConfigResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyDBInstanceSecurityGroupsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeParamTemplatesResponse.h
  include/tencentcloud/cynosdb/v20190107/model/AddInstancesResponse.h
  include/tencentcloud/cynosdb/v20190107/model/Addr.h
  include/tencentcloud/cynosdb/v20190107/model/ParamTemplateListInfo.h
  include/tencentcloud/cynosdb/v20190107/model/ParamInfo.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeProjectSecurityGroupsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyClusterParamResponse.h
  include/tencentcloud/cynosdb/v20190107/model/SecurityGroup.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBackupDownloadUrlRequest.h
  include/tencentcloud/cynosdb/v20190107/model/RollbackTimeRange.h
  include/tencentcloud/cynosdb/v20190107/model/NetAddr.h
  include/tencentcloud/cynosdb/v20190107/model/AssociateSecurityGroupsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeResourcesByDealNameRequest.h
  include/tencentcloud/cynosdb/v20190107/model/CreateBackupResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeValidityResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeInstanceSlowQueriesResponse.h
  include/tencentcloud/cynosdb/v20190107/model/GrantAccountPrivilegesResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBackupDownloadUrlResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ResumeServerlessRequest.h
  include/tencentcloud/cynosdb/v20190107/model/InquirePriceCreateRequest.h
  include/tencentcloud/cynosdb/v20190107/model/BillingResourceInfo.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyBackupConfigResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeInstanceSpecsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ExportInstanceSlowQueriesRequest.h
  include/tencentcloud/cynosdb/v20190107/model/UpgradeInstanceResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyAccountParamsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/CynosdbCluster.h
  include/tencentcloud/cynosdb/v20190107/model/IsolateClusterResponse.h
  include/tencentcloud/cynosdb/v20190107/model/OfflineClusterResponse.h
  include/tencentcloud/cynosdb/v20190107/model/RevokeAccountPrivilegesRequest.h
  include/tencentcloud/cynosdb/v20190107/model/InstanceSpec.h
  include/tencentcloud/cynosdb/v20190107/model/InquirePriceCreateResponse.h
  include/tencentcloud/cynosdb/v20190107/model/SetRenewFlagResponse.h
  include/tencentcloud/cynosdb/v20190107/model/Account.h
  include/tencentcloud/cynosdb/v20190107/model/CreateBackupRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeClusterParamLogsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/UpgradeInstanceRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeMaintainPeriodResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBackupListResponse.h
  include/tencentcloud/cynosdb/v20190107/model/RollBackClusterResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBinlogSaveDaysRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyBackupConfigRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ActivateInstanceResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeValidityRequest.h
  include/tencentcloud/cynosdb/v20190107/model/IsolateClusterRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeClusterInstanceGrpsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/AddInstancesRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyClusterSlaveZoneRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeInstancesRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ClusterParamModifyLog.h
  include/tencentcloud/cynosdb/v20190107/model/CynosdbInstanceDetail.h
  include/tencentcloud/cynosdb/v20190107/model/CynosdbClusterDetail.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeInstanceDetailRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyMaintainPeriodConfigResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DisassociateSecurityGroupsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyBackupNameRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBinlogSaveDaysResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyClusterParamRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeAccountsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ModifyAccountParamsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/OfflineInstanceRequest.h
  include/tencentcloud/cynosdb/v20190107/model/TradePrice.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeClusterParamsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeInstanceSpecsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeAccountAllGrantPrivilegesRequest.h
  include/tencentcloud/cynosdb/v20190107/model/OfflineInstanceResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ParamItem.h
  include/tencentcloud/cynosdb/v20190107/model/PolicyRule.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeClusterDetailResponse.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeInstanceSlowQueriesRequest.h
  include/tencentcloud/cynosdb/v20190107/model/DescribeBinlogsRequest.h
  include/tencentcloud/cynosdb/v20190107/model/InputAccount.h
  include/tencentcloud/cynosdb/v20190107/model/DisassociateSecurityGroupsResponse.h
  include/tencentcloud/cynosdb/v20190107/model/ZoneStockInfo.h
  include/tencentcloud/cynosdb/v20190107/model/InquirePriceRenewResponse.h
  )

set(cynosdb_src
  src/v20190107/CynosdbClient.cpp
  src/v20190107/model/RemoveClusterSlaveZoneRequest.cpp
  src/v20190107/model/ModifyClusterNameRequest.cpp
  src/v20190107/model/DescribeRollbackTimeRangeRequest.cpp
  src/v20190107/model/InquirePriceRenewRequest.cpp
  src/v20190107/model/ObjectTask.cpp
  src/v20190107/model/DescribeBackupConfigRequest.cpp
  src/v20190107/model/DescribeAccountsRequest.cpp
  src/v20190107/model/ModifyMaintainPeriodConfigRequest.cpp
  src/v20190107/model/DescribeRollbackTimeRangeResponse.cpp
  src/v20190107/model/ModifyBackupNameResponse.cpp
  src/v20190107/model/ModifyClusterStorageRequest.cpp
  src/v20190107/model/SwitchClusterZoneResponse.cpp
  src/v20190107/model/AssociateSecurityGroupsRequest.cpp
  src/v20190107/model/DescribeBinlogDownloadUrlRequest.cpp
  src/v20190107/model/CreateAccountsResponse.cpp
  src/v20190107/model/ModifyInstanceNameRequest.cpp
  src/v20190107/model/DescribeDBSecurityGroupsResponse.cpp
  src/v20190107/model/DescribeMaintainPeriodRequest.cpp
  src/v20190107/model/AccountParam.cpp
  src/v20190107/model/DescribeBinlogsResponse.cpp
  src/v20190107/model/DescribeInstancesResponse.cpp
  src/v20190107/model/ClusterInstanceDetail.cpp
  src/v20190107/model/AddClusterSlaveZoneResponse.cpp
  src/v20190107/model/ModifyClusterNameResponse.cpp
  src/v20190107/model/DescribeClusterParamsResponse.cpp
  src/v20190107/model/IsolateInstanceResponse.cpp
  src/v20190107/model/ModifyInstanceNameResponse.cpp
  src/v20190107/model/DescribeParamTemplatesRequest.cpp
  src/v20190107/model/PauseServerlessRequest.cpp
  src/v20190107/model/RevokeAccountPrivilegesResponse.cpp
  src/v20190107/model/CreateClustersResponse.cpp
  src/v20190107/model/SetRenewFlagRequest.cpp
  src/v20190107/model/CynosdbInstanceGrp.cpp
  src/v20190107/model/SlowQueriesItem.cpp
  src/v20190107/model/ActivateInstanceRequest.cpp
  src/v20190107/model/DatabaseTables.cpp
  src/v20190107/model/AddClusterSlaveZoneRequest.cpp
  src/v20190107/model/DescribeAccountAllGrantPrivilegesResponse.cpp
  src/v20190107/model/RollbackDatabase.cpp
  src/v20190107/model/DatabasePrivileges.cpp
  src/v20190107/model/DescribeClustersRequest.cpp
  src/v20190107/model/ModifyClusterStorageResponse.cpp
  src/v20190107/model/DescribeInstanceDetailResponse.cpp
  src/v20190107/model/ModifyDBInstanceSecurityGroupsResponse.cpp
  src/v20190107/model/DescribeClusterParamLogsResponse.cpp
  src/v20190107/model/DescribeClusterInstanceGrpsRequest.cpp
  src/v20190107/model/DescribeResourcesByDealNameResponse.cpp
  src/v20190107/model/ResumeServerlessResponse.cpp
  src/v20190107/model/CreateAccountsRequest.cpp
  src/v20190107/model/IsolateInstanceRequest.cpp
  src/v20190107/model/ExportInstanceSlowQueriesResponse.cpp
  src/v20190107/model/SwitchClusterZoneRequest.cpp
  src/v20190107/model/DescribeDBSecurityGroupsRequest.cpp
  src/v20190107/model/RollBackClusterRequest.cpp
  src/v20190107/model/RollbackTable.cpp
  src/v20190107/model/DescribeClusterDetailRequest.cpp
  src/v20190107/model/Tag.cpp
  src/v20190107/model/DescribeProjectSecurityGroupsResponse.cpp
  src/v20190107/model/RemoveClusterSlaveZoneResponse.cpp
  src/v20190107/model/PauseServerlessResponse.cpp
  src/v20190107/model/OfflineClusterRequest.cpp
  src/v20190107/model/NewAccount.cpp
  src/v20190107/model/BackupFileInfo.cpp
  src/v20190107/model/TablePrivileges.cpp
  src/v20190107/model/DescribeBinlogDownloadUrlResponse.cpp
  src/v20190107/model/DescribeBackupListRequest.cpp
  src/v20190107/model/CynosdbInstance.cpp
  src/v20190107/model/DbTable.cpp
  src/v20190107/model/ModifyClusterSlaveZoneResponse.cpp
  src/v20190107/model/GrantAccountPrivilegesRequest.cpp
  src/v20190107/model/BinlogItem.cpp
  src/v20190107/model/CreateClustersRequest.cpp
  src/v20190107/model/RollbackTableInfo.cpp
  src/v20190107/model/DescribeClustersResponse.cpp
  src/v20190107/model/QueryFilter.cpp
  src/v20190107/model/DescribeBackupConfigResponse.cpp
  src/v20190107/model/ModifyDBInstanceSecurityGroupsRequest.cpp
  src/v20190107/model/DescribeParamTemplatesResponse.cpp
  src/v20190107/model/AddInstancesResponse.cpp
  src/v20190107/model/Addr.cpp
  src/v20190107/model/ParamTemplateListInfo.cpp
  src/v20190107/model/ParamInfo.cpp
  src/v20190107/model/DescribeProjectSecurityGroupsRequest.cpp
  src/v20190107/model/ModifyClusterParamResponse.cpp
  src/v20190107/model/SecurityGroup.cpp
  src/v20190107/model/DescribeBackupDownloadUrlRequest.cpp
  src/v20190107/model/RollbackTimeRange.cpp
  src/v20190107/model/NetAddr.cpp
  src/v20190107/model/AssociateSecurityGroupsResponse.cpp
  src/v20190107/model/DescribeResourcesByDealNameRequest.cpp
  src/v20190107/model/CreateBackupResponse.cpp
  src/v20190107/model/DescribeRollbackTimeValidityResponse.cpp
  src/v20190107/model/DescribeInstanceSlowQueriesResponse.cpp
  src/v20190107/model/GrantAccountPrivilegesResponse.cpp
  src/v20190107/model/DescribeBackupDownloadUrlResponse.cpp
  src/v20190107/model/ResumeServerlessRequest.cpp
  src/v20190107/model/InquirePriceCreateRequest.cpp
  src/v20190107/model/BillingResourceInfo.cpp
  src/v20190107/model/ModifyBackupConfigResponse.cpp
  src/v20190107/model/DescribeInstanceSpecsRequest.cpp
  src/v20190107/model/ExportInstanceSlowQueriesRequest.cpp
  src/v20190107/model/UpgradeInstanceResponse.cpp
  src/v20190107/model/ModifyAccountParamsRequest.cpp
  src/v20190107/model/CynosdbCluster.cpp
  src/v20190107/model/IsolateClusterResponse.cpp
  src/v20190107/model/OfflineClusterResponse.cpp
  src/v20190107/model/RevokeAccountPrivilegesRequest.cpp
  src/v20190107/model/InstanceSpec.cpp
  src/v20190107/model/InquirePriceCreateResponse.cpp
  src/v20190107/model/SetRenewFlagResponse.cpp
  src/v20190107/model/Account.cpp
  src/v20190107/model/CreateBackupRequest.cpp
  src/v20190107/model/DescribeClusterParamLogsRequest.cpp
  src/v20190107/model/UpgradeInstanceRequest.cpp
  src/v20190107/model/DescribeMaintainPeriodResponse.cpp
  src/v20190107/model/DescribeBackupListResponse.cpp
  src/v20190107/model/RollBackClusterResponse.cpp
  src/v20190107/model/DescribeBinlogSaveDaysRequest.cpp
  src/v20190107/model/ModifyBackupConfigRequest.cpp
  src/v20190107/model/ActivateInstanceResponse.cpp
  src/v20190107/model/DescribeRollbackTimeValidityRequest.cpp
  src/v20190107/model/IsolateClusterRequest.cpp
  src/v20190107/model/DescribeClusterInstanceGrpsResponse.cpp
  src/v20190107/model/AddInstancesRequest.cpp
  src/v20190107/model/ModifyClusterSlaveZoneRequest.cpp
  src/v20190107/model/DescribeInstancesRequest.cpp
  src/v20190107/model/ClusterParamModifyLog.cpp
  src/v20190107/model/CynosdbInstanceDetail.cpp
  src/v20190107/model/CynosdbClusterDetail.cpp
  src/v20190107/model/DescribeInstanceDetailRequest.cpp
  src/v20190107/model/ModifyMaintainPeriodConfigResponse.cpp
  src/v20190107/model/DisassociateSecurityGroupsRequest.cpp
  src/v20190107/model/ModifyBackupNameRequest.cpp
  src/v20190107/model/DescribeBinlogSaveDaysResponse.cpp
  src/v20190107/model/ModifyClusterParamRequest.cpp
  src/v20190107/model/DescribeAccountsResponse.cpp
  src/v20190107/model/ModifyAccountParamsResponse.cpp
  src/v20190107/model/OfflineInstanceRequest.cpp
  src/v20190107/model/TradePrice.cpp
  src/v20190107/model/DescribeClusterParamsRequest.cpp
  src/v20190107/model/DescribeInstanceSpecsResponse.cpp
  src/v20190107/model/DescribeAccountAllGrantPrivilegesRequest.cpp
  src/v20190107/model/OfflineInstanceResponse.cpp
  src/v20190107/model/ParamItem.cpp
  src/v20190107/model/PolicyRule.cpp
  src/v20190107/model/DescribeClusterDetailResponse.cpp
  src/v20190107/model/DescribeInstanceSlowQueriesRequest.cpp
  src/v20190107/model/DescribeBinlogsRequest.cpp
  src/v20190107/model/InputAccount.cpp
  src/v20190107/model/DisassociateSecurityGroupsResponse.cpp
  src/v20190107/model/ZoneStockInfo.cpp
  src/v20190107/model/InquirePriceRenewResponse.cpp
  )

set(cynosdb_include
    include/tencentcloud/cynosdb
  )

add_library(cynosdb ${LIB_TYPE}
  ${cynosdb_public_header}
  ${cynosdb_public_header_model}
  ${cynosdb_src})

set_target_properties(cynosdb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cynosdb
  )

target_include_directories(cynosdb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cynosdb
  core)

#install(FILES ${cynosdb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cynosdb/v20190107)
#install(FILES ${cynosdb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cynosdb/v20190107/model)
install(DIRECTORY ${cynosdb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cynosdb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
