// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: heq.proto

#ifndef PROTOBUF_heq_2eproto__INCLUDED
#define PROTOBUF_heq_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/map.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace HEQSerialize {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_heq_2eproto();
void protobuf_AssignDesc_heq_2eproto();
void protobuf_ShutdownFile_heq_2eproto();

class Mesh;
class TimeLayer;

enum Mesh_Type {
  Mesh_Type_EXACT_SOLUTION = 0,
  Mesh_Type_APPROXIMATION = 1,
  Mesh_Type_Mesh_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Mesh_Type_Mesh_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Mesh_Type_IsValid(int value);
const Mesh_Type Mesh_Type_Type_MIN = Mesh_Type_EXACT_SOLUTION;
const Mesh_Type Mesh_Type_Type_MAX = Mesh_Type_APPROXIMATION;
const int Mesh_Type_Type_ARRAYSIZE = Mesh_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Mesh_Type_descriptor();
inline const ::std::string& Mesh_Type_Name(Mesh_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Mesh_Type_descriptor(), value);
}
inline bool Mesh_Type_Parse(
    const ::std::string& name, Mesh_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Mesh_Type>(
    Mesh_Type_descriptor(), name, value);
}
// ===================================================================

class TimeLayer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:HEQSerialize.TimeLayer) */ {
 public:
  TimeLayer();
  virtual ~TimeLayer();

  TimeLayer(const TimeLayer& from);

  inline TimeLayer& operator=(const TimeLayer& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const TimeLayer& default_instance();

  void UnsafeArenaSwap(TimeLayer* other);
  void Swap(TimeLayer* other);

  // implements Message ----------------------------------------------

  inline TimeLayer* New() const { return New(NULL); }

  TimeLayer* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TimeLayer& from);
  void MergeFrom(const TimeLayer& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TimeLayer* other);
  protected:
  explicit TimeLayer(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated double value = 1 [packed = true];
  int value_size() const;
  void clear_value();
  static const int kValueFieldNumber = 1;
  double value(int index) const;
  void set_value(int index, double value);
  void add_value(double value);
  const ::google::protobuf::RepeatedField< double >&
      value() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_value();

  // @@protoc_insertion_point(class_scope:HEQSerialize.TimeLayer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedField< double > value_;
  mutable int _value_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_heq_2eproto();
  friend void protobuf_AssignDesc_heq_2eproto();
  friend void protobuf_ShutdownFile_heq_2eproto();

  void InitAsDefaultInstance();
  static TimeLayer* default_instance_;
};
// -------------------------------------------------------------------

class Mesh : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:HEQSerialize.Mesh) */ {
 public:
  Mesh();
  virtual ~Mesh();

  Mesh(const Mesh& from);

  inline Mesh& operator=(const Mesh& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const Mesh& default_instance();

  void UnsafeArenaSwap(Mesh* other);
  void Swap(Mesh* other);

  // implements Message ----------------------------------------------

  inline Mesh* New() const { return New(NULL); }

  Mesh* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Mesh& from);
  void MergeFrom(const Mesh& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Mesh* other);
  protected:
  explicit Mesh(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------


  typedef Mesh_Type Type;
  static const Type EXACT_SOLUTION =
    Mesh_Type_EXACT_SOLUTION;
  static const Type APPROXIMATION =
    Mesh_Type_APPROXIMATION;
  static inline bool Type_IsValid(int value) {
    return Mesh_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Mesh_Type_Type_MIN;
  static const Type Type_MAX =
    Mesh_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Mesh_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Mesh_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Mesh_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Mesh_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .HEQSerialize.Mesh.Type type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::HEQSerialize::Mesh_Type type() const;
  void set_type(::HEQSerialize::Mesh_Type value);

  // optional uint64 time_layers_num = 2;
  void clear_time_layers_num();
  static const int kTimeLayersNumFieldNumber = 2;
  ::google::protobuf::uint64 time_layers_num() const;
  void set_time_layers_num(::google::protobuf::uint64 value);

  // optional uint64 spatial_splits_num = 3;
  void clear_spatial_splits_num();
  static const int kSpatialSplitsNumFieldNumber = 3;
  ::google::protobuf::uint64 spatial_splits_num() const;
  void set_spatial_splits_num(::google::protobuf::uint64 value);

  // map<uint64, .HEQSerialize.TimeLayer> mesh = 4;
  int mesh_size() const;
  void clear_mesh();
  static const int kMeshFieldNumber = 4;
  const ::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >&
      mesh() const;
  ::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >*
      mutable_mesh();

  // @@protoc_insertion_point(class_scope:HEQSerialize.Mesh)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 time_layers_num_;
  ::google::protobuf::uint64 spatial_splits_num_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::google::protobuf::uint64, ::HEQSerialize::TimeLayer,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 >
      Mesh_MeshEntry;
  ::google::protobuf::internal::MapField<
      ::google::protobuf::uint64, ::HEQSerialize::TimeLayer,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > mesh_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_heq_2eproto();
  friend void protobuf_AssignDesc_heq_2eproto();
  friend void protobuf_ShutdownFile_heq_2eproto();

  void InitAsDefaultInstance();
  static Mesh* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TimeLayer

// repeated double value = 1 [packed = true];
inline int TimeLayer::value_size() const {
  return value_.size();
}
inline void TimeLayer::clear_value() {
  value_.Clear();
}
inline double TimeLayer::value(int index) const {
  // @@protoc_insertion_point(field_get:HEQSerialize.TimeLayer.value)
  return value_.Get(index);
}
inline void TimeLayer::set_value(int index, double value) {
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:HEQSerialize.TimeLayer.value)
}
inline void TimeLayer::add_value(double value) {
  value_.Add(value);
  // @@protoc_insertion_point(field_add:HEQSerialize.TimeLayer.value)
}
inline const ::google::protobuf::RepeatedField< double >&
TimeLayer::value() const {
  // @@protoc_insertion_point(field_list:HEQSerialize.TimeLayer.value)
  return value_;
}
inline ::google::protobuf::RepeatedField< double >*
TimeLayer::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:HEQSerialize.TimeLayer.value)
  return &value_;
}

// -------------------------------------------------------------------

// Mesh

// optional .HEQSerialize.Mesh.Type type = 1;
inline void Mesh::clear_type() {
  type_ = 0;
}
inline ::HEQSerialize::Mesh_Type Mesh::type() const {
  // @@protoc_insertion_point(field_get:HEQSerialize.Mesh.type)
  return static_cast< ::HEQSerialize::Mesh_Type >(type_);
}
inline void Mesh::set_type(::HEQSerialize::Mesh_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:HEQSerialize.Mesh.type)
}

// optional uint64 time_layers_num = 2;
inline void Mesh::clear_time_layers_num() {
  time_layers_num_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Mesh::time_layers_num() const {
  // @@protoc_insertion_point(field_get:HEQSerialize.Mesh.time_layers_num)
  return time_layers_num_;
}
inline void Mesh::set_time_layers_num(::google::protobuf::uint64 value) {
  
  time_layers_num_ = value;
  // @@protoc_insertion_point(field_set:HEQSerialize.Mesh.time_layers_num)
}

// optional uint64 spatial_splits_num = 3;
inline void Mesh::clear_spatial_splits_num() {
  spatial_splits_num_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Mesh::spatial_splits_num() const {
  // @@protoc_insertion_point(field_get:HEQSerialize.Mesh.spatial_splits_num)
  return spatial_splits_num_;
}
inline void Mesh::set_spatial_splits_num(::google::protobuf::uint64 value) {
  
  spatial_splits_num_ = value;
  // @@protoc_insertion_point(field_set:HEQSerialize.Mesh.spatial_splits_num)
}

// map<uint64, .HEQSerialize.TimeLayer> mesh = 4;
inline int Mesh::mesh_size() const {
  return mesh_.size();
}
inline void Mesh::clear_mesh() {
  mesh_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >&
Mesh::mesh() const {
  // @@protoc_insertion_point(field_map:HEQSerialize.Mesh.mesh)
  return mesh_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::uint64, ::HEQSerialize::TimeLayer >*
Mesh::mutable_mesh() {
  // @@protoc_insertion_point(field_mutable_map:HEQSerialize.Mesh.mesh)
  return mesh_.MutableMap();
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace HEQSerialize

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::HEQSerialize::Mesh_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::HEQSerialize::Mesh_Type>() {
  return ::HEQSerialize::Mesh_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_heq_2eproto__INCLUDED
