# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /cygdrive/c/Users/kavya/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/kavya/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Program_Test.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Program_Test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Program_Test.dir/flags.make

CMakeFiles/Program_Test.dir/test/src/testmain.c.o: CMakeFiles/Program_Test.dir/flags.make
CMakeFiles/Program_Test.dir/test/src/testmain.c.o: ../test/src/testmain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Program_Test.dir/test/src/testmain.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Program_Test.dir/test/src/testmain.c.o -c /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/testmain.c

CMakeFiles/Program_Test.dir/test/src/testmain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Program_Test.dir/test/src/testmain.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/testmain.c > CMakeFiles/Program_Test.dir/test/src/testmain.c.i

CMakeFiles/Program_Test.dir/test/src/testmain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Program_Test.dir/test/src/testmain.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/testmain.c -o CMakeFiles/Program_Test.dir/test/src/testmain.c.s

CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.o: CMakeFiles/Program_Test.dir/flags.make
CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.o: ../test/src/test_sign_up.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.o -c /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/test_sign_up.c

CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/test_sign_up.c > CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.i

CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/test_sign_up.c -o CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.s

CMakeFiles/Program_Test.dir/test/src/log_file.c.o: CMakeFiles/Program_Test.dir/flags.make
CMakeFiles/Program_Test.dir/test/src/log_file.c.o: ../test/src/log_file.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Program_Test.dir/test/src/log_file.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Program_Test.dir/test/src/log_file.c.o -c /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/log_file.c

CMakeFiles/Program_Test.dir/test/src/log_file.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Program_Test.dir/test/src/log_file.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/log_file.c > CMakeFiles/Program_Test.dir/test/src/log_file.c.i

CMakeFiles/Program_Test.dir/test/src/log_file.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Program_Test.dir/test/src/log_file.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/log_file.c -o CMakeFiles/Program_Test.dir/test/src/log_file.c.s

CMakeFiles/Program_Test.dir/test/src/test_id.c.o: CMakeFiles/Program_Test.dir/flags.make
CMakeFiles/Program_Test.dir/test/src/test_id.c.o: ../test/src/test_id.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Program_Test.dir/test/src/test_id.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Program_Test.dir/test/src/test_id.c.o -c /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/test_id.c

CMakeFiles/Program_Test.dir/test/src/test_id.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Program_Test.dir/test/src/test_id.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/test_id.c > CMakeFiles/Program_Test.dir/test/src/test_id.c.i

CMakeFiles/Program_Test.dir/test/src/test_id.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Program_Test.dir/test/src/test_id.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/test_id.c -o CMakeFiles/Program_Test.dir/test/src/test_id.c.s

CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.o: CMakeFiles/Program_Test.dir/flags.make
CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.o: ../test/src/test_booking_id.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.o -c /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/test_booking_id.c

CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/test_booking_id.c > CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.i

CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/test/src/test_booking_id.c -o CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.s

# Object files for target Program_Test
Program_Test_OBJECTS = \
"CMakeFiles/Program_Test.dir/test/src/testmain.c.o" \
"CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.o" \
"CMakeFiles/Program_Test.dir/test/src/log_file.c.o" \
"CMakeFiles/Program_Test.dir/test/src/test_id.c.o" \
"CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.o"

# External object files for target Program_Test
Program_Test_EXTERNAL_OBJECTS =

Program_Test.exe: CMakeFiles/Program_Test.dir/test/src/testmain.c.o
Program_Test.exe: CMakeFiles/Program_Test.dir/test/src/test_sign_up.c.o
Program_Test.exe: CMakeFiles/Program_Test.dir/test/src/log_file.c.o
Program_Test.exe: CMakeFiles/Program_Test.dir/test/src/test_id.c.o
Program_Test.exe: CMakeFiles/Program_Test.dir/test/src/test_booking_id.c.o
Program_Test.exe: CMakeFiles/Program_Test.dir/build.make
Program_Test.exe: CMakeFiles/Program_Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable Program_Test.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Program_Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Program_Test.dir/build: Program_Test.exe
.PHONY : CMakeFiles/Program_Test.dir/build

CMakeFiles/Program_Test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Program_Test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Program_Test.dir/clean

CMakeFiles/Program_Test.dir/depend:
	cd /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/cmake-build-debug /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/cmake-build-debug /cygdrive/c/Users/kavya/OneDrive/Documents/Group_3_Travel-Agency-Management-System/cmake-build-debug/CMakeFiles/Program_Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Program_Test.dir/depend

