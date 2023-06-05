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
  
}

