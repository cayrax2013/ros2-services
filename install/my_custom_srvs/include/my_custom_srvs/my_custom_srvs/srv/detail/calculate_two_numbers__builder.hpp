// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_custom_srvs:srv/CalculateTwoNumbers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_srvs/srv/calculate_two_numbers.hpp"


#ifndef MY_CUSTOM_SRVS__SRV__DETAIL__CALCULATE_TWO_NUMBERS__BUILDER_HPP_
#define MY_CUSTOM_SRVS__SRV__DETAIL__CALCULATE_TWO_NUMBERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_custom_srvs/srv/detail/calculate_two_numbers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_custom_srvs
{

namespace srv
{

namespace builder
{

class Init_CalculateTwoNumbers_Request_b
{
public:
  explicit Init_CalculateTwoNumbers_Request_b(::my_custom_srvs::srv::CalculateTwoNumbers_Request & msg)
  : msg_(msg)
  {}
  ::my_custom_srvs::srv::CalculateTwoNumbers_Request b(::my_custom_srvs::srv::CalculateTwoNumbers_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_srvs::srv::CalculateTwoNumbers_Request msg_;
};

class Init_CalculateTwoNumbers_Request_a
{
public:
  Init_CalculateTwoNumbers_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalculateTwoNumbers_Request_b a(::my_custom_srvs::srv::CalculateTwoNumbers_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_CalculateTwoNumbers_Request_b(msg_);
  }

private:
  ::my_custom_srvs::srv::CalculateTwoNumbers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_srvs::srv::CalculateTwoNumbers_Request>()
{
  return my_custom_srvs::srv::builder::Init_CalculateTwoNumbers_Request_a();
}

}  // namespace my_custom_srvs


namespace my_custom_srvs
{

namespace srv
{

namespace builder
{

class Init_CalculateTwoNumbers_Response_sum
{
public:
  Init_CalculateTwoNumbers_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_custom_srvs::srv::CalculateTwoNumbers_Response sum(::my_custom_srvs::srv::CalculateTwoNumbers_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_srvs::srv::CalculateTwoNumbers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_srvs::srv::CalculateTwoNumbers_Response>()
{
  return my_custom_srvs::srv::builder::Init_CalculateTwoNumbers_Response_sum();
}

}  // namespace my_custom_srvs


namespace my_custom_srvs
{

namespace srv
{

namespace builder
{

class Init_CalculateTwoNumbers_Event_response
{
public:
  explicit Init_CalculateTwoNumbers_Event_response(::my_custom_srvs::srv::CalculateTwoNumbers_Event & msg)
  : msg_(msg)
  {}
  ::my_custom_srvs::srv::CalculateTwoNumbers_Event response(::my_custom_srvs::srv::CalculateTwoNumbers_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_custom_srvs::srv::CalculateTwoNumbers_Event msg_;
};

class Init_CalculateTwoNumbers_Event_request
{
public:
  explicit Init_CalculateTwoNumbers_Event_request(::my_custom_srvs::srv::CalculateTwoNumbers_Event & msg)
  : msg_(msg)
  {}
  Init_CalculateTwoNumbers_Event_response request(::my_custom_srvs::srv::CalculateTwoNumbers_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CalculateTwoNumbers_Event_response(msg_);
  }

private:
  ::my_custom_srvs::srv::CalculateTwoNumbers_Event msg_;
};

class Init_CalculateTwoNumbers_Event_info
{
public:
  Init_CalculateTwoNumbers_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalculateTwoNumbers_Event_request info(::my_custom_srvs::srv::CalculateTwoNumbers_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CalculateTwoNumbers_Event_request(msg_);
  }

private:
  ::my_custom_srvs::srv::CalculateTwoNumbers_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_custom_srvs::srv::CalculateTwoNumbers_Event>()
{
  return my_custom_srvs::srv::builder::Init_CalculateTwoNumbers_Event_info();
}

}  // namespace my_custom_srvs

#endif  // MY_CUSTOM_SRVS__SRV__DETAIL__CALCULATE_TWO_NUMBERS__BUILDER_HPP_
