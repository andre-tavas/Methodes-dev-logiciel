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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/build

# Include any dependencies generated for this target.
include CMakeFiles/tp3_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tp3_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tp3_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp3_test.dir/flags.make

CMakeFiles/tp3_test.dir/test/tp3_test.cpp.o: CMakeFiles/tp3_test.dir/flags.make
CMakeFiles/tp3_test.dir/test/tp3_test.cpp.o: /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/test/tp3_test.cpp
CMakeFiles/tp3_test.dir/test/tp3_test.cpp.o: CMakeFiles/tp3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp3_test.dir/test/tp3_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp3_test.dir/test/tp3_test.cpp.o -MF CMakeFiles/tp3_test.dir/test/tp3_test.cpp.o.d -o CMakeFiles/tp3_test.dir/test/tp3_test.cpp.o -c /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/test/tp3_test.cpp

CMakeFiles/tp3_test.dir/test/tp3_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp3_test.dir/test/tp3_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/test/tp3_test.cpp > CMakeFiles/tp3_test.dir/test/tp3_test.cpp.i

CMakeFiles/tp3_test.dir/test/tp3_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp3_test.dir/test/tp3_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/test/tp3_test.cpp -o CMakeFiles/tp3_test.dir/test/tp3_test.cpp.s

# Object files for target tp3_test
tp3_test_OBJECTS = \
"CMakeFiles/tp3_test.dir/test/tp3_test.cpp.o"

# External object files for target tp3_test
tp3_test_EXTERNAL_OBJECTS = \
"/mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/build/CMakeFiles/common.dir/src/exception.cpp.o" \
"/mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/build/CMakeFiles/test.dir/test/catch.cpp.o"

tp3_test: CMakeFiles/tp3_test.dir/test/tp3_test.cpp.o
tp3_test: CMakeFiles/common.dir/src/exception.cpp.o
tp3_test: CMakeFiles/test.dir/test/catch.cpp.o
tp3_test: CMakeFiles/tp3_test.dir/build.make
tp3_test: CMakeFiles/tp3_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tp3_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp3_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp3_test.dir/build: tp3_test
.PHONY : CMakeFiles/tp3_test.dir/build

CMakeFiles/tp3_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp3_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp3_test.dir/clean

CMakeFiles/tp3_test.dir/depend:
	cd /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3 /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3 /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/build /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/build /mnt/local.isima.fr/antavaresg/ZZ3/C++/tp_3/build/CMakeFiles/tp3_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp3_test.dir/depend

