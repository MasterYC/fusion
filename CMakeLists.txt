cmake_minimum_required(VERSION 3.5)
project(fusion)

find_package(rclcpp REQUIRED)
find_package(PCL REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(mmw_msgs_ros2 REQUIRED)

# include_directories(${rclcpp_INCLUDE_DIRS})
# include_directories(${std_msgs_INCLUDE_DIRS})


aux_source_directory(src src)
add_executable(fusion ${src})
ament_target_dependencies(fusion rclcpp nav_msgs geometry_msgs sensor_msgs PCL mmw_msgs_ros2)
# target_link_libraries(fusion rclcpp::rclcpp ament_cmake)