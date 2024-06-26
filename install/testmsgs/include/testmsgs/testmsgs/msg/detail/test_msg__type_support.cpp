// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from testmsgs:msg/TestMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "testmsgs/msg/detail/test_msg__functions.h"
#include "testmsgs/msg/detail/test_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace testmsgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TestMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) testmsgs::msg::TestMsg(_init);
}

void TestMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<testmsgs::msg::TestMsg *>(message_memory);
  typed_message->~TestMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TestMsg_message_member_array[3] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(testmsgs::msg::TestMsg, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(testmsgs::msg::TestMsg, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(testmsgs::msg::TestMsg, z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TestMsg_message_members = {
  "testmsgs::msg",  // message namespace
  "TestMsg",  // message name
  3,  // number of fields
  sizeof(testmsgs::msg::TestMsg),
  TestMsg_message_member_array,  // message members
  TestMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  TestMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TestMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TestMsg_message_members,
  get_message_typesupport_handle_function,
  &testmsgs__msg__TestMsg__get_type_hash,
  &testmsgs__msg__TestMsg__get_type_description,
  &testmsgs__msg__TestMsg__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace testmsgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<testmsgs::msg::TestMsg>()
{
  return &::testmsgs::msg::rosidl_typesupport_introspection_cpp::TestMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, testmsgs, msg, TestMsg)() {
  return &::testmsgs::msg::rosidl_typesupport_introspection_cpp::TestMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
