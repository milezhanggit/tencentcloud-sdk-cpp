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

set(lcic_public_header
  include/tencentcloud/lcic/v20220817/LcicClient.h
  )

set(lcic_public_header_model
  include/tencentcloud/lcic/v20220817/model/CreateRoomRequest.h
  include/tencentcloud/lcic/v20220817/model/CreateSupervisorRequest.h
  include/tencentcloud/lcic/v20220817/model/DescribeRoomResponse.h
  include/tencentcloud/lcic/v20220817/model/RegisterUserRequest.h
  include/tencentcloud/lcic/v20220817/model/LoginOriginIdRequest.h
  include/tencentcloud/lcic/v20220817/model/DescribeUserRequest.h
  include/tencentcloud/lcic/v20220817/model/RegisterUserResponse.h
  include/tencentcloud/lcic/v20220817/model/LoginUserRequest.h
  include/tencentcloud/lcic/v20220817/model/CreateSupervisorResponse.h
  include/tencentcloud/lcic/v20220817/model/CreateRoomResponse.h
  include/tencentcloud/lcic/v20220817/model/DescribeUserResponse.h
  include/tencentcloud/lcic/v20220817/model/DescribeRoomRequest.h
  include/tencentcloud/lcic/v20220817/model/LoginOriginIdResponse.h
  include/tencentcloud/lcic/v20220817/model/LoginUserResponse.h
  )

set(lcic_src
  src/v20220817/LcicClient.cpp
  src/v20220817/model/CreateRoomRequest.cpp
  src/v20220817/model/CreateSupervisorRequest.cpp
  src/v20220817/model/DescribeRoomResponse.cpp
  src/v20220817/model/RegisterUserRequest.cpp
  src/v20220817/model/LoginOriginIdRequest.cpp
  src/v20220817/model/DescribeUserRequest.cpp
  src/v20220817/model/RegisterUserResponse.cpp
  src/v20220817/model/LoginUserRequest.cpp
  src/v20220817/model/CreateSupervisorResponse.cpp
  src/v20220817/model/CreateRoomResponse.cpp
  src/v20220817/model/DescribeUserResponse.cpp
  src/v20220817/model/DescribeRoomRequest.cpp
  src/v20220817/model/LoginOriginIdResponse.cpp
  src/v20220817/model/LoginUserResponse.cpp
  )

set(lcic_include
    include/tencentcloud/lcic
  )

add_library(lcic ${LIB_TYPE}
  ${lcic_public_header}
  ${lcic_public_header_model}
  ${lcic_src})

set_target_properties(lcic
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}lcic
  )

target_include_directories(lcic
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(lcic
  core)

#install(FILES ${lcic_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lcic/v20220817)
#install(FILES ${lcic_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/lcic/v20220817/model)
install(DIRECTORY ${lcic_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS lcic
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
