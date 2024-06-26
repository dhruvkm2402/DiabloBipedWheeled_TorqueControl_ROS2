// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from torque_interfaces:msg/Torque.idl
// generated code does not contain a copyright notice

#ifndef TORQUE_INTERFACES__MSG__DETAIL__TORQUE__FUNCTIONS_H_
#define TORQUE_INTERFACES__MSG__DETAIL__TORQUE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "torque_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "torque_interfaces/msg/detail/torque__struct.h"

/// Initialize msg/Torque message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * torque_interfaces__msg__Torque
 * )) before or use
 * torque_interfaces__msg__Torque__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_interfaces
bool
torque_interfaces__msg__Torque__init(torque_interfaces__msg__Torque * msg);

/// Finalize msg/Torque message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_interfaces
void
torque_interfaces__msg__Torque__fini(torque_interfaces__msg__Torque * msg);

/// Create msg/Torque message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * torque_interfaces__msg__Torque__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_interfaces
torque_interfaces__msg__Torque *
torque_interfaces__msg__Torque__create();

/// Destroy msg/Torque message.
/**
 * It calls
 * torque_interfaces__msg__Torque__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_interfaces
void
torque_interfaces__msg__Torque__destroy(torque_interfaces__msg__Torque * msg);


/// Initialize array of msg/Torque messages.
/**
 * It allocates the memory for the number of elements and calls
 * torque_interfaces__msg__Torque__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_interfaces
bool
torque_interfaces__msg__Torque__Sequence__init(torque_interfaces__msg__Torque__Sequence * array, size_t size);

/// Finalize array of msg/Torque messages.
/**
 * It calls
 * torque_interfaces__msg__Torque__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_interfaces
void
torque_interfaces__msg__Torque__Sequence__fini(torque_interfaces__msg__Torque__Sequence * array);

/// Create array of msg/Torque messages.
/**
 * It allocates the memory for the array and calls
 * torque_interfaces__msg__Torque__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_interfaces
torque_interfaces__msg__Torque__Sequence *
torque_interfaces__msg__Torque__Sequence__create(size_t size);

/// Destroy array of msg/Torque messages.
/**
 * It calls
 * torque_interfaces__msg__Torque__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_torque_interfaces
void
torque_interfaces__msg__Torque__Sequence__destroy(torque_interfaces__msg__Torque__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TORQUE_INTERFACES__MSG__DETAIL__TORQUE__FUNCTIONS_H_
