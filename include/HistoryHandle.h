#pragma once
#include<boost/circular_buffer.hpp>
#include<geometry_msgs/msg/pose_stamped.hpp>

struct Position{
  int64_t x;
  int64_t y;
};
class HistoryHandle{
public:

  HistoryHandle();
  ~HistoryHandle();
  inline void setMessage(geometry_msgs::msg::PoseStamped::SharedPtr pose_message){pose_msg=pose_message;}
  void run();
  void LocalToGlobal(int8_t** _map);
  inline int8_t** getMap(){return map;}

private:
  boost::circular_buffer<Position> history_position;
  geometry_msgs::msg::PoseStamped::SharedPtr pose_msg;
  int8_t** map;

private:
  void GlobalToLocal();
};