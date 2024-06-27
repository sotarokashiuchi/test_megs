// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from testmsgs:msg/TestMsg.idl
// generated code does not contain a copyright notice

#ifndef TESTMSGS__MSG__DETAIL__TEST_MSG__TRAITS_HPP_
#define TESTMSGS__MSG__DETAIL__TEST_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "testmsgs/msg/detail/test_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace testmsgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TestMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TestMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TestMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace testmsgs

namespace rosidl_generator_traits
{

[[deprecated("use testmsgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const testmsgs::msg::TestMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  testmsgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use testmsgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const testmsgs::msg::TestMsg & msg)
{
  return testmsgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<testmsgs::msg::TestMsg>()
{
  return "testmsgs::msg::TestMsg";
}

template<>
inline const char * name<testmsgs::msg::TestMsg>()
{
  return "testmsgs/msg/TestMsg";
}

template<>
struct has_fixed_size<testmsgs::msg::TestMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<testmsgs::msg::TestMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<testmsgs::msg::TestMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESTMSGS__MSG__DETAIL__TEST_MSG__TRAITS_HPP_
