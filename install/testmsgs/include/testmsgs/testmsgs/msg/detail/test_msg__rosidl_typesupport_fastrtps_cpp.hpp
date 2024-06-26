// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from testmsgs:msg/TestMsg.idl
// generated code does not contain a copyright notice

#ifndef TESTMSGS__MSG__DETAIL__TEST_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TESTMSGS__MSG__DETAIL__TEST_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "testmsgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "testmsgs/msg/detail/test_msg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace testmsgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_testmsgs
cdr_serialize(
  const testmsgs::msg::TestMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_testmsgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  testmsgs::msg::TestMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_testmsgs
get_serialized_size(
  const testmsgs::msg::TestMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_testmsgs
max_serialized_size_TestMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace testmsgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_testmsgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, testmsgs, msg, TestMsg)();

#ifdef __cplusplus
}
#endif

#endif  // TESTMSGS__MSG__DETAIL__TEST_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
