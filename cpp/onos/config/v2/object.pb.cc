// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: onos/config/v2/object.proto

#include "onos/config/v2/object.pb.h"

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
namespace onos {
namespace config {
namespace v2 {
constexpr ObjectMeta::ObjectMeta(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : key_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , created_(nullptr)
  , updated_(nullptr)
  , deleted_(nullptr)
  , version_(uint64_t{0u})
  , revision_(uint64_t{0u}){}
struct ObjectMetaDefaultTypeInternal {
  constexpr ObjectMetaDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ObjectMetaDefaultTypeInternal() {}
  union {
    ObjectMeta _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ObjectMetaDefaultTypeInternal _ObjectMeta_default_instance_;
constexpr TargetTypeVersion::TargetTypeVersion(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : target_type_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , target_version_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct TargetTypeVersionDefaultTypeInternal {
  constexpr TargetTypeVersionDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TargetTypeVersionDefaultTypeInternal() {}
  union {
    TargetTypeVersion _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TargetTypeVersionDefaultTypeInternal _TargetTypeVersion_default_instance_;
}  // namespace v2
}  // namespace config
}  // namespace onos
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_onos_2fconfig_2fv2_2fobject_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_onos_2fconfig_2fv2_2fobject_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_onos_2fconfig_2fv2_2fobject_2eproto = nullptr;

const uint32_t TableStruct_onos_2fconfig_2fv2_2fobject_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::onos::config::v2::ObjectMeta, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::onos::config::v2::ObjectMeta, key_),
  PROTOBUF_FIELD_OFFSET(::onos::config::v2::ObjectMeta, version_),
  PROTOBUF_FIELD_OFFSET(::onos::config::v2::ObjectMeta, revision_),
  PROTOBUF_FIELD_OFFSET(::onos::config::v2::ObjectMeta, created_),
  PROTOBUF_FIELD_OFFSET(::onos::config::v2::ObjectMeta, updated_),
  PROTOBUF_FIELD_OFFSET(::onos::config::v2::ObjectMeta, deleted_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::onos::config::v2::TargetTypeVersion, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::onos::config::v2::TargetTypeVersion, target_type_),
  PROTOBUF_FIELD_OFFSET(::onos::config::v2::TargetTypeVersion, target_version_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::onos::config::v2::ObjectMeta)},
  { 12, -1, -1, sizeof(::onos::config::v2::TargetTypeVersion)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::onos::config::v2::_ObjectMeta_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::onos::config::v2::_TargetTypeVersion_default_instance_),
};

const char descriptor_table_protodef_onos_2fconfig_2fv2_2fobject_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033onos/config/v2/object.proto\022\016onos.conf"
  "ig.v2\032\024gogoproto/gogo.proto\032\037google/prot"
  "obuf/timestamp.proto\"\353\001\n\nObjectMeta\022\013\n\003k"
  "ey\030\001 \001(\t\022\017\n\007version\030\002 \001(\004\022\036\n\010revision\030\003 "
  "\001(\004B\014\372\336\037\010Revision\0225\n\007created\030\004 \001(\0132\032.goo"
  "gle.protobuf.TimestampB\010\220\337\037\001\310\336\037\000\0225\n\007upda"
  "ted\030\005 \001(\0132\032.google.protobuf.TimestampB\010\220"
  "\337\037\001\310\336\037\000\0221\n\007deleted\030\006 \001(\0132\032.google.protob"
  "uf.TimestampB\004\220\337\037\001\"c\n\021TargetTypeVersion\022"
  "#\n\013target_type\030\001 \001(\tB\016\372\336\037\nTargetType\022)\n\016"
  "target_version\030\002 \001(\tB\021\372\336\037\rTargetVersionb"
  "\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto_deps[2] = {
  &::descriptor_table_gogoproto_2fgogo_2eproto,
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto = {
  false, false, 447, descriptor_table_protodef_onos_2fconfig_2fv2_2fobject_2eproto, "onos/config/v2/object.proto", 
  &descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto_once, descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_onos_2fconfig_2fv2_2fobject_2eproto::offsets,
  file_level_metadata_onos_2fconfig_2fv2_2fobject_2eproto, file_level_enum_descriptors_onos_2fconfig_2fv2_2fobject_2eproto, file_level_service_descriptors_onos_2fconfig_2fv2_2fobject_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto_getter() {
  return &descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_onos_2fconfig_2fv2_2fobject_2eproto(&descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto);
namespace onos {
namespace config {
namespace v2 {

// ===================================================================

class ObjectMeta::_Internal {
 public:
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& created(const ObjectMeta* msg);
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& updated(const ObjectMeta* msg);
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& deleted(const ObjectMeta* msg);
};

const ::PROTOBUF_NAMESPACE_ID::Timestamp&
ObjectMeta::_Internal::created(const ObjectMeta* msg) {
  return *msg->created_;
}
const ::PROTOBUF_NAMESPACE_ID::Timestamp&
ObjectMeta::_Internal::updated(const ObjectMeta* msg) {
  return *msg->updated_;
}
const ::PROTOBUF_NAMESPACE_ID::Timestamp&
ObjectMeta::_Internal::deleted(const ObjectMeta* msg) {
  return *msg->deleted_;
}
void ObjectMeta::clear_created() {
  if (GetArenaForAllocation() == nullptr && created_ != nullptr) {
    delete created_;
  }
  created_ = nullptr;
}
void ObjectMeta::clear_updated() {
  if (GetArenaForAllocation() == nullptr && updated_ != nullptr) {
    delete updated_;
  }
  updated_ = nullptr;
}
void ObjectMeta::clear_deleted() {
  if (GetArenaForAllocation() == nullptr && deleted_ != nullptr) {
    delete deleted_;
  }
  deleted_ = nullptr;
}
ObjectMeta::ObjectMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:onos.config.v2.ObjectMeta)
}
ObjectMeta::ObjectMeta(const ObjectMeta& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_key().empty()) {
    key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_key(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_created()) {
    created_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from.created_);
  } else {
    created_ = nullptr;
  }
  if (from._internal_has_updated()) {
    updated_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from.updated_);
  } else {
    updated_ = nullptr;
  }
  if (from._internal_has_deleted()) {
    deleted_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from.deleted_);
  } else {
    deleted_ = nullptr;
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&revision_) -
    reinterpret_cast<char*>(&version_)) + sizeof(revision_));
  // @@protoc_insertion_point(copy_constructor:onos.config.v2.ObjectMeta)
}

inline void ObjectMeta::SharedCtor() {
key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&created_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&revision_) -
    reinterpret_cast<char*>(&created_)) + sizeof(revision_));
}

ObjectMeta::~ObjectMeta() {
  // @@protoc_insertion_point(destructor:onos.config.v2.ObjectMeta)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ObjectMeta::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  key_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete created_;
  if (this != internal_default_instance()) delete updated_;
  if (this != internal_default_instance()) delete deleted_;
}

void ObjectMeta::ArenaDtor(void* object) {
  ObjectMeta* _this = reinterpret_cast< ObjectMeta* >(object);
  (void)_this;
}
void ObjectMeta::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ObjectMeta::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ObjectMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:onos.config.v2.ObjectMeta)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && created_ != nullptr) {
    delete created_;
  }
  created_ = nullptr;
  if (GetArenaForAllocation() == nullptr && updated_ != nullptr) {
    delete updated_;
  }
  updated_ = nullptr;
  if (GetArenaForAllocation() == nullptr && deleted_ != nullptr) {
    delete deleted_;
  }
  deleted_ = nullptr;
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&revision_) -
      reinterpret_cast<char*>(&version_)) + sizeof(revision_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ObjectMeta::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string key = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_key();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "onos.config.v2.ObjectMeta.key"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 version = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 revision = 3 [(.gogoproto.casttype) = "Revision"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          revision_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp created = 4 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_created(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp updated = 5 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_updated(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp deleted = 6 [(.gogoproto.stdtime) = true];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_deleted(), ptr);
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

uint8_t* ObjectMeta::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:onos.config.v2.ObjectMeta)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string key = 1;
  if (!this->_internal_key().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_key().data(), static_cast<int>(this->_internal_key().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "onos.config.v2.ObjectMeta.key");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_key(), target);
  }

  // uint64 version = 2;
  if (this->_internal_version() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->_internal_version(), target);
  }

  // uint64 revision = 3 [(.gogoproto.casttype) = "Revision"];
  if (this->_internal_revision() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(3, this->_internal_revision(), target);
  }

  // .google.protobuf.Timestamp created = 4 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
  if (this->_internal_has_created()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::created(this), target, stream);
  }

  // .google.protobuf.Timestamp updated = 5 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
  if (this->_internal_has_updated()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::updated(this), target, stream);
  }

  // .google.protobuf.Timestamp deleted = 6 [(.gogoproto.stdtime) = true];
  if (this->_internal_has_deleted()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::deleted(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:onos.config.v2.ObjectMeta)
  return target;
}

size_t ObjectMeta::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:onos.config.v2.ObjectMeta)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string key = 1;
  if (!this->_internal_key().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_key());
  }

  // .google.protobuf.Timestamp created = 4 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
  if (this->_internal_has_created()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *created_);
  }

  // .google.protobuf.Timestamp updated = 5 [(.gogoproto.nullable) = false, (.gogoproto.stdtime) = true];
  if (this->_internal_has_updated()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *updated_);
  }

  // .google.protobuf.Timestamp deleted = 6 [(.gogoproto.stdtime) = true];
  if (this->_internal_has_deleted()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *deleted_);
  }

  // uint64 version = 2;
  if (this->_internal_version() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_version());
  }

  // uint64 revision = 3 [(.gogoproto.casttype) = "Revision"];
  if (this->_internal_revision() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_revision());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ObjectMeta::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ObjectMeta::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ObjectMeta::GetClassData() const { return &_class_data_; }

void ObjectMeta::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ObjectMeta *>(to)->MergeFrom(
      static_cast<const ObjectMeta &>(from));
}


void ObjectMeta::MergeFrom(const ObjectMeta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:onos.config.v2.ObjectMeta)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_key().empty()) {
    _internal_set_key(from._internal_key());
  }
  if (from._internal_has_created()) {
    _internal_mutable_created()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_created());
  }
  if (from._internal_has_updated()) {
    _internal_mutable_updated()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_updated());
  }
  if (from._internal_has_deleted()) {
    _internal_mutable_deleted()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(from._internal_deleted());
  }
  if (from._internal_version() != 0) {
    _internal_set_version(from._internal_version());
  }
  if (from._internal_revision() != 0) {
    _internal_set_revision(from._internal_revision());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ObjectMeta::CopyFrom(const ObjectMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:onos.config.v2.ObjectMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ObjectMeta::IsInitialized() const {
  return true;
}

void ObjectMeta::InternalSwap(ObjectMeta* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &key_, lhs_arena,
      &other->key_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ObjectMeta, revision_)
      + sizeof(ObjectMeta::revision_)
      - PROTOBUF_FIELD_OFFSET(ObjectMeta, created_)>(
          reinterpret_cast<char*>(&created_),
          reinterpret_cast<char*>(&other->created_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ObjectMeta::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto_getter, &descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto_once,
      file_level_metadata_onos_2fconfig_2fv2_2fobject_2eproto[0]);
}

// ===================================================================

class TargetTypeVersion::_Internal {
 public:
};

TargetTypeVersion::TargetTypeVersion(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:onos.config.v2.TargetTypeVersion)
}
TargetTypeVersion::TargetTypeVersion(const TargetTypeVersion& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  target_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    target_type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_target_type().empty()) {
    target_type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_target_type(), 
      GetArenaForAllocation());
  }
  target_version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    target_version_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_target_version().empty()) {
    target_version_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_target_version(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:onos.config.v2.TargetTypeVersion)
}

inline void TargetTypeVersion::SharedCtor() {
target_type_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  target_type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
target_version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  target_version_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TargetTypeVersion::~TargetTypeVersion() {
  // @@protoc_insertion_point(destructor:onos.config.v2.TargetTypeVersion)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void TargetTypeVersion::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  target_type_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  target_version_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void TargetTypeVersion::ArenaDtor(void* object) {
  TargetTypeVersion* _this = reinterpret_cast< TargetTypeVersion* >(object);
  (void)_this;
}
void TargetTypeVersion::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TargetTypeVersion::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TargetTypeVersion::Clear() {
// @@protoc_insertion_point(message_clear_start:onos.config.v2.TargetTypeVersion)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  target_type_.ClearToEmpty();
  target_version_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TargetTypeVersion::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string target_type = 1 [(.gogoproto.casttype) = "TargetType"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_target_type();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "onos.config.v2.TargetTypeVersion.target_type"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string target_version = 2 [(.gogoproto.casttype) = "TargetVersion"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_target_version();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "onos.config.v2.TargetTypeVersion.target_version"));
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

uint8_t* TargetTypeVersion::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:onos.config.v2.TargetTypeVersion)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string target_type = 1 [(.gogoproto.casttype) = "TargetType"];
  if (!this->_internal_target_type().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_target_type().data(), static_cast<int>(this->_internal_target_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "onos.config.v2.TargetTypeVersion.target_type");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_target_type(), target);
  }

  // string target_version = 2 [(.gogoproto.casttype) = "TargetVersion"];
  if (!this->_internal_target_version().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_target_version().data(), static_cast<int>(this->_internal_target_version().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "onos.config.v2.TargetTypeVersion.target_version");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_target_version(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:onos.config.v2.TargetTypeVersion)
  return target;
}

size_t TargetTypeVersion::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:onos.config.v2.TargetTypeVersion)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string target_type = 1 [(.gogoproto.casttype) = "TargetType"];
  if (!this->_internal_target_type().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_target_type());
  }

  // string target_version = 2 [(.gogoproto.casttype) = "TargetVersion"];
  if (!this->_internal_target_version().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_target_version());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TargetTypeVersion::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    TargetTypeVersion::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TargetTypeVersion::GetClassData() const { return &_class_data_; }

void TargetTypeVersion::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<TargetTypeVersion *>(to)->MergeFrom(
      static_cast<const TargetTypeVersion &>(from));
}


void TargetTypeVersion::MergeFrom(const TargetTypeVersion& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:onos.config.v2.TargetTypeVersion)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_target_type().empty()) {
    _internal_set_target_type(from._internal_target_type());
  }
  if (!from._internal_target_version().empty()) {
    _internal_set_target_version(from._internal_target_version());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TargetTypeVersion::CopyFrom(const TargetTypeVersion& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:onos.config.v2.TargetTypeVersion)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TargetTypeVersion::IsInitialized() const {
  return true;
}

void TargetTypeVersion::InternalSwap(TargetTypeVersion* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &target_type_, lhs_arena,
      &other->target_type_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &target_version_, lhs_arena,
      &other->target_version_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata TargetTypeVersion::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto_getter, &descriptor_table_onos_2fconfig_2fv2_2fobject_2eproto_once,
      file_level_metadata_onos_2fconfig_2fv2_2fobject_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace v2
}  // namespace config
}  // namespace onos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::onos::config::v2::ObjectMeta* Arena::CreateMaybeMessage< ::onos::config::v2::ObjectMeta >(Arena* arena) {
  return Arena::CreateMessageInternal< ::onos::config::v2::ObjectMeta >(arena);
}
template<> PROTOBUF_NOINLINE ::onos::config::v2::TargetTypeVersion* Arena::CreateMaybeMessage< ::onos::config::v2::TargetTypeVersion >(Arena* arena) {
  return Arena::CreateMessageInternal< ::onos::config::v2::TargetTypeVersion >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
