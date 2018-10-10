cmake_minimum_required(VERSION 3.12)
project(calculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(calculator calculatorclass.cpp calculatorclass.h main.cpp)

add_subdirectory(./googletest)
add_executable(tests test.cpp calculatorclass.cpp calculatorclass.h)
target_include_directories(tests PUBLIC ./googletest/include)

target_link_libraries(tests gtest gtest_main)