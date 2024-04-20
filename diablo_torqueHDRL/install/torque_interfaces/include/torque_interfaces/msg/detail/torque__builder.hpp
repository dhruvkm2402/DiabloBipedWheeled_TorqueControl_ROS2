// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from torque_interfaces:msg/Torque.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_INTERFACES__MSG__DETAIL__TORQUE__BUILDER_HPP_
#define TORQUE_INTERFACES__MSG__DETAIL__TORQUE__BUILDER_HPP_

#include "torque_interfaces/msg/detail/torque__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace torque_interfaces
{

namespace msg
{

namespace builder
{

class Init_Torque_t_wl
{
public:
  explicit Init_Torque_t_wl(::torque_interfaces::msg::Torque & msg)
  : msg_(msg)
  {}
  ::torque_interfaces::msg::Torque t_wl(::torque_interfaces::msg::Torque::_t_wl_type arg)
  {
    msg_.t_wl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::torque_interfaces::msg::Torque msg_;
};

class Init_Torque_t_kl
{
public:
  explicit Init_Torque_t_kl(::torque_interfaces::msg::Torque & msg)
  : msg_(msg)
  {}
  Init_Torque_t_wl t_kl(::torque_interfaces::msg::Torque::_t_kl_type arg)
  {
    msg_.t_kl = std::move(arg);
    return Init_Torque_t_wl(msg_);
  }

private:
  ::torque_interfaces::msg::Torque msg_;
};

class Init_Torque_t_hl
{
public:
  explicit Init_Torque_t_hl(::torque_interfaces::msg::Torque & msg)
  : msg_(msg)
  {}
  Init_Torque_t_kl t_hl(::torque_interfaces::msg::Torque::_t_hl_type arg)
  {
    msg_.t_hl = std::move(arg);
    return Init_Torque_t_kl(msg_);
  }

private:
  ::torque_interfaces::msg::Torque msg_;
};

class Init_Torque_t_wr
{
public:
  explicit Init_Torque_t_wr(::torque_interfaces::msg::Torque & msg)
  : msg_(msg)
  {}
  Init_Torque_t_hl t_wr(::torque_interfaces::msg::Torque::_t_wr_type arg)
  {
    msg_.t_wr = std::move(arg);
    return Init_Torque_t_hl(msg_);
  }

private:
  ::torque_interfaces::msg::Torque msg_;
};

class Init_Torque_t_kr
{
public:
  explicit Init_Torque_t_kr(::torque_interfaces::msg::Torque & msg)
  : msg_(msg)
  {}
  Init_Torque_t_wr t_kr(::torque_interfaces::msg::Torque::_t_kr_type arg)
  {
    msg_.t_kr = std::move(arg);
    return Init_Torque_t_wr(msg_);
  }

private:
  ::torque_interfaces::msg::Torque msg_;
};

class Init_Torque_t_hr
{
public:
  Init_Torque_t_hr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Torque_t_kr t_hr(::torque_interfaces::msg::Torque::_t_hr_type arg)
  {
    msg_.t_hr = std::move(arg);
    return Init_Torque_t_kr(msg_);
  }

private:
  ::torque_interfaces::msg::Torque msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::torque_interfaces::msg::Torque>()
{
  return torque_interfaces::msg::builder::Init_Torque_t_hr();
}

}  // namespace torque_interfaces

#endif  // TORQUE_INTERFACES__MSG__DETAIL__TORQUE__BUILDER_HPP_
