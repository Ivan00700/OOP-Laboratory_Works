cmake_minimum_required(VERSION 3.10)
project(Laba_01)

set(CMAKE_CXX_STANDARD 17)

add_executable(Laba_01 main.cpp grow.cpp)

enable_testing()

add_subdirectory(googletest)

# Tests
add_executable(tests tests.cpp grow.cpp)
target_link_libraries(tests PRIVATE gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(tests CONFIGURATIONS Debug)
