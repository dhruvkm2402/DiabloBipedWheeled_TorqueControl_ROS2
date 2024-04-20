// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from torque_interfaces:msg/Torque.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_INTERFACES__MSG__DETAIL__TORQUE__STRUCT_HPP_
#define TORQUE_INTERFACES__MSG__DETAIL__TORQUE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__torque_interfaces__msg__Torque __attribute__((deprecated))
#else
# define DEPRECATED__torque_interfaces__msg__Torque __declspec(deprecated)
#endif

namespace torque_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Torque_
{
  using Type = Torque_<ContainerAllocator>;

  explicit Torque_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t_hr = 0.0f;
      this->t_kr = 0.0f;
      this->t_wr = 0.0f;
      this->t_hl = 0.0f;
      this->t_kl = 0.0f;
      this->t_wl = 0.0f;
    }
  }

  explicit Torque_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t_hr = 0.0f;
      this->t_kr = 0.0f;
      this->t_wr = 0.0f;
      this->t_hl = 0.0f;
      this->t_kl = 0.0f;
      this->t_wl = 0.0f;
    }
  }

  // field types and members
  using _t_hr_type =
    float;
  _t_hr_type t_hr;
  using _t_kr_type =
    float;
  _t_kr_type t_kr;
  using _t_wr_type =
    float;
  _t_wr_type t_wr;
  using _t_hl_type =
    float;
  _t_hl_type t_hl;
  using _t_kl_type =
    float;
  _t_kl_type t_kl;
  using _t_wl_type =
    float;
  _t_wl_type t_wl;

  // setters for named parameter idiom
  Type & set__t_hr(
    const float & _arg)
  {
    this->t_hr = _arg;
    return *this;
  }
  Type & set__t_kr(
    const float & _arg)
  {
    this->t_kr = _arg;
    return *this;
  }
  Type & set__t_wr(
    const float & _arg)
  {
    this->t_wr = _arg;
    return *this;
  }
  Type & set__t_hl(
    const float & _arg)
  {
    this->t_hl = _arg;
    return *this;
  }
  Type & set__t_kl(
    const float & _arg)
  {
    this->t_kl = _arg;
    return *this;
  }
  Type & set__t_wl(
    const float & _arg)
  {
    this->t_wl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    torque_interfaces::msg::Torque_<ContainerAllocator> *;
  using ConstRawPtr =
    const torque_interfaces::msg::Torque_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<torque_interfaces::msg::Torque_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<torque_interfaces::msg::Torque_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      torque_interfaces::msg::Torque_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<torque_interfaces::msg::Torque_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      torque_interfaces::msg::Torque_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<torque_interfaces::msg::Torque_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<torque_interfaces::msg::Torque_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<torque_interfaces::msg::Torque_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__torque_interfaces__msg__Torque
    std::shared_ptr<torque_interfaces::msg::Torque_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__torque_interfaces__msg__Torque
    std::shared_ptr<torque_interfaces::msg::Torque_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Torque_ & other) const
  {
    if (this->t_hr != other.t_hr) {
      return false;
    }
    if (this->t_kr != other.t_kr) {
      return false;
    }
    if (this->t_wr != other.t_wr) {
      return false;
    }
    if (this->t_hl != other.t_hl) {
      return false;
    }
    if (this->t_kl != other.t_kl) {
      return false;
    }
    if (this->t_wl != other.t_wl) {
      return false;
    }
    return true;
  }
  bool operator!=(const Torque_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Torque_

// alias to use template instance with default allocator
using Torque =
  torque_interfaces::msg::Torque_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace torque_interfaces

#endif  // TORQUE_INTERFACES__MSG__DETAIL__TORQUE__STRUCT_HPP_
