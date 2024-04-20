// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from torque_interfaces:msg/Torque.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_INTERFACES__MSG__DETAIL__TORQUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TORQUE_INTERFACES__MSG__DETAIL__TORQUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "torque_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "torque_interfaces/msg/detail/torque__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace torque_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torque_interfaces
cdr_serialize(
  const torque_interfaces::msg::Torque & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torque_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  torque_interfaces::msg::Torque & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torque_interfaces
get_serialized_size(
  const torque_interfaces::msg::Torque & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torque_interfaces
max_serialized_size_Torque(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace torque_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torque_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, torque_interfaces, msg, Torque)();

#ifdef __cplusplus
}
#endif

#endif  // TORQUE_INTERFACES__MSG__DETAIL__TORQUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
