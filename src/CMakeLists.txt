cmake_minimum_required(VERSION 2.8)

# Make PROJECT_SOURCE_DIR, PROJECT_BINARY_DIR, and PROJECT_NAME available.
set(PROJECT_SOURCE_DIR "~/Project/gtest-cmake-example/")
set(PROJECT_NAME MyProject)
project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "-g -Wall")

################################
# Normal Libraries & Executables
################################
include_directories("${PROJECT_SOURCE_DIR}/../include")
SET(LIBRARY_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/../lib")
add_library(project1_lib project1.cpp)
add_executable(project1 main.cpp)

target_link_libraries(project1 project1_lib)
