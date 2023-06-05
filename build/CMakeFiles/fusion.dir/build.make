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
CMAKE_SOURCE_DIR = /home/yc/ros/fusion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yc/ros/fusion/build

# Include any dependencies generated for this target.
include CMakeFiles/fusion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fusion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fusion.dir/flags.make

CMakeFiles/fusion.dir/src/FusionNode.cpp.o: CMakeFiles/fusion.dir/flags.make
CMakeFiles/fusion.dir/src/FusionNode.cpp.o: ../src/FusionNode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yc/ros/fusion/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fusion.dir/src/FusionNode.cpp.o"
	/usr/bin/clang++-12  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fusion.dir/src/FusionNode.cpp.o -c /home/yc/ros/fusion/src/FusionNode.cpp

CMakeFiles/fusion.dir/src/FusionNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fusion.dir/src/FusionNode.cpp.i"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yc/ros/fusion/src/FusionNode.cpp > CMakeFiles/fusion.dir/src/FusionNode.cpp.i

CMakeFiles/fusion.dir/src/FusionNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fusion.dir/src/FusionNode.cpp.s"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yc/ros/fusion/src/FusionNode.cpp -o CMakeFiles/fusion.dir/src/FusionNode.cpp.s

CMakeFiles/fusion.dir/src/GridFusion.cpp.o: CMakeFiles/fusion.dir/flags.make
CMakeFiles/fusion.dir/src/GridFusion.cpp.o: ../src/GridFusion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yc/ros/fusion/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/fusion.dir/src/GridFusion.cpp.o"
	/usr/bin/clang++-12  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fusion.dir/src/GridFusion.cpp.o -c /home/yc/ros/fusion/src/GridFusion.cpp

CMakeFiles/fusion.dir/src/GridFusion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fusion.dir/src/GridFusion.cpp.i"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yc/ros/fusion/src/GridFusion.cpp > CMakeFiles/fusion.dir/src/GridFusion.cpp.i

CMakeFiles/fusion.dir/src/GridFusion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fusion.dir/src/GridFusion.cpp.s"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yc/ros/fusion/src/GridFusion.cpp -o CMakeFiles/fusion.dir/src/GridFusion.cpp.s

CMakeFiles/fusion.dir/src/HistoryHandle.cpp.o: CMakeFiles/fusion.dir/flags.make
CMakeFiles/fusion.dir/src/HistoryHandle.cpp.o: ../src/HistoryHandle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yc/ros/fusion/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/fusion.dir/src/HistoryHandle.cpp.o"
	/usr/bin/clang++-12  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fusion.dir/src/HistoryHandle.cpp.o -c /home/yc/ros/fusion/src/HistoryHandle.cpp

CMakeFiles/fusion.dir/src/HistoryHandle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fusion.dir/src/HistoryHandle.cpp.i"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yc/ros/fusion/src/HistoryHandle.cpp > CMakeFiles/fusion.dir/src/HistoryHandle.cpp.i

CMakeFiles/fusion.dir/src/HistoryHandle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fusion.dir/src/HistoryHandle.cpp.s"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yc/ros/fusion/src/HistoryHandle.cpp -o CMakeFiles/fusion.dir/src/HistoryHandle.cpp.s

CMakeFiles/fusion.dir/src/Main.cpp.o: CMakeFiles/fusion.dir/flags.make
CMakeFiles/fusion.dir/src/Main.cpp.o: ../src/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yc/ros/fusion/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/fusion.dir/src/Main.cpp.o"
	/usr/bin/clang++-12  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fusion.dir/src/Main.cpp.o -c /home/yc/ros/fusion/src/Main.cpp

CMakeFiles/fusion.dir/src/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fusion.dir/src/Main.cpp.i"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yc/ros/fusion/src/Main.cpp > CMakeFiles/fusion.dir/src/Main.cpp.i

CMakeFiles/fusion.dir/src/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fusion.dir/src/Main.cpp.s"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yc/ros/fusion/src/Main.cpp -o CMakeFiles/fusion.dir/src/Main.cpp.s

CMakeFiles/fusion.dir/src/PointHandle.cpp.o: CMakeFiles/fusion.dir/flags.make
CMakeFiles/fusion.dir/src/PointHandle.cpp.o: ../src/PointHandle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yc/ros/fusion/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/fusion.dir/src/PointHandle.cpp.o"
	/usr/bin/clang++-12  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fusion.dir/src/PointHandle.cpp.o -c /home/yc/ros/fusion/src/PointHandle.cpp

CMakeFiles/fusion.dir/src/PointHandle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fusion.dir/src/PointHandle.cpp.i"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yc/ros/fusion/src/PointHandle.cpp > CMakeFiles/fusion.dir/src/PointHandle.cpp.i

CMakeFiles/fusion.dir/src/PointHandle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fusion.dir/src/PointHandle.cpp.s"
	/usr/bin/clang++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yc/ros/fusion/src/PointHandle.cpp -o CMakeFiles/fusion.dir/src/PointHandle.cpp.s

# Object files for target fusion
fusion_OBJECTS = \
"CMakeFiles/fusion.dir/src/FusionNode.cpp.o" \
"CMakeFiles/fusion.dir/src/GridFusion.cpp.o" \
"CMakeFiles/fusion.dir/src/HistoryHandle.cpp.o" \
"CMakeFiles/fusion.dir/src/Main.cpp.o" \
"CMakeFiles/fusion.dir/src/PointHandle.cpp.o"

# External object files for target fusion
fusion_EXTERNAL_OBJECTS =

fusion: CMakeFiles/fusion.dir/src/FusionNode.cpp.o
fusion: CMakeFiles/fusion.dir/src/GridFusion.cpp.o
fusion: CMakeFiles/fusion.dir/src/HistoryHandle.cpp.o
fusion: CMakeFiles/fusion.dir/src/Main.cpp.o
fusion: CMakeFiles/fusion.dir/src/PointHandle.cpp.o
fusion: CMakeFiles/fusion.dir/build.make
fusion: /opt/ros/foxy/lib/librclcpp.so
fusion: /opt/ros/foxy/lib/libnav_msgs__rosidl_typesupport_introspection_c.so
fusion: /opt/ros/foxy/lib/libnav_msgs__rosidl_typesupport_c.so
fusion: /opt/ros/foxy/lib/libnav_msgs__rosidl_typesupport_introspection_cpp.so
fusion: /opt/ros/foxy/lib/libnav_msgs__rosidl_typesupport_cpp.so
fusion: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
fusion: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_c.so
fusion: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
fusion: /opt/ros/foxy/lib/libsensor_msgs__rosidl_typesupport_cpp.so
fusion: /home/yc/ros/MMW/install/mmw_msgs_ros2/lib/libmmw_msgs_ros2__rosidl_typesupport_introspection_c.so
fusion: /home/yc/ros/MMW/install/mmw_msgs_ros2/lib/libmmw_msgs_ros2__rosidl_typesupport_c.so
fusion: /home/yc/ros/MMW/install/mmw_msgs_ros2/lib/libmmw_msgs_ros2__rosidl_typesupport_introspection_cpp.so
fusion: /home/yc/ros/MMW/install/mmw_msgs_ros2/lib/libmmw_msgs_ros2__rosidl_typesupport_cpp.so
fusion: /usr/lib/x86_64-linux-gnu/libboost_system.so
fusion: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
fusion: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
fusion: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
fusion: /usr/lib/x86_64-linux-gnu/libboost_regex.so
fusion: /usr/lib/x86_64-linux-gnu/libqhull.so
fusion: /usr/lib/x86_64-linux-gnu/libfreetype.so
fusion: /usr/lib/x86_64-linux-gnu/libz.so
fusion: /usr/lib/x86_64-linux-gnu/libjpeg.so
fusion: /usr/lib/x86_64-linux-gnu/libpng.so
fusion: /usr/lib/x86_64-linux-gnu/libtiff.so
fusion: /usr/lib/x86_64-linux-gnu/libexpat.so
fusion: /usr/lib/x86_64-linux-gnu/libpcl_common.so
fusion: /opt/ros/foxy/lib/liblibstatistics_collector.so
fusion: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
fusion: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
fusion: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
fusion: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
fusion: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
fusion: /opt/ros/foxy/lib/librcl.so
fusion: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
fusion: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
fusion: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
fusion: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
fusion: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
fusion: /opt/ros/foxy/lib/librmw_implementation.so
fusion: /opt/ros/foxy/lib/librmw.so
fusion: /opt/ros/foxy/lib/librcl_logging_spdlog.so
fusion: /usr/lib/x86_64-linux-gnu/libspdlog.so.1.5.0
fusion: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
fusion: /opt/ros/foxy/lib/libyaml.so
fusion: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
fusion: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
fusion: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
fusion: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
fusion: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
fusion: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
fusion: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
fusion: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
fusion: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
fusion: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
fusion: /opt/ros/foxy/lib/libtracetools.so
fusion: /opt/ros/foxy/lib/libnav_msgs__rosidl_generator_c.so
fusion: /opt/ros/foxy/lib/libsensor_msgs__rosidl_generator_c.so
fusion: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
fusion: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_generator_c.so
fusion: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_c.so
fusion: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
fusion: /opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
fusion: /home/yc/ros/MMW/install/mmw_msgs_ros2/lib/libmmw_msgs_ros2__rosidl_generator_c.so
fusion: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
fusion: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
fusion: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
fusion: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
fusion: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
fusion: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
fusion: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
fusion: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
fusion: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
fusion: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
fusion: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
fusion: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
fusion: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
fusion: /opt/ros/foxy/lib/librosidl_typesupport_c.so
fusion: /opt/ros/foxy/lib/librcpputils.so
fusion: /opt/ros/foxy/lib/librosidl_runtime_c.so
fusion: /opt/ros/foxy/lib/librcutils.so
fusion: CMakeFiles/fusion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yc/ros/fusion/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable fusion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fusion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fusion.dir/build: fusion

.PHONY : CMakeFiles/fusion.dir/build

CMakeFiles/fusion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fusion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fusion.dir/clean

CMakeFiles/fusion.dir/depend:
	cd /home/yc/ros/fusion/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yc/ros/fusion /home/yc/ros/fusion /home/yc/ros/fusion/build /home/yc/ros/fusion/build /home/yc/ros/fusion/build/CMakeFiles/fusion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fusion.dir/depend

