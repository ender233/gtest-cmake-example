cmake_minimum_required(VERSION 2.8)

set(PROJECT_SOURCE_DIR "~/Project/gtest-cmake-example/")
set(PROJECT_NAME MyProject)
project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "-g -Wall")

# 依赖头文件&输出路径
SET(LIBRARY_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/../lib")
include_directories("${PROJECT_SOURCE_DIR}/../include")

# 生成静态库库给UT链接使用
#add_library(project1_lib SHARED project1.cpp)    
add_library(project1_lib STATIC project1.cpp)    
add_executable(project1 main.cpp)

# 项目主程序可执行文件
target_link_libraries(project1 project1_lib)
