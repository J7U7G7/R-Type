cmake_minimum_required(VERSION 3.5.1)

project(r-type)

set(EXECUTABLE_OUTPUT_PATH ../../bin)

include_directories(includes
        ../../libs/SFML-2.4.1/include
        )

set(SRCS
        main.cpp
        Client.cpp
        NetworkManager.cpp
        Bullet.cpp
        PlayerShip.cpp
        EnnemyShip.cpp
        MSGParser.cpp)

if (Linux)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
endif()

link_directories(../../libs/SFML-2.4.1/lib)
add_executable(r_type_client ${SRCS})
add_definitions(-std=c++11)

target_link_libraries(r_type_client
        -lsfml-graphics
        -lsfml-system
        -lsfml-window
        -lpthread)

#add_library(sfml-graphics SHARED
#       sfml-system SHARED
#       sfml-windows SHARED)
