cmake_minimum_required(VERSION 3.25)
project(algo_simple_insertion_sort C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(algo_simple_insertion_sort
        main.c
        main.h insertion_sort.c insertion_sort.h)
