cmake_minimum_required(VERSION 3.27)
project(C C)

set(CMAKE_C_STANDARD 11)

add_executable(C ../main.c
        c_loop_func.c)
