cmake_minimum_required(VERSION 3.21)
project(rp4c)

FIND_PACKAGE(yaml-cpp CONFIG REQUIRED)
set(CMAKE_CXX_STANDARD 17)
add_executable(
        rp4c
        rp4_compiler.cpp
        lex.yy.cpp
        yacc.cpp
)