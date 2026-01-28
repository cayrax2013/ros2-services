// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_custom_srvs:srv/CalculateTwoNumbers.idl
// generated code does not contain a copyright notice

#include "my_custom_srvs/srv/detail/calculate_two_numbers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_custom_srvs
const rosidl_type_hash_t *
my_custom_srvs__srv__CalculateTwoNumbers__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x7b, 0x96, 0xeb, 0x95, 0x38, 0xec, 0x2d,
      0x79, 0xd4, 0xb8, 0xb7, 0x80, 0x31, 0x26, 0xe6,
      0xf3, 0x3e, 0xd3, 0xc1, 0x46, 0xe8, 0x66, 0xbd,
      0x34, 0xc5, 0x16, 0x77, 0x72, 0x9b, 0x51, 0xc0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_custom_srvs
const rosidl_type_hash_t *
my_custom_srvs__srv__CalculateTwoNumbers_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0x79, 0x87, 0x29, 0x06, 0x70, 0x2b, 0xe0,
      0x6f, 0xb4, 0x30, 0xbb, 0x00, 0xae, 0x04, 0x42,
      0xc1, 0xd2, 0x05, 0x2f, 0x80, 0x26, 0x22, 0x72,
      0x48, 0x4e, 0xb9, 0x82, 0xdb, 0x23, 0x02, 0x14,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_custom_srvs
const rosidl_type_hash_t *
my_custom_srvs__srv__CalculateTwoNumbers_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0xe4, 0x46, 0xc2, 0x83, 0x78, 0xa6, 0xf8,
      0xcf, 0xe3, 0x6c, 0x71, 0x17, 0xd8, 0xaa, 0x9d,
      0x90, 0xee, 0xf6, 0x4d, 0x4b, 0x77, 0x47, 0x60,
      0x89, 0x37, 0x83, 0x78, 0x77, 0xbd, 0xb8, 0x0b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_my_custom_srvs
const rosidl_type_hash_t *
my_custom_srvs__srv__CalculateTwoNumbers_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa4, 0x37, 0xef, 0x83, 0xf6, 0xc1, 0x84, 0x09,
      0x1b, 0xcf, 0x9b, 0xf3, 0xce, 0xb1, 0xfb, 0x08,
      0xd9, 0xb6, 0x64, 0xb1, 0x63, 0x32, 0x79, 0x6c,
      0xab, 0x0d, 0x2e, 0xa8, 0xe0, 0x00, 0xf2, 0x75,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char my_custom_srvs__srv__CalculateTwoNumbers__TYPE_NAME[] = "my_custom_srvs/srv/CalculateTwoNumbers";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char my_custom_srvs__srv__CalculateTwoNumbers_Event__TYPE_NAME[] = "my_custom_srvs/srv/CalculateTwoNumbers_Event";
static char my_custom_srvs__srv__CalculateTwoNumbers_Request__TYPE_NAME[] = "my_custom_srvs/srv/CalculateTwoNumbers_Request";
static char my_custom_srvs__srv__CalculateTwoNumbers_Response__TYPE_NAME[] = "my_custom_srvs/srv/CalculateTwoNumbers_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char my_custom_srvs__srv__CalculateTwoNumbers__FIELD_NAME__request_message[] = "request_message";
static char my_custom_srvs__srv__CalculateTwoNumbers__FIELD_NAME__response_message[] = "response_message";
static char my_custom_srvs__srv__CalculateTwoNumbers__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field my_custom_srvs__srv__CalculateTwoNumbers__FIELDS[] = {
  {
    {my_custom_srvs__srv__CalculateTwoNumbers__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_custom_srvs__srv__CalculateTwoNumbers_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_srvs__srv__CalculateTwoNumbers__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_custom_srvs__srv__CalculateTwoNumbers_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_srvs__srv__CalculateTwoNumbers__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {my_custom_srvs__srv__CalculateTwoNumbers_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_custom_srvs__srv__CalculateTwoNumbers__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_custom_srvs__srv__CalculateTwoNumbers_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {my_custom_srvs__srv__CalculateTwoNumbers_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {my_custom_srvs__srv__CalculateTwoNumbers_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_custom_srvs__srv__CalculateTwoNumbers__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_custom_srvs__srv__CalculateTwoNumbers__TYPE_NAME, 38, 38},
      {my_custom_srvs__srv__CalculateTwoNumbers__FIELDS, 3, 3},
    },
    {my_custom_srvs__srv__CalculateTwoNumbers__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_custom_srvs__srv__CalculateTwoNumbers_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_custom_srvs__srv__CalculateTwoNumbers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = my_custom_srvs__srv__CalculateTwoNumbers_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_custom_srvs__srv__CalculateTwoNumbers_Request__FIELD_NAME__a[] = "a";
static char my_custom_srvs__srv__CalculateTwoNumbers_Request__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field my_custom_srvs__srv__CalculateTwoNumbers_Request__FIELDS[] = {
  {
    {my_custom_srvs__srv__CalculateTwoNumbers_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_srvs__srv__CalculateTwoNumbers_Request__FIELD_NAME__b, 1, 1},
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
my_custom_srvs__srv__CalculateTwoNumbers_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_custom_srvs__srv__CalculateTwoNumbers_Request__TYPE_NAME, 46, 46},
      {my_custom_srvs__srv__CalculateTwoNumbers_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_custom_srvs__srv__CalculateTwoNumbers_Response__FIELD_NAME__sum[] = "sum";

static rosidl_runtime_c__type_description__Field my_custom_srvs__srv__CalculateTwoNumbers_Response__FIELDS[] = {
  {
    {my_custom_srvs__srv__CalculateTwoNumbers_Response__FIELD_NAME__sum, 3, 3},
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
my_custom_srvs__srv__CalculateTwoNumbers_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_custom_srvs__srv__CalculateTwoNumbers_Response__TYPE_NAME, 47, 47},
      {my_custom_srvs__srv__CalculateTwoNumbers_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char my_custom_srvs__srv__CalculateTwoNumbers_Event__FIELD_NAME__info[] = "info";
static char my_custom_srvs__srv__CalculateTwoNumbers_Event__FIELD_NAME__request[] = "request";
static char my_custom_srvs__srv__CalculateTwoNumbers_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field my_custom_srvs__srv__CalculateTwoNumbers_Event__FIELDS[] = {
  {
    {my_custom_srvs__srv__CalculateTwoNumbers_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_srvs__srv__CalculateTwoNumbers_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_custom_srvs__srv__CalculateTwoNumbers_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_srvs__srv__CalculateTwoNumbers_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {my_custom_srvs__srv__CalculateTwoNumbers_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription my_custom_srvs__srv__CalculateTwoNumbers_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {my_custom_srvs__srv__CalculateTwoNumbers_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {my_custom_srvs__srv__CalculateTwoNumbers_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_custom_srvs__srv__CalculateTwoNumbers_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_custom_srvs__srv__CalculateTwoNumbers_Event__TYPE_NAME, 44, 44},
      {my_custom_srvs__srv__CalculateTwoNumbers_Event__FIELDS, 3, 3},
    },
    {my_custom_srvs__srv__CalculateTwoNumbers_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = my_custom_srvs__srv__CalculateTwoNumbers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = my_custom_srvs__srv__CalculateTwoNumbers_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xd0\\x97\\xd0\\xb0\\xd0\\xbf\\xd1\\x80\\xd0\\xbe\\xd1\\x81\n"
  "int32 a\n"
  "int32 b\n"
  "---\n"
  "# \\xd0\\x9e\\xd1\\x82\\xd0\\xb2\\xd0\\xb5\\xd1\\x82\n"
  "int32 sum";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_custom_srvs__srv__CalculateTwoNumbers__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_custom_srvs__srv__CalculateTwoNumbers__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_custom_srvs__srv__CalculateTwoNumbers_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_custom_srvs__srv__CalculateTwoNumbers_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_custom_srvs__srv__CalculateTwoNumbers_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_custom_srvs__srv__CalculateTwoNumbers_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
my_custom_srvs__srv__CalculateTwoNumbers_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_custom_srvs__srv__CalculateTwoNumbers_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_custom_srvs__srv__CalculateTwoNumbers__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_custom_srvs__srv__CalculateTwoNumbers__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_custom_srvs__srv__CalculateTwoNumbers_Event__get_individual_type_description_source(NULL);
    sources[3] = *my_custom_srvs__srv__CalculateTwoNumbers_Request__get_individual_type_description_source(NULL);
    sources[4] = *my_custom_srvs__srv__CalculateTwoNumbers_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_custom_srvs__srv__CalculateTwoNumbers_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_custom_srvs__srv__CalculateTwoNumbers_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_custom_srvs__srv__CalculateTwoNumbers_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_custom_srvs__srv__CalculateTwoNumbers_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_custom_srvs__srv__CalculateTwoNumbers_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_custom_srvs__srv__CalculateTwoNumbers_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *my_custom_srvs__srv__CalculateTwoNumbers_Request__get_individual_type_description_source(NULL);
    sources[3] = *my_custom_srvs__srv__CalculateTwoNumbers_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
