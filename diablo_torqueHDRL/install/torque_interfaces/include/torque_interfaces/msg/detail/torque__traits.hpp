// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from torque_interfaces:msg/Torque.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_INTERFACES__MSG__DETAIL__TORQUE__TRAITS_HPP_
#define TORQUE_INTERFACES__MSG__DETAIL__TORQUE__TRAITS_HPP_

#include "torque_interfaces/msg/detail/torque__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<torque_interfaces::msg::Torque>()
{
  return "torque_interfaces::msg::Torque";
}

template<>
inline const char * name<torque_interfaces::msg::Torque>()
{
  return "torque_interfaces/msg/Torque";
}

template<>
struct has_fixed_size<torque_interfaces::msg::Torque>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<torque_interfaces::msg::Torque>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<torque_interfaces::msg::Torque>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TORQUE_INTERFACES__MSG__DETAIL__TORQUE__TRAITS_HPP_
