// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: substrait/capabilities.proto

#include "substrait/capabilities.pb.h"

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
namespace substrait {
constexpr Capabilities_SimpleExtension::Capabilities_SimpleExtension(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : function_keys_()
  , type_keys_()
  , type_variation_keys_()
  , uri_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct Capabilities_SimpleExtensionDefaultTypeInternal {
  constexpr Capabilities_SimpleExtensionDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~Capabilities_SimpleExtensionDefaultTypeInternal() {}
  union {
    Capabilities_SimpleExtension _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT Capabilities_SimpleExtensionDefaultTypeInternal _Capabilities_SimpleExtension_default_instance_;
constexpr Capabilities::Capabilities(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : substrait_versions_()
  , advanced_extension_type_urls_()
  , simple_extensions_(){}
struct CapabilitiesDefaultTypeInternal {
  constexpr CapabilitiesDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CapabilitiesDefaultTypeInternal() {}
  union {
    Capabilities _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CapabilitiesDefaultTypeInternal _Capabilities_default_instance_;
}  // namespace substrait
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_substrait_2fcapabilities_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_substrait_2fcapabilities_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_substrait_2fcapabilities_2eproto = nullptr;

const uint32_t TableStruct_substrait_2fcapabilities_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::substrait::Capabilities_SimpleExtension, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::substrait::Capabilities_SimpleExtension, uri_),
  PROTOBUF_FIELD_OFFSET(::substrait::Capabilities_SimpleExtension, function_keys_),
  PROTOBUF_FIELD_OFFSET(::substrait::Capabilities_SimpleExtension, type_keys_),
  PROTOBUF_FIELD_OFFSET(::substrait::Capabilities_SimpleExtension, type_variation_keys_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::substrait::Capabilities, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::substrait::Capabilities, substrait_versions_),
  PROTOBUF_FIELD_OFFSET(::substrait::Capabilities, advanced_extension_type_urls_),
  PROTOBUF_FIELD_OFFSET(::substrait::Capabilities, simple_extensions_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::substrait::Capabilities_SimpleExtension)},
  { 10, -1, -1, sizeof(::substrait::Capabilities)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::substrait::_Capabilities_SimpleExtension_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::substrait::_Capabilities_default_instance_),
};

const char descriptor_table_protodef_substrait_2fcapabilities_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034substrait/capabilities.proto\022\tsubstrai"
  "t\"\354\002\n\014Capabilities\022-\n\022substrait_versions"
  "\030\001 \003(\tR\021substraitVersions\022\?\n\034advanced_ex"
  "tension_type_urls\030\002 \003(\tR\031advancedExtensi"
  "onTypeUrls\022T\n\021simple_extensions\030\003 \003(\0132\'."
  "substrait.Capabilities.SimpleExtensionR\020"
  "simpleExtensions\032\225\001\n\017SimpleExtension\022\020\n\003"
  "uri\030\001 \001(\tR\003uri\022#\n\rfunction_keys\030\002 \003(\tR\014f"
  "unctionKeys\022\033\n\ttype_keys\030\003 \003(\tR\010typeKeys"
  "\022.\n\023type_variation_keys\030\004 \003(\tR\021typeVaria"
  "tionKeysB+\n\022io.substrait.protoP\001\252\002\022Subst"
  "rait.Protobufb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_substrait_2fcapabilities_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_substrait_2fcapabilities_2eproto = {
  false, false, 461, descriptor_table_protodef_substrait_2fcapabilities_2eproto, "substrait/capabilities.proto", 
  &descriptor_table_substrait_2fcapabilities_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_substrait_2fcapabilities_2eproto::offsets,
  file_level_metadata_substrait_2fcapabilities_2eproto, file_level_enum_descriptors_substrait_2fcapabilities_2eproto, file_level_service_descriptors_substrait_2fcapabilities_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_substrait_2fcapabilities_2eproto_getter() {
  return &descriptor_table_substrait_2fcapabilities_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_substrait_2fcapabilities_2eproto(&descriptor_table_substrait_2fcapabilities_2eproto);
namespace substrait {

// ===================================================================

class Capabilities_SimpleExtension::_Internal {
 public:
};

Capabilities_SimpleExtension::Capabilities_SimpleExtension(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  function_keys_(arena),
  type_keys_(arena),
  type_variation_keys_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:substrait.Capabilities.SimpleExtension)
}
Capabilities_SimpleExtension::Capabilities_SimpleExtension(const Capabilities_SimpleExtension& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      function_keys_(from.function_keys_),
      type_keys_(from.type_keys_),
      type_variation_keys_(from.type_variation_keys_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  uri_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    uri_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_uri().empty()) {
    uri_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_uri(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:substrait.Capabilities.SimpleExtension)
}

inline void Capabilities_SimpleExtension::SharedCtor() {
uri_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  uri_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Capabilities_SimpleExtension::~Capabilities_SimpleExtension() {
  // @@protoc_insertion_point(destructor:substrait.Capabilities.SimpleExtension)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Capabilities_SimpleExtension::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  uri_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Capabilities_SimpleExtension::ArenaDtor(void* object) {
  Capabilities_SimpleExtension* _this = reinterpret_cast< Capabilities_SimpleExtension* >(object);
  (void)_this;
}
void Capabilities_SimpleExtension::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Capabilities_SimpleExtension::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Capabilities_SimpleExtension::Clear() {
// @@protoc_insertion_point(message_clear_start:substrait.Capabilities.SimpleExtension)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  function_keys_.Clear();
  type_keys_.Clear();
  type_variation_keys_.Clear();
  uri_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Capabilities_SimpleExtension::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string uri = 1 [json_name = "uri"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_uri();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "substrait.Capabilities.SimpleExtension.uri"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string function_keys = 2 [json_name = "functionKeys"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_function_keys();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "substrait.Capabilities.SimpleExtension.function_keys"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string type_keys = 3 [json_name = "typeKeys"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_type_keys();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "substrait.Capabilities.SimpleExtension.type_keys"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string type_variation_keys = 4 [json_name = "typeVariationKeys"];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_type_variation_keys();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "substrait.Capabilities.SimpleExtension.type_variation_keys"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
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

uint8_t* Capabilities_SimpleExtension::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:substrait.Capabilities.SimpleExtension)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string uri = 1 [json_name = "uri"];
  if (!this->_internal_uri().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_uri().data(), static_cast<int>(this->_internal_uri().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "substrait.Capabilities.SimpleExtension.uri");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_uri(), target);
  }

  // repeated string function_keys = 2 [json_name = "functionKeys"];
  for (int i = 0, n = this->_internal_function_keys_size(); i < n; i++) {
    const auto& s = this->_internal_function_keys(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "substrait.Capabilities.SimpleExtension.function_keys");
    target = stream->WriteString(2, s, target);
  }

  // repeated string type_keys = 3 [json_name = "typeKeys"];
  for (int i = 0, n = this->_internal_type_keys_size(); i < n; i++) {
    const auto& s = this->_internal_type_keys(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "substrait.Capabilities.SimpleExtension.type_keys");
    target = stream->WriteString(3, s, target);
  }

  // repeated string type_variation_keys = 4 [json_name = "typeVariationKeys"];
  for (int i = 0, n = this->_internal_type_variation_keys_size(); i < n; i++) {
    const auto& s = this->_internal_type_variation_keys(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "substrait.Capabilities.SimpleExtension.type_variation_keys");
    target = stream->WriteString(4, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:substrait.Capabilities.SimpleExtension)
  return target;
}

size_t Capabilities_SimpleExtension::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:substrait.Capabilities.SimpleExtension)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string function_keys = 2 [json_name = "functionKeys"];
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(function_keys_.size());
  for (int i = 0, n = function_keys_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      function_keys_.Get(i));
  }

  // repeated string type_keys = 3 [json_name = "typeKeys"];
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(type_keys_.size());
  for (int i = 0, n = type_keys_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      type_keys_.Get(i));
  }

  // repeated string type_variation_keys = 4 [json_name = "typeVariationKeys"];
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(type_variation_keys_.size());
  for (int i = 0, n = type_variation_keys_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      type_variation_keys_.Get(i));
  }

  // string uri = 1 [json_name = "uri"];
  if (!this->_internal_uri().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_uri());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Capabilities_SimpleExtension::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Capabilities_SimpleExtension::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Capabilities_SimpleExtension::GetClassData() const { return &_class_data_; }

void Capabilities_SimpleExtension::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Capabilities_SimpleExtension *>(to)->MergeFrom(
      static_cast<const Capabilities_SimpleExtension &>(from));
}


void Capabilities_SimpleExtension::MergeFrom(const Capabilities_SimpleExtension& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:substrait.Capabilities.SimpleExtension)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  function_keys_.MergeFrom(from.function_keys_);
  type_keys_.MergeFrom(from.type_keys_);
  type_variation_keys_.MergeFrom(from.type_variation_keys_);
  if (!from._internal_uri().empty()) {
    _internal_set_uri(from._internal_uri());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Capabilities_SimpleExtension::CopyFrom(const Capabilities_SimpleExtension& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:substrait.Capabilities.SimpleExtension)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Capabilities_SimpleExtension::IsInitialized() const {
  return true;
}

void Capabilities_SimpleExtension::InternalSwap(Capabilities_SimpleExtension* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  function_keys_.InternalSwap(&other->function_keys_);
  type_keys_.InternalSwap(&other->type_keys_);
  type_variation_keys_.InternalSwap(&other->type_variation_keys_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &uri_, lhs_arena,
      &other->uri_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Capabilities_SimpleExtension::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_substrait_2fcapabilities_2eproto_getter, &descriptor_table_substrait_2fcapabilities_2eproto_once,
      file_level_metadata_substrait_2fcapabilities_2eproto[0]);
}

// ===================================================================

class Capabilities::_Internal {
 public:
};

Capabilities::Capabilities(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  substrait_versions_(arena),
  advanced_extension_type_urls_(arena),
  simple_extensions_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:substrait.Capabilities)
}
Capabilities::Capabilities(const Capabilities& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      substrait_versions_(from.substrait_versions_),
      advanced_extension_type_urls_(from.advanced_extension_type_urls_),
      simple_extensions_(from.simple_extensions_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:substrait.Capabilities)
}

inline void Capabilities::SharedCtor() {
}

Capabilities::~Capabilities() {
  // @@protoc_insertion_point(destructor:substrait.Capabilities)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Capabilities::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Capabilities::ArenaDtor(void* object) {
  Capabilities* _this = reinterpret_cast< Capabilities* >(object);
  (void)_this;
}
void Capabilities::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Capabilities::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Capabilities::Clear() {
// @@protoc_insertion_point(message_clear_start:substrait.Capabilities)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  substrait_versions_.Clear();
  advanced_extension_type_urls_.Clear();
  simple_extensions_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Capabilities::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated string substrait_versions = 1 [json_name = "substraitVersions"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_substrait_versions();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "substrait.Capabilities.substrait_versions"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string advanced_extension_type_urls = 2 [json_name = "advancedExtensionTypeUrls"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_advanced_extension_type_urls();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "substrait.Capabilities.advanced_extension_type_urls"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .substrait.Capabilities.SimpleExtension simple_extensions = 3 [json_name = "simpleExtensions"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_simple_extensions(), ptr);
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

uint8_t* Capabilities::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:substrait.Capabilities)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string substrait_versions = 1 [json_name = "substraitVersions"];
  for (int i = 0, n = this->_internal_substrait_versions_size(); i < n; i++) {
    const auto& s = this->_internal_substrait_versions(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "substrait.Capabilities.substrait_versions");
    target = stream->WriteString(1, s, target);
  }

  // repeated string advanced_extension_type_urls = 2 [json_name = "advancedExtensionTypeUrls"];
  for (int i = 0, n = this->_internal_advanced_extension_type_urls_size(); i < n; i++) {
    const auto& s = this->_internal_advanced_extension_type_urls(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "substrait.Capabilities.advanced_extension_type_urls");
    target = stream->WriteString(2, s, target);
  }

  // repeated .substrait.Capabilities.SimpleExtension simple_extensions = 3 [json_name = "simpleExtensions"];
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_simple_extensions_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_simple_extensions(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:substrait.Capabilities)
  return target;
}

size_t Capabilities::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:substrait.Capabilities)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string substrait_versions = 1 [json_name = "substraitVersions"];
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(substrait_versions_.size());
  for (int i = 0, n = substrait_versions_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      substrait_versions_.Get(i));
  }

  // repeated string advanced_extension_type_urls = 2 [json_name = "advancedExtensionTypeUrls"];
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(advanced_extension_type_urls_.size());
  for (int i = 0, n = advanced_extension_type_urls_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      advanced_extension_type_urls_.Get(i));
  }

  // repeated .substrait.Capabilities.SimpleExtension simple_extensions = 3 [json_name = "simpleExtensions"];
  total_size += 1UL * this->_internal_simple_extensions_size();
  for (const auto& msg : this->simple_extensions_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Capabilities::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Capabilities::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Capabilities::GetClassData() const { return &_class_data_; }

void Capabilities::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Capabilities *>(to)->MergeFrom(
      static_cast<const Capabilities &>(from));
}


void Capabilities::MergeFrom(const Capabilities& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:substrait.Capabilities)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  substrait_versions_.MergeFrom(from.substrait_versions_);
  advanced_extension_type_urls_.MergeFrom(from.advanced_extension_type_urls_);
  simple_extensions_.MergeFrom(from.simple_extensions_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Capabilities::CopyFrom(const Capabilities& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:substrait.Capabilities)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Capabilities::IsInitialized() const {
  return true;
}

void Capabilities::InternalSwap(Capabilities* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  substrait_versions_.InternalSwap(&other->substrait_versions_);
  advanced_extension_type_urls_.InternalSwap(&other->advanced_extension_type_urls_);
  simple_extensions_.InternalSwap(&other->simple_extensions_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Capabilities::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_substrait_2fcapabilities_2eproto_getter, &descriptor_table_substrait_2fcapabilities_2eproto_once,
      file_level_metadata_substrait_2fcapabilities_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace substrait
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::substrait::Capabilities_SimpleExtension* Arena::CreateMaybeMessage< ::substrait::Capabilities_SimpleExtension >(Arena* arena) {
  return Arena::CreateMessageInternal< ::substrait::Capabilities_SimpleExtension >(arena);
}
template<> PROTOBUF_NOINLINE ::substrait::Capabilities* Arena::CreateMaybeMessage< ::substrait::Capabilities >(Arena* arena) {
  return Arena::CreateMessageInternal< ::substrait::Capabilities >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
