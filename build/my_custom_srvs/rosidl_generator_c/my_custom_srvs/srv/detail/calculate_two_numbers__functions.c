// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_custom_srvs:srv/CalculateTwoNumbers.idl
// generated code does not contain a copyright notice
#include "my_custom_srvs/srv/detail/calculate_two_numbers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
my_custom_srvs__srv__CalculateTwoNumbers_Request__init(my_custom_srvs__srv__CalculateTwoNumbers_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Request__fini(my_custom_srvs__srv__CalculateTwoNumbers_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Request__are_equal(const my_custom_srvs__srv__CalculateTwoNumbers_Request * lhs, const my_custom_srvs__srv__CalculateTwoNumbers_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Request__copy(
  const my_custom_srvs__srv__CalculateTwoNumbers_Request * input,
  my_custom_srvs__srv__CalculateTwoNumbers_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

my_custom_srvs__srv__CalculateTwoNumbers_Request *
my_custom_srvs__srv__CalculateTwoNumbers_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_srvs__srv__CalculateTwoNumbers_Request * msg = (my_custom_srvs__srv__CalculateTwoNumbers_Request *)allocator.allocate(sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Request));
  bool success = my_custom_srvs__srv__CalculateTwoNumbers_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Request__destroy(my_custom_srvs__srv__CalculateTwoNumbers_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_srvs__srv__CalculateTwoNumbers_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__init(my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_srvs__srv__CalculateTwoNumbers_Request * data = NULL;

  if (size) {
    data = (my_custom_srvs__srv__CalculateTwoNumbers_Request *)allocator.zero_allocate(size, sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_srvs__srv__CalculateTwoNumbers_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_srvs__srv__CalculateTwoNumbers_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__fini(my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_custom_srvs__srv__CalculateTwoNumbers_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence *
my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence * array = (my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence *)allocator.allocate(sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__destroy(my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__are_equal(const my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence * lhs, const my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_srvs__srv__CalculateTwoNumbers_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__copy(
  const my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence * input,
  my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_srvs__srv__CalculateTwoNumbers_Request * data =
      (my_custom_srvs__srv__CalculateTwoNumbers_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_srvs__srv__CalculateTwoNumbers_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_srvs__srv__CalculateTwoNumbers_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_srvs__srv__CalculateTwoNumbers_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
my_custom_srvs__srv__CalculateTwoNumbers_Response__init(my_custom_srvs__srv__CalculateTwoNumbers_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Response__fini(my_custom_srvs__srv__CalculateTwoNumbers_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Response__are_equal(const my_custom_srvs__srv__CalculateTwoNumbers_Response * lhs, const my_custom_srvs__srv__CalculateTwoNumbers_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Response__copy(
  const my_custom_srvs__srv__CalculateTwoNumbers_Response * input,
  my_custom_srvs__srv__CalculateTwoNumbers_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

my_custom_srvs__srv__CalculateTwoNumbers_Response *
my_custom_srvs__srv__CalculateTwoNumbers_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_srvs__srv__CalculateTwoNumbers_Response * msg = (my_custom_srvs__srv__CalculateTwoNumbers_Response *)allocator.allocate(sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Response));
  bool success = my_custom_srvs__srv__CalculateTwoNumbers_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Response__destroy(my_custom_srvs__srv__CalculateTwoNumbers_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_srvs__srv__CalculateTwoNumbers_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__init(my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_srvs__srv__CalculateTwoNumbers_Response * data = NULL;

  if (size) {
    data = (my_custom_srvs__srv__CalculateTwoNumbers_Response *)allocator.zero_allocate(size, sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_srvs__srv__CalculateTwoNumbers_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_srvs__srv__CalculateTwoNumbers_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__fini(my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_custom_srvs__srv__CalculateTwoNumbers_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence *
my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence * array = (my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence *)allocator.allocate(sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__destroy(my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__are_equal(const my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence * lhs, const my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_srvs__srv__CalculateTwoNumbers_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__copy(
  const my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence * input,
  my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_srvs__srv__CalculateTwoNumbers_Response * data =
      (my_custom_srvs__srv__CalculateTwoNumbers_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_srvs__srv__CalculateTwoNumbers_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_srvs__srv__CalculateTwoNumbers_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_srvs__srv__CalculateTwoNumbers_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "my_custom_srvs/srv/detail/calculate_two_numbers__functions.h"

bool
my_custom_srvs__srv__CalculateTwoNumbers_Event__init(my_custom_srvs__srv__CalculateTwoNumbers_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    my_custom_srvs__srv__CalculateTwoNumbers_Event__fini(msg);
    return false;
  }
  // request
  if (!my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__init(&msg->request, 0)) {
    my_custom_srvs__srv__CalculateTwoNumbers_Event__fini(msg);
    return false;
  }
  // response
  if (!my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__init(&msg->response, 0)) {
    my_custom_srvs__srv__CalculateTwoNumbers_Event__fini(msg);
    return false;
  }
  return true;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Event__fini(my_custom_srvs__srv__CalculateTwoNumbers_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__fini(&msg->request);
  // response
  my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__fini(&msg->response);
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Event__are_equal(const my_custom_srvs__srv__CalculateTwoNumbers_Event * lhs, const my_custom_srvs__srv__CalculateTwoNumbers_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Event__copy(
  const my_custom_srvs__srv__CalculateTwoNumbers_Event * input,
  my_custom_srvs__srv__CalculateTwoNumbers_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!my_custom_srvs__srv__CalculateTwoNumbers_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!my_custom_srvs__srv__CalculateTwoNumbers_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

my_custom_srvs__srv__CalculateTwoNumbers_Event *
my_custom_srvs__srv__CalculateTwoNumbers_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_srvs__srv__CalculateTwoNumbers_Event * msg = (my_custom_srvs__srv__CalculateTwoNumbers_Event *)allocator.allocate(sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Event));
  bool success = my_custom_srvs__srv__CalculateTwoNumbers_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Event__destroy(my_custom_srvs__srv__CalculateTwoNumbers_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_srvs__srv__CalculateTwoNumbers_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence__init(my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_srvs__srv__CalculateTwoNumbers_Event * data = NULL;

  if (size) {
    data = (my_custom_srvs__srv__CalculateTwoNumbers_Event *)allocator.zero_allocate(size, sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_srvs__srv__CalculateTwoNumbers_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_srvs__srv__CalculateTwoNumbers_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence__fini(my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_custom_srvs__srv__CalculateTwoNumbers_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence *
my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence * array = (my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence *)allocator.allocate(sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence__destroy(my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence__are_equal(const my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence * lhs, const my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_srvs__srv__CalculateTwoNumbers_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence__copy(
  const my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence * input,
  my_custom_srvs__srv__CalculateTwoNumbers_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_srvs__srv__CalculateTwoNumbers_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_srvs__srv__CalculateTwoNumbers_Event * data =
      (my_custom_srvs__srv__CalculateTwoNumbers_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_srvs__srv__CalculateTwoNumbers_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_srvs__srv__CalculateTwoNumbers_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_srvs__srv__CalculateTwoNumbers_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
