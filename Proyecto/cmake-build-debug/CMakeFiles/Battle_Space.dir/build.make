# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /var/lib/snapd/snap/clion/235/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /var/lib/snapd/snap/clion/235/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Battle_Space.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Battle_Space.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Battle_Space.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Battle_Space.dir/flags.make

CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.o: Battle_Space_autogen/mocs_compilation.cpp
CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/Battle_Space_autogen/mocs_compilation.cpp"

CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/Battle_Space_autogen/mocs_compilation.cpp" > CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.i

CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/Battle_Space_autogen/mocs_compilation.cpp" -o CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.s

CMakeFiles/Battle_Space.dir/main.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/main.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/main.cpp
CMakeFiles/Battle_Space.dir/main.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Battle_Space.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/main.cpp.o -MF CMakeFiles/Battle_Space.dir/main.cpp.o.d -o CMakeFiles/Battle_Space.dir/main.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/main.cpp"

CMakeFiles/Battle_Space.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/main.cpp" > CMakeFiles/Battle_Space.dir/main.cpp.i

CMakeFiles/Battle_Space.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/main.cpp" -o CMakeFiles/Battle_Space.dir/main.cpp.s

CMakeFiles/Battle_Space.dir/GameWindow.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/GameWindow.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/GameWindow.cpp
CMakeFiles/Battle_Space.dir/GameWindow.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Battle_Space.dir/GameWindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/GameWindow.cpp.o -MF CMakeFiles/Battle_Space.dir/GameWindow.cpp.o.d -o CMakeFiles/Battle_Space.dir/GameWindow.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/GameWindow.cpp"

CMakeFiles/Battle_Space.dir/GameWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/GameWindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/GameWindow.cpp" > CMakeFiles/Battle_Space.dir/GameWindow.cpp.i

CMakeFiles/Battle_Space.dir/GameWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/GameWindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/GameWindow.cpp" -o CMakeFiles/Battle_Space.dir/GameWindow.cpp.s

CMakeFiles/Battle_Space.dir/Cell.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/Cell.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/Cell.cpp
CMakeFiles/Battle_Space.dir/Cell.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Battle_Space.dir/Cell.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/Cell.cpp.o -MF CMakeFiles/Battle_Space.dir/Cell.cpp.o.d -o CMakeFiles/Battle_Space.dir/Cell.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Cell.cpp"

CMakeFiles/Battle_Space.dir/Cell.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/Cell.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Cell.cpp" > CMakeFiles/Battle_Space.dir/Cell.cpp.i

CMakeFiles/Battle_Space.dir/Cell.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/Cell.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Cell.cpp" -o CMakeFiles/Battle_Space.dir/Cell.cpp.s

CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/ListaFantasmas.cpp
CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.o -MF CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.o.d -o CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/ListaFantasmas.cpp"

CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/ListaFantasmas.cpp" > CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.i

CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/ListaFantasmas.cpp" -o CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.s

CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/Listas/ListaSimple.cpp
CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.o -MF CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.o.d -o CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Listas/ListaSimple.cpp"

CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Listas/ListaSimple.cpp" > CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.i

CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Listas/ListaSimple.cpp" -o CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.s

CMakeFiles/Battle_Space.dir/Listas/Node.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/Listas/Node.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/Listas/Node.cpp
CMakeFiles/Battle_Space.dir/Listas/Node.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Battle_Space.dir/Listas/Node.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/Listas/Node.cpp.o -MF CMakeFiles/Battle_Space.dir/Listas/Node.cpp.o.d -o CMakeFiles/Battle_Space.dir/Listas/Node.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Listas/Node.cpp"

CMakeFiles/Battle_Space.dir/Listas/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/Listas/Node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Listas/Node.cpp" > CMakeFiles/Battle_Space.dir/Listas/Node.cpp.i

CMakeFiles/Battle_Space.dir/Listas/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/Listas/Node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Listas/Node.cpp" -o CMakeFiles/Battle_Space.dir/Listas/Node.cpp.s

CMakeFiles/Battle_Space.dir/Entidad.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/Entidad.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/Entidad.cpp
CMakeFiles/Battle_Space.dir/Entidad.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Battle_Space.dir/Entidad.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/Entidad.cpp.o -MF CMakeFiles/Battle_Space.dir/Entidad.cpp.o.d -o CMakeFiles/Battle_Space.dir/Entidad.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Entidad.cpp"

CMakeFiles/Battle_Space.dir/Entidad.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/Entidad.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Entidad.cpp" > CMakeFiles/Battle_Space.dir/Entidad.cpp.i

CMakeFiles/Battle_Space.dir/Entidad.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/Entidad.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Entidad.cpp" -o CMakeFiles/Battle_Space.dir/Entidad.cpp.s

CMakeFiles/Battle_Space.dir/SimpleList.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/SimpleList.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/SimpleList.cpp
CMakeFiles/Battle_Space.dir/SimpleList.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Battle_Space.dir/SimpleList.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/SimpleList.cpp.o -MF CMakeFiles/Battle_Space.dir/SimpleList.cpp.o.d -o CMakeFiles/Battle_Space.dir/SimpleList.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/SimpleList.cpp"

CMakeFiles/Battle_Space.dir/SimpleList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/SimpleList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/SimpleList.cpp" > CMakeFiles/Battle_Space.dir/SimpleList.cpp.i

CMakeFiles/Battle_Space.dir/SimpleList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/SimpleList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/SimpleList.cpp" -o CMakeFiles/Battle_Space.dir/SimpleList.cpp.s

CMakeFiles/Battle_Space.dir/NodeList.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/NodeList.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/NodeList.cpp
CMakeFiles/Battle_Space.dir/NodeList.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Battle_Space.dir/NodeList.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/NodeList.cpp.o -MF CMakeFiles/Battle_Space.dir/NodeList.cpp.o.d -o CMakeFiles/Battle_Space.dir/NodeList.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/NodeList.cpp"

CMakeFiles/Battle_Space.dir/NodeList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/NodeList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/NodeList.cpp" > CMakeFiles/Battle_Space.dir/NodeList.cpp.i

CMakeFiles/Battle_Space.dir/NodeList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/NodeList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/NodeList.cpp" -o CMakeFiles/Battle_Space.dir/NodeList.cpp.s

CMakeFiles/Battle_Space.dir/Enemigo1.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/Enemigo1.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/Enemigo1.cpp
CMakeFiles/Battle_Space.dir/Enemigo1.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Battle_Space.dir/Enemigo1.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/Enemigo1.cpp.o -MF CMakeFiles/Battle_Space.dir/Enemigo1.cpp.o.d -o CMakeFiles/Battle_Space.dir/Enemigo1.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo1.cpp"

CMakeFiles/Battle_Space.dir/Enemigo1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/Enemigo1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo1.cpp" > CMakeFiles/Battle_Space.dir/Enemigo1.cpp.i

CMakeFiles/Battle_Space.dir/Enemigo1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/Enemigo1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo1.cpp" -o CMakeFiles/Battle_Space.dir/Enemigo1.cpp.s

CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/MenuDificultades.cpp
CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.o -MF CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.o.d -o CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/MenuDificultades.cpp"

CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/MenuDificultades.cpp" > CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.i

CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/MenuDificultades.cpp" -o CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.s

CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/PlayerPacman.cpp
CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.o -MF CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.o.d -o CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/PlayerPacman.cpp"

CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/PlayerPacman.cpp" > CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.i

CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/PlayerPacman.cpp" -o CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.s

CMakeFiles/Battle_Space.dir/Puntos.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/Puntos.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/Puntos.cpp
CMakeFiles/Battle_Space.dir/Puntos.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Battle_Space.dir/Puntos.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/Puntos.cpp.o -MF CMakeFiles/Battle_Space.dir/Puntos.cpp.o.d -o CMakeFiles/Battle_Space.dir/Puntos.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Puntos.cpp"

CMakeFiles/Battle_Space.dir/Puntos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/Puntos.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Puntos.cpp" > CMakeFiles/Battle_Space.dir/Puntos.cpp.i

CMakeFiles/Battle_Space.dir/Puntos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/Puntos.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Puntos.cpp" -o CMakeFiles/Battle_Space.dir/Puntos.cpp.s

CMakeFiles/Battle_Space.dir/GameFinished.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/GameFinished.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/GameFinished.cpp
CMakeFiles/Battle_Space.dir/GameFinished.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Battle_Space.dir/GameFinished.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/GameFinished.cpp.o -MF CMakeFiles/Battle_Space.dir/GameFinished.cpp.o.d -o CMakeFiles/Battle_Space.dir/GameFinished.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/GameFinished.cpp"

CMakeFiles/Battle_Space.dir/GameFinished.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/GameFinished.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/GameFinished.cpp" > CMakeFiles/Battle_Space.dir/GameFinished.cpp.i

CMakeFiles/Battle_Space.dir/GameFinished.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/GameFinished.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/GameFinished.cpp" -o CMakeFiles/Battle_Space.dir/GameFinished.cpp.s

CMakeFiles/Battle_Space.dir/Enemigo2.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/Enemigo2.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/Enemigo2.cpp
CMakeFiles/Battle_Space.dir/Enemigo2.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/Battle_Space.dir/Enemigo2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/Enemigo2.cpp.o -MF CMakeFiles/Battle_Space.dir/Enemigo2.cpp.o.d -o CMakeFiles/Battle_Space.dir/Enemigo2.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo2.cpp"

CMakeFiles/Battle_Space.dir/Enemigo2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/Enemigo2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo2.cpp" > CMakeFiles/Battle_Space.dir/Enemigo2.cpp.i

CMakeFiles/Battle_Space.dir/Enemigo2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/Enemigo2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo2.cpp" -o CMakeFiles/Battle_Space.dir/Enemigo2.cpp.s

CMakeFiles/Battle_Space.dir/Enemigo3.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/Enemigo3.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/Enemigo3.cpp
CMakeFiles/Battle_Space.dir/Enemigo3.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/Battle_Space.dir/Enemigo3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/Enemigo3.cpp.o -MF CMakeFiles/Battle_Space.dir/Enemigo3.cpp.o.d -o CMakeFiles/Battle_Space.dir/Enemigo3.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo3.cpp"

CMakeFiles/Battle_Space.dir/Enemigo3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/Enemigo3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo3.cpp" > CMakeFiles/Battle_Space.dir/Enemigo3.cpp.i

CMakeFiles/Battle_Space.dir/Enemigo3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/Enemigo3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo3.cpp" -o CMakeFiles/Battle_Space.dir/Enemigo3.cpp.s

CMakeFiles/Battle_Space.dir/Enemigo4.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/Enemigo4.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/Enemigo4.cpp
CMakeFiles/Battle_Space.dir/Enemigo4.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/Battle_Space.dir/Enemigo4.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/Enemigo4.cpp.o -MF CMakeFiles/Battle_Space.dir/Enemigo4.cpp.o.d -o CMakeFiles/Battle_Space.dir/Enemigo4.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo4.cpp"

CMakeFiles/Battle_Space.dir/Enemigo4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/Enemigo4.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo4.cpp" > CMakeFiles/Battle_Space.dir/Enemigo4.cpp.i

CMakeFiles/Battle_Space.dir/Enemigo4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/Enemigo4.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Enemigo4.cpp" -o CMakeFiles/Battle_Space.dir/Enemigo4.cpp.s

CMakeFiles/Battle_Space.dir/Socket.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/Socket.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/Socket.cpp
CMakeFiles/Battle_Space.dir/Socket.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/Battle_Space.dir/Socket.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/Socket.cpp.o -MF CMakeFiles/Battle_Space.dir/Socket.cpp.o.d -o CMakeFiles/Battle_Space.dir/Socket.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Socket.cpp"

CMakeFiles/Battle_Space.dir/Socket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/Socket.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Socket.cpp" > CMakeFiles/Battle_Space.dir/Socket.cpp.i

CMakeFiles/Battle_Space.dir/Socket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/Socket.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/Socket.cpp" -o CMakeFiles/Battle_Space.dir/Socket.cpp.s

CMakeFiles/Battle_Space.dir/SocketThread.cpp.o: CMakeFiles/Battle_Space.dir/flags.make
CMakeFiles/Battle_Space.dir/SocketThread.cpp.o: /home/oscaraad/TEC/2023SEMI/Datos\ II/CE2103-ProyectoII/Proyecto/SocketThread.cpp
CMakeFiles/Battle_Space.dir/SocketThread.cpp.o: CMakeFiles/Battle_Space.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/Battle_Space.dir/SocketThread.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battle_Space.dir/SocketThread.cpp.o -MF CMakeFiles/Battle_Space.dir/SocketThread.cpp.o.d -o CMakeFiles/Battle_Space.dir/SocketThread.cpp.o -c "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/SocketThread.cpp"

CMakeFiles/Battle_Space.dir/SocketThread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battle_Space.dir/SocketThread.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/SocketThread.cpp" > CMakeFiles/Battle_Space.dir/SocketThread.cpp.i

CMakeFiles/Battle_Space.dir/SocketThread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battle_Space.dir/SocketThread.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/SocketThread.cpp" -o CMakeFiles/Battle_Space.dir/SocketThread.cpp.s

# Object files for target Battle_Space
Battle_Space_OBJECTS = \
"CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Battle_Space.dir/main.cpp.o" \
"CMakeFiles/Battle_Space.dir/GameWindow.cpp.o" \
"CMakeFiles/Battle_Space.dir/Cell.cpp.o" \
"CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.o" \
"CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.o" \
"CMakeFiles/Battle_Space.dir/Listas/Node.cpp.o" \
"CMakeFiles/Battle_Space.dir/Entidad.cpp.o" \
"CMakeFiles/Battle_Space.dir/SimpleList.cpp.o" \
"CMakeFiles/Battle_Space.dir/NodeList.cpp.o" \
"CMakeFiles/Battle_Space.dir/Enemigo1.cpp.o" \
"CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.o" \
"CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.o" \
"CMakeFiles/Battle_Space.dir/Puntos.cpp.o" \
"CMakeFiles/Battle_Space.dir/GameFinished.cpp.o" \
"CMakeFiles/Battle_Space.dir/Enemigo2.cpp.o" \
"CMakeFiles/Battle_Space.dir/Enemigo3.cpp.o" \
"CMakeFiles/Battle_Space.dir/Enemigo4.cpp.o" \
"CMakeFiles/Battle_Space.dir/Socket.cpp.o" \
"CMakeFiles/Battle_Space.dir/SocketThread.cpp.o"

# External object files for target Battle_Space
Battle_Space_EXTERNAL_OBJECTS =

Battle_Space: CMakeFiles/Battle_Space.dir/Battle_Space_autogen/mocs_compilation.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/main.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/GameWindow.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/Cell.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/ListaFantasmas.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/Listas/ListaSimple.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/Listas/Node.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/Entidad.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/SimpleList.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/NodeList.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/Enemigo1.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/MenuDificultades.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/PlayerPacman.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/Puntos.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/GameFinished.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/Enemigo2.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/Enemigo3.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/Enemigo4.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/Socket.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/SocketThread.cpp.o
Battle_Space: CMakeFiles/Battle_Space.dir/build.make
Battle_Space: /usr/lib/libQt5Widgets.so.5.15.8
Battle_Space: /usr/lib/libQt5Gui.so.5.15.8
Battle_Space: /usr/lib/libQt5Core.so.5.15.8
Battle_Space: CMakeFiles/Battle_Space.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_21) "Linking CXX executable Battle_Space"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Battle_Space.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Battle_Space.dir/build: Battle_Space
.PHONY : CMakeFiles/Battle_Space.dir/build

CMakeFiles/Battle_Space.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Battle_Space.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Battle_Space.dir/clean

CMakeFiles/Battle_Space.dir/depend:
	cd "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto" "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto" "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug" "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug" "/home/oscaraad/TEC/2023SEMI/Datos II/CE2103-ProyectoII/Proyecto/cmake-build-debug/CMakeFiles/Battle_Space.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Battle_Space.dir/depend

