cmake_minimum_required(VERSION 3.14)
project(sandwich C)

set(CMAKE_C_STANDARD 11)

add_executable(sandwich main.c Sandwich.c Sandwich.h)