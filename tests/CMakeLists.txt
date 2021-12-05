# only for cmake --version >= 3.5.1
cmake_minimum_required(VERSION 3.5.1)

# project name
project(datastream-median)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

add_library(test_main OBJECT test_main.cpp)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY build)
add_executable(minHeapTests minHeapTests.cpp $<TARGET_OBJECTS:test_main>)
add_test(NAME minHeapTests COMMAND minHeapTests)

# add_executable(test2 test2.cpp $<TARGET_OBJECTS:test_main>)
# add_test(NAME test2 COMMAND test2 )
