// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from torque_interfaces:msg/Torque.idl
// generated code does not contain a copyright notice
#include "torque_interfaces/msg/detail/torque__rosidl_typesupport_fastrtps_cpp.hpp"
#include "torque_interfaces/msg/detail/torque__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: t_hr
  cdr << ros_message.t_hr;
  // Member: t_kr
  cdr << ros_message.t_kr;
  // Member: t_wr
  cdr << ros_message.t_wr;
  // Member: t_hl
  cdr << ros_message.t_hl;
  // Member: t_kl
  cdr << ros_message.t_kl;
  // Member: t_wl
  cdr << ros_message.t_wl;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torque_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  torque_interfaces::msg::Torque & ros_message)
{
  // Member: t_hr
  cdr >> ros_message.t_hr;

  // Member: t_kr
  cdr >> ros_message.t_kr;

  // Member: t_wr
  cdr >> ros_message.t_wr;

  // Member: t_hl
  cdr >> ros_message.t_hl;

  // Member: t_kl
  cdr >> ros_message.t_kl;

  // Member: t_wl
  cdr >> ros_message.t_wl;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torque_interfaces
get_serialized_size(
  const torque_interfaces::msg::Torque & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: t_hr
  {
    size_t item_size = sizeof(ros_message.t_hr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_kr
  {
    size_t item_size = sizeof(ros_message.t_kr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_wr
  {
    size_t item_size = sizeof(ros_message.t_wr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_hl
  {
    size_t item_size = sizeof(ros_message.t_hl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_kl
  {
    size_t item_size = sizeof(ros_message.t_kl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_wl
  {
    size_t item_size = sizeof(ros_message.t_wl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_torque_interfaces
max_serialized_size_Torque(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: t_hr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_kr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_wr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_hl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_kl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: t_wl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Torque__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const torque_interfaces::msg::Torque *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Torque__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<torque_interfaces::msg::Torque *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Torque__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const torque_interfaces::msg::Torque *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Torque__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Torque(full_bounded, 0);
}

static message_type_support_callbacks_t _Torque__callbacks = {
  "torque_interfaces::msg",
  "Torque",
  _Torque__cdr_serialize,
  _Torque__cdr_deserialize,
  _Torque__get_serialized_size,
  _Torque__max_serialized_size
};

static rosidl_message_type_support_t _Torque__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Torque__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace torque_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_torque_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<torque_interfaces::msg::Torque>()
{
  return &torque_interfaces::msg::typesupport_fastrtps_cpp::_Torque__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, torque_interfaces, msg, Torque)() {
  return &torque_interfaces::msg::typesupport_fastrtps_cpp::_Torque__handle;
}

#ifdef __cplusplus
}
#endif
