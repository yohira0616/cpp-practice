cmake_minimum_required(VERSION 3.7)
project(c_practice)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        ch01-01.c
        ch01-02.c ch01-03.c)

add_executable(c_practice ${SOURCE_FILES})