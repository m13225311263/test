# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /cygdrive/c/Users/VickuGu/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/VickuGu/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/Git/limitorderbook/limitorderbook

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug

# Include any dependencies generated for this target.
include source/CMakeFiles/source.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/source.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/source.dir/flags.make

source/CMakeFiles/source.dir/facktrader.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/facktrader.cpp.o: ../source/facktrader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/source.dir/facktrader.cpp.o"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/source.dir/facktrader.cpp.o -c /cygdrive/d/Git/limitorderbook/limitorderbook/source/facktrader.cpp

source/CMakeFiles/source.dir/facktrader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/source.dir/facktrader.cpp.i"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/limitorderbook/limitorderbook/source/facktrader.cpp > CMakeFiles/source.dir/facktrader.cpp.i

source/CMakeFiles/source.dir/facktrader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/source.dir/facktrader.cpp.s"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/limitorderbook/limitorderbook/source/facktrader.cpp -o CMakeFiles/source.dir/facktrader.cpp.s

source/CMakeFiles/source.dir/facktrader.cpp.o.requires:

.PHONY : source/CMakeFiles/source.dir/facktrader.cpp.o.requires

source/CMakeFiles/source.dir/facktrader.cpp.o.provides: source/CMakeFiles/source.dir/facktrader.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/source.dir/build.make source/CMakeFiles/source.dir/facktrader.cpp.o.provides.build
.PHONY : source/CMakeFiles/source.dir/facktrader.cpp.o.provides

source/CMakeFiles/source.dir/facktrader.cpp.o.provides.build: source/CMakeFiles/source.dir/facktrader.cpp.o


source/CMakeFiles/source.dir/market.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/market.cpp.o: ../source/market.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object source/CMakeFiles/source.dir/market.cpp.o"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/source.dir/market.cpp.o -c /cygdrive/d/Git/limitorderbook/limitorderbook/source/market.cpp

source/CMakeFiles/source.dir/market.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/source.dir/market.cpp.i"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/limitorderbook/limitorderbook/source/market.cpp > CMakeFiles/source.dir/market.cpp.i

source/CMakeFiles/source.dir/market.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/source.dir/market.cpp.s"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/limitorderbook/limitorderbook/source/market.cpp -o CMakeFiles/source.dir/market.cpp.s

source/CMakeFiles/source.dir/market.cpp.o.requires:

.PHONY : source/CMakeFiles/source.dir/market.cpp.o.requires

source/CMakeFiles/source.dir/market.cpp.o.provides: source/CMakeFiles/source.dir/market.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/source.dir/build.make source/CMakeFiles/source.dir/market.cpp.o.provides.build
.PHONY : source/CMakeFiles/source.dir/market.cpp.o.provides

source/CMakeFiles/source.dir/market.cpp.o.provides.build: source/CMakeFiles/source.dir/market.cpp.o


source/CMakeFiles/source.dir/realtrader.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/realtrader.cpp.o: ../source/realtrader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object source/CMakeFiles/source.dir/realtrader.cpp.o"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/source.dir/realtrader.cpp.o -c /cygdrive/d/Git/limitorderbook/limitorderbook/source/realtrader.cpp

source/CMakeFiles/source.dir/realtrader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/source.dir/realtrader.cpp.i"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/limitorderbook/limitorderbook/source/realtrader.cpp > CMakeFiles/source.dir/realtrader.cpp.i

source/CMakeFiles/source.dir/realtrader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/source.dir/realtrader.cpp.s"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/limitorderbook/limitorderbook/source/realtrader.cpp -o CMakeFiles/source.dir/realtrader.cpp.s

source/CMakeFiles/source.dir/realtrader.cpp.o.requires:

.PHONY : source/CMakeFiles/source.dir/realtrader.cpp.o.requires

source/CMakeFiles/source.dir/realtrader.cpp.o.provides: source/CMakeFiles/source.dir/realtrader.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/source.dir/build.make source/CMakeFiles/source.dir/realtrader.cpp.o.provides.build
.PHONY : source/CMakeFiles/source.dir/realtrader.cpp.o.provides

source/CMakeFiles/source.dir/realtrader.cpp.o.provides.build: source/CMakeFiles/source.dir/realtrader.cpp.o


source/CMakeFiles/source.dir/trader.cpp.o: source/CMakeFiles/source.dir/flags.make
source/CMakeFiles/source.dir/trader.cpp.o: ../source/trader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object source/CMakeFiles/source.dir/trader.cpp.o"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/source.dir/trader.cpp.o -c /cygdrive/d/Git/limitorderbook/limitorderbook/source/trader.cpp

source/CMakeFiles/source.dir/trader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/source.dir/trader.cpp.i"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Git/limitorderbook/limitorderbook/source/trader.cpp > CMakeFiles/source.dir/trader.cpp.i

source/CMakeFiles/source.dir/trader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/source.dir/trader.cpp.s"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && C:/cygwin64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Git/limitorderbook/limitorderbook/source/trader.cpp -o CMakeFiles/source.dir/trader.cpp.s

source/CMakeFiles/source.dir/trader.cpp.o.requires:

.PHONY : source/CMakeFiles/source.dir/trader.cpp.o.requires

source/CMakeFiles/source.dir/trader.cpp.o.provides: source/CMakeFiles/source.dir/trader.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/source.dir/build.make source/CMakeFiles/source.dir/trader.cpp.o.provides.build
.PHONY : source/CMakeFiles/source.dir/trader.cpp.o.provides

source/CMakeFiles/source.dir/trader.cpp.o.provides.build: source/CMakeFiles/source.dir/trader.cpp.o


# Object files for target source
source_OBJECTS = \
"CMakeFiles/source.dir/facktrader.cpp.o" \
"CMakeFiles/source.dir/market.cpp.o" \
"CMakeFiles/source.dir/realtrader.cpp.o" \
"CMakeFiles/source.dir/trader.cpp.o"

# External object files for target source
source_EXTERNAL_OBJECTS =

source/libsource.a: source/CMakeFiles/source.dir/facktrader.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/market.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/realtrader.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/trader.cpp.o
source/libsource.a: source/CMakeFiles/source.dir/build.make
source/libsource.a: source/CMakeFiles/source.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libsource.a"
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && $(CMAKE_COMMAND) -P CMakeFiles/source.dir/cmake_clean_target.cmake
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/source.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/source.dir/build: source/libsource.a

.PHONY : source/CMakeFiles/source.dir/build

source/CMakeFiles/source.dir/requires: source/CMakeFiles/source.dir/facktrader.cpp.o.requires
source/CMakeFiles/source.dir/requires: source/CMakeFiles/source.dir/market.cpp.o.requires
source/CMakeFiles/source.dir/requires: source/CMakeFiles/source.dir/realtrader.cpp.o.requires
source/CMakeFiles/source.dir/requires: source/CMakeFiles/source.dir/trader.cpp.o.requires

.PHONY : source/CMakeFiles/source.dir/requires

source/CMakeFiles/source.dir/clean:
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source && $(CMAKE_COMMAND) -P CMakeFiles/source.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/source.dir/clean

source/CMakeFiles/source.dir/depend:
	cd /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Git/limitorderbook/limitorderbook /cygdrive/d/Git/limitorderbook/limitorderbook/source /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source /cygdrive/d/Git/limitorderbook/limitorderbook/cmake-build-debug/source/CMakeFiles/source.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/source.dir/depend

