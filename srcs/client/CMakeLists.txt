cmake_minimum_required(VERSION 3.6)

project(r-type)

set(EXECUTABLE_OUTPUT_PATH ../../bin)

set(SRCS
        main.cpp)

add_executable(r_type_client ${SRCS})