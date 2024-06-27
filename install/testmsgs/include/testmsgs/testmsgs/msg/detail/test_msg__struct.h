// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from testmsgs:msg/TestMsg.idl
// generated code does not contain a copyright notice

#ifndef TESTMSGS__MSG__DETAIL__TEST_MSG__STRUCT_H_
#define TESTMSGS__MSG__DETAIL__TEST_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TestMsg in the package testmsgs.
typedef struct testmsgs__msg__TestMsg
{
  int32_t x;
  int32_t y;
  int32_t z;
} testmsgs__msg__TestMsg;

// Struct for a sequence of testmsgs__msg__TestMsg.
typedef struct testmsgs__msg__TestMsg__Sequence
{
  testmsgs__msg__TestMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} testmsgs__msg__TestMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TESTMSGS__MSG__DETAIL__TEST_MSG__STRUCT_H_
