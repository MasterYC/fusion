#pragma once
#include<nav_msgs/msg/occupancy_grid.hpp>
#include<geometry_msgs/msg/pose_stamped.hpp>
#include<sensor_msgs/msg/point_cloud2.hpp>
#include <mmw_msgs_ros2/msg/mmw_status.hpp>
#include <boost/circular_buffer.hpp>
#include "HistoryHandle.h"
#include "PointHandle.h"
#include "MmwHandle.h"

class GridFusion{
public:
  GridFusion();
  ~GridFusion();
  inline void setMessage(sensor_msgs::msg::PointCloud2::SharedPtr point_message,geometry_msgs::msg::PoseStamped::SharedPtr pose_message,mmw_msgs_ros2::msg::MmwStatus::SharedPtr mmw_message){
    point_msg=point_message;
    pose_msg=pose_message;
    mmw_msg=mmw_message;
  }
  void run();
  inline nav_msgs::msg::OccupancyGrid::SharedPtr getGrid(){return grid_msg;}
private:
  //boost::circular_buffer<Position> history_position;

  sensor_msgs::msg::PointCloud2::SharedPtr point_msg;
  geometry_msgs::msg::PoseStamped::SharedPtr pose_msg;
  mmw_msgs_ros2::msg::MmwStatus::SharedPtr mmw_msg;

  nav_msgs::msg::OccupancyGrid::SharedPtr grid_msg;

  int8_t** map;
  
  HistoryHandle history_handle;
  PointHandle   point_handle;
  MmwHandle mmw_handle;

private:
  void setGrid();
};