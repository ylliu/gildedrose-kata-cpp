cmake_minimum_required(VERSION 3.20)
project(gilded_rose_kata)

set(CMAKE_CXX_STANDARD 14)

add_executable(gilded_rose_kata main.cpp)

add_subdirectory(src)
add_subdirectory(test)