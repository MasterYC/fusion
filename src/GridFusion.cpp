#include "GridFusion.h"
#include "Define.h"
#include <thread>


GridFusion::GridFusion(){
  map=new int8_t*[height];
  for(int i=0;i<height;++i)
    map[i]=new int8_t[width];
}

GridFusion::~GridFusion(){
  for(int i=0;i<height;++i)
    delete [] map[i];
  delete [] map;
}


void GridFusion::run(){
  grid_msg=std::make_shared<nav_msgs::msg::OccupancyGrid>();
  for(int i=0;i<height;++i){
    memset(map[i], 0, width*sizeof(int8_t));
  }
  
  point_handle.setMessage(point_msg, pose_msg);
  std::thread t1{&PointHandle::run,&point_handle};

  history_handle.setMessage(pose_msg);
  std::thread t2{&HistoryHandle::run,&history_handle};

  mmw_handle.setMessage(mmw_msg);
  std::thread t3{&MmwHandle::run,&mmw_handle};

  t1.join();
  t2.join();
  t3.join();

  int8_t** map1=point_handle.getMap();
  int8_t** map2=history_handle.getMap();
  int8_t** map3=mmw_handle.getMap();

  for(int j=0;j<height;++j){
    for(int i=0;i<width;++i){
      map[j][i]=map1[j][i]|map2[j][i]|map3[j][i];
    }
  }
  history_handle.LocalToGlobal(map);
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
