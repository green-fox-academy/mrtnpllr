cmake_minimum_required(VERSION 3.14)
project(recursion)

set(CMAKE_CXX_STANDARD 14)

add_executable(add add.cpp power.cpp)
add_executable(sum_digits sum_digits.cpp)
add_executable(power power.cpp)