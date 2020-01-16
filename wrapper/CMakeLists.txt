cmake_minimum_required(VERSION 3.14)
project(Wrapper)

add_library(Wrapper SHARED
    "wrapper.cpp"
)
target_link_libraries(Wrapper PRIVATE test_lib)