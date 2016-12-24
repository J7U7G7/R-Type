cmake_minimum_required(VERSION 3.6)

project(r-type)

set(EXECUTABLE_OUTPUT_PATH ../../bin)

include_directories(includes)

####### Flags de Compil #######
#if(Win32)
#   set()
#else
#   set()

####### Sources à compiler #######
set(SRCS
        main.cpp
        Games.cpp
        Monster.cpp
        MonsterDynLibHandler.cpp
        Server.cpp

        )


add_executable(r_type_server
        ${SRCS}
        )

