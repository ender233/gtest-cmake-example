cmake_minimum_required(VERSION 2.8)

# Make PROJECT_SOURCE_DIR, PROJECT_BINARY_DIR, and PROJECT_NAME available.
set(PROJECT_NAME testut)
project(${PROJECT_NAME})
set(CMAKE_CXX_FLAGS "-g -Wall")

set(gtest_SOURCE_DIR "${PROJECT_SOURCE_DIR}/lib/gtest-1.6.0")
set(target_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/../include")

################################
# Testing
################################
# This adds another subdirectory, which has 'project(gtest)'.
add_subdirectory(${PROJECT_SOURCE_DIR}/lib/gtest-1.6.0)
enable_testing()

include_directories(${gtest_SOURCE_DIR}/include 
                    ${gtest_SOURCE_DIR} 
                    ${target_INCLUDE_DIR})

##############
# Unit Tests
##############
link_directories(${PROJECT_SOURCE_DIR}/../lib)
add_executable(testut test_project1.cpp)

target_link_libraries(testut gtest gtest_main)
target_link_libraries(testut project1_lib)

# This is so you can do 'make test' to see all your tests run, instead of
# manually running the executable testut to see those specific tests.
add_test(NAME that-test-I-made COMMAND testut)

# You can also omit NAME and COMMAND. The second argument could be some other
# test executable.
# add_test(that-other-test-I-made testut)
