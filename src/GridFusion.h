#pragma once
#include<nav_msgs/msg/occupancy_grid.hpp>
#include<geometry_msgs/msg/pose_stamped.hpp>
#include<sensor_msgs/msg/point_cloud2.hpp>
#include <boost/circular_buffer.hpp>
#include "HistoryHandle.h"

class GridFusion{
public:
  GridFusion();
  ~GridFusion();
  void setMessage(sensor_msgs::msg::PointCloud2::SharedPtr point_message,geometry_msgs::msg::PoseStamped::SharedPtr pose_message);
  void run();
  inline nav_msgs::msg::OccupancyGrid::SharedPtr getGrid(){return grid_msg;}
private:
  boost::circular_buffer<Position> history_position;
  sensor_msgs::msg::PointCloud2::SharedPtr point_msg;
  geometry_msgs::msg::PoseStamped::SharedPtr pose_msg;
  nav_msgs::msg::OccupancyGrid::SharedPtr grid_msg;

  int8_t** map;

  void setGrid();
};