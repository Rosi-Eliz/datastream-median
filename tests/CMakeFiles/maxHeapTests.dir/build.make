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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.22.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.22.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rosie.elize/Programming/Repositories/datastream-median/tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rosie.elize/Programming/Repositories/datastream-median/tests

# Include any dependencies generated for this target.
include CMakeFiles/maxHeapTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/maxHeapTests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/maxHeapTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/maxHeapTests.dir/flags.make

CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.o: CMakeFiles/maxHeapTests.dir/flags.make
CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.o: maxHeapTests.cpp
CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.o: CMakeFiles/maxHeapTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rosie.elize/Programming/Repositories/datastream-median/tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.o -MF CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.o.d -o CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.o -c /Users/rosie.elize/Programming/Repositories/datastream-median/tests/maxHeapTests.cpp

CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rosie.elize/Programming/Repositories/datastream-median/tests/maxHeapTests.cpp > CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.i

CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rosie.elize/Programming/Repositories/datastream-median/tests/maxHeapTests.cpp -o CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.s

# Object files for target maxHeapTests
maxHeapTests_OBJECTS = \
"CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.o"

# External object files for target maxHeapTests
maxHeapTests_EXTERNAL_OBJECTS = \
"/Users/rosie.elize/Programming/Repositories/datastream-median/tests/CMakeFiles/test_main.dir/test_main.cpp.o"

build/maxHeapTests: CMakeFiles/maxHeapTests.dir/maxHeapTests.cpp.o
build/maxHeapTests: CMakeFiles/test_main.dir/test_main.cpp.o
build/maxHeapTests: CMakeFiles/maxHeapTests.dir/build.make
build/maxHeapTests: CMakeFiles/maxHeapTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rosie.elize/Programming/Repositories/datastream-median/tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable build/maxHeapTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/maxHeapTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/maxHeapTests.dir/build: build/maxHeapTests
.PHONY : CMakeFiles/maxHeapTests.dir/build

CMakeFiles/maxHeapTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/maxHeapTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/maxHeapTests.dir/clean

CMakeFiles/maxHeapTests.dir/depend:
	cd /Users/rosie.elize/Programming/Repositories/datastream-median/tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rosie.elize/Programming/Repositories/datastream-median/tests /Users/rosie.elize/Programming/Repositories/datastream-median/tests /Users/rosie.elize/Programming/Repositories/datastream-median/tests /Users/rosie.elize/Programming/Repositories/datastream-median/tests /Users/rosie.elize/Programming/Repositories/datastream-median/tests/CMakeFiles/maxHeapTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/maxHeapTests.dir/depend

