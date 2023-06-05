#include "PointHandle.h"
#include "Define.h"
//#include <pcl/point_types.h>

PointHandle::PointHandle(){
  map=new int8_t*[height];
  for(int i=0;i<height;++i){
    map[i]=new int8_t[width];
  }
}

PointHandle::~PointHandle(){
  for(int i=0;i<height;++i)
    delete [] map[i];
  delete [] map;
}


void PointHandle::run(){
  for(int i=0;i<height;++i){
    memset(map[i], 0, width*sizeof(int8_t));
  }
  cloud=boost::make_shared<pcl::PointCloud<pcl::PointXYZ>>();
  pcl::fromROSMsg(*point_msg,*cloud);
  Rotate();
  setMap();
}

void PointHandle::Rotate(){
  Eigen::Quaterniond quaternion(pose_msg->pose.orientation.w,pose_msg->pose.orientation.x,pose_msg->pose.orientation.y,pose_msg->pose.orientation.z);
  Eigen::Matrix3d rotation_matrix=quaternion.toRotationMatrix();
  auto size=cloud->size();
  for(size_t i=0;i<size;++i){
    Eigen::Vector3d v1(static_cast<double>(cloud->points[i].x),static_cast<double>(cloud->points[i].y),static_cast<double>(cloud->points[i].z));
    Eigen::Vector3d v2=rotation_matrix*v1;
    cloud->points[i].x=v2[0];
    cloud->points[i].y=v2[1];
    cloud->points[i].z=v2[2]; 
  }
}

void PointHandle::setMap(){
  auto size=cloud->size();
  float x;
  float y;
  for(size_t i=0;i<size;++i){
    x=cloud->points[i].x+actual_half_width;
    y=cloud->points[i].y+actual_half_height;
    if(x>=0&&x<actual_width&&y>=0&&y<actual_height){
      map[static_cast<int>(y/resolution)][static_cast<int>(x/resolution)]=100;
    }
  }
}