cmake_minimum_required(VERSION 3.10)
project(helloworld)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
include_directories(HEADER_FILES)
file(GLOB MAIN
        "SOURCE_FILES/*.cpp"
        "HEADER_FILES/*.h"
    )
    add_executable(executable ${MAIN})