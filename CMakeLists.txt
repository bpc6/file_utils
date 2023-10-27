cmake_minimum_required(VERSION 3.26)
project(file_utils)

set(CMAKE_CXX_STANDARD 17)

add_executable(file_utils main.cpp
        file_operations.h
        file_operations.cpp)
