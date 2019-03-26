// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#ifndef PROTOBUF_INCLUDED_msg_2eproto
#define PROTOBUF_INCLUDED_msg_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_msg_2eproto 

namespace protobuf_msg_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_msg_2eproto
namespace protos {
class Msg;
class MsgDefaultTypeInternal;
extern MsgDefaultTypeInternal _Msg_default_instance_;
}  // namespace protos
namespace google {
namespace protobuf {
template<> ::protos::Msg* Arena::CreateMaybeMessage<::protos::Msg>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace protos {

enum MsgType {
  MsgRequest = 0,
  MsgNotify = 1,
  MsgResponse = 2,
  MsgPush = 3,
  MsgType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MsgType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MsgType_IsValid(int value);
const MsgType MsgType_MIN = MsgRequest;
const MsgType MsgType_MAX = MsgPush;
const int MsgType_ARRAYSIZE = MsgType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsgType_descriptor();
inline const ::std::string& MsgType_Name(MsgType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsgType_descriptor(), value);
}
inline bool MsgType_Parse(
    const ::std::string& name, MsgType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsgType>(
    MsgType_descriptor(), name, value);
}
// ===================================================================

class Msg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protos.Msg) */ {
 public:
  Msg();
  virtual ~Msg();

  Msg(const Msg& from);

  inline Msg& operator=(const Msg& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Msg(Msg&& from) noexcept
    : Msg() {
    *this = ::std::move(from);
  }

  inline Msg& operator=(Msg&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Msg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Msg* internal_default_instance() {
    return reinterpret_cast<const Msg*>(
               &_Msg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Msg* other);
  friend void swap(Msg& a, Msg& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Msg* New() const final {
    return CreateMaybeMessage<Msg>(NULL);
  }

  Msg* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Msg>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Msg& from);
  void MergeFrom(const Msg& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Msg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string route = 2;
  void clear_route();
  static const int kRouteFieldNumber = 2;
  const ::std::string& route() const;
  void set_route(const ::std::string& value);
  #if LANG_CXX11
  void set_route(::std::string&& value);
  #endif
  void set_route(const char* value);
  void set_route(const char* value, size_t size);
  ::std::string* mutable_route();
  ::std::string* release_route();
  void set_allocated_route(::std::string* route);

  // bytes data = 3;
  void clear_data();
  static const int kDataFieldNumber = 3;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // string reply = 4;
  void clear_reply();
  static const int kReplyFieldNumber = 4;
  const ::std::string& reply() const;
  void set_reply(const ::std::string& value);
  #if LANG_CXX11
  void set_reply(::std::string&& value);
  #endif
  void set_reply(const char* value);
  void set_reply(const char* value, size_t size);
  ::std::string* mutable_reply();
  ::std::string* release_reply();
  void set_allocated_reply(::std::string* reply);

  // uint64 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint64 id() const;
  void set_id(::google::protobuf::uint64 value);

  // .protos.MsgType type = 5;
  void clear_type();
  static const int kTypeFieldNumber = 5;
  ::protos::MsgType type() const;
  void set_type(::protos::MsgType value);

  // @@protoc_insertion_point(class_scope:protos.Msg)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr route_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::google::protobuf::internal::ArenaStringPtr reply_;
  ::google::protobuf::uint64 id_;
  int type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_msg_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Msg

// uint64 id = 1;
inline void Msg::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Msg::id() const {
  // @@protoc_insertion_point(field_get:protos.Msg.id)
  return id_;
}
inline void Msg::set_id(::google::protobuf::uint64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:protos.Msg.id)
}

// string route = 2;
inline void Msg::clear_route() {
  route_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Msg::route() const {
  // @@protoc_insertion_point(field_get:protos.Msg.route)
  return route_.GetNoArena();
}
inline void Msg::set_route(const ::std::string& value) {
  
  route_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protos.Msg.route)
}
#if LANG_CXX11
inline void Msg::set_route(::std::string&& value) {
  
  route_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protos.Msg.route)
}
#endif
inline void Msg::set_route(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  route_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protos.Msg.route)
}
inline void Msg::set_route(const char* value, size_t size) {
  
  route_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protos.Msg.route)
}
inline ::std::string* Msg::mutable_route() {
  
  // @@protoc_insertion_point(field_mutable:protos.Msg.route)
  return route_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Msg::release_route() {
  // @@protoc_insertion_point(field_release:protos.Msg.route)
  
  return route_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Msg::set_allocated_route(::std::string* route) {
  if (route != NULL) {
    
  } else {
    
  }
  route_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), route);
  // @@protoc_insertion_point(field_set_allocated:protos.Msg.route)
}

// bytes data = 3;
inline void Msg::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Msg::data() const {
  // @@protoc_insertion_point(field_get:protos.Msg.data)
  return data_.GetNoArena();
}
inline void Msg::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protos.Msg.data)
}
#if LANG_CXX11
inline void Msg::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protos.Msg.data)
}
#endif
inline void Msg::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protos.Msg.data)
}
inline void Msg::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protos.Msg.data)
}
inline ::std::string* Msg::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:protos.Msg.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Msg::release_data() {
  // @@protoc_insertion_point(field_release:protos.Msg.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Msg::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:protos.Msg.data)
}

// string reply = 4;
inline void Msg::clear_reply() {
  reply_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Msg::reply() const {
  // @@protoc_insertion_point(field_get:protos.Msg.reply)
  return reply_.GetNoArena();
}
inline void Msg::set_reply(const ::std::string& value) {
  
  reply_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protos.Msg.reply)
}
#if LANG_CXX11
inline void Msg::set_reply(::std::string&& value) {
  
  reply_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protos.Msg.reply)
}
#endif
inline void Msg::set_reply(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  reply_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protos.Msg.reply)
}
inline void Msg::set_reply(const char* value, size_t size) {
  
  reply_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protos.Msg.reply)
}
inline ::std::string* Msg::mutable_reply() {
  
  // @@protoc_insertion_point(field_mutable:protos.Msg.reply)
  return reply_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Msg::release_reply() {
  // @@protoc_insertion_point(field_release:protos.Msg.reply)
  
  return reply_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Msg::set_allocated_reply(::std::string* reply) {
  if (reply != NULL) {
    
  } else {
    
  }
  reply_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reply);
  // @@protoc_insertion_point(field_set_allocated:protos.Msg.reply)
}

// .protos.MsgType type = 5;
inline void Msg::clear_type() {
  type_ = 0;
}
inline ::protos::MsgType Msg::type() const {
  // @@protoc_insertion_point(field_get:protos.Msg.type)
  return static_cast< ::protos::MsgType >(type_);
}
inline void Msg::set_type(::protos::MsgType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:protos.Msg.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::protos::MsgType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protos::MsgType>() {
  return ::protos::MsgType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_msg_2eproto