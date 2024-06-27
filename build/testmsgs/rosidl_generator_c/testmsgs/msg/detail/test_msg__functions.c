// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from testmsgs:msg/TestMsg.idl
// generated code does not contain a copyright notice
#include "testmsgs/msg/detail/test_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
testmsgs__msg__TestMsg__init(testmsgs__msg__TestMsg * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
testmsgs__msg__TestMsg__fini(testmsgs__msg__TestMsg * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
testmsgs__msg__TestMsg__are_equal(const testmsgs__msg__TestMsg * lhs, const testmsgs__msg__TestMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
testmsgs__msg__TestMsg__copy(
  const testmsgs__msg__TestMsg * input,
  testmsgs__msg__TestMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

testmsgs__msg__TestMsg *
testmsgs__msg__TestMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  testmsgs__msg__TestMsg * msg = (testmsgs__msg__TestMsg *)allocator.allocate(sizeof(testmsgs__msg__TestMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(testmsgs__msg__TestMsg));
  bool success = testmsgs__msg__TestMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
testmsgs__msg__TestMsg__destroy(testmsgs__msg__TestMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    testmsgs__msg__TestMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
testmsgs__msg__TestMsg__Sequence__init(testmsgs__msg__TestMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  testmsgs__msg__TestMsg * data = NULL;

  if (size) {
    data = (testmsgs__msg__TestMsg *)allocator.zero_allocate(size, sizeof(testmsgs__msg__TestMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = testmsgs__msg__TestMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        testmsgs__msg__TestMsg__fini(&data[i - 1]);
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
testmsgs__msg__TestMsg__Sequence__fini(testmsgs__msg__TestMsg__Sequence * array)
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
      testmsgs__msg__TestMsg__fini(&array->data[i]);
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

testmsgs__msg__TestMsg__Sequence *
testmsgs__msg__TestMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  testmsgs__msg__TestMsg__Sequence * array = (testmsgs__msg__TestMsg__Sequence *)allocator.allocate(sizeof(testmsgs__msg__TestMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = testmsgs__msg__TestMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
testmsgs__msg__TestMsg__Sequence__destroy(testmsgs__msg__TestMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    testmsgs__msg__TestMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
testmsgs__msg__TestMsg__Sequence__are_equal(const testmsgs__msg__TestMsg__Sequence * lhs, const testmsgs__msg__TestMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!testmsgs__msg__TestMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
testmsgs__msg__TestMsg__Sequence__copy(
  const testmsgs__msg__TestMsg__Sequence * input,
  testmsgs__msg__TestMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(testmsgs__msg__TestMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    testmsgs__msg__TestMsg * data =
      (testmsgs__msg__TestMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!testmsgs__msg__TestMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          testmsgs__msg__TestMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!testmsgs__msg__TestMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
