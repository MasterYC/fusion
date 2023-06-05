#pragma once
#include <rclcpp/rclcpp.hpp>
#include<nav_msgs/msg/occupancy_grid.hpp>
#include<geometry_msgs/msg/pose_stamped.hpp>
#include<sensor_msgs/msg/point_cloud2.hpp>
#include <boost/circular_buffer.hpp>
#include<mmw_msgs_ros2/msg/mmw_status.hpp>
#include"GridFusion.h"



class FusionNode:public rclcpp::Node{
public:
  FusionNode();
  void run();

  inline std::shared_ptr<FusionNode> shared_from_this(){return std::static_pointer_cast<FusionNode>(rclcpp::Node::shared_from_this());}

private:
  rclcpp::Publisher<nav_msgs::msg::OccupancyGrid>::SharedPtr grid_pub;

  rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr point_sub;
  rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub;
  rclcpp::Subscription<mmw_msgs_ros2::msg::MmwStatus>::SharedPtr mmw_sub;

  rclcpp::TimerBase::SharedPtr timer;

  boost::circular_buffer<sensor_msgs::msg::PointCloud2::SharedPtr> point_sub_msg;
  boost::circular_buffer<geometry_msgs::msg::PoseStamped::SharedPtr> pose_sub_msg;
  boost::circular_buffer<mmw_msgs_ros2::msg::MmwStatus::SharedPtr> mmw_msg;
  //boost::circular_buffer<Position> history_position;

  nav_msgs::msg::OccupancyGrid::SharedPtr grid_pub_msg;

private:
  void onPointSub(sensor_msgs::msg::PointCloud2::SharedPtr point_message);
  void onPoseSub(geometry_msgs::msg::PoseStamped::SharedPtr pose_message);
  void onMmwSub(mmw_msgs_ros2::msg::MmwStatus::SharedPtr mmw_message);
  void onTime();
  void runFusion();

  GridFusion algo;
};