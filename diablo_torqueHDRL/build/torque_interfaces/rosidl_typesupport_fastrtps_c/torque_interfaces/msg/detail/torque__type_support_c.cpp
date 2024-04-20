// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from torque_interfaces:msg/Torque.idl
// generated code does not contain a copyright notice
#include "torque_interfaces/msg/detail/torque__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "torque_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "torque_interfaces/msg/detail/torque__struct.h"
#include "torque_interfaces/msg/detail/torque__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Torque__ros_msg_type = torque_interfaces__msg__Torque;

static bool _Torque__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Torque__ros_msg_type * ros_message = static_cast<const _Torque__ros_msg_type *>(untyped_ros_message);
  // Field name: t_hr
  {
    cdr << ros_message->t_hr;
  }

  // Field name: t_kr
  {
    cdr << ros_message->t_kr;
  }

  // Field name: t_wr
  {
    cdr << ros_message->t_wr;
  }

  // Field name: t_hl
  {
    cdr << ros_message->t_hl;
  }

  // Field name: t_kl
  {
    cdr << ros_message->t_kl;
  }

  // Field name: t_wl
  {
    cdr << ros_message->t_wl;
  }

  return true;
}

static bool _Torque__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Torque__ros_msg_type * ros_message = static_cast<_Torque__ros_msg_type *>(untyped_ros_message);
  // Field name: t_hr
  {
    cdr >> ros_message->t_hr;
  }

  // Field name: t_kr
  {
    cdr >> ros_message->t_kr;
  }

  // Field name: t_wr
  {
    cdr >> ros_message->t_wr;
  }

  // Field name: t_hl
  {
    cdr >> ros_message->t_hl;
  }

  // Field name: t_kl
  {
    cdr >> ros_message->t_kl;
  }

  // Field name: t_wl
  {
    cdr >> ros_message->t_wl;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_torque_interfaces
size_t get_serialized_size_torque_interfaces__msg__Torque(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Torque__ros_msg_type * ros_message = static_cast<const _Torque__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name t_hr
  {
    size_t item_size = sizeof(ros_message->t_hr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_kr
  {
    size_t item_size = sizeof(ros_message->t_kr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_wr
  {
    size_t item_size = sizeof(ros_message->t_wr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_hl
  {
    size_t item_size = sizeof(ros_message->t_hl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_kl
  {
    size_t item_size = sizeof(ros_message->t_kl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_wl
  {
    size_t item_size = sizeof(ros_message->t_wl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Torque__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_torque_interfaces__msg__Torque(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_torque_interfaces
size_t max_serialized_size_torque_interfaces__msg__Torque(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: t_hr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_kr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_wr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_hl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_kl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: t_wl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Torque__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_torque_interfaces__msg__Torque(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Torque = {
  "torque_interfaces::msg",
  "Torque",
  _Torque__cdr_serialize,
  _Torque__cdr_deserialize,
  _Torque__get_serialized_size,
  _Torque__max_serialized_size
};

static rosidl_message_type_support_t _Torque__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Torque,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, torque_interfaces, msg, Torque)() {
  return &_Torque__type_support;
}

#if defined(__cplusplus)
}
#endif
