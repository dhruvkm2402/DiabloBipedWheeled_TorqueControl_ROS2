// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from torque_interfaces:msg/Torque.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_INTERFACES__MSG__DETAIL__TORQUE__STRUCT_H_
#define TORQUE_INTERFACES__MSG__DETAIL__TORQUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Torque in the package torque_interfaces.
typedef struct torque_interfaces__msg__Torque
{
  float t_hr;
  float t_kr;
  float t_wr;
  float t_hl;
  float t_kl;
  float t_wl;
} torque_interfaces__msg__Torque;

// Struct for a sequence of torque_interfaces__msg__Torque.
typedef struct torque_interfaces__msg__Torque__Sequence
{
  torque_interfaces__msg__Torque * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} torque_interfaces__msg__Torque__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TORQUE_INTERFACES__MSG__DETAIL__TORQUE__STRUCT_H_
