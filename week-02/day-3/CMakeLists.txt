cmake_minimum_required(VERSION 3.14)
project(day_3)

set(CMAKE_CXX_STANDARD 14)

set(SDL2_ROOT_PATH C:/SDL)

IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

set(EXECUTABLES "draw;draw2;line_in_the_middle;colored_box;diagonals;go_to_center;horizontal_lines;centered_square;four_rectangles;position_square;center_box_function;rainbow_box_function;purple_steps;purple_steps_3d")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(GFA_SDL2 REQUIRED)