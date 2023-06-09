#include "GridNode.h"
#include <thread>

GridNode::GridNode():rclcpp::Node{"Grid_node"},point_sub_msg{100},pose_sub_msg{100}{
  
  grid_pub_msg=std::make_shared<nav_msgs::msg::OccupancyGrid>();
  grid_pub_msg->header.frame_id="map";
  grid_pub_msg->header.stamp=get_clock()->now();
  grid_pub_msg->info.height=2;
  grid_pub_msg->info.width=4;
  grid_pub_msg->info.resolution=1;
  grid_pub_msg->info.origin.position.x=1;
  grid_pub_msg->info.origin.position.y=0;
  grid_pub_msg->info.origin.position.z=0;
  grid_pub_msg->data.resize(8);
  grid_pub_msg->data[0]=100;
  grid_pub_msg->data[1]=100;
  grid_pub_msg->data[2]=0;
  grid_pub_msg->data[3]=-1;
}

void GridNode::run(){


  point_sub=create_subscription<sensor_msgs::msg::PointCloud2>("/pre_point", 10, std::bind(&GridNode::onPointSub,shared_from_this(),std::placeholders::_1));
  pose_sub=create_subscription<geometry_msgs::msg::PoseStamped>("/pose", 10,std::bind(&GridNode::onPoseSub,shared_from_this(),std::placeholders::_1));
  mmw_sub=create_subscription<mmw_msgs_ros2::msg::MmwStatus>("/mmw", 10,std::bind(&GridNode::onMmwSub,shared_from_this(),std::placeholders::_1));

  grid_pub=create_publisher<nav_msgs::msg::OccupancyGrid>("/gridMap", 10);
  timer=create_wall_timer(std::chrono::milliseconds{50}, std::bind(&GridNode::onTime,shared_from_this()));
  std::thread t{&GridNode::runFusion,shared_from_this()};
  t.detach();
}

void GridNode::onTime(){
  if(grid_pub_msg)grid_pub->publish(*grid_pub_msg);
}

void GridNode::onPointSub(sensor_msgs::msg::PointCloud2::SharedPtr point_message){
  point_sub_msg.push_back(point_message);
}
   
void GridNode::onPoseSub(geometry_msgs::msg::PoseStamped::SharedPtr pose_message){
  pose_sub_msg.push_back(pose_message);
}

void GridNode::onMmwSub(mmw_msgs_ros2::msg::MmwStatus::SharedPtr mmw_message){
  mmw_msg.push_back(mmw_message);
}

void GridNode::runFusion(){
  // while (true) {
  //   auto pose_message=pose_sub_msg.back();
  //   auto point_message=point_sub_msg.back();



  // }

}


