# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/cmake-3.12.3-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.12.3-Linux-x86_64/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/s3ms/Desktop/My Projects/message_server-master"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/s3ms/Desktop/My Projects/message_server-master"

# Utility rule file for ExperimentalBuild.

# Include the progress variables for this target.
include nlohmann_json/CMakeFiles/ExperimentalBuild.dir/progress.make

nlohmann_json/CMakeFiles/ExperimentalBuild:
	cd "/home/s3ms/Desktop/My Projects/message_server-master/nlohmann_json" && /opt/cmake-3.12.3-Linux-x86_64/bin/ctest -D ExperimentalBuild

ExperimentalBuild: nlohmann_json/CMakeFiles/ExperimentalBuild
ExperimentalBuild: nlohmann_json/CMakeFiles/ExperimentalBuild.dir/build.make

.PHONY : ExperimentalBuild

# Rule to build all files generated by this target.
nlohmann_json/CMakeFiles/ExperimentalBuild.dir/build: ExperimentalBuild

.PHONY : nlohmann_json/CMakeFiles/ExperimentalBuild.dir/build

nlohmann_json/CMakeFiles/ExperimentalBuild.dir/clean:
	cd "/home/s3ms/Desktop/My Projects/message_server-master/nlohmann_json" && $(CMAKE_COMMAND) -P CMakeFiles/ExperimentalBuild.dir/cmake_clean.cmake
.PHONY : nlohmann_json/CMakeFiles/ExperimentalBuild.dir/clean

nlohmann_json/CMakeFiles/ExperimentalBuild.dir/depend:
	cd "/home/s3ms/Desktop/My Projects/message_server-master" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/s3ms/Desktop/My Projects/message_server-master" "/home/s3ms/Desktop/My Projects/message_server-master/nlohmann_json" "/home/s3ms/Desktop/My Projects/message_server-master" "/home/s3ms/Desktop/My Projects/message_server-master/nlohmann_json" "/home/s3ms/Desktop/My Projects/message_server-master/nlohmann_json/CMakeFiles/ExperimentalBuild.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : nlohmann_json/CMakeFiles/ExperimentalBuild.dir/depend

