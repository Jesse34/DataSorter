# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /cygdrive/c/Users/Jesse/.CLion2019.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Jesse/.CLion2019.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/Jesse/Projects/C++/DataSorter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Jesse/Projects/C++/DataSorter/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Ass3_DataSorter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ass3_DataSorter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ass3_DataSorter.dir/flags.make

CMakeFiles/Ass3_DataSorter.dir/main.cpp.o: CMakeFiles/Ass3_DataSorter.dir/flags.make
CMakeFiles/Ass3_DataSorter.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Jesse/Projects/C++/DataSorter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ass3_DataSorter.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ass3_DataSorter.dir/main.cpp.o -c /cygdrive/d/Jesse/Projects/C++/DataSorter/main.cpp

CMakeFiles/Ass3_DataSorter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ass3_DataSorter.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Jesse/Projects/C++/DataSorter/main.cpp > CMakeFiles/Ass3_DataSorter.dir/main.cpp.i

CMakeFiles/Ass3_DataSorter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ass3_DataSorter.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Jesse/Projects/C++/DataSorter/main.cpp -o CMakeFiles/Ass3_DataSorter.dir/main.cpp.s

CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.o: CMakeFiles/Ass3_DataSorter.dir/flags.make
CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.o: ../SortController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Jesse/Projects/C++/DataSorter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.o -c /cygdrive/d/Jesse/Projects/C++/DataSorter/SortController.cpp

CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Jesse/Projects/C++/DataSorter/SortController.cpp > CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.i

CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Jesse/Projects/C++/DataSorter/SortController.cpp -o CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.s

# Object files for target Ass3_DataSorter
Ass3_DataSorter_OBJECTS = \
"CMakeFiles/Ass3_DataSorter.dir/main.cpp.o" \
"CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.o"

# External object files for target Ass3_DataSorter
Ass3_DataSorter_EXTERNAL_OBJECTS =

Ass3_DataSorter.exe: CMakeFiles/Ass3_DataSorter.dir/main.cpp.o
Ass3_DataSorter.exe: CMakeFiles/Ass3_DataSorter.dir/SortController.cpp.o
Ass3_DataSorter.exe: CMakeFiles/Ass3_DataSorter.dir/build.make
Ass3_DataSorter.exe: CMakeFiles/Ass3_DataSorter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Jesse/Projects/C++/DataSorter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Ass3_DataSorter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ass3_DataSorter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ass3_DataSorter.dir/build: Ass3_DataSorter.exe

.PHONY : CMakeFiles/Ass3_DataSorter.dir/build

CMakeFiles/Ass3_DataSorter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ass3_DataSorter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ass3_DataSorter.dir/clean

CMakeFiles/Ass3_DataSorter.dir/depend:
	cd /cygdrive/d/Jesse/Projects/C++/DataSorter/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Jesse/Projects/C++/DataSorter /cygdrive/d/Jesse/Projects/C++/DataSorter /cygdrive/d/Jesse/Projects/C++/DataSorter/cmake-build-debug /cygdrive/d/Jesse/Projects/C++/DataSorter/cmake-build-debug /cygdrive/d/Jesse/Projects/C++/DataSorter/cmake-build-debug/CMakeFiles/Ass3_DataSorter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ass3_DataSorter.dir/depend

