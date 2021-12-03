# only for cmake --version >= 3.5.1
cmake_minimum_required(VERSION 3.5.1)

# project name
project(datastream-median-tests)

enable_testing()

add_library(test_main OBJECT test_main.cpp)

add_executable(test1 test1.cpp ${TEST_SOURCE_DIR}/test_main.cpp>)
add_test(NAME test1 COMMAND test1)

# add_executable(test2 test2.cpp $<TARGET_OBJECTS:test_main>)
# add_test(NAME test2 COMMAND test2 )
