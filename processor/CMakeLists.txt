cmake_minimum_required(VERSION 3.8)

project(processor)

set(CMAKE_C_STANDARD 99)

SET(CMAKE_C_FLAGS "-m64 -g -O0 -D_DEBUG -Wall")

include_directories(AFTER src)

add_executable(processor src/processor.c src/processor_test.c)

