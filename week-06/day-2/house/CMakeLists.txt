cmake_minimum_required(VERSION 3.14)
project(house C)

set(CMAKE_C_STANDARD 11)

add_executable(house main.c House.c House.h)