cmake_minimum_required(VERSION 3.8)

project(personnel)

set(CMAKE_C_STANDARD 99)

SET(CMAKE_C_FLAGS "-m64 -g -O0 -D_DEBUG -Wall")

include_directories(AFTER src)

set(SOURCE_FILES
        src/main.c
        src/list.c
        src/person.c
   )

add_executable(personnel ${SOURCE_FILES})


