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
CMAKE_SOURCE_DIR = /home/miko/Documents/personal/interview_assessment

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/miko/Documents/personal/interview_assessment/build

# Include any dependencies generated for this target.
include CMakeFiles/interview_assessment.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/interview_assessment.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/interview_assessment.dir/flags.make

CMakeFiles/interview_assessment.dir/interview_assessment.c.o: CMakeFiles/interview_assessment.dir/flags.make
CMakeFiles/interview_assessment.dir/interview_assessment.c.o: ../interview_assessment.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miko/Documents/personal/interview_assessment/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/interview_assessment.dir/interview_assessment.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/interview_assessment.dir/interview_assessment.c.o   -c /home/miko/Documents/personal/interview_assessment/interview_assessment.c

CMakeFiles/interview_assessment.dir/interview_assessment.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/interview_assessment.dir/interview_assessment.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miko/Documents/personal/interview_assessment/interview_assessment.c > CMakeFiles/interview_assessment.dir/interview_assessment.c.i

CMakeFiles/interview_assessment.dir/interview_assessment.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/interview_assessment.dir/interview_assessment.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miko/Documents/personal/interview_assessment/interview_assessment.c -o CMakeFiles/interview_assessment.dir/interview_assessment.c.s

# Object files for target interview_assessment
interview_assessment_OBJECTS = \
"CMakeFiles/interview_assessment.dir/interview_assessment.c.o"

# External object files for target interview_assessment
interview_assessment_EXTERNAL_OBJECTS =

build/interview_assessment: CMakeFiles/interview_assessment.dir/interview_assessment.c.o
build/interview_assessment: CMakeFiles/interview_assessment.dir/build.make
build/interview_assessment: CMakeFiles/interview_assessment.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/miko/Documents/personal/interview_assessment/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable build/interview_assessment"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/interview_assessment.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/interview_assessment.dir/build: build/interview_assessment

.PHONY : CMakeFiles/interview_assessment.dir/build

CMakeFiles/interview_assessment.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/interview_assessment.dir/cmake_clean.cmake
.PHONY : CMakeFiles/interview_assessment.dir/clean

CMakeFiles/interview_assessment.dir/depend:
	cd /home/miko/Documents/personal/interview_assessment/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/miko/Documents/personal/interview_assessment /home/miko/Documents/personal/interview_assessment /home/miko/Documents/personal/interview_assessment/build /home/miko/Documents/personal/interview_assessment/build /home/miko/Documents/personal/interview_assessment/build/CMakeFiles/interview_assessment.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/interview_assessment.dir/depend
