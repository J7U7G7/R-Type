# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/slymp/Epitech/Projets/R-Type/srcs/server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/slymp/Epitech/Projets/R-Type/srcs/server

# Include any dependencies generated for this target.
include CMakeFiles/r_type_server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/r_type_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/r_type_server.dir/flags.make

CMakeFiles/r_type_server.dir/main.cpp.o: CMakeFiles/r_type_server.dir/flags.make
CMakeFiles/r_type_server.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/slymp/Epitech/Projets/R-Type/srcs/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/r_type_server.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r_type_server.dir/main.cpp.o -c /home/slymp/Epitech/Projets/R-Type/srcs/server/main.cpp

CMakeFiles/r_type_server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r_type_server.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/slymp/Epitech/Projets/R-Type/srcs/server/main.cpp > CMakeFiles/r_type_server.dir/main.cpp.i

CMakeFiles/r_type_server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r_type_server.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/slymp/Epitech/Projets/R-Type/srcs/server/main.cpp -o CMakeFiles/r_type_server.dir/main.cpp.s

CMakeFiles/r_type_server.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/r_type_server.dir/main.cpp.o.requires

CMakeFiles/r_type_server.dir/main.cpp.o.provides: CMakeFiles/r_type_server.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/r_type_server.dir/build.make CMakeFiles/r_type_server.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/r_type_server.dir/main.cpp.o.provides

CMakeFiles/r_type_server.dir/main.cpp.o.provides.build: CMakeFiles/r_type_server.dir/main.cpp.o


CMakeFiles/r_type_server.dir/Game.cpp.o: CMakeFiles/r_type_server.dir/flags.make
CMakeFiles/r_type_server.dir/Game.cpp.o: Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/slymp/Epitech/Projets/R-Type/srcs/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/r_type_server.dir/Game.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r_type_server.dir/Game.cpp.o -c /home/slymp/Epitech/Projets/R-Type/srcs/server/Game.cpp

CMakeFiles/r_type_server.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r_type_server.dir/Game.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/slymp/Epitech/Projets/R-Type/srcs/server/Game.cpp > CMakeFiles/r_type_server.dir/Game.cpp.i

CMakeFiles/r_type_server.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r_type_server.dir/Game.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/slymp/Epitech/Projets/R-Type/srcs/server/Game.cpp -o CMakeFiles/r_type_server.dir/Game.cpp.s

CMakeFiles/r_type_server.dir/Game.cpp.o.requires:

.PHONY : CMakeFiles/r_type_server.dir/Game.cpp.o.requires

CMakeFiles/r_type_server.dir/Game.cpp.o.provides: CMakeFiles/r_type_server.dir/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/r_type_server.dir/build.make CMakeFiles/r_type_server.dir/Game.cpp.o.provides.build
.PHONY : CMakeFiles/r_type_server.dir/Game.cpp.o.provides

CMakeFiles/r_type_server.dir/Game.cpp.o.provides.build: CMakeFiles/r_type_server.dir/Game.cpp.o


CMakeFiles/r_type_server.dir/Monster.cpp.o: CMakeFiles/r_type_server.dir/flags.make
CMakeFiles/r_type_server.dir/Monster.cpp.o: Monster.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/slymp/Epitech/Projets/R-Type/srcs/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/r_type_server.dir/Monster.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r_type_server.dir/Monster.cpp.o -c /home/slymp/Epitech/Projets/R-Type/srcs/server/Monster.cpp

CMakeFiles/r_type_server.dir/Monster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r_type_server.dir/Monster.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/slymp/Epitech/Projets/R-Type/srcs/server/Monster.cpp > CMakeFiles/r_type_server.dir/Monster.cpp.i

CMakeFiles/r_type_server.dir/Monster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r_type_server.dir/Monster.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/slymp/Epitech/Projets/R-Type/srcs/server/Monster.cpp -o CMakeFiles/r_type_server.dir/Monster.cpp.s

CMakeFiles/r_type_server.dir/Monster.cpp.o.requires:

.PHONY : CMakeFiles/r_type_server.dir/Monster.cpp.o.requires

CMakeFiles/r_type_server.dir/Monster.cpp.o.provides: CMakeFiles/r_type_server.dir/Monster.cpp.o.requires
	$(MAKE) -f CMakeFiles/r_type_server.dir/build.make CMakeFiles/r_type_server.dir/Monster.cpp.o.provides.build
.PHONY : CMakeFiles/r_type_server.dir/Monster.cpp.o.provides

CMakeFiles/r_type_server.dir/Monster.cpp.o.provides.build: CMakeFiles/r_type_server.dir/Monster.cpp.o


CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o: CMakeFiles/r_type_server.dir/flags.make
CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o: MonsterDynLibHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/slymp/Epitech/Projets/R-Type/srcs/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o -c /home/slymp/Epitech/Projets/R-Type/srcs/server/MonsterDynLibHandler.cpp

CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/slymp/Epitech/Projets/R-Type/srcs/server/MonsterDynLibHandler.cpp > CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.i

CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/slymp/Epitech/Projets/R-Type/srcs/server/MonsterDynLibHandler.cpp -o CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.s

CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o.requires:

.PHONY : CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o.requires

CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o.provides: CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o.requires
	$(MAKE) -f CMakeFiles/r_type_server.dir/build.make CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o.provides.build
.PHONY : CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o.provides

CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o.provides.build: CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o


CMakeFiles/r_type_server.dir/Server.cpp.o: CMakeFiles/r_type_server.dir/flags.make
CMakeFiles/r_type_server.dir/Server.cpp.o: Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/slymp/Epitech/Projets/R-Type/srcs/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/r_type_server.dir/Server.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r_type_server.dir/Server.cpp.o -c /home/slymp/Epitech/Projets/R-Type/srcs/server/Server.cpp

CMakeFiles/r_type_server.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r_type_server.dir/Server.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/slymp/Epitech/Projets/R-Type/srcs/server/Server.cpp > CMakeFiles/r_type_server.dir/Server.cpp.i

CMakeFiles/r_type_server.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r_type_server.dir/Server.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/slymp/Epitech/Projets/R-Type/srcs/server/Server.cpp -o CMakeFiles/r_type_server.dir/Server.cpp.s

CMakeFiles/r_type_server.dir/Server.cpp.o.requires:

.PHONY : CMakeFiles/r_type_server.dir/Server.cpp.o.requires

CMakeFiles/r_type_server.dir/Server.cpp.o.provides: CMakeFiles/r_type_server.dir/Server.cpp.o.requires
	$(MAKE) -f CMakeFiles/r_type_server.dir/build.make CMakeFiles/r_type_server.dir/Server.cpp.o.provides.build
.PHONY : CMakeFiles/r_type_server.dir/Server.cpp.o.provides

CMakeFiles/r_type_server.dir/Server.cpp.o.provides.build: CMakeFiles/r_type_server.dir/Server.cpp.o


CMakeFiles/r_type_server.dir/Player.cpp.o: CMakeFiles/r_type_server.dir/flags.make
CMakeFiles/r_type_server.dir/Player.cpp.o: Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/slymp/Epitech/Projets/R-Type/srcs/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/r_type_server.dir/Player.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r_type_server.dir/Player.cpp.o -c /home/slymp/Epitech/Projets/R-Type/srcs/server/Player.cpp

CMakeFiles/r_type_server.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r_type_server.dir/Player.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/slymp/Epitech/Projets/R-Type/srcs/server/Player.cpp > CMakeFiles/r_type_server.dir/Player.cpp.i

CMakeFiles/r_type_server.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r_type_server.dir/Player.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/slymp/Epitech/Projets/R-Type/srcs/server/Player.cpp -o CMakeFiles/r_type_server.dir/Player.cpp.s

CMakeFiles/r_type_server.dir/Player.cpp.o.requires:

.PHONY : CMakeFiles/r_type_server.dir/Player.cpp.o.requires

CMakeFiles/r_type_server.dir/Player.cpp.o.provides: CMakeFiles/r_type_server.dir/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/r_type_server.dir/build.make CMakeFiles/r_type_server.dir/Player.cpp.o.provides.build
.PHONY : CMakeFiles/r_type_server.dir/Player.cpp.o.provides

CMakeFiles/r_type_server.dir/Player.cpp.o.provides.build: CMakeFiles/r_type_server.dir/Player.cpp.o


CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o: CMakeFiles/r_type_server.dir/flags.make
CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o: Unix/UnixDynLibHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/slymp/Epitech/Projets/R-Type/srcs/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o -c /home/slymp/Epitech/Projets/R-Type/srcs/server/Unix/UnixDynLibHandler.cpp

CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/slymp/Epitech/Projets/R-Type/srcs/server/Unix/UnixDynLibHandler.cpp > CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.i

CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/slymp/Epitech/Projets/R-Type/srcs/server/Unix/UnixDynLibHandler.cpp -o CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.s

CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o.requires:

.PHONY : CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o.requires

CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o.provides: CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o.requires
	$(MAKE) -f CMakeFiles/r_type_server.dir/build.make CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o.provides.build
.PHONY : CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o.provides

CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o.provides.build: CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o


CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o: CMakeFiles/r_type_server.dir/flags.make
CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o: Unix/Unix_Socket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/slymp/Epitech/Projets/R-Type/srcs/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o -c /home/slymp/Epitech/Projets/R-Type/srcs/server/Unix/Unix_Socket.cpp

CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/slymp/Epitech/Projets/R-Type/srcs/server/Unix/Unix_Socket.cpp > CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.i

CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/slymp/Epitech/Projets/R-Type/srcs/server/Unix/Unix_Socket.cpp -o CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.s

CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o.requires:

.PHONY : CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o.requires

CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o.provides: CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o.requires
	$(MAKE) -f CMakeFiles/r_type_server.dir/build.make CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o.provides.build
.PHONY : CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o.provides

CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o.provides.build: CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o


# Object files for target r_type_server
r_type_server_OBJECTS = \
"CMakeFiles/r_type_server.dir/main.cpp.o" \
"CMakeFiles/r_type_server.dir/Game.cpp.o" \
"CMakeFiles/r_type_server.dir/Monster.cpp.o" \
"CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o" \
"CMakeFiles/r_type_server.dir/Server.cpp.o" \
"CMakeFiles/r_type_server.dir/Player.cpp.o" \
"CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o" \
"CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o"

# External object files for target r_type_server
r_type_server_EXTERNAL_OBJECTS =

/home/slymp/Epitech/Projets/R-Type/bin/r_type_server: CMakeFiles/r_type_server.dir/main.cpp.o
/home/slymp/Epitech/Projets/R-Type/bin/r_type_server: CMakeFiles/r_type_server.dir/Game.cpp.o
/home/slymp/Epitech/Projets/R-Type/bin/r_type_server: CMakeFiles/r_type_server.dir/Monster.cpp.o
/home/slymp/Epitech/Projets/R-Type/bin/r_type_server: CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o
/home/slymp/Epitech/Projets/R-Type/bin/r_type_server: CMakeFiles/r_type_server.dir/Server.cpp.o
/home/slymp/Epitech/Projets/R-Type/bin/r_type_server: CMakeFiles/r_type_server.dir/Player.cpp.o
/home/slymp/Epitech/Projets/R-Type/bin/r_type_server: CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o
/home/slymp/Epitech/Projets/R-Type/bin/r_type_server: CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o
/home/slymp/Epitech/Projets/R-Type/bin/r_type_server: CMakeFiles/r_type_server.dir/build.make
/home/slymp/Epitech/Projets/R-Type/bin/r_type_server: CMakeFiles/r_type_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/slymp/Epitech/Projets/R-Type/srcs/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable /home/slymp/Epitech/Projets/R-Type/bin/r_type_server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/r_type_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/r_type_server.dir/build: /home/slymp/Epitech/Projets/R-Type/bin/r_type_server

.PHONY : CMakeFiles/r_type_server.dir/build

CMakeFiles/r_type_server.dir/requires: CMakeFiles/r_type_server.dir/main.cpp.o.requires
CMakeFiles/r_type_server.dir/requires: CMakeFiles/r_type_server.dir/Game.cpp.o.requires
CMakeFiles/r_type_server.dir/requires: CMakeFiles/r_type_server.dir/Monster.cpp.o.requires
CMakeFiles/r_type_server.dir/requires: CMakeFiles/r_type_server.dir/MonsterDynLibHandler.cpp.o.requires
CMakeFiles/r_type_server.dir/requires: CMakeFiles/r_type_server.dir/Server.cpp.o.requires
CMakeFiles/r_type_server.dir/requires: CMakeFiles/r_type_server.dir/Player.cpp.o.requires
CMakeFiles/r_type_server.dir/requires: CMakeFiles/r_type_server.dir/Unix/UnixDynLibHandler.cpp.o.requires
CMakeFiles/r_type_server.dir/requires: CMakeFiles/r_type_server.dir/Unix/Unix_Socket.cpp.o.requires

.PHONY : CMakeFiles/r_type_server.dir/requires

CMakeFiles/r_type_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/r_type_server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/r_type_server.dir/clean

CMakeFiles/r_type_server.dir/depend:
	cd /home/slymp/Epitech/Projets/R-Type/srcs/server && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/slymp/Epitech/Projets/R-Type/srcs/server /home/slymp/Epitech/Projets/R-Type/srcs/server /home/slymp/Epitech/Projets/R-Type/srcs/server /home/slymp/Epitech/Projets/R-Type/srcs/server /home/slymp/Epitech/Projets/R-Type/srcs/server/CMakeFiles/r_type_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/r_type_server.dir/depend

