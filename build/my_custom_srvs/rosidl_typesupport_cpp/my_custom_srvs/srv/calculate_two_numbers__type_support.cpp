// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from my_custom_srvs:srv/CalculateTwoNumbers.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_custom_srvs/srv/detail/calculate_two_numbers__functions.h"
#include "my_custom_srvs/srv/detail/calculate_two_numbers__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_custom_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalculateTwoNumbers_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalculateTwoNumbers_Request_type_support_ids_t;

static const _CalculateTwoNumbers_Request_type_support_ids_t _CalculateTwoNumbers_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalculateTwoNumbers_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalculateTwoNumbers_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalculateTwoNumbers_Request_type_support_symbol_names_t _CalculateTwoNumbers_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_custom_srvs, srv, CalculateTwoNumbers_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_custom_srvs, srv, CalculateTwoNumbers_Request)),
  }
};

typedef struct _CalculateTwoNumbers_Request_type_support_data_t
{
  void * data[2];
} _CalculateTwoNumbers_Request_type_support_data_t;

static _CalculateTwoNumbers_Request_type_support_data_t _CalculateTwoNumbers_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalculateTwoNumbers_Request_message_typesupport_map = {
  2,
  "my_custom_srvs",
  &_CalculateTwoNumbers_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CalculateTwoNumbers_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CalculateTwoNumbers_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalculateTwoNumbers_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalculateTwoNumbers_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_custom_srvs__srv__CalculateTwoNumbers_Request__get_type_hash,
  &my_custom_srvs__srv__CalculateTwoNumbers_Request__get_type_description,
  &my_custom_srvs__srv__CalculateTwoNumbers_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_custom_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_custom_srvs::srv::CalculateTwoNumbers_Request>()
{
  return &::my_custom_srvs::srv::rosidl_typesupport_cpp::CalculateTwoNumbers_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_custom_srvs, srv, CalculateTwoNumbers_Request)() {
  return get_message_type_support_handle<my_custom_srvs::srv::CalculateTwoNumbers_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_custom_srvs/srv/detail/calculate_two_numbers__functions.h"
// already included above
// #include "my_custom_srvs/srv/detail/calculate_two_numbers__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_custom_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalculateTwoNumbers_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalculateTwoNumbers_Response_type_support_ids_t;

static const _CalculateTwoNumbers_Response_type_support_ids_t _CalculateTwoNumbers_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalculateTwoNumbers_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalculateTwoNumbers_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalculateTwoNumbers_Response_type_support_symbol_names_t _CalculateTwoNumbers_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_custom_srvs, srv, CalculateTwoNumbers_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_custom_srvs, srv, CalculateTwoNumbers_Response)),
  }
};

typedef struct _CalculateTwoNumbers_Response_type_support_data_t
{
  void * data[2];
} _CalculateTwoNumbers_Response_type_support_data_t;

static _CalculateTwoNumbers_Response_type_support_data_t _CalculateTwoNumbers_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalculateTwoNumbers_Response_message_typesupport_map = {
  2,
  "my_custom_srvs",
  &_CalculateTwoNumbers_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CalculateTwoNumbers_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CalculateTwoNumbers_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalculateTwoNumbers_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalculateTwoNumbers_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_custom_srvs__srv__CalculateTwoNumbers_Response__get_type_hash,
  &my_custom_srvs__srv__CalculateTwoNumbers_Response__get_type_description,
  &my_custom_srvs__srv__CalculateTwoNumbers_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_custom_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_custom_srvs::srv::CalculateTwoNumbers_Response>()
{
  return &::my_custom_srvs::srv::rosidl_typesupport_cpp::CalculateTwoNumbers_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_custom_srvs, srv, CalculateTwoNumbers_Response)() {
  return get_message_type_support_handle<my_custom_srvs::srv::CalculateTwoNumbers_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_custom_srvs/srv/detail/calculate_two_numbers__functions.h"
// already included above
// #include "my_custom_srvs/srv/detail/calculate_two_numbers__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_custom_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalculateTwoNumbers_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalculateTwoNumbers_Event_type_support_ids_t;

static const _CalculateTwoNumbers_Event_type_support_ids_t _CalculateTwoNumbers_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalculateTwoNumbers_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalculateTwoNumbers_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalculateTwoNumbers_Event_type_support_symbol_names_t _CalculateTwoNumbers_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_custom_srvs, srv, CalculateTwoNumbers_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_custom_srvs, srv, CalculateTwoNumbers_Event)),
  }
};

typedef struct _CalculateTwoNumbers_Event_type_support_data_t
{
  void * data[2];
} _CalculateTwoNumbers_Event_type_support_data_t;

static _CalculateTwoNumbers_Event_type_support_data_t _CalculateTwoNumbers_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalculateTwoNumbers_Event_message_typesupport_map = {
  2,
  "my_custom_srvs",
  &_CalculateTwoNumbers_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CalculateTwoNumbers_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CalculateTwoNumbers_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CalculateTwoNumbers_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalculateTwoNumbers_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &my_custom_srvs__srv__CalculateTwoNumbers_Event__get_type_hash,
  &my_custom_srvs__srv__CalculateTwoNumbers_Event__get_type_description,
  &my_custom_srvs__srv__CalculateTwoNumbers_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_custom_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_custom_srvs::srv::CalculateTwoNumbers_Event>()
{
  return &::my_custom_srvs::srv::rosidl_typesupport_cpp::CalculateTwoNumbers_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_custom_srvs, srv, CalculateTwoNumbers_Event)() {
  return get_message_type_support_handle<my_custom_srvs::srv::CalculateTwoNumbers_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "my_custom_srvs/srv/detail/calculate_two_numbers__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_custom_srvs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CalculateTwoNumbers_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CalculateTwoNumbers_type_support_ids_t;

static const _CalculateTwoNumbers_type_support_ids_t _CalculateTwoNumbers_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CalculateTwoNumbers_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CalculateTwoNumbers_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CalculateTwoNumbers_type_support_symbol_names_t _CalculateTwoNumbers_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_custom_srvs, srv, CalculateTwoNumbers)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_custom_srvs, srv, CalculateTwoNumbers)),
  }
};

typedef struct _CalculateTwoNumbers_type_support_data_t
{
  void * data[2];
} _CalculateTwoNumbers_type_support_data_t;

static _CalculateTwoNumbers_type_support_data_t _CalculateTwoNumbers_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CalculateTwoNumbers_service_typesupport_map = {
  2,
  "my_custom_srvs",
  &_CalculateTwoNumbers_service_typesupport_ids.typesupport_identifier[0],
  &_CalculateTwoNumbers_service_typesupport_symbol_names.symbol_name[0],
  &_CalculateTwoNumbers_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CalculateTwoNumbers_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CalculateTwoNumbers_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_custom_srvs::srv::CalculateTwoNumbers_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_custom_srvs::srv::CalculateTwoNumbers_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<my_custom_srvs::srv::CalculateTwoNumbers_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<my_custom_srvs::srv::CalculateTwoNumbers>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<my_custom_srvs::srv::CalculateTwoNumbers>,
  &my_custom_srvs__srv__CalculateTwoNumbers__get_type_hash,
  &my_custom_srvs__srv__CalculateTwoNumbers__get_type_description,
  &my_custom_srvs__srv__CalculateTwoNumbers__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace my_custom_srvs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_custom_srvs::srv::CalculateTwoNumbers>()
{
  return &::my_custom_srvs::srv::rosidl_typesupport_cpp::CalculateTwoNumbers_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, my_custom_srvs, srv, CalculateTwoNumbers)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<my_custom_srvs::srv::CalculateTwoNumbers>();
}

#ifdef __cplusplus
}
#endif
