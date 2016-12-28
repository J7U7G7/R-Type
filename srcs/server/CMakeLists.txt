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
if (WIN32)
    set(SRCS
            main.cpp
            Games.cpp
            Monster.cpp
            MonsterDynLibHandler.cpp
            Server.cpp
            Windows/Win_Socket.cpp

            )
else()
    set(SRCS
            main.cpp
            Games.cpp
            Monster.cpp
            MonsterDynLibHandler.cpp
            Server.cpp
            Unix/Unix_Socket.cpp
            )
endif ()


add_executable(r_type_server
        ${SRCS}
        )

