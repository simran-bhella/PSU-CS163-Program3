# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/Development/CS163/program3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Development/CS163/program3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/program3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/program3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/program3.dir/flags.make

CMakeFiles/program3.dir/main.cpp.o: CMakeFiles/program3.dir/flags.make
CMakeFiles/program3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Development/CS163/program3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/program3.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program3.dir/main.cpp.o -c /mnt/d/Development/CS163/program3/main.cpp

CMakeFiles/program3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Development/CS163/program3/main.cpp > CMakeFiles/program3.dir/main.cpp.i

CMakeFiles/program3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Development/CS163/program3/main.cpp -o CMakeFiles/program3.dir/main.cpp.s

CMakeFiles/program3.dir/hash.cpp.o: CMakeFiles/program3.dir/flags.make
CMakeFiles/program3.dir/hash.cpp.o: hash.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Development/CS163/program3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/program3.dir/hash.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/program3.dir/hash.cpp.o -c /mnt/d/Development/CS163/program3/cmake-build-debug/hash.cpp

CMakeFiles/program3.dir/hash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/program3.dir/hash.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Development/CS163/program3/cmake-build-debug/hash.cpp > CMakeFiles/program3.dir/hash.cpp.i

CMakeFiles/program3.dir/hash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/program3.dir/hash.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Development/CS163/program3/cmake-build-debug/hash.cpp -o CMakeFiles/program3.dir/hash.cpp.s

# Object files for target program3
program3_OBJECTS = \
"CMakeFiles/program3.dir/main.cpp.o" \
"CMakeFiles/program3.dir/hash.cpp.o"

# External object files for target program3
program3_EXTERNAL_OBJECTS =

program3: CMakeFiles/program3.dir/main.cpp.o
program3: CMakeFiles/program3.dir/hash.cpp.o
program3: CMakeFiles/program3.dir/build.make
program3: CMakeFiles/program3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Development/CS163/program3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable program3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/program3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/program3.dir/build: program3

.PHONY : CMakeFiles/program3.dir/build

CMakeFiles/program3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/program3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/program3.dir/clean

CMakeFiles/program3.dir/depend:
	cd /mnt/d/Development/CS163/program3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Development/CS163/program3 /mnt/d/Development/CS163/program3 /mnt/d/Development/CS163/program3/cmake-build-debug /mnt/d/Development/CS163/program3/cmake-build-debug /mnt/d/Development/CS163/program3/cmake-build-debug/CMakeFiles/program3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/program3.dir/depend

