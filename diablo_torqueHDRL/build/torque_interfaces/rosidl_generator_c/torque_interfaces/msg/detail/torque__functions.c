// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from torque_interfaces:msg/Torque.idl
// generated code does not contain a copyright notice
#include "torque_interfaces/msg/detail/torque__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
torque_interfaces__msg__Torque__init(torque_interfaces__msg__Torque * msg)
{
  if (!msg) {
    return false;
  }
  // t_hr
  // t_kr
  // t_wr
  // t_hl
  // t_kl
  // t_wl
  return true;
}

void
torque_interfaces__msg__Torque__fini(torque_interfaces__msg__Torque * msg)
{
  if (!msg) {
    return;
  }
  // t_hr
  // t_kr
  // t_wr
  // t_hl
  // t_kl
  // t_wl
}

torque_interfaces__msg__Torque *
torque_interfaces__msg__Torque__create()
{
  torque_interfaces__msg__Torque * msg = (torque_interfaces__msg__Torque *)malloc(sizeof(torque_interfaces__msg__Torque));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(torque_interfaces__msg__Torque));
  bool success = torque_interfaces__msg__Torque__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
torque_interfaces__msg__Torque__destroy(torque_interfaces__msg__Torque * msg)
{
  if (msg) {
    torque_interfaces__msg__Torque__fini(msg);
  }
  free(msg);
}


bool
torque_interfaces__msg__Torque__Sequence__init(torque_interfaces__msg__Torque__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  torque_interfaces__msg__Torque * data = NULL;
  if (size) {
    data = (torque_interfaces__msg__Torque *)calloc(size, sizeof(torque_interfaces__msg__Torque));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = torque_interfaces__msg__Torque__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        torque_interfaces__msg__Torque__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
torque_interfaces__msg__Torque__Sequence__fini(torque_interfaces__msg__Torque__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      torque_interfaces__msg__Torque__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

torque_interfaces__msg__Torque__Sequence *
torque_interfaces__msg__Torque__Sequence__create(size_t size)
{
  torque_interfaces__msg__Torque__Sequence * array = (torque_interfaces__msg__Torque__Sequence *)malloc(sizeof(torque_interfaces__msg__Torque__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = torque_interfaces__msg__Torque__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
torque_interfaces__msg__Torque__Sequence__destroy(torque_interfaces__msg__Torque__Sequence * array)
{
  if (array) {
    torque_interfaces__msg__Torque__Sequence__fini(array);
  }
  free(array);
}
