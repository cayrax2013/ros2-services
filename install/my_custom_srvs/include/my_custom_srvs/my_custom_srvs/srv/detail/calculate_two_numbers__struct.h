// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_srvs:srv/CalculateTwoNumbers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_srvs/srv/calculate_two_numbers.h"


#ifndef MY_CUSTOM_SRVS__SRV__DETAIL__CALCULATE_TWO_NUMBERS__STRUCT_H_
#define MY_CUSTOM_SRVS__SRV__DETAIL__CALCULATE_TWO_NUMBERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CalculateTwoNumbers in the package my_custom_srvs.
typedef struct my_custom_srvs__srv__CalculateTwoNumbers_Request
{
  int32_t a;
  int32_t b;
} my_custom_srvs__srv__CalculateTwoNumbers_Request;

// Struct for a sequence of my_custom_srvs__srv__CalculateTwoNumbers_Request.
typedef struct my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence
{
  my_custom_srvs__srv__CalculateTwoNumbers_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CalculateTwoNumbers in the package my_custom_srvs.
typedef struct my_custom_srvs__srv__CalculateTwoNumbers_Response
{
  int32_t sum;
} my_custom_srvs__srv__CalculateTwoNumbers_Response;

// Struct for a sequence of my_custom_srvs__srv__CalculateTwoNumbers_Response.
typedef struct my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence
{
  my_custom_srvs__srv__CalculateTwoNumbers_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_custom_srvs__srv__CalculateTwoNumbers_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_custom_srvs__srv__CalculateTwoNumbers_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CalculateTwoNumbers in the package my_custom_srvs.
typedef struct my_custom_srvs__srv__CalculateTwoNumbers_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence request;
  my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence response;
} my_custom_srvs__srv__CalculateTwoNumbers_Event;

// Struct for a sequence of my_custom_srvs__srv__CalculateTwoNumbers_Event.
typedef struct my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence
{
  my_custom_srvs__srv__CalculateTwoNumbers_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_SRVS__SRV__DETAIL__CALCULATE_TWO_NUMBERS__STRUCT_H_
