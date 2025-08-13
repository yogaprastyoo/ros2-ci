#include <rclcpp/rclcpp.hpp>

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("simple_node");

  rclcpp::WallRate rate(1.0);

  while (rclcpp::ok())
  {
    RCLCPP_INFO(node->get_logger(), "Hello from simple_node");
    rclcpp::spin_some(node);
    rate.sleep();
  }
  rclcpp::shutdown();
  return 0;
}