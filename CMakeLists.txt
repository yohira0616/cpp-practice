cmake_minimum_required(VERSION 3.7)
project(c_practice)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        ch01-01.c
        ch01-02.c ch01-03.c ch01-04.c prac1-3-2.c ch01-05.c prac1-4-2.c prac1-5-1.c prac1-5-2.c ch01-10.c ch01-11.c prac1-7-2.c ch01-15.c prac1-8-2.c prac1-9-1.c exec1-1.c exec1-3.c ch02-08.c ch02-13.c)

add_executable(c_practice ${SOURCE_FILES})