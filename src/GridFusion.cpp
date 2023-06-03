#include "GridFusion.h"
#include "Define.h"
#include <thread>
#include "PointHandle.h"



GridFusion::GridFusion():history_position{1000}{
  map=new int8_t*[height];
  for(int i=0;i<height;++i)
    map[i]=new int8_t[width];
}

GridFusion::~GridFusion(){
  for(int i=0;i<height;++i)
    delete [] map[i];
  delete [] map;
}

void GridFusion::setMessage(sensor_msgs::msg::PointCloud2::SharedPtr point_message, geometry_msgs::msg::PoseStamped::SharedPtr pose_message){
  point_msg=point_message;
  pose_msg=pose_message;
}

void GridFusion::run(){
  grid_msg=std::make_shared<nav_msgs::msg::OccupancyGrid>();
  for(int i=0;i<height;++i)
    for(int j=0;j<width;++j)
      map[i][j]=0;
  
  PointHandle pointhandle{point_msg,pose_msg};
  HistoryHandle historyhandle{history_position,pose_msg};
  std::thread t1{&PointHandle::run,&pointhandle};
  std::thread t2{&HistoryHandle::run,&historyhandle};
  t1.join();
  t2.join();
  int8_t** map1=pointhandle.getMap();
  int8_t** map2=historyhandle.getMap();

  for(int j=0;j<height;++j){
    for(int i=0;i<width;++i){
      map[j][i]=map1[j][i]|map2[j][i];
    }
  }
  historyhandle.LocalToGlobal(map);
  setGrid();

}

void GridFusion::setGrid(){
  grid_msg->info.height=height;
  grid_msg->info.width=width;
  grid_msg->info.resolution=resolution;
  grid_msg->info.origin=pose_msg->pose;
  grid_msg->data.reserve(height*width);
  for(int j=0;j<height;++j){
    for(int i=0;i<width;++i){
      grid_msg->data.push_back(map[j][i]);
    }
  }
}
