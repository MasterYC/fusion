#include <rclcpp/rclcpp.hpp>
#include<mmw_msgs_ros2/msg/mmw_status.hpp>
#include<sensor_msgs/msg/point_cloud2.hpp>
#include<nav_msgs/msg/occupancy_grid.hpp>
#include <pcl_conversions/pcl_conversions.h>
#include <iostream>
#include <cmath>
#include "Define.h"

const double pi = std::acos(-1);
int main(int argc,char* argv[]){
  rclcpp::init(argc, argv);
  auto node=rclcpp::Node::make_shared("test_node");
  auto point_pub=node->create_publisher<sensor_msgs::msg::PointCloud2>("point_test", 10);
  auto grid_pub=node->create_publisher<nav_msgs::msg::OccupancyGrid>("grid_test", 10);
  auto mmw_sub=node->create_subscription<mmw_msgs_ros2::msg::MmwStatus>("mmw_test", 10, [&](mmw_msgs_ros2::msg::MmwStatus::SharedPtr mmw_msg){
    //std::cout<<"收到\n";
    

    auto size=mmw_msg->data[0].target_info.size();
    auto& data=mmw_msg->data[0].target_info;
    sensor_msgs::msg::PointCloud2 point_msg;
    nav_msgs::msg::OccupancyGrid grid_msg;
    //point_msg.header=mmw_msg->header;
    //grid_msg.header=mmw_msg->header;

    pcl::PointCloud<pcl::PointXYZ> cloud;
    cloud.reserve(size);
    for(size_t i=0;i<size;++i){
      auto range=((data[i].cluster_range>>8)*256+(data[i].cluster_range&0x00ff))*0.01;
      auto radio=(data[i].cluster_azimuth-90)*(pi/180);
      if(radio<0){
        radio=abs(radio);
        pcl::PointXYZ point(sin(radio)*range,cos(radio)*range,0);
        cloud.push_back(point);
      }else{
        pcl::PointXYZ point(-sin(radio)*range,cos(radio)*range,0);
        cloud.push_back(point);
      }    
    }
    int8_t**  map=new int8_t*[height];
    for(int i=0;i<height;++i)
      map[i]=new int8_t[width];
    for(int i=0;i<height;++i){
      memset(map[i], 0, width*sizeof(int8_t));
    }

    float x;
    float y;
    for(size_t i=0;i<size;++i){
      x=cloud.points[i].x+actual_half_width;
      y=cloud.points[i].y+actual_half_height;
      if(x>=0&&x<actual_width&&y>=0&&y<actual_height){
        map[static_cast<int>(y/resolution)][static_cast<int>(x/resolution)]=100;
      }
    }
    grid_msg.info.height=height;
    grid_msg.info.width=width;
    grid_msg.info.resolution=resolution;
    grid_msg.data.reserve(height*width);
    for(int j=0;j<height;++j){
      for(int i=0;i<width;++i){
        grid_msg.data.push_back(map[j][i]);
      }
    }
    grid_msg.header.frame_id="map";
    grid_msg.header.stamp=node->get_clock()->now();
    grid_msg.info.origin.position.x=-10;
    grid_msg.info.origin.position.y=-10;
    grid_msg.info.origin.position.z=0;

    


    pcl::toROSMsg(cloud,point_msg);
    point_msg.header=mmw_msg->header;
    point_msg.header.frame_id="map";
    point_pub->publish(point_msg);
    grid_pub->publish(grid_msg);
  });
  rclcpp::spin(node);
  rclcpp::shutdown();
}