cmake_minimum_required(VERSION 3.10)

project(endianness)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra -Wpedantic -Werror -s)

add_executable(endianness_c main.c)
target_compile_definitions(endianness_c PRIVATE BUILD_ENDIANNESS)

add_executable(endianness_cpp main.cpp)
target_compile_definitions(endianness_cpp PRIVATE BUILD_ENDIANNESS)