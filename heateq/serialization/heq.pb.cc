// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: heq.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "heq.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace HEQSerialize {

namespace {

const ::google::protobuf::Descriptor* TimeLayer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TimeLayer_reflection_ = NULL;
const ::google::protobuf::Descriptor* Mesh_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Mesh_reflection_ = NULL;
const ::google::protobuf::Descriptor* Mesh_MeshEntry_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Mesh_Type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_heq_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_heq_2eproto() {
  protobuf_AddDesc_heq_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "heq.proto");
  GOOGLE_CHECK(file != NULL);
  TimeLayer_descriptor_ = file->message_type(0);
  static const int TimeLayer_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeLayer, value_),
  };
  TimeLayer_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TimeLayer_descriptor_,
      TimeLayer::default_instance_,
      TimeLayer_offsets_,
      -1,
      -1,
      -1,
      sizeof(TimeLayer),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeLayer, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TimeLayer, _is_default_instance_));
  Mesh_descriptor_ = file->message_type(1);
  static const int Mesh_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesh, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesh, time_layers_num_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesh, spatial_splits_num_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesh, mesh_),
  };
  Mesh_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Mesh_descriptor_,
      Mesh::default_instance_,
      Mesh_offsets_,
      -1,
      -1,
      -1,
      sizeof(Mesh),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesh, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Mesh, _is_default_instance_));
  Mesh_MeshEntry_descriptor_ = Mesh_descriptor_->nested_type(0);
  Mesh_Type_descriptor_ = Mesh_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_heq_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TimeLayer_descriptor_, &TimeLayer::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Mesh_descriptor_, &Mesh::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
        Mesh_MeshEntry_descriptor_,
        ::google::protobuf::internal::MapEntry<
            ::google::protobuf::uint64,
            ::HEQSerialize::TimeLayer,
            ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
            ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
            0>::CreateDefaultInstance(
                Mesh_MeshEntry_descriptor_));
}

}  // namespace

void protobuf_ShutdownFile_heq_2eproto() {
  delete TimeLayer::default_instance_;
  delete TimeLayer_reflection_;
  delete Mesh::default_instance_;
  delete Mesh_reflection_;
}

void protobuf_AddDesc_heq_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_heq_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\theq.proto\022\014HEQSerialize\"\036\n\tTimeLayer\022\021"
    "\n\005value\030\001 \003(\001B\002\020\001\"\203\002\n\004Mesh\022%\n\004type\030\001 \001(\016"
    "2\027.HEQSerialize.Mesh.Type\022\027\n\017time_layers"
    "_num\030\002 \001(\004\022\032\n\022spatial_splits_num\030\003 \001(\004\022*"
    "\n\004mesh\030\004 \003(\0132\034.HEQSerialize.Mesh.MeshEnt"
    "ry\032D\n\tMeshEntry\022\013\n\003key\030\001 \001(\004\022&\n\005value\030\002 "
    "\001(\0132\027.HEQSerialize.TimeLayer:\0028\001\"-\n\004Type"
    "\022\022\n\016EXACT_SOLUTION\020\000\022\021\n\rAPPROXIMATION\020\001B"
    "\005H\001\370\001\001b\006proto3", 334);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "heq.proto", &protobuf_RegisterTypes);
  TimeLayer::default_instance_ = new TimeLayer();
  Mesh::default_instance_ = new Mesh();
  TimeLayer::default_instance_->InitAsDefaultInstance();
  Mesh::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_heq_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_heq_2eproto {
  StaticDescriptorInitializer_heq_2eproto() {
    protobuf_AddDesc_heq_2eproto();
  }
} static_descriptor_initializer_heq_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TimeLayer::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TimeLayer::TimeLayer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:HEQSerialize.TimeLayer)
}

TimeLayer::TimeLayer(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  value_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:HEQSerialize.TimeLayer)
}

void TimeLayer::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

TimeLayer::TimeLayer(const TimeLayer& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:HEQSerialize.TimeLayer)
}

void TimeLayer::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

TimeLayer::~TimeLayer() {
  // @@protoc_insertion_point(destructor:HEQSerialize.TimeLayer)
  SharedDtor();
}

void TimeLayer::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void TimeLayer::ArenaDtor(void* object) {
  TimeLayer* _this = reinterpret_cast< TimeLayer* >(object);
  (void)_this;
}
void TimeLayer::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void TimeLayer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TimeLayer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TimeLayer_descriptor_;
}

const TimeLayer& TimeLayer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_heq_2eproto();
  return *default_instance_;
}

TimeLayer* TimeLayer::default_instance_ = NULL;

TimeLayer* TimeLayer::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<TimeLayer>(arena);
}

void TimeLayer::Clear() {
// @@protoc_insertion_point(message_clear_start:HEQSerialize.TimeLayer)
  value_.Clear();
}

bool TimeLayer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:HEQSerialize.TimeLayer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated double value = 1 [packed = true];
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_value())));
        } else if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 10, input, this->mutable_value())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:HEQSerialize.TimeLayer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:HEQSerialize.TimeLayer)
  return false;
#undef DO_
}

void TimeLayer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:HEQSerialize.TimeLayer)
  // repeated double value = 1 [packed = true];
  if (this->value_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_value_cached_byte_size_);
  }
  for (int i = 0; i < this->value_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteDoubleNoTag(
      this->value(i), output);
  }

  // @@protoc_insertion_point(serialize_end:HEQSerialize.TimeLayer)
}

::google::protobuf::uint8* TimeLayer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:HEQSerialize.TimeLayer)
  // repeated double value = 1 [packed = true];
  if (this->value_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _value_cached_byte_size_, target);
  }
  for (int i = 0; i < this->value_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteDoubleNoTagToArray(this->value(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:HEQSerialize.TimeLayer)
  return target;
}

int TimeLayer::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:HEQSerialize.TimeLayer)
  int total_size = 0;

  // repeated double value = 1 [packed = true];
  {
    int data_size = 0;
    data_size = 8 * this->value_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _value_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TimeLayer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:HEQSerialize.TimeLayer)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const TimeLayer* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TimeLayer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:HEQSerialize.TimeLayer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:HEQSerialize.TimeLayer)
    MergeFrom(*source);
  }
}

void TimeLayer::MergeFrom(const TimeLayer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:HEQSerialize.TimeLayer)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  value_.MergeFrom(from.value_);
}

void TimeLayer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:HEQSerialize.TimeLayer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TimeLayer::CopyFrom(const TimeLayer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:HEQSerialize.TimeLayer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TimeLayer::IsInitialized() const {

  return true;
}

void TimeLayer::Swap(TimeLayer* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    TimeLayer temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void TimeLayer::UnsafeArenaSwap(TimeLayer* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void TimeLayer::InternalSwap(TimeLayer* other) {
  value_.UnsafeArenaSwap(&other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TimeLayer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TimeLayer_descriptor_;
  metadata.reflection = TimeLayer_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TimeLayer

// repeated double value = 1 [packed = true];
int TimeLayer::value_size() const {
  return value_.size();
}
void TimeLayer::clear_value() {
  value_.Clear();
}
 double TimeLayer::value(int index) const {
  // @@protoc_insertion_point(field_get:HEQSerialize.TimeLayer.value)
  return value_.Get(index);
}
 void TimeLayer::set_value(int index, double value) {
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:HEQSerialize.TimeLayer.value)
}
 void TimeLayer::add_value(double value) {
  value_.Add(value);
  // @@protoc_insertion_point(field_add:HEQSerialize.TimeLayer.value)
}
 const ::google::protobuf::RepeatedField< double >&
TimeLayer::value() const {
  // @@protoc_insertion_point(field_list:HEQSerialize.TimeLayer.value)
  return value_;
}
 ::google::protobuf::RepeatedField< double >*
TimeLayer::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:HEQSerialize.TimeLayer.value)
  return &value_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* Mesh_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Mesh_Type_descriptor_;
}
bool Mesh_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Mesh_Type Mesh::EXACT_SOLUTION;
const Mesh_Type Mesh::APPROXIMATION;
const Mesh_Type Mesh::Type_MIN;
const Mesh_Type Mesh::Type_MAX;
const int Mesh::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Mesh::kTypeFieldNumber;
const int Mesh::kTimeLayersNumFieldNumber;
const int Mesh::kSpatialSplitsNumFieldNumber;
const int Mesh::kMeshFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Mesh::Mesh()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:HEQSerialize.Mesh)
}

Mesh::Mesh(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  mesh_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:HEQSerialize.Mesh)
}

void Mesh::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Mesh::Mesh(const Mesh& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:HEQSerialize.Mesh)
}

void Mesh::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  type_ = 0;
  time_layers_num_ = GOOGLE_ULONGLONG(0);
  spatial_splits_num_ = GOOGLE_ULONGLONG(0);
  mesh_.SetAssignDescriptorCallback(
      protobuf_AssignDescriptorsOnce);
  mesh_.SetEntryDescriptor(
      &::HEQSerialize::Mesh_MeshEntry_descriptor_);
}

Mesh::~Mesh() {
  // @@protoc_insertion_point(destructor:HEQSerialize.Mesh)
  SharedDtor();
}

void Mesh::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void Mesh::ArenaDtor(void* object) {
  Mesh* _this = reinterpret_cast< Mesh* >(object);
  (void)_this;
}
void Mesh::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void Mesh::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Mesh::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Mesh_descriptor_;
}

const Mesh& Mesh::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_heq_2eproto();
  return *default_instance_;
}

Mesh* Mesh::default_instance_ = NULL;

Mesh* Mesh::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<Mesh>(arena);
}

void Mesh::Clear() {
// @@protoc_insertion_point(message_clear_start:HEQSerialize.Mesh)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Mesh, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Mesh*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(time_layers_num_, spatial_splits_num_);
  type_ = 0;

#undef ZR_HELPER_
#undef ZR_

  mesh_.Clear();
}

bool Mesh::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:HEQSerialize.Mesh)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .HEQSerialize.Mesh.Type type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::HEQSerialize::Mesh_Type >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_time_layers_num;
        break;
      }

      // optional uint64 time_layers_num = 2;
      case 2: {
        if (tag == 16) {
         parse_time_layers_num:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &time_layers_num_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_spatial_splits_num;
        break;
      }

      // optional uint64 spatial_splits_num = 3;
      case 3: {
        if (tag == 24) {
         parse_spatial_splits_num:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &spatial_splits_num_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_mesh;
        break;
      }

      // map<uint64, .HEQSerialize.TimeLayer> mesh = 4;
      case 4: {
        if (tag == 34) {
         parse_mesh:
          DO_(input->IncrementRecursionDepth());
         parse_loop_mesh:
          Mesh_MeshEntry::Parser< ::google::protobuf::internal::MapField<
              ::google::protobuf::uint64, ::HEQSerialize::TimeLayer,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer > > parser(&mesh_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_mesh;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:HEQSerialize.Mesh)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:HEQSerialize.Mesh)
  return false;
#undef DO_
}

void Mesh::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:HEQSerialize.Mesh)
  // optional .HEQSerialize.Mesh.Type type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional uint64 time_layers_num = 2;
  if (this->time_layers_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->time_layers_num(), output);
  }

  // optional uint64 spatial_splits_num = 3;
  if (this->spatial_splits_num() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->spatial_splits_num(), output);
  }

  // map<uint64, .HEQSerialize.TimeLayer> mesh = 4;
  if (!this->mesh().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterminstic() &&
        this->mesh().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->mesh().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >::const_iterator
          it = this->mesh().begin();
          it != this->mesh().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<Mesh_MeshEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(mesh_.NewEntryWrapper(
            items[i].second->first, items[i].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
        if (entry->GetArena() != NULL) {
          entry.release();
        }
      }
    } else {
      ::google::protobuf::scoped_ptr<Mesh_MeshEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >::const_iterator
          it = this->mesh().begin();
          it != this->mesh().end(); ++it) {
        entry.reset(mesh_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            4, *entry, output);
        if (entry->GetArena() != NULL) {
          entry.release();
        }
      }
    }
  }

  // @@protoc_insertion_point(serialize_end:HEQSerialize.Mesh)
}

::google::protobuf::uint8* Mesh::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:HEQSerialize.Mesh)
  // optional .HEQSerialize.Mesh.Type type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional uint64 time_layers_num = 2;
  if (this->time_layers_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->time_layers_num(), target);
  }

  // optional uint64 spatial_splits_num = 3;
  if (this->spatial_splits_num() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->spatial_splits_num(), target);
  }

  // map<uint64, .HEQSerialize.TimeLayer> mesh = 4;
  if (!this->mesh().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->mesh().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->mesh().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >::const_iterator
          it = this->mesh().begin();
          it != this->mesh().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<Mesh_MeshEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(mesh_.NewEntryWrapper(
            items[i].second->first, items[i].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
        if (entry->GetArena() != NULL) {
          entry.release();
        }
      }
    } else {
      ::google::protobuf::scoped_ptr<Mesh_MeshEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >::const_iterator
          it = this->mesh().begin();
          it != this->mesh().end(); ++it) {
        entry.reset(mesh_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       4, *entry, deterministic, target);
;
        if (entry->GetArena() != NULL) {
          entry.release();
        }
      }
    }
  }

  // @@protoc_insertion_point(serialize_to_array_end:HEQSerialize.Mesh)
  return target;
}

int Mesh::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:HEQSerialize.Mesh)
  int total_size = 0;

  // optional .HEQSerialize.Mesh.Type type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // optional uint64 time_layers_num = 2;
  if (this->time_layers_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->time_layers_num());
  }

  // optional uint64 spatial_splits_num = 3;
  if (this->spatial_splits_num() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->spatial_splits_num());
  }

  // map<uint64, .HEQSerialize.TimeLayer> mesh = 4;
  total_size += 1 * this->mesh_size();
  {
    ::google::protobuf::scoped_ptr<Mesh_MeshEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >::const_iterator
        it = this->mesh().begin();
        it != this->mesh().end(); ++it) {
      if (entry.get() != NULL && entry->GetArena() != NULL) {
        entry.release();
      }
      entry.reset(mesh_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
    if (entry.get() != NULL && entry->GetArena() != NULL) {
      entry.release();
    }
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Mesh::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:HEQSerialize.Mesh)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Mesh* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Mesh>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:HEQSerialize.Mesh)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:HEQSerialize.Mesh)
    MergeFrom(*source);
  }
}

void Mesh::MergeFrom(const Mesh& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:HEQSerialize.Mesh)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  mesh_.MergeFrom(from.mesh_);
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.time_layers_num() != 0) {
    set_time_layers_num(from.time_layers_num());
  }
  if (from.spatial_splits_num() != 0) {
    set_spatial_splits_num(from.spatial_splits_num());
  }
}

void Mesh::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:HEQSerialize.Mesh)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Mesh::CopyFrom(const Mesh& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:HEQSerialize.Mesh)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Mesh::IsInitialized() const {

  return true;
}

void Mesh::Swap(Mesh* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    Mesh temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void Mesh::UnsafeArenaSwap(Mesh* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void Mesh::InternalSwap(Mesh* other) {
  std::swap(type_, other->type_);
  std::swap(time_layers_num_, other->time_layers_num_);
  std::swap(spatial_splits_num_, other->spatial_splits_num_);
  mesh_.Swap(&other->mesh_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Mesh::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Mesh_descriptor_;
  metadata.reflection = Mesh_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Mesh

// optional .HEQSerialize.Mesh.Type type = 1;
void Mesh::clear_type() {
  type_ = 0;
}
 ::HEQSerialize::Mesh_Type Mesh::type() const {
  // @@protoc_insertion_point(field_get:HEQSerialize.Mesh.type)
  return static_cast< ::HEQSerialize::Mesh_Type >(type_);
}
 void Mesh::set_type(::HEQSerialize::Mesh_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:HEQSerialize.Mesh.type)
}

// optional uint64 time_layers_num = 2;
void Mesh::clear_time_layers_num() {
  time_layers_num_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 Mesh::time_layers_num() const {
  // @@protoc_insertion_point(field_get:HEQSerialize.Mesh.time_layers_num)
  return time_layers_num_;
}
 void Mesh::set_time_layers_num(::google::protobuf::uint64 value) {
  
  time_layers_num_ = value;
  // @@protoc_insertion_point(field_set:HEQSerialize.Mesh.time_layers_num)
}

// optional uint64 spatial_splits_num = 3;
void Mesh::clear_spatial_splits_num() {
  spatial_splits_num_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 Mesh::spatial_splits_num() const {
  // @@protoc_insertion_point(field_get:HEQSerialize.Mesh.spatial_splits_num)
  return spatial_splits_num_;
}
 void Mesh::set_spatial_splits_num(::google::protobuf::uint64 value) {
  
  spatial_splits_num_ = value;
  // @@protoc_insertion_point(field_set:HEQSerialize.Mesh.spatial_splits_num)
}

// map<uint64, .HEQSerialize.TimeLayer> mesh = 4;
int Mesh::mesh_size() const {
  return mesh_.size();
}
void Mesh::clear_mesh() {
  mesh_.Clear();
}
 const ::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >&
Mesh::mesh() const {
  // @@protoc_insertion_point(field_map:HEQSerialize.Mesh.mesh)
  return mesh_.GetMap();
}
 ::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >*
Mesh::mutable_mesh() {
  // @@protoc_insertion_point(field_mutable_map:HEQSerialize.Mesh.mesh)
  return mesh_.MutableMap();
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace HEQSerialize

// @@protoc_insertion_point(global_scope)
