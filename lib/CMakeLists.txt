cmake_minimum_required(VERSION 3.14)
project(Library CXX)

add_library(test_lib
    "include/lib.h"    "lib.cpp"
)
target_include_directories(test_lib PUBLIC "include")