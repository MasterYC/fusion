#include "FusionNode.h"
#include <thread>
using namespace std::placeholders;
FusionNode::FusionNode():rclcpp::Node{"fusion_node"},point_sub_msg{100},pose_sub_msg{100}{
  
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

void FusionNode::run(){
  point_sub=create_subscription<sensor_msgs::msg::PointCloud2>("/pre_point", 10, std::bind(&FusionNode::onPointSub,shared_from_this(),_1));
  pose_sub=create_subscription<geometry_msgs::msg::PoseStamped>("/pose", 10,std::bind(&FusionNode::onPoseSub,shared_from_this(),_1));
  grid_pub=create_publisher<nav_msgs::msg::OccupancyGrid>("/gridMap", 10);
  timer=create_wall_timer(std::chrono::milliseconds{50}, std::bind(&FusionNode::onTime,shared_from_this()));
  std::thread t{&FusionNode::runFusion,shared_from_this()};
  t.detach();
}

void FusionNode::onTime(){
  if(grid_pub_msg)grid_pub->publish(*grid_pub_msg);
}

void FusionNode::onPointSub(sensor_msgs::msg::PointCloud2::SharedPtr point_message){
  point_sub_msg.push_back(point_message);
}
  
  
void FusionNode::onPoseSub(geometry_msgs::msg::PoseStamped::SharedPtr pose_message){
  pose_sub_msg.push_back(pose_message);
}

void FusionNode::runFusion(){
  // while (true) {
  //   auto pose_message=pose_sub_msg.back();
  //   auto point_message=point_sub_msg.back();



  // }

}


std::shared_ptr<FusionNode> FusionNode::shared_from_this(){
  return std::static_pointer_cast<FusionNode>(rclcpp::Node::shared_from_this());
}