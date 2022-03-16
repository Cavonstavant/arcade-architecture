cmake_minimum_required(VERSION 3.17)
project(arcade LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_compile_options(
        "-Wall" "-Wextra" "-Wshadow" "-pedantic" "-Wpointer-arith"
        "$<$CONFIG:RELEASE>: -O3; -Werror>"
        "$<$CONFIG:DEBUG>: -O0; -g3; -ggdb;>"
)

add_subdirectory(lib)
add_subdirectory(src)