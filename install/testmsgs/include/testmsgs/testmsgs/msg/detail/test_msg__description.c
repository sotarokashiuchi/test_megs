// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from testmsgs:msg/TestMsg.idl
// generated code does not contain a copyright notice

#include "testmsgs/msg/detail/test_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_testmsgs
const rosidl_type_hash_t *
testmsgs__msg__TestMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3e, 0x1a, 0x83, 0x87, 0xfa, 0xb8, 0x8f, 0xc3,
      0x3f, 0x98, 0x75, 0x71, 0xb1, 0x87, 0xab, 0x9c,
      0x95, 0xd2, 0xf8, 0x3d, 0x91, 0x40, 0x89, 0xd2,
      0x58, 0x47, 0xf4, 0xab, 0xe6, 0x28, 0xe3, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char testmsgs__msg__TestMsg__TYPE_NAME[] = "testmsgs/msg/TestMsg";

// Define type names, field names, and default values
static char testmsgs__msg__TestMsg__FIELD_NAME__x[] = "x";

static rosidl_runtime_c__type_description__Field testmsgs__msg__TestMsg__FIELDS[] = {
  {
    {testmsgs__msg__TestMsg__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
testmsgs__msg__TestMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {testmsgs__msg__TestMsg__TYPE_NAME, 20, 20},
      {testmsgs__msg__TestMsg__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 x";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
testmsgs__msg__TestMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {testmsgs__msg__TestMsg__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 8, 8},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
testmsgs__msg__TestMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *testmsgs__msg__TestMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
