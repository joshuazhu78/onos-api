// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: onos/config/v2/failure.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_onos_2fconfig_2fv2_2ffailure_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_onos_2fconfig_2fv2_2ffailure_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_onos_2fconfig_2fv2_2ffailure_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_onos_2fconfig_2fv2_2ffailure_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_onos_2fconfig_2fv2_2ffailure_2eproto;
namespace onos {
namespace config {
namespace v2 {
class Failure;
struct FailureDefaultTypeInternal;
extern FailureDefaultTypeInternal _Failure_default_instance_;
}  // namespace v2
}  // namespace config
}  // namespace onos
PROTOBUF_NAMESPACE_OPEN
template<> ::onos::config::v2::Failure* Arena::CreateMaybeMessage<::onos::config::v2::Failure>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace onos {
namespace config {
namespace v2 {

enum Failure_Type : int {
  Failure_Type_UNKNOWN = 0,
  Failure_Type_CANCELED = 1,
  Failure_Type_NOT_FOUND = 2,
  Failure_Type_ALREADY_EXISTS = 3,
  Failure_Type_UNAUTHORIZED = 4,
  Failure_Type_FORBIDDEN = 5,
  Failure_Type_CONFLICT = 6,
  Failure_Type_INVALID = 7,
  Failure_Type_UNAVAILABLE = 8,
  Failure_Type_NOT_SUPPORTED = 9,
  Failure_Type_TIMEOUT = 10,
  Failure_Type_INTERNAL = 11,
  Failure_Type_Failure_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  Failure_Type_Failure_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool Failure_Type_IsValid(int value);
constexpr Failure_Type Failure_Type_Type_MIN = Failure_Type_UNKNOWN;
constexpr Failure_Type Failure_Type_Type_MAX = Failure_Type_INTERNAL;
constexpr int Failure_Type_Type_ARRAYSIZE = Failure_Type_Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Failure_Type_descriptor();
template<typename T>
inline const std::string& Failure_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Failure_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Failure_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Failure_Type_descriptor(), enum_t_value);
}
inline bool Failure_Type_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Failure_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Failure_Type>(
    Failure_Type_descriptor(), name, value);
}
// ===================================================================

class Failure final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:onos.config.v2.Failure) */ {
 public:
  inline Failure() : Failure(nullptr) {}
  ~Failure() override;
  explicit constexpr Failure(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Failure(const Failure& from);
  Failure(Failure&& from) noexcept
    : Failure() {
    *this = ::std::move(from);
  }

  inline Failure& operator=(const Failure& from) {
    CopyFrom(from);
    return *this;
  }
  inline Failure& operator=(Failure&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Failure& default_instance() {
    return *internal_default_instance();
  }
  static inline const Failure* internal_default_instance() {
    return reinterpret_cast<const Failure*>(
               &_Failure_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Failure& a, Failure& b) {
    a.Swap(&b);
  }
  inline void Swap(Failure* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Failure* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Failure* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Failure>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Failure& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Failure& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Failure* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "onos.config.v2.Failure";
  }
  protected:
  explicit Failure(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Failure_Type Type;
  static constexpr Type UNKNOWN =
    Failure_Type_UNKNOWN;
  static constexpr Type CANCELED =
    Failure_Type_CANCELED;
  static constexpr Type NOT_FOUND =
    Failure_Type_NOT_FOUND;
  static constexpr Type ALREADY_EXISTS =
    Failure_Type_ALREADY_EXISTS;
  static constexpr Type UNAUTHORIZED =
    Failure_Type_UNAUTHORIZED;
  static constexpr Type FORBIDDEN =
    Failure_Type_FORBIDDEN;
  static constexpr Type CONFLICT =
    Failure_Type_CONFLICT;
  static constexpr Type INVALID =
    Failure_Type_INVALID;
  static constexpr Type UNAVAILABLE =
    Failure_Type_UNAVAILABLE;
  static constexpr Type NOT_SUPPORTED =
    Failure_Type_NOT_SUPPORTED;
  static constexpr Type TIMEOUT =
    Failure_Type_TIMEOUT;
  static constexpr Type INTERNAL =
    Failure_Type_INTERNAL;
  static inline bool Type_IsValid(int value) {
    return Failure_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    Failure_Type_Type_MIN;
  static constexpr Type Type_MAX =
    Failure_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    Failure_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return Failure_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return Failure_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Type* value) {
    return Failure_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kDescriptionFieldNumber = 2,
    kTypeFieldNumber = 1,
  };
  // string description = 2;
  void clear_description();
  const std::string& description() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_description(ArgT0&& arg0, ArgT... args);
  std::string* mutable_description();
  PROTOBUF_NODISCARD std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // .onos.config.v2.Failure.Type type = 1;
  void clear_type();
  ::onos::config::v2::Failure_Type type() const;
  void set_type(::onos::config::v2::Failure_Type value);
  private:
  ::onos::config::v2::Failure_Type _internal_type() const;
  void _internal_set_type(::onos::config::v2::Failure_Type value);
  public:

  // @@protoc_insertion_point(class_scope:onos.config.v2.Failure)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_onos_2fconfig_2fv2_2ffailure_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Failure

// .onos.config.v2.Failure.Type type = 1;
inline void Failure::clear_type() {
  type_ = 0;
}
inline ::onos::config::v2::Failure_Type Failure::_internal_type() const {
  return static_cast< ::onos::config::v2::Failure_Type >(type_);
}
inline ::onos::config::v2::Failure_Type Failure::type() const {
  // @@protoc_insertion_point(field_get:onos.config.v2.Failure.type)
  return _internal_type();
}
inline void Failure::_internal_set_type(::onos::config::v2::Failure_Type value) {
  
  type_ = value;
}
inline void Failure::set_type(::onos::config::v2::Failure_Type value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:onos.config.v2.Failure.type)
}

// string description = 2;
inline void Failure::clear_description() {
  description_.ClearToEmpty();
}
inline const std::string& Failure::description() const {
  // @@protoc_insertion_point(field_get:onos.config.v2.Failure.description)
  return _internal_description();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Failure::set_description(ArgT0&& arg0, ArgT... args) {
 
 description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:onos.config.v2.Failure.description)
}
inline std::string* Failure::mutable_description() {
  std::string* _s = _internal_mutable_description();
  // @@protoc_insertion_point(field_mutable:onos.config.v2.Failure.description)
  return _s;
}
inline const std::string& Failure::_internal_description() const {
  return description_.Get();
}
inline void Failure::_internal_set_description(const std::string& value) {
  
  description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Failure::_internal_mutable_description() {
  
  return description_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Failure::release_description() {
  // @@protoc_insertion_point(field_release:onos.config.v2.Failure.description)
  return description_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Failure::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), description,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (description_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    description_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:onos.config.v2.Failure.description)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace v2
}  // namespace config
}  // namespace onos

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::onos::config::v2::Failure_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::onos::config::v2::Failure_Type>() {
  return ::onos::config::v2::Failure_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_onos_2fconfig_2fv2_2ffailure_2eproto
