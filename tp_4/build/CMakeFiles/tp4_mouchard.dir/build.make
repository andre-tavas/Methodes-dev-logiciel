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
CMAKE_SOURCE_DIR = /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/build

# Include any dependencies generated for this target.
include CMakeFiles/tp4_mouchard.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tp4_mouchard.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tp4_mouchard.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp4_mouchard.dir/flags.make

CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.o: CMakeFiles/tp4_mouchard.dir/flags.make
CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.o: /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/test/test_mouchard.cpp
CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.o: CMakeFiles/tp4_mouchard.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.o -MF CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.o.d -o CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.o -c /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/test/test_mouchard.cpp

CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/test/test_mouchard.cpp > CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.i

CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/test/test_mouchard.cpp -o CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.s

# Object files for target tp4_mouchard
tp4_mouchard_OBJECTS = \
"CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.o"

# External object files for target tp4_mouchard
tp4_mouchard_EXTERNAL_OBJECTS = \
"/home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/build/CMakeFiles/common.dir/src/carte.cpp.o" \
"/home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/build/CMakeFiles/common.dir/src/paquet.cpp.o" \
"/home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/build/CMakeFiles/common.dir/src/ressource.cpp.o" \
"/home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/build/CMakeFiles/common.dir/src/usine.cpp.o"

tp4_mouchard: CMakeFiles/tp4_mouchard.dir/test/test_mouchard.cpp.o
tp4_mouchard: CMakeFiles/common.dir/src/carte.cpp.o
tp4_mouchard: CMakeFiles/common.dir/src/paquet.cpp.o
tp4_mouchard: CMakeFiles/common.dir/src/ressource.cpp.o
tp4_mouchard: CMakeFiles/common.dir/src/usine.cpp.o
tp4_mouchard: CMakeFiles/tp4_mouchard.dir/build.make
tp4_mouchard: CMakeFiles/tp4_mouchard.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tp4_mouchard"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp4_mouchard.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp4_mouchard.dir/build: tp4_mouchard
.PHONY : CMakeFiles/tp4_mouchard.dir/build

CMakeFiles/tp4_mouchard.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp4_mouchard.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp4_mouchard.dir/clean

CMakeFiles/tp4_mouchard.dir/depend:
	cd /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4 /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4 /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/build /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/build /home/local.isima.fr/antavaresg/shared/ZZ3/C++/tp_4/build/CMakeFiles/tp4_mouchard.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp4_mouchard.dir/depend

