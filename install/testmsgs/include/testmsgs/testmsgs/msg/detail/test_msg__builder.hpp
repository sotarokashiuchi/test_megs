// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from testmsgs:msg/TestMsg.idl
// generated code does not contain a copyright notice

#ifndef TESTMSGS__MSG__DETAIL__TEST_MSG__BUILDER_HPP_
#define TESTMSGS__MSG__DETAIL__TEST_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "testmsgs/msg/detail/test_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace testmsgs
{

namespace msg
{

namespace builder
{

class Init_TestMsg_x
{
public:
  Init_TestMsg_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::testmsgs::msg::TestMsg x(::testmsgs::msg::TestMsg::_x_type arg)
  {
    msg_.x = std::move(arg);
    return std::move(msg_);
  }

private:
  ::testmsgs::msg::TestMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::testmsgs::msg::TestMsg>()
{
  return testmsgs::msg::builder::Init_TestMsg_x();
}

}  // namespace testmsgs

#endif  // TESTMSGS__MSG__DETAIL__TEST_MSG__BUILDER_HPP_
