// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: doc.proto

#include "doc.pb.h"

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
constexpr Doc::Doc(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : doc_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct DocDefaultTypeInternal {
  constexpr DocDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~DocDefaultTypeInternal() {}
  union {
    Doc _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT DocDefaultTypeInternal _Doc_default_instance_;
}  // namespace protos
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_doc_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_doc_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_doc_2eproto = nullptr;

const uint32_t TableStruct_doc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::protos::Doc, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::protos::Doc, doc_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::protos::Doc)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protos::_Doc_default_instance_),
};

const char descriptor_table_protodef_doc_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tdoc.proto\022\006protos\"\022\n\003Doc\022\013\n\003doc\030\001 \001(\tB"
  "<Z)github.com/topfreegames/pitaya/pkg/pr"
  "otos\252\002\016NPitaya.Protosb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_doc_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_doc_2eproto = {
  false, false, 109, descriptor_table_protodef_doc_2eproto, "doc.proto", 
  &descriptor_table_doc_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_doc_2eproto::offsets,
  file_level_metadata_doc_2eproto, file_level_enum_descriptors_doc_2eproto, file_level_service_descriptors_doc_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_doc_2eproto_getter() {
  return &descriptor_table_doc_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_doc_2eproto(&descriptor_table_doc_2eproto);
namespace protos {

// ===================================================================

class Doc::_Internal {
 public:
};

Doc::Doc(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:protos.Doc)
}
Doc::Doc(const Doc& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  doc_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    doc_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_doc().empty()) {
    doc_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_doc(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:protos.Doc)
}

inline void Doc::SharedCtor() {
doc_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  doc_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Doc::~Doc() {
  // @@protoc_insertion_point(destructor:protos.Doc)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Doc::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  doc_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Doc::ArenaDtor(void* object) {
  Doc* _this = reinterpret_cast< Doc* >(object);
  (void)_this;
}
void Doc::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Doc::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Doc::Clear() {
// @@protoc_insertion_point(message_clear_start:protos.Doc)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  doc_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Doc::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string doc = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_doc();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "protos.Doc.doc"));
          CHK_(ptr);
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

uint8_t* Doc::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protos.Doc)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string doc = 1;
  if (!this->_internal_doc().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_doc().data(), static_cast<int>(this->_internal_doc().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "protos.Doc.doc");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_doc(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protos.Doc)
  return target;
}

size_t Doc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protos.Doc)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string doc = 1;
  if (!this->_internal_doc().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_doc());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Doc::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Doc::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Doc::GetClassData() const { return &_class_data_; }

void Doc::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Doc *>(to)->MergeFrom(
      static_cast<const Doc &>(from));
}


void Doc::MergeFrom(const Doc& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protos.Doc)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_doc().empty()) {
    _internal_set_doc(from._internal_doc());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Doc::CopyFrom(const Doc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protos.Doc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Doc::IsInitialized() const {
  return true;
}

void Doc::InternalSwap(Doc* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &doc_, lhs_arena,
      &other->doc_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Doc::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_doc_2eproto_getter, &descriptor_table_doc_2eproto_once,
      file_level_metadata_doc_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protos::Doc* Arena::CreateMaybeMessage< ::protos::Doc >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protos::Doc >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
