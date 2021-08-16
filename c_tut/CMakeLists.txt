cmake_minimum_required(VERSION 3.8)

project(c_tut)

set(CMAKE_C_STANDARD 11)

SET(CMAKE_C_FLAGS "-m64 -g -O0 -D_DEBUG -Wall")

include_directories(AFTER src)

add_executable(argc-argv src/argc-argv.c)
add_executable(array src/array.c)
add_executable(array-ptr src/array-ptr.c)
add_executable(array-arg src/array-arg.c)
add_executable(file src/file.c)
add_executable(functions src/functions.c)
add_executable(hello src/hello.c)
add_executable(if-then-else src/if-then-else.c)
add_executable(mem-alloc src/mem-alloc.c)
add_executable(pointer src/pointer.c)
add_executable(ptr-arg src/ptr-arg.c)
add_executable(ptr-arg-2 src/ptr-arg-2.c)
add_executable(ptr-arg-3 src/ptr-arg-3.c)
add_executable(ptr-func src/ptr-func.c)
add_executable(ptr-problems src/ptr-problems.c)
add_executable(ref-arg src/ref-arg.c)
add_executable(strings src/strings.c)
add_executable(struct src/struct.c)
add_executable(type-conv src/type-conv.c)
add_executable(types src/types.c)

