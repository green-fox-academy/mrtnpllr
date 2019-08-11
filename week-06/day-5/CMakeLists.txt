cmake_minimum_required(VERSION 3.14)
project(day_5 C)

set(CMAKE_C_STANDARD 11)

set(SDL2_ROOT_PATH C:/SDL)

IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(SDL2_all_single_executable REQUIRED)