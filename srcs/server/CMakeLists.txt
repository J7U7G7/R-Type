cmake_minimum_required(VERSION 3.6)

project(r-type)

set(EXECUTABLE_OUTPUT_PATH ../../bin)

include_directories(includes)


####### Sources à compiler #######
if (WIN32)
    set(SRCS
            main.cpp
            Game.cpp
            Monster.cpp
            MonsterDynLibHandler.cpp
            Server.cpp
            Player.cpp
            Windows/Win_Socket.cpp
            Windows/WindowsDynLibHandler.cpp
            )
else()
    set(SRCS
            main.cpp
            Game.cpp
            Monster.cpp
            MonsterDynLibHandler.cpp
            Server.cpp
            Player.cpp
            Unix/Unix_Socket.cpp
            Unix/UnixDynLibHandler.cpp
            )
endif ()


add_executable(r_type_server
        ${SRCS}
        )

target_link_libraries(r_type_server
        ${CMAKE_DL_LIBS}
        )

