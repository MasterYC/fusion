#pragma once
#include<sensor_msgs/msg/point_cloud2.hpp>
#include<geometry_msgs/msg/pose_stamped.hpp>
#include<pcl_conversions/pcl_conversions.h>
class PointHandle{
public:
  PointHandle();
  ~PointHandle();
  void run();
  inline void setMessage(sensor_msgs::msg::PointCloud2::SharedPtr point_message,geometry_msgs::msg::PoseStamped::SharedPtr pose_messsage){
    point_msg=point_message;
    pose_msg=pose_messsage;
  }
  inline int8_t** getMap(){return map;}
private:
  sensor_msgs::msg::PointCloud2::SharedPtr point_msg;
  geometry_msgs::msg::PoseStamped::SharedPtr pose_msg;
  int8_t** map;
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud;
private:
  void Rotate();
  void setMap();
};