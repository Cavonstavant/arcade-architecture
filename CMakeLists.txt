cmake_minimum_required(VERSION 3.17)
project(arcade)

set(CMAKE_CXX_STANDARD 20)


set(SRC main.c)

add_executable(${CMAKE_PROJECT_NAME} ${SRC})
