cmake_minimum_required(VERSION 3.27)
project(characters)

set(CMAKE_CXX_STANDARD 17)

add_executable(characters main.cpp
        array.cpp
        array.h)
