# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files (x86)\CLion\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CLion\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BatailleNavaleFinale.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BatailleNavaleFinale.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BatailleNavaleFinale.dir/flags.make

CMakeFiles/BatailleNavaleFinale.dir/main.c.obj: CMakeFiles/BatailleNavaleFinale.dir/flags.make
CMakeFiles/BatailleNavaleFinale.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BatailleNavaleFinale.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BatailleNavaleFinale.dir\main.c.obj   -c C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale\main.c

CMakeFiles/BatailleNavaleFinale.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BatailleNavaleFinale.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale\main.c > CMakeFiles\BatailleNavaleFinale.dir\main.c.i

CMakeFiles/BatailleNavaleFinale.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BatailleNavaleFinale.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale\main.c -o CMakeFiles\BatailleNavaleFinale.dir\main.c.s

# Object files for target BatailleNavaleFinale
BatailleNavaleFinale_OBJECTS = \
"CMakeFiles/BatailleNavaleFinale.dir/main.c.obj"

# External object files for target BatailleNavaleFinale
BatailleNavaleFinale_EXTERNAL_OBJECTS =

BatailleNavaleFinale.exe: CMakeFiles/BatailleNavaleFinale.dir/main.c.obj
BatailleNavaleFinale.exe: CMakeFiles/BatailleNavaleFinale.dir/build.make
BatailleNavaleFinale.exe: CMakeFiles/BatailleNavaleFinale.dir/linklibs.rsp
BatailleNavaleFinale.exe: CMakeFiles/BatailleNavaleFinale.dir/objects1.rsp
BatailleNavaleFinale.exe: CMakeFiles/BatailleNavaleFinale.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BatailleNavaleFinale.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BatailleNavaleFinale.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BatailleNavaleFinale.dir/build: BatailleNavaleFinale.exe

.PHONY : CMakeFiles/BatailleNavaleFinale.dir/build

CMakeFiles/BatailleNavaleFinale.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BatailleNavaleFinale.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BatailleNavaleFinale.dir/clean

CMakeFiles/BatailleNavaleFinale.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale\cmake-build-debug C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale\cmake-build-debug C:\CProjects\MA-20\BatailleNavale\BatailleNavaleFinale\cmake-build-debug\CMakeFiles\BatailleNavaleFinale.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BatailleNavaleFinale.dir/depend
