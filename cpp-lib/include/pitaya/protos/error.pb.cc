// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: error.proto

#include "error.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace protos {
constexpr Error_MetadataEntry_DoNotUse::Error_MetadataEntry_DoNotUse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct Error_MetadataEntry_DoNotUseDefaultTypeInternal {
  constexpr Error_MetadataEntry_DoNotUseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~Error_MetadataEntry_DoNotUseDefaultTypeInternal() {}
  union {
    Error_MetadataEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT Error_MetadataEntry_DoNotUseDefaultTypeInternal _Error_MetadataEntry_DoNotUse_default_instance_;
constexpr Error::Error(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : metadata_(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{})
  , code_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , msg_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct ErrorDefaultTypeInternal {
  constexpr ErrorDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ErrorDefaultTypeInternal() {}
  union {
    Error _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ErrorDefaultTypeInternal _Error_default_instance_;
}  // namespace protos
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_error_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_error_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_error_2eproto = nullptr;

const uint32_t TableStruct_error_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::protos::Error_MetadataEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::protos::Error_MetadataEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::protos::Error_MetadataEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::protos::Error_MetadataEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::protos::Error, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::protos::Error, code_),
  PROTOBUF_FIELD_OFFSET(::protos::Error, msg_),
  PROTOBUF_FIELD_OFFSET(::protos::Error, metadata_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::protos::Error_MetadataEntry_DoNotUse)},
  { 10, -1, -1, sizeof(::protos::Error)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protos::_Error_MetadataEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protos::_Error_default_instance_),
};

const char descriptor_table_protodef_error_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013error.proto\022\006protos\"\202\001\n\005Error\022\014\n\004code\030"
  "\001 \001(\t\022\013\n\003msg\030\002 \001(\t\022-\n\010metadata\030\003 \003(\0132\033.p"
  "rotos.Error.MetadataEntry\032/\n\rMetadataEnt"
  "ry\022\013\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \001(\t:\0028\001B<Z)gi"
  "thub.com/topfreegames/pitaya/pkg/protos\252"
  "\002\016NPitaya.Protosb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_error_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_error_2eproto = {
  false, false, 224, descriptor_table_protodef_error_2eproto, "error.proto", 
  &descriptor_table_error_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_error_2eproto::offsets,
  file_level_metadata_error_2eproto, file_level_enum_descriptors_error_2eproto, file_level_service_descriptors_error_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_error_2eproto_getter() {
  return &descriptor_table_error_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_error_2eproto(&descriptor_table_error_2eproto);
namespace protos {

// ===================================================================

Error_MetadataEntry_DoNotUse::Error_MetadataEntry_DoNotUse() {}
Error_MetadataEntry_DoNotUse::Error_MetadataEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void Error_MetadataEntry_DoNotUse::MergeFrom(const Error_MetadataEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata Error_MetadataEntry_DoNotUse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_error_2eproto_getter, &descriptor_table_error_2eproto_once,
      file_level_metadata_error_2eproto[0]);
}

// ===================================================================

class Error::_Internal {
 public:
};

Error::Error(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  metadata_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:protos.Error)
}
Error::Error(const Error& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  metadata_.MergeFrom(from.metadata_);
  code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    code_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_code().empty()) {
    code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_code(), 
      GetArenaForAllocation());
  }
  msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    msg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_msg().empty()) {
    msg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_msg(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:protos.Error)
}

inline void Error::SharedCtor() {
code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  code_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
msg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  msg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Error::~Error() {
  // @@protoc_insertion_point(destructor:protos.Error)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Error::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  msg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Error::ArenaDtor(void* object) {
  Error* _this = reinterpret_cast< Error* >(object);
  (void)_this;
  _this->metadata_. ~MapField();
}
inline void Error::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena) {
  if (arena != nullptr) {
    arena->OwnCustomDestructor(this, &Error::ArenaDtor);
  }
}
void Error::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Error::Clear() {
// @@protoc_insertion_point(message_clear_start:protos.Error)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  metadata_.Clear();
  code_.ClearToEmpty();
  msg_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Error::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_code();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "protos.Error.code"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string msg = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_msg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "protos.Error.msg"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // map<string, string> metadata = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&metadata_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Error::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protos.Error)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string code = 1;
  if (!this->_internal_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "protos.Error.code");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_code(), target);
  }

  // string msg = 2;
  if (!this->_internal_msg().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_msg().data(), static_cast<int>(this->_internal_msg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "protos.Error.msg");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_msg(), target);
  }

  // map<string, string> metadata = 3;
  if (!this->_internal_metadata().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        (void)p;
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "protos.Error.MetadataEntry.key");
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), static_cast<int>(p->second.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "protos.Error.MetadataEntry.value");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_metadata().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_metadata().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_metadata().begin();
          it != this->_internal_metadata().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = Error_MetadataEntry_DoNotUse::Funcs::InternalSerialize(3, items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
          it = this->_internal_metadata().begin();
          it != this->_internal_metadata().end(); ++it) {
        target = Error_MetadataEntry_DoNotUse::Funcs::InternalSerialize(3, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protos.Error)
  return target;
}

size_t Error::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protos.Error)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> metadata = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_metadata_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
      it = this->_internal_metadata().begin();
      it != this->_internal_metadata().end(); ++it) {
    total_size += Error_MetadataEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // string code = 1;
  if (!this->_internal_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_code());
  }

  // string msg = 2;
  if (!this->_internal_msg().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_msg());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Error::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Error::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Error::GetClassData() const { return &_class_data_; }

void Error::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Error *>(to)->MergeFrom(
      static_cast<const Error &>(from));
}


void Error::MergeFrom(const Error& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protos.Error)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  metadata_.MergeFrom(from.metadata_);
  if (!from._internal_code().empty()) {
    _internal_set_code(from._internal_code());
  }
  if (!from._internal_msg().empty()) {
    _internal_set_msg(from._internal_msg());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Error::CopyFrom(const Error& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protos.Error)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Error::IsInitialized() const {
  return true;
}

void Error::InternalSwap(Error* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  metadata_.InternalSwap(&other->metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &code_, lhs_arena,
      &other->code_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &msg_, lhs_arena,
      &other->msg_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Error::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_error_2eproto_getter, &descriptor_table_error_2eproto_once,
      file_level_metadata_error_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protos::Error_MetadataEntry_DoNotUse* Arena::CreateMaybeMessage< ::protos::Error_MetadataEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protos::Error_MetadataEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::protos::Error* Arena::CreateMaybeMessage< ::protos::Error >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protos::Error >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
