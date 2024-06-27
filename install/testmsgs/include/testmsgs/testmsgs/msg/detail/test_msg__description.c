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
      0x63, 0xae, 0x1c, 0x58, 0xfa, 0x57, 0x6a, 0x46,
      0xe0, 0x25, 0x62, 0x16, 0x86, 0x27, 0x40, 0x99,
      0x98, 0x8e, 0x12, 0x65, 0x95, 0xe5, 0xad, 0x39,
      0x85, 0xea, 0xec, 0xc8, 0xe1, 0x11, 0x8b, 0x2d,
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
static char testmsgs__msg__TestMsg__FIELD_NAME__y[] = "y";
static char testmsgs__msg__TestMsg__FIELD_NAME__z[] = "z";

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
  {
    {testmsgs__msg__TestMsg__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {testmsgs__msg__TestMsg__FIELD_NAME__z, 1, 1},
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
      {testmsgs__msg__TestMsg__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 x\n"
  "int32 y\n"
  "int32 z";

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
    {toplevel_type_raw_source, 24, 24},
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
