#include "rclcpp/rclcpp.hpp"
#include "torque_interfaces/msg/torque.hpp" // Replace torque_subscriber with the actual name of your package

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
    auto node = std::make_shared<TorqueSubscriber>();
    
    // Spin the node once to process any received messages
    

    // Access the torque_values array
    const auto& torque_values = node->getTorqueValues();
    float torque_values2[6];

    // Now you can use the torque_values array in the main function
    // For example, print the values
    for (size_t i = 0; i < torque_values.size(); ++i)
    {
        torque_values2[i] = torque_values[i];
        std::cout << "Torque value " << i << ": " << torque_values2[i] << std::endl;
    }
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}