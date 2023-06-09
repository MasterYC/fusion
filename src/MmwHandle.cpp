#include "MmwHandle.h"
#include "Define.h"

MmwHandle::MmwHandle(){
  map=new int8_t*[height];
  for(int i=0;i<height;++i){
    map[i]=new int8_t[width];
  }  
}

MmwHandle::~MmwHandle(){
  for(int i=0;i<height;++i)
    delete [] map[i];
  delete [] map; 
}



void MmwHandle::run() {
  auto data_size=mmw_msg->data[0].target_info.size();
  for(size_t i=0;i<data_size;++i){
    
  }
}

