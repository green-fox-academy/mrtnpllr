cmake_minimum_required(VERSION 3.14)
project(recursion)

set(CMAKE_CXX_STANDARD 14)

add_executable(add add.cpp power.cpp)
add_executable(sum_digits sum_digits.cpp)
add_executable(power power.cpp)
add_executable(greatest_common_divisor greatest_common_divisor.cpp)
add_executable(bunnies bunnies.cpp)
add_executable(bunnies2 bunnies2.cpp)
add_executable(strings strings.cpp)
add_executable(strings2 strings2.cpp)