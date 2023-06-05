#pragma once
#include<mmw_msgs_ros2/msg/mmw_status.hpp>
//#include <boost/noncopyable.hpp>
class MmwHandle{
public:
  MmwHandle();
  ~MmwHandle();
  void run();
  inline void setMessage(mmw_msgs_ros2::msg::MmwStatus::SharedPtr mmw_message){mmw_msg=mmw_message;}
  inline int8_t** getMap(){return map;}
private:
  int8_t** map;
  mmw_msgs_ros2::msg::MmwStatus::SharedPtr mmw_msg;

private:

};