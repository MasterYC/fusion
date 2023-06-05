#include "HistoryHandle.h"
#include "Define.h"
#include <cstring>
HistoryHandle::HistoryHandle()
:history_position{1000}{
  map=new int8_t*[height];
  for(int i=0;i<height;++i){
    map[i]=new int8_t[width];
  }
}

HistoryHandle::~HistoryHandle(){
  for(int i=0;i<height;++i)
    delete [] map[i];
  delete [] map;
}



void HistoryHandle::run(){
  for(int i=0;i<height;++i){
    memset(map[i], 0, width*sizeof(int8_t));
  }
  GlobalToLocal();
}

void HistoryHandle::GlobalToLocal(){
  auto end=history_position.end();
  //Position position={pose_msg->pose.position.x,pose_msg->pose.position.y};
  int64_t x_min=pose_msg->pose.position.x/resolution-width*0.5;
  int64_t x_max=pose_msg->pose.position.x/resolution+width*0.5;
  int64_t y_min=pose_msg->pose.position.y/resolution-height*0.5;
  int64_t y_max=pose_msg->pose.position.y/resolution+height*0.5;

  for(auto it=history_position.begin();it!=end;++it){ 
    if(it->x>=x_min&&it->x<x_max&&it->y>=y_min&&it->y<y_max){
      int y_index=it->y-y_min;
      int x_index=it->x-x_min;
      map[y_index][x_index]=100;
    }
  }
}

void HistoryHandle::LocalToGlobal(int8_t** _map){
  int64_t x=pose_msg->pose.position.x/resolution-width*0.5;
  int64_t y=pose_msg->pose.position.y/resolution-height*0.5;
  for(int j=0;j<height;++j){
    for(int i=0;i<width;++i){
      if(_map[j][i]==100){
        history_position.push_back(Position{x+i,y+j});
      }
    }
  }
}