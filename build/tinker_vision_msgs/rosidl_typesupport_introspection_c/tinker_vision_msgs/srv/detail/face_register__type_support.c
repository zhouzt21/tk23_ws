// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tinker_vision_msgs:srv/FaceRegister.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tinker_vision_msgs/srv/detail/face_register__rosidl_typesupport_introspection_c.h"
#include "tinker_vision_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tinker_vision_msgs/srv/detail/face_register__functions.h"
#include "tinker_vision_msgs/srv/detail/face_register__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tinker_vision_msgs__srv__FaceRegister_Request__init(message_memory);
}

void tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_fini_function(void * message_memory)
{
  tinker_vision_msgs__srv__FaceRegister_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__srv__FaceRegister_Request, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_message_members = {
  "tinker_vision_msgs__srv",  // message namespace
  "FaceRegister_Request",  // message name
  1,  // number of fields
  sizeof(tinker_vision_msgs__srv__FaceRegister_Request),
  tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_message_member_array,  // message members
  tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_message_type_support_handle = {
  0,
  &tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tinker_vision_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, FaceRegister_Request)() {
  if (!tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_message_type_support_handle.typesupport_identifier) {
    tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tinker_vision_msgs__srv__FaceRegister_Request__rosidl_typesupport_introspection_c__FaceRegister_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tinker_vision_msgs/srv/detail/face_register__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tinker_vision_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tinker_vision_msgs/srv/detail/face_register__functions.h"
// already included above
// #include "tinker_vision_msgs/srv/detail/face_register__struct.h"


// Include directives for member types
// Member `fail_info`
// Member `info`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tinker_vision_msgs__srv__FaceRegister_Response__init(message_memory);
}

void tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_fini_function(void * message_memory)
{
  tinker_vision_msgs__srv__FaceRegister_Response__fini(message_memory);
}

size_t tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__size_function__FaceRegister_Response__id(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__get_const_function__FaceRegister_Response__id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__get_function__FaceRegister_Response__id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__fetch_function__FaceRegister_Response__id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__get_const_function__FaceRegister_Response__id(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__assign_function__FaceRegister_Response__id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__get_function__FaceRegister_Response__id(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__resize_function__FaceRegister_Response__id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__srv__FaceRegister_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fail_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__srv__FaceRegister_Response, fail_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__srv__FaceRegister_Response, id),  // bytes offset in struct
    NULL,  // default value
    tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__size_function__FaceRegister_Response__id,  // size() function pointer
    tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__get_const_function__FaceRegister_Response__id,  // get_const(index) function pointer
    tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__get_function__FaceRegister_Response__id,  // get(index) function pointer
    tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__fetch_function__FaceRegister_Response__id,  // fetch(index, &value) function pointer
    tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__assign_function__FaceRegister_Response__id,  // assign(index, value) function pointer
    tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__resize_function__FaceRegister_Response__id  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__srv__FaceRegister_Response, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_message_members = {
  "tinker_vision_msgs__srv",  // message namespace
  "FaceRegister_Response",  // message name
  4,  // number of fields
  sizeof(tinker_vision_msgs__srv__FaceRegister_Response),
  tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_message_member_array,  // message members
  tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_message_type_support_handle = {
  0,
  &tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tinker_vision_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, FaceRegister_Response)() {
  if (!tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_message_type_support_handle.typesupport_identifier) {
    tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tinker_vision_msgs__srv__FaceRegister_Response__rosidl_typesupport_introspection_c__FaceRegister_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tinker_vision_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tinker_vision_msgs/srv/detail/face_register__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tinker_vision_msgs__srv__detail__face_register__rosidl_typesupport_introspection_c__FaceRegister_service_members = {
  "tinker_vision_msgs__srv",  // service namespace
  "FaceRegister",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tinker_vision_msgs__srv__detail__face_register__rosidl_typesupport_introspection_c__FaceRegister_Request_message_type_support_handle,
  NULL  // response message
  // tinker_vision_msgs__srv__detail__face_register__rosidl_typesupport_introspection_c__FaceRegister_Response_message_type_support_handle
};

static rosidl_service_type_support_t tinker_vision_msgs__srv__detail__face_register__rosidl_typesupport_introspection_c__FaceRegister_service_type_support_handle = {
  0,
  &tinker_vision_msgs__srv__detail__face_register__rosidl_typesupport_introspection_c__FaceRegister_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, FaceRegister_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, FaceRegister_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tinker_vision_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, FaceRegister)() {
  if (!tinker_vision_msgs__srv__detail__face_register__rosidl_typesupport_introspection_c__FaceRegister_service_type_support_handle.typesupport_identifier) {
    tinker_vision_msgs__srv__detail__face_register__rosidl_typesupport_introspection_c__FaceRegister_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tinker_vision_msgs__srv__detail__face_register__rosidl_typesupport_introspection_c__FaceRegister_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, FaceRegister_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, FaceRegister_Response)()->data;
  }

  return &tinker_vision_msgs__srv__detail__face_register__rosidl_typesupport_introspection_c__FaceRegister_service_type_support_handle;
}
