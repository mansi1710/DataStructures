# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/code1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/code1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/code1.dir/flags.make

CMakeFiles/code1.dir/main.cpp.obj: CMakeFiles/code1.dir/flags.make
CMakeFiles/code1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/code1.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\code1.dir\main.cpp.obj -c C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1\main.cpp

CMakeFiles/code1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/code1.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1\main.cpp > CMakeFiles\code1.dir\main.cpp.i

CMakeFiles/code1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/code1.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1\main.cpp -o CMakeFiles\code1.dir\main.cpp.s

CMakeFiles/code1.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/code1.dir/main.cpp.obj.requires

CMakeFiles/code1.dir/main.cpp.obj.provides: CMakeFiles/code1.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\code1.dir\build.make CMakeFiles/code1.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/code1.dir/main.cpp.obj.provides

CMakeFiles/code1.dir/main.cpp.obj.provides.build: CMakeFiles/code1.dir/main.cpp.obj


# Object files for target code1
code1_OBJECTS = \
"CMakeFiles/code1.dir/main.cpp.obj"

# External object files for target code1
code1_EXTERNAL_OBJECTS =

code1.exe: CMakeFiles/code1.dir/main.cpp.obj
code1.exe: CMakeFiles/code1.dir/build.make
code1.exe: CMakeFiles/code1.dir/linklibs.rsp
code1.exe: CMakeFiles/code1.dir/objects1.rsp
code1.exe: CMakeFiles/code1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable code1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\code1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/code1.dir/build: code1.exe

.PHONY : CMakeFiles/code1.dir/build

CMakeFiles/code1.dir/requires: CMakeFiles/code1.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/code1.dir/requires

CMakeFiles/code1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\code1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/code1.dir/clean

CMakeFiles/code1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1 C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1 C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1\cmake-build-debug C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1\cmake-build-debug C:\Users\Lenovo\CLionProjects\DataStructures\LinkedList\code1\cmake-build-debug\CMakeFiles\code1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/code1.dir/depend

