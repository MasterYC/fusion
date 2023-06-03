#include"FusionNode.h"

int main(int argc,char* argv[]){
  rclcpp::init(argc, argv);
  auto node=std::make_shared<FusionNode>();
  node->run();
  rclcpp::spin(node);
  rclcpp::shutdown();
}                             