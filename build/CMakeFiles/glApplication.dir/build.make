# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.21.3_1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.21.3_1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bytedance/Desktop/opengl-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bytedance/Desktop/opengl-cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/glApplication.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/glApplication.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/glApplication.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/glApplication.dir/flags.make

CMakeFiles/glApplication.dir/main.cpp.o: CMakeFiles/glApplication.dir/flags.make
CMakeFiles/glApplication.dir/main.cpp.o: ../main.cpp
CMakeFiles/glApplication.dir/main.cpp.o: CMakeFiles/glApplication.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bytedance/Desktop/opengl-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/glApplication.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/glApplication.dir/main.cpp.o -MF CMakeFiles/glApplication.dir/main.cpp.o.d -o CMakeFiles/glApplication.dir/main.cpp.o -c /Users/bytedance/Desktop/opengl-cpp/main.cpp

CMakeFiles/glApplication.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/glApplication.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bytedance/Desktop/opengl-cpp/main.cpp > CMakeFiles/glApplication.dir/main.cpp.i

CMakeFiles/glApplication.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/glApplication.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bytedance/Desktop/opengl-cpp/main.cpp -o CMakeFiles/glApplication.dir/main.cpp.s

# Object files for target glApplication
glApplication_OBJECTS = \
"CMakeFiles/glApplication.dir/main.cpp.o"

# External object files for target glApplication
glApplication_EXTERNAL_OBJECTS =

glApplication: CMakeFiles/glApplication.dir/main.cpp.o
glApplication: CMakeFiles/glApplication.dir/build.make
glApplication: ../libs/libsoil2-debug.a
glApplication: CMakeFiles/glApplication.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bytedance/Desktop/opengl-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable glApplication"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/glApplication.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/glApplication.dir/build: glApplication
.PHONY : CMakeFiles/glApplication.dir/build

CMakeFiles/glApplication.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/glApplication.dir/cmake_clean.cmake
.PHONY : CMakeFiles/glApplication.dir/clean

CMakeFiles/glApplication.dir/depend:
	cd /Users/bytedance/Desktop/opengl-cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bytedance/Desktop/opengl-cpp /Users/bytedance/Desktop/opengl-cpp /Users/bytedance/Desktop/opengl-cpp/build /Users/bytedance/Desktop/opengl-cpp/build /Users/bytedance/Desktop/opengl-cpp/build/CMakeFiles/glApplication.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/glApplication.dir/depend
