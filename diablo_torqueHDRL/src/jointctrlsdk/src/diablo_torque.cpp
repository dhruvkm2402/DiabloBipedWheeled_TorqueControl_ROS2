//#include <iostream>
//#include <memory>
//#include "diablo_tctrl.hpp"
#include "serial_handle.hpp"
//using std::placeholders::_1;
#include "rclcpp/rclcpp.hpp"
//#include "std_msgs/msg/float32_multi_array.hpp"
#include "torque_interfaces/msg/torque.hpp"

// Define a class to handle the subscription and store torque values
class TorqueSubscriber : public rclcpp::Node
{
public:
    TorqueSubscriber() : Node("torque_subscriber")
    {
        subscription_ = this->create_subscription<torque_interfaces::msg::Torque>(
            "torque_msg", 10, std::bind(&TorqueSubscriber::torque_callback, this, std::placeholders::_1));
    }

    // Public method to access torque_values array
    const std::array<float, 6>& getTorqueValues() const
    {
        return torque_values_;
    }

private:
    void torque_callback(const torque_interfaces::msg::Torque::SharedPtr msg)
    {
        // Fill the float array with the values received
        torque_values_ = {msg->t_hr, msg->t_kr, msg->t_wr, msg->t_hl, msg->t_kl, msg->t_wl};

        // Print the received torque values
        RCLCPP_INFO(this->get_logger(), "Received torque values: [%f, %f, %f, %f, %f, %f]",
                    torque_values_[0], torque_values_[1], torque_values_[2],
                    torque_values_[3], torque_values_[4], torque_values_[5]);

        // Use the torque values as needed
        // ...
    }

    std::array<float, 6> torque_values_;
    
    rclcpp::Subscription<torque_interfaces::msg::Torque>::SharedPtr subscription_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    
    SerialHandle handle;
    motor_torque_t send_struct;
    handle.serial_init("/dev/ttyAMA0");
    uint8_t status = 0;
    uint32_t counter = 0;
    
    float torque_values2[6];
    
    auto node = std::make_shared<TorqueSubscriber>();
    
 
   // 
    
    while (rclcpp::ok()) // Continuously loop as long as the ROS 2 node is running
    {
        // Assuming torque values are received and stored in the TorqueSubscriber instance
        
        
        //float torque_values2[6] = {1.0,2.0,2.0,1.0,1.0,2.0};
       // float torque_values2[6] = {*torque_values};
        
       
            //std::cout << std::endl;
    
        rclcpp::spin_some(node);
        const auto& torque_values = node->getTorqueValues();
        for(int i=0; i<6; ++i)
        {
            torque_values2[i] = torque_values[i];
        }
  
        //float torque_values3[6] = {1.0,2.5,2.0,1.0,2.5,2.0};
        handle.create_package(torque_values2, send_struct);

        switch (status)
        {
            case 0:
                handle.start_joint_sdk();
                counter++;
                if (counter >= 10)
                {
                    status = 1;
                }
                usleep(10000);
                break;
            case 1:
                handle.send_commond(send_struct);
                break;
        }

        //sleep(1);
        usleep(1500);
         // Process any callbacks waiting to be processed
    } 
    
    rclcpp::shutdown(); // Cleanly shutdown the ROS 2 node
    return 0;
}
