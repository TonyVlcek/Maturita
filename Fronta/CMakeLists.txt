cmake_minimum_required(VERSION 3.3)
project(Fronta)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES main.c fronta.c fronta.h)

add_executable(Fronta ${SOURCE_FILES})