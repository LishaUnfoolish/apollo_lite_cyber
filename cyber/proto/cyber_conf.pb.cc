// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/cyber_conf.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cyber/proto/cyber_conf.pb.h"

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

namespace apollo {
namespace cyber {
namespace proto {
class CyberConfigDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<CyberConfig> {
} _CyberConfig_default_instance_;

namespace protobuf_cyber_2fproto_2fcyber_5fconf_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CyberConfig, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CyberConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CyberConfig, scheduler_conf_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CyberConfig, transport_conf_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CyberConfig, run_mode_conf_),
  0,
  1,
  2,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 8, sizeof(CyberConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_CyberConfig_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cyber/proto/cyber_conf.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _CyberConfig_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::apollo::cyber::proto::protobuf_cyber_2fproto_2fscheduler_5fconf_2eproto::InitDefaults();
  ::apollo::cyber::proto::protobuf_cyber_2fproto_2ftransport_5fconf_2eproto::InitDefaults();
  ::apollo::cyber::proto::protobuf_cyber_2fproto_2frun_5fmode_5fconf_2eproto::InitDefaults();
  _CyberConfig_default_instance_.DefaultConstruct();
  _CyberConfig_default_instance_.get_mutable()->scheduler_conf_ = const_cast< ::apollo::cyber::proto::SchedulerConf*>(
      ::apollo::cyber::proto::SchedulerConf::internal_default_instance());
  _CyberConfig_default_instance_.get_mutable()->transport_conf_ = const_cast< ::apollo::cyber::proto::TransportConf*>(
      ::apollo::cyber::proto::TransportConf::internal_default_instance());
  _CyberConfig_default_instance_.get_mutable()->run_mode_conf_ = const_cast< ::apollo::cyber::proto::RunModeConf*>(
      ::apollo::cyber::proto::RunModeConf::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\034cyber/proto/cyber_conf.proto\022\022apollo.c"
      "yber.proto\032 cyber/proto/scheduler_conf.p"
      "roto\032 cyber/proto/transport_conf.proto\032\037"
      "cyber/proto/run_mode_conf.proto\"\273\001\n\013Cybe"
      "rConfig\0229\n\016scheduler_conf\030\001 \001(\0132!.apollo"
      ".cyber.proto.SchedulerConf\0229\n\016transport_"
      "conf\030\002 \001(\0132!.apollo.cyber.proto.Transpor"
      "tConf\0226\n\rrun_mode_conf\030\003 \001(\0132\037.apollo.cy"
      "ber.proto.RunModeConf"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 341);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cyber/proto/cyber_conf.proto", &protobuf_RegisterTypes);
  ::apollo::cyber::proto::protobuf_cyber_2fproto_2fscheduler_5fconf_2eproto::AddDescriptors();
  ::apollo::cyber::proto::protobuf_cyber_2fproto_2ftransport_5fconf_2eproto::AddDescriptors();
  ::apollo::cyber::proto::protobuf_cyber_2fproto_2frun_5fmode_5fconf_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_cyber_2fproto_2fcyber_5fconf_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CyberConfig::kSchedulerConfFieldNumber;
const int CyberConfig::kTransportConfFieldNumber;
const int CyberConfig::kRunModeConfFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CyberConfig::CyberConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cyber_2fproto_2fcyber_5fconf_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.cyber.proto.CyberConfig)
}
CyberConfig::CyberConfig(const CyberConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_scheduler_conf()) {
    scheduler_conf_ = new ::apollo::cyber::proto::SchedulerConf(*from.scheduler_conf_);
  } else {
    scheduler_conf_ = NULL;
  }
  if (from.has_transport_conf()) {
    transport_conf_ = new ::apollo::cyber::proto::TransportConf(*from.transport_conf_);
  } else {
    transport_conf_ = NULL;
  }
  if (from.has_run_mode_conf()) {
    run_mode_conf_ = new ::apollo::cyber::proto::RunModeConf(*from.run_mode_conf_);
  } else {
    run_mode_conf_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:apollo.cyber.proto.CyberConfig)
}

void CyberConfig::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&scheduler_conf_, 0, reinterpret_cast<char*>(&run_mode_conf_) -
    reinterpret_cast<char*>(&scheduler_conf_) + sizeof(run_mode_conf_));
}

CyberConfig::~CyberConfig() {
  // @@protoc_insertion_point(destructor:apollo.cyber.proto.CyberConfig)
  SharedDtor();
}

void CyberConfig::SharedDtor() {
  if (this != internal_default_instance()) {
    delete scheduler_conf_;
  }
  if (this != internal_default_instance()) {
    delete transport_conf_;
  }
  if (this != internal_default_instance()) {
    delete run_mode_conf_;
  }
}

void CyberConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CyberConfig::descriptor() {
  protobuf_cyber_2fproto_2fcyber_5fconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cyber_2fproto_2fcyber_5fconf_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CyberConfig& CyberConfig::default_instance() {
  protobuf_cyber_2fproto_2fcyber_5fconf_2eproto::InitDefaults();
  return *internal_default_instance();
}

CyberConfig* CyberConfig::New(::google::protobuf::Arena* arena) const {
  CyberConfig* n = new CyberConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CyberConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.cyber.proto.CyberConfig)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_scheduler_conf()) {
      GOOGLE_DCHECK(scheduler_conf_ != NULL);
      scheduler_conf_->::apollo::cyber::proto::SchedulerConf::Clear();
    }
    if (has_transport_conf()) {
      GOOGLE_DCHECK(transport_conf_ != NULL);
      transport_conf_->::apollo::cyber::proto::TransportConf::Clear();
    }
    if (has_run_mode_conf()) {
      GOOGLE_DCHECK(run_mode_conf_ != NULL);
      run_mode_conf_->::apollo::cyber::proto::RunModeConf::Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool CyberConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.cyber.proto.CyberConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_scheduler_conf()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.cyber.proto.TransportConf transport_conf = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_transport_conf()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_run_mode_conf()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.cyber.proto.CyberConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.cyber.proto.CyberConfig)
  return false;
#undef DO_
}

void CyberConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.cyber.proto.CyberConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->scheduler_conf_, output);
  }

  // optional .apollo.cyber.proto.TransportConf transport_conf = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->transport_conf_, output);
  }

  // optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->run_mode_conf_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.cyber.proto.CyberConfig)
}

::google::protobuf::uint8* CyberConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.cyber.proto.CyberConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->scheduler_conf_, deterministic, target);
  }

  // optional .apollo.cyber.proto.TransportConf transport_conf = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->transport_conf_, deterministic, target);
  }

  // optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->run_mode_conf_, deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.cyber.proto.CyberConfig)
  return target;
}

size_t CyberConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.cyber.proto.CyberConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
    if (has_scheduler_conf()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->scheduler_conf_);
    }

    // optional .apollo.cyber.proto.TransportConf transport_conf = 2;
    if (has_transport_conf()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->transport_conf_);
    }

    // optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
    if (has_run_mode_conf()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->run_mode_conf_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CyberConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.cyber.proto.CyberConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const CyberConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CyberConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.cyber.proto.CyberConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.cyber.proto.CyberConfig)
    MergeFrom(*source);
  }
}

void CyberConfig::MergeFrom(const CyberConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.cyber.proto.CyberConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_scheduler_conf()->::apollo::cyber::proto::SchedulerConf::MergeFrom(from.scheduler_conf());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_transport_conf()->::apollo::cyber::proto::TransportConf::MergeFrom(from.transport_conf());
    }
    if (cached_has_bits & 0x00000004u) {
      mutable_run_mode_conf()->::apollo::cyber::proto::RunModeConf::MergeFrom(from.run_mode_conf());
    }
  }
}

void CyberConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.cyber.proto.CyberConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CyberConfig::CopyFrom(const CyberConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.cyber.proto.CyberConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CyberConfig::IsInitialized() const {
  if (has_scheduler_conf()) {
    if (!this->scheduler_conf_->IsInitialized()) return false;
  }
  return true;
}

void CyberConfig::Swap(CyberConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CyberConfig::InternalSwap(CyberConfig* other) {
  std::swap(scheduler_conf_, other->scheduler_conf_);
  std::swap(transport_conf_, other->transport_conf_);
  std::swap(run_mode_conf_, other->run_mode_conf_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CyberConfig::GetMetadata() const {
  protobuf_cyber_2fproto_2fcyber_5fconf_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cyber_2fproto_2fcyber_5fconf_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CyberConfig

// optional .apollo.cyber.proto.SchedulerConf scheduler_conf = 1;
bool CyberConfig::has_scheduler_conf() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void CyberConfig::set_has_scheduler_conf() {
  _has_bits_[0] |= 0x00000001u;
}
void CyberConfig::clear_has_scheduler_conf() {
  _has_bits_[0] &= ~0x00000001u;
}
void CyberConfig::clear_scheduler_conf() {
  if (scheduler_conf_ != NULL) scheduler_conf_->::apollo::cyber::proto::SchedulerConf::Clear();
  clear_has_scheduler_conf();
}
const ::apollo::cyber::proto::SchedulerConf& CyberConfig::scheduler_conf() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.CyberConfig.scheduler_conf)
  return scheduler_conf_ != NULL ? *scheduler_conf_
                         : *::apollo::cyber::proto::SchedulerConf::internal_default_instance();
}
::apollo::cyber::proto::SchedulerConf* CyberConfig::mutable_scheduler_conf() {
  set_has_scheduler_conf();
  if (scheduler_conf_ == NULL) {
    scheduler_conf_ = new ::apollo::cyber::proto::SchedulerConf;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.CyberConfig.scheduler_conf)
  return scheduler_conf_;
}
::apollo::cyber::proto::SchedulerConf* CyberConfig::release_scheduler_conf() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.CyberConfig.scheduler_conf)
  clear_has_scheduler_conf();
  ::apollo::cyber::proto::SchedulerConf* temp = scheduler_conf_;
  scheduler_conf_ = NULL;
  return temp;
}
void CyberConfig::set_allocated_scheduler_conf(::apollo::cyber::proto::SchedulerConf* scheduler_conf) {
  delete scheduler_conf_;
  scheduler_conf_ = scheduler_conf;
  if (scheduler_conf) {
    set_has_scheduler_conf();
  } else {
    clear_has_scheduler_conf();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.CyberConfig.scheduler_conf)
}

// optional .apollo.cyber.proto.TransportConf transport_conf = 2;
bool CyberConfig::has_transport_conf() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void CyberConfig::set_has_transport_conf() {
  _has_bits_[0] |= 0x00000002u;
}
void CyberConfig::clear_has_transport_conf() {
  _has_bits_[0] &= ~0x00000002u;
}
void CyberConfig::clear_transport_conf() {
  if (transport_conf_ != NULL) transport_conf_->::apollo::cyber::proto::TransportConf::Clear();
  clear_has_transport_conf();
}
const ::apollo::cyber::proto::TransportConf& CyberConfig::transport_conf() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.CyberConfig.transport_conf)
  return transport_conf_ != NULL ? *transport_conf_
                         : *::apollo::cyber::proto::TransportConf::internal_default_instance();
}
::apollo::cyber::proto::TransportConf* CyberConfig::mutable_transport_conf() {
  set_has_transport_conf();
  if (transport_conf_ == NULL) {
    transport_conf_ = new ::apollo::cyber::proto::TransportConf;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.CyberConfig.transport_conf)
  return transport_conf_;
}
::apollo::cyber::proto::TransportConf* CyberConfig::release_transport_conf() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.CyberConfig.transport_conf)
  clear_has_transport_conf();
  ::apollo::cyber::proto::TransportConf* temp = transport_conf_;
  transport_conf_ = NULL;
  return temp;
}
void CyberConfig::set_allocated_transport_conf(::apollo::cyber::proto::TransportConf* transport_conf) {
  delete transport_conf_;
  transport_conf_ = transport_conf;
  if (transport_conf) {
    set_has_transport_conf();
  } else {
    clear_has_transport_conf();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.CyberConfig.transport_conf)
}

// optional .apollo.cyber.proto.RunModeConf run_mode_conf = 3;
bool CyberConfig::has_run_mode_conf() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void CyberConfig::set_has_run_mode_conf() {
  _has_bits_[0] |= 0x00000004u;
}
void CyberConfig::clear_has_run_mode_conf() {
  _has_bits_[0] &= ~0x00000004u;
}
void CyberConfig::clear_run_mode_conf() {
  if (run_mode_conf_ != NULL) run_mode_conf_->::apollo::cyber::proto::RunModeConf::Clear();
  clear_has_run_mode_conf();
}
const ::apollo::cyber::proto::RunModeConf& CyberConfig::run_mode_conf() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.CyberConfig.run_mode_conf)
  return run_mode_conf_ != NULL ? *run_mode_conf_
                         : *::apollo::cyber::proto::RunModeConf::internal_default_instance();
}
::apollo::cyber::proto::RunModeConf* CyberConfig::mutable_run_mode_conf() {
  set_has_run_mode_conf();
  if (run_mode_conf_ == NULL) {
    run_mode_conf_ = new ::apollo::cyber::proto::RunModeConf;
  }
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.CyberConfig.run_mode_conf)
  return run_mode_conf_;
}
::apollo::cyber::proto::RunModeConf* CyberConfig::release_run_mode_conf() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.CyberConfig.run_mode_conf)
  clear_has_run_mode_conf();
  ::apollo::cyber::proto::RunModeConf* temp = run_mode_conf_;
  run_mode_conf_ = NULL;
  return temp;
}
void CyberConfig::set_allocated_run_mode_conf(::apollo::cyber::proto::RunModeConf* run_mode_conf) {
  delete run_mode_conf_;
  run_mode_conf_ = run_mode_conf;
  if (run_mode_conf) {
    set_has_run_mode_conf();
  } else {
    clear_has_run_mode_conf();
  }
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.CyberConfig.run_mode_conf)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

// @@protoc_insertion_point(global_scope)
