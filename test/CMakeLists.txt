cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME testut)
project(${PROJECT_NAME})
set(CMAKE_CXX_FLAGS "-g -Wall")

set(gtest_SOURCE_DIR "${PROJECT_SOURCE_DIR}/lib/gtest-1.6.0")
set(target_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/../include")

# 依赖的子项目, 生成gtest相关静态库
add_subdirectory(${PROJECT_SOURCE_DIR}/lib/gtest-1.6.0)
enable_testing()

# 依赖头文件&库
include_directories(${gtest_SOURCE_DIR}/include 
                    ${gtest_SOURCE_DIR} 
                    ${target_INCLUDE_DIR})

link_directories(${PROJECT_SOURCE_DIR}/../lib)

# 编译生成UT可执行文件
add_executable(testut test_project1.cpp)
target_link_libraries(testut gtest gtest_main)
target_link_libraries(testut project1_lib)

# make test执行UT
add_test(NAME that-test-I-made COMMAND testut)
