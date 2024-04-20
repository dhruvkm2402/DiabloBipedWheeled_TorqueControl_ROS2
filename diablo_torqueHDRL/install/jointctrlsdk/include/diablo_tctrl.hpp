#pragma once

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float32_multi_array.hpp" 
using std::placeholders::_1;
class TorqueSubscriber : public rclcpp::Node
{
public:
    TorqueSubscriber();

    // Public member function to access torque values
    const float* getTorqueValues() const;

private:
    void torque_callback(const std_msgs::msg::Float32MultiArray::SharedPtr msg);

    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr subscription_;
    float torque_values_[6] = {0}; 
};
