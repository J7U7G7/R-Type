cmake_minimum_required(VERSION 3.5.1)

project(r-type)

set(EXECUTABLE_OUTPUT_PATH ../../bin)

include_directories(includes)

####### Sources à compiler #######

set(SRCS
        main.cpp
        Game.cpp
        Monster.cpp
        MonsterDynLibHandler.cpp
        Server.cpp
        Player.cpp
	Unix/UnixDynLibHandler.cpp
        Unix/Unix_Socket.cpp)

## OS Dependent Sources

if (WIN32)
    set(SRCS_OS_SPECIFIC
            Windows/Win_Socket.cpp
            Windows/WindowsDynLibHandler.cpp
            )

elseif(Linux)
    set(SRCS_OS_SPECIFIC
            Unix/Unix_Socket.cpp
            Unix/UnixDynLibHandler.cpp
            )
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
endif ()


add_executable(r_type_server
        ${SRCS}
        ${SRCS_OS_SPECIFIC}
        )

##### Compilation Flags #####
target_link_libraries(r_type_server
        ${CMAKE_DL_LIBS}
        )

