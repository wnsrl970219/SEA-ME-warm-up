# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jungi/SEA-ME-warm-up/Module00/Exercise01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jungi/SEA-ME-warm-up/Module00/Exercise01/build

# Include any dependencies generated for this target.
include CMakeFiles/MainExecutable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MainExecutable.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MainExecutable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MainExecutable.dir/flags.make

CMakeFiles/MainExecutable.dir/src/main.cpp.o: CMakeFiles/MainExecutable.dir/flags.make
CMakeFiles/MainExecutable.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/MainExecutable.dir/src/main.cpp.o: CMakeFiles/MainExecutable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jungi/SEA-ME-warm-up/Module00/Exercise01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MainExecutable.dir/src/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MainExecutable.dir/src/main.cpp.o -MF CMakeFiles/MainExecutable.dir/src/main.cpp.o.d -o CMakeFiles/MainExecutable.dir/src/main.cpp.o -c /home/jungi/SEA-ME-warm-up/Module00/Exercise01/src/main.cpp

CMakeFiles/MainExecutable.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MainExecutable.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jungi/SEA-ME-warm-up/Module00/Exercise01/src/main.cpp > CMakeFiles/MainExecutable.dir/src/main.cpp.i

CMakeFiles/MainExecutable.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MainExecutable.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jungi/SEA-ME-warm-up/Module00/Exercise01/src/main.cpp -o CMakeFiles/MainExecutable.dir/src/main.cpp.s

# Object files for target MainExecutable
MainExecutable_OBJECTS = \
"CMakeFiles/MainExecutable.dir/src/main.cpp.o"

# External object files for target MainExecutable
MainExecutable_EXTERNAL_OBJECTS =

MainExecutable: CMakeFiles/MainExecutable.dir/src/main.cpp.o
MainExecutable: CMakeFiles/MainExecutable.dir/build.make
MainExecutable: libConvertToUpperLib.a
MainExecutable: libConvertToLowerLib.a
MainExecutable: CMakeFiles/MainExecutable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jungi/SEA-ME-warm-up/Module00/Exercise01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MainExecutable"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MainExecutable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MainExecutable.dir/build: MainExecutable
.PHONY : CMakeFiles/MainExecutable.dir/build

CMakeFiles/MainExecutable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MainExecutable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MainExecutable.dir/clean

CMakeFiles/MainExecutable.dir/depend:
	cd /home/jungi/SEA-ME-warm-up/Module00/Exercise01/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jungi/SEA-ME-warm-up/Module00/Exercise01 /home/jungi/SEA-ME-warm-up/Module00/Exercise01 /home/jungi/SEA-ME-warm-up/Module00/Exercise01/build /home/jungi/SEA-ME-warm-up/Module00/Exercise01/build /home/jungi/SEA-ME-warm-up/Module00/Exercise01/build/CMakeFiles/MainExecutable.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MainExecutable.dir/depend

