// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: onos/perf/perf.proto

#include "onos/perf/perf.pb.h"

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
namespace perf {
constexpr Data::Data(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : data_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , length_(0u){}
struct DataDefaultTypeInternal {
  constexpr DataDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~DataDefaultTypeInternal() {}
  union {
    Data _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT DataDefaultTypeInternal _Data_default_instance_;
constexpr PingRequest::PingRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : payload_(nullptr)
  , timestamp_(uint64_t{0u})
  , repeatcount_(0u){}
struct PingRequestDefaultTypeInternal {
  constexpr PingRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PingRequestDefaultTypeInternal() {}
  union {
    PingRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PingRequestDefaultTypeInternal _PingRequest_default_instance_;
constexpr PingResponse::PingResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : payload_(nullptr)
  , timestamp_(uint64_t{0u}){}
struct PingResponseDefaultTypeInternal {
  constexpr PingResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PingResponseDefaultTypeInternal() {}
  union {
    PingResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PingResponseDefaultTypeInternal _PingResponse_default_instance_;
}  // namespace perf
}  // namespace onos
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_onos_2fperf_2fperf_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_onos_2fperf_2fperf_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_onos_2fperf_2fperf_2eproto = nullptr;

const uint32_t TableStruct_onos_2fperf_2fperf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::onos::perf::Data, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::onos::perf::Data, length_),
  PROTOBUF_FIELD_OFFSET(::onos::perf::Data, data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::onos::perf::PingRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::onos::perf::PingRequest, payload_),
  PROTOBUF_FIELD_OFFSET(::onos::perf::PingRequest, timestamp_),
  PROTOBUF_FIELD_OFFSET(::onos::perf::PingRequest, repeatcount_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::onos::perf::PingResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::onos::perf::PingResponse, payload_),
  PROTOBUF_FIELD_OFFSET(::onos::perf::PingResponse, timestamp_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::onos::perf::Data)},
  { 8, -1, -1, sizeof(::onos::perf::PingRequest)},
  { 17, -1, -1, sizeof(::onos::perf::PingResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::onos::perf::_Data_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::onos::perf::_PingRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::onos::perf::_PingResponse_default_instance_),
};

const char descriptor_table_protodef_onos_2fperf_2fperf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024onos/perf/perf.proto\022\tonos.perf\"$\n\004Dat"
  "a\022\016\n\006length\030\001 \001(\r\022\014\n\004data\030\002 \001(\014\"W\n\013PingR"
  "equest\022 \n\007payload\030\001 \001(\0132\017.onos.perf.Data"
  "\022\021\n\ttimestamp\030\002 \001(\004\022\023\n\013repeatCount\030\003 \001(\r"
  "\"C\n\014PingResponse\022 \n\007payload\030\001 \001(\0132\017.onos"
  ".perf.Data\022\021\n\ttimestamp\030\002 \001(\0042\215\001\n\013PerfSe"
  "rvice\0229\n\004Ping\022\026.onos.perf.PingRequest\032\027."
  "onos.perf.PingResponse\"\000\022C\n\nPingStream\022\026"
  ".onos.perf.PingRequest\032\027.onos.perf.PingR"
  "esponse\"\000(\0010\001b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_onos_2fperf_2fperf_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_onos_2fperf_2fperf_2eproto = {
  false, false, 381, descriptor_table_protodef_onos_2fperf_2fperf_2eproto, "onos/perf/perf.proto", 
  &descriptor_table_onos_2fperf_2fperf_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_onos_2fperf_2fperf_2eproto::offsets,
  file_level_metadata_onos_2fperf_2fperf_2eproto, file_level_enum_descriptors_onos_2fperf_2fperf_2eproto, file_level_service_descriptors_onos_2fperf_2fperf_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_onos_2fperf_2fperf_2eproto_getter() {
  return &descriptor_table_onos_2fperf_2fperf_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_onos_2fperf_2fperf_2eproto(&descriptor_table_onos_2fperf_2fperf_2eproto);
namespace onos {
namespace perf {

// ===================================================================

class Data::_Internal {
 public:
};

Data::Data(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:onos.perf.Data)
}
Data::Data(const Data& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_data().empty()) {
    data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_data(), 
      GetArenaForAllocation());
  }
  length_ = from.length_;
  // @@protoc_insertion_point(copy_constructor:onos.perf.Data)
}

inline void Data::SharedCtor() {
data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
length_ = 0u;
}

Data::~Data() {
  // @@protoc_insertion_point(destructor:onos.perf.Data)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Data::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Data::ArenaDtor(void* object) {
  Data* _this = reinterpret_cast< Data* >(object);
  (void)_this;
}
void Data::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Data::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Data::Clear() {
// @@protoc_insertion_point(message_clear_start:onos.perf.Data)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.ClearToEmpty();
  length_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Data::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 length = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          length_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

uint8_t* Data::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:onos.perf.Data)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 length = 1;
  if (this->_internal_length() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_length(), target);
  }

  // bytes data = 2;
  if (!this->_internal_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:onos.perf.Data)
  return target;
}

size_t Data::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:onos.perf.Data)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes data = 2;
  if (!this->_internal_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  // uint32 length = 1;
  if (this->_internal_length() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_length());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Data::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Data::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Data::GetClassData() const { return &_class_data_; }

void Data::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Data *>(to)->MergeFrom(
      static_cast<const Data &>(from));
}


void Data::MergeFrom(const Data& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:onos.perf.Data)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_data().empty()) {
    _internal_set_data(from._internal_data());
  }
  if (from._internal_length() != 0) {
    _internal_set_length(from._internal_length());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Data::CopyFrom(const Data& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:onos.perf.Data)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Data::IsInitialized() const {
  return true;
}

void Data::InternalSwap(Data* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &data_, lhs_arena,
      &other->data_, rhs_arena
  );
  swap(length_, other->length_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Data::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_onos_2fperf_2fperf_2eproto_getter, &descriptor_table_onos_2fperf_2fperf_2eproto_once,
      file_level_metadata_onos_2fperf_2fperf_2eproto[0]);
}

// ===================================================================

class PingRequest::_Internal {
 public:
  static const ::onos::perf::Data& payload(const PingRequest* msg);
};

const ::onos::perf::Data&
PingRequest::_Internal::payload(const PingRequest* msg) {
  return *msg->payload_;
}
PingRequest::PingRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:onos.perf.PingRequest)
}
PingRequest::PingRequest(const PingRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_payload()) {
    payload_ = new ::onos::perf::Data(*from.payload_);
  } else {
    payload_ = nullptr;
  }
  ::memcpy(&timestamp_, &from.timestamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&repeatcount_) -
    reinterpret_cast<char*>(&timestamp_)) + sizeof(repeatcount_));
  // @@protoc_insertion_point(copy_constructor:onos.perf.PingRequest)
}

inline void PingRequest::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&payload_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&repeatcount_) -
    reinterpret_cast<char*>(&payload_)) + sizeof(repeatcount_));
}

PingRequest::~PingRequest() {
  // @@protoc_insertion_point(destructor:onos.perf.PingRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void PingRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete payload_;
}

void PingRequest::ArenaDtor(void* object) {
  PingRequest* _this = reinterpret_cast< PingRequest* >(object);
  (void)_this;
}
void PingRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PingRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void PingRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:onos.perf.PingRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && payload_ != nullptr) {
    delete payload_;
  }
  payload_ = nullptr;
  ::memset(&timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&repeatcount_) -
      reinterpret_cast<char*>(&timestamp_)) + sizeof(repeatcount_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PingRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .onos.perf.Data payload = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_payload(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 timestamp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 repeatCount = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          repeatcount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* PingRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:onos.perf.PingRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .onos.perf.Data payload = 1;
  if (this->_internal_has_payload()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::payload(this), target, stream);
  }

  // uint64 timestamp = 2;
  if (this->_internal_timestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->_internal_timestamp(), target);
  }

  // uint32 repeatCount = 3;
  if (this->_internal_repeatcount() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(3, this->_internal_repeatcount(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:onos.perf.PingRequest)
  return target;
}

size_t PingRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:onos.perf.PingRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .onos.perf.Data payload = 1;
  if (this->_internal_has_payload()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *payload_);
  }

  // uint64 timestamp = 2;
  if (this->_internal_timestamp() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_timestamp());
  }

  // uint32 repeatCount = 3;
  if (this->_internal_repeatcount() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_repeatcount());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PingRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    PingRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PingRequest::GetClassData() const { return &_class_data_; }

void PingRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<PingRequest *>(to)->MergeFrom(
      static_cast<const PingRequest &>(from));
}


void PingRequest::MergeFrom(const PingRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:onos.perf.PingRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_payload()) {
    _internal_mutable_payload()->::onos::perf::Data::MergeFrom(from._internal_payload());
  }
  if (from._internal_timestamp() != 0) {
    _internal_set_timestamp(from._internal_timestamp());
  }
  if (from._internal_repeatcount() != 0) {
    _internal_set_repeatcount(from._internal_repeatcount());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PingRequest::CopyFrom(const PingRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:onos.perf.PingRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PingRequest::IsInitialized() const {
  return true;
}

void PingRequest::InternalSwap(PingRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PingRequest, repeatcount_)
      + sizeof(PingRequest::repeatcount_)
      - PROTOBUF_FIELD_OFFSET(PingRequest, payload_)>(
          reinterpret_cast<char*>(&payload_),
          reinterpret_cast<char*>(&other->payload_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PingRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_onos_2fperf_2fperf_2eproto_getter, &descriptor_table_onos_2fperf_2fperf_2eproto_once,
      file_level_metadata_onos_2fperf_2fperf_2eproto[1]);
}

// ===================================================================

class PingResponse::_Internal {
 public:
  static const ::onos::perf::Data& payload(const PingResponse* msg);
};

const ::onos::perf::Data&
PingResponse::_Internal::payload(const PingResponse* msg) {
  return *msg->payload_;
}
PingResponse::PingResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:onos.perf.PingResponse)
}
PingResponse::PingResponse(const PingResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_payload()) {
    payload_ = new ::onos::perf::Data(*from.payload_);
  } else {
    payload_ = nullptr;
  }
  timestamp_ = from.timestamp_;
  // @@protoc_insertion_point(copy_constructor:onos.perf.PingResponse)
}

inline void PingResponse::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&payload_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&timestamp_) -
    reinterpret_cast<char*>(&payload_)) + sizeof(timestamp_));
}

PingResponse::~PingResponse() {
  // @@protoc_insertion_point(destructor:onos.perf.PingResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void PingResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete payload_;
}

void PingResponse::ArenaDtor(void* object) {
  PingResponse* _this = reinterpret_cast< PingResponse* >(object);
  (void)_this;
}
void PingResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PingResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void PingResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:onos.perf.PingResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && payload_ != nullptr) {
    delete payload_;
  }
  payload_ = nullptr;
  timestamp_ = uint64_t{0u};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PingResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .onos.perf.Data payload = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_payload(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint64 timestamp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* PingResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:onos.perf.PingResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .onos.perf.Data payload = 1;
  if (this->_internal_has_payload()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::payload(this), target, stream);
  }

  // uint64 timestamp = 2;
  if (this->_internal_timestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(2, this->_internal_timestamp(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:onos.perf.PingResponse)
  return target;
}

size_t PingResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:onos.perf.PingResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .onos.perf.Data payload = 1;
  if (this->_internal_has_payload()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *payload_);
  }

  // uint64 timestamp = 2;
  if (this->_internal_timestamp() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64SizePlusOne(this->_internal_timestamp());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PingResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    PingResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PingResponse::GetClassData() const { return &_class_data_; }

void PingResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<PingResponse *>(to)->MergeFrom(
      static_cast<const PingResponse &>(from));
}


void PingResponse::MergeFrom(const PingResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:onos.perf.PingResponse)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_payload()) {
    _internal_mutable_payload()->::onos::perf::Data::MergeFrom(from._internal_payload());
  }
  if (from._internal_timestamp() != 0) {
    _internal_set_timestamp(from._internal_timestamp());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PingResponse::CopyFrom(const PingResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:onos.perf.PingResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PingResponse::IsInitialized() const {
  return true;
}

void PingResponse::InternalSwap(PingResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PingResponse, timestamp_)
      + sizeof(PingResponse::timestamp_)
      - PROTOBUF_FIELD_OFFSET(PingResponse, payload_)>(
          reinterpret_cast<char*>(&payload_),
          reinterpret_cast<char*>(&other->payload_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PingResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_onos_2fperf_2fperf_2eproto_getter, &descriptor_table_onos_2fperf_2fperf_2eproto_once,
      file_level_metadata_onos_2fperf_2fperf_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace perf
}  // namespace onos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::onos::perf::Data* Arena::CreateMaybeMessage< ::onos::perf::Data >(Arena* arena) {
  return Arena::CreateMessageInternal< ::onos::perf::Data >(arena);
}
template<> PROTOBUF_NOINLINE ::onos::perf::PingRequest* Arena::CreateMaybeMessage< ::onos::perf::PingRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::onos::perf::PingRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::onos::perf::PingResponse* Arena::CreateMaybeMessage< ::onos::perf::PingResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::onos::perf::PingResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
