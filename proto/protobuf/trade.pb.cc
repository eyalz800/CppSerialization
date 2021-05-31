// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: trade.proto

#include "trade.pb.h"

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
namespace Trade {
namespace protobuf {
constexpr Order::Order(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : symbol_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , id_(0)
  , side_(0)

  , price_(0)
  , volume_(0)
  , type_(0)
{}
struct OrderDefaultTypeInternal {
  constexpr OrderDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~OrderDefaultTypeInternal() {}
  union {
    Order _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT OrderDefaultTypeInternal _Order_default_instance_;
constexpr Balance::Balance(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : currency_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , amount_(0){}
struct BalanceDefaultTypeInternal {
  constexpr BalanceDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~BalanceDefaultTypeInternal() {}
  union {
    Balance _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT BalanceDefaultTypeInternal _Balance_default_instance_;
constexpr Account::Account(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : orders_()
  , name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , wallet_(nullptr)
  , id_(0){}
struct AccountDefaultTypeInternal {
  constexpr AccountDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AccountDefaultTypeInternal() {}
  union {
    Account _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AccountDefaultTypeInternal _Account_default_instance_;
}  // namespace protobuf
}  // namespace Trade
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_trade_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_trade_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_trade_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_trade_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, id_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, symbol_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, side_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, type_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, price_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Order, volume_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Balance, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Balance, currency_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Balance, amount_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Account, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Account, id_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Account, name_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Account, wallet_),
  PROTOBUF_FIELD_OFFSET(::Trade::protobuf::Account, orders_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Trade::protobuf::Order)},
  { 11, -1, sizeof(::Trade::protobuf::Balance)},
  { 18, -1, sizeof(::Trade::protobuf::Account)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Trade::protobuf::_Order_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Trade::protobuf::_Balance_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Trade::protobuf::_Account_default_instance_),
};

const char descriptor_table_protodef_trade_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013trade.proto\022\016Trade.protobuf\"\224\001\n\005Order\022"
  "\n\n\002id\030\001 \001(\005\022\016\n\006symbol\030\002 \001(\t\022\'\n\004side\030\003 \001("
  "\0162\031.Trade.protobuf.OrderSide\022\'\n\004type\030\004 \001"
  "(\0162\031.Trade.protobuf.OrderType\022\r\n\005price\030\005"
  " \001(\001\022\016\n\006volume\030\006 \001(\001\"+\n\007Balance\022\020\n\010curre"
  "ncy\030\001 \001(\t\022\016\n\006amount\030\002 \001(\001\"s\n\007Account\022\n\n\002"
  "id\030\001 \001(\005\022\014\n\004name\030\002 \001(\t\022\'\n\006wallet\030\003 \001(\0132\027"
  ".Trade.protobuf.Balance\022%\n\006orders\030\004 \003(\0132"
  "\025.Trade.protobuf.Order*\036\n\tOrderSide\022\007\n\003b"
  "uy\020\000\022\010\n\004sell\020\001*,\n\tOrderType\022\n\n\006market\020\000\022"
  "\t\n\005limit\020\001\022\010\n\004stop\020\002b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_trade_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_trade_2eproto = {
  false, false, 428, descriptor_table_protodef_trade_2eproto, "trade.proto", 
  &descriptor_table_trade_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_trade_2eproto::offsets,
  file_level_metadata_trade_2eproto, file_level_enum_descriptors_trade_2eproto, file_level_service_descriptors_trade_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_trade_2eproto_getter() {
  return &descriptor_table_trade_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_trade_2eproto(&descriptor_table_trade_2eproto);
namespace Trade {
namespace protobuf {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OrderSide_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_trade_2eproto);
  return file_level_enum_descriptors_trade_2eproto[0];
}
bool OrderSide_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OrderType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_trade_2eproto);
  return file_level_enum_descriptors_trade_2eproto[1];
}
bool OrderType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class Order::_Internal {
 public:
};

Order::Order(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Trade.protobuf.Order)
}
Order::Order(const Order& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  symbol_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_symbol().empty()) {
    symbol_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_symbol(), 
      GetArenaForAllocation());
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&id_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:Trade.protobuf.Order)
}

inline void Order::SharedCtor() {
symbol_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&id_)) + sizeof(type_));
}

Order::~Order() {
  // @@protoc_insertion_point(destructor:Trade.protobuf.Order)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Order::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  symbol_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Order::ArenaDtor(void* object) {
  Order* _this = reinterpret_cast< Order* >(object);
  (void)_this;
}
void Order::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Order::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Order::Clear() {
// @@protoc_insertion_point(message_clear_start:Trade.protobuf.Order)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  symbol_.ClearToEmpty();
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&id_)) + sizeof(type_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Order::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string symbol = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_symbol();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Trade.protobuf.Order.symbol"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Trade.protobuf.OrderSide side = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_side(static_cast<::Trade::protobuf::OrderSide>(val));
        } else goto handle_unusual;
        continue;
      // .Trade.protobuf.OrderType type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::Trade::protobuf::OrderType>(val));
        } else goto handle_unusual;
        continue;
      // double price = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          price_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // double volume = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          volume_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Order::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Trade.protobuf.Order)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // string symbol = 2;
  if (!this->symbol().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_symbol().data(), static_cast<int>(this->_internal_symbol().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Trade.protobuf.Order.symbol");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_symbol(), target);
  }

  // .Trade.protobuf.OrderSide side = 3;
  if (this->side() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_side(), target);
  }

  // .Trade.protobuf.OrderType type = 4;
  if (this->type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      4, this->_internal_type(), target);
  }

  // double price = 5;
  if (!(this->price() <= 0 && this->price() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_price(), target);
  }

  // double volume = 6;
  if (!(this->volume() <= 0 && this->volume() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_volume(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Trade.protobuf.Order)
  return target;
}

size_t Order::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Trade.protobuf.Order)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string symbol = 2;
  if (!this->symbol().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_symbol());
  }

  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_id());
  }

  // .Trade.protobuf.OrderSide side = 3;
  if (this->side() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_side());
  }

  // double price = 5;
  if (!(this->price() <= 0 && this->price() >= 0)) {
    total_size += 1 + 8;
  }

  // double volume = 6;
  if (!(this->volume() <= 0 && this->volume() >= 0)) {
    total_size += 1 + 8;
  }

  // .Trade.protobuf.OrderType type = 4;
  if (this->type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Order::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Order::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Order::GetClassData() const { return &_class_data_; }

void Order::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<Order *>(to)->MergeFrom(
      static_cast<const Order &>(from));
}


void Order::MergeFrom(const Order& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Trade.protobuf.Order)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from.symbol().empty()) {
    _internal_set_symbol(from._internal_symbol());
  }
  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
  if (from.side() != 0) {
    _internal_set_side(from._internal_side());
  }
  if (!(from.price() <= 0 && from.price() >= 0)) {
    _internal_set_price(from._internal_price());
  }
  if (!(from.volume() <= 0 && from.volume() >= 0)) {
    _internal_set_volume(from._internal_volume());
  }
  if (from.type() != 0) {
    _internal_set_type(from._internal_type());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Order::CopyFrom(const Order& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Trade.protobuf.Order)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Order::IsInitialized() const {
  return true;
}

void Order::InternalSwap(Order* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &symbol_, GetArenaForAllocation(),
      &other->symbol_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Order, type_)
      + sizeof(Order::type_)
      - PROTOBUF_FIELD_OFFSET(Order, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Order::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_trade_2eproto_getter, &descriptor_table_trade_2eproto_once,
      file_level_metadata_trade_2eproto[0]);
}

// ===================================================================

class Balance::_Internal {
 public:
};

Balance::Balance(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Trade.protobuf.Balance)
}
Balance::Balance(const Balance& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  currency_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_currency().empty()) {
    currency_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_currency(), 
      GetArenaForAllocation());
  }
  amount_ = from.amount_;
  // @@protoc_insertion_point(copy_constructor:Trade.protobuf.Balance)
}

inline void Balance::SharedCtor() {
currency_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
amount_ = 0;
}

Balance::~Balance() {
  // @@protoc_insertion_point(destructor:Trade.protobuf.Balance)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Balance::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  currency_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Balance::ArenaDtor(void* object) {
  Balance* _this = reinterpret_cast< Balance* >(object);
  (void)_this;
}
void Balance::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Balance::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Balance::Clear() {
// @@protoc_insertion_point(message_clear_start:Trade.protobuf.Balance)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  currency_.ClearToEmpty();
  amount_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Balance::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string currency = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_currency();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Trade.protobuf.Balance.currency"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double amount = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          amount_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Balance::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Trade.protobuf.Balance)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string currency = 1;
  if (!this->currency().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_currency().data(), static_cast<int>(this->_internal_currency().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Trade.protobuf.Balance.currency");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_currency(), target);
  }

  // double amount = 2;
  if (!(this->amount() <= 0 && this->amount() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_amount(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Trade.protobuf.Balance)
  return target;
}

size_t Balance::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Trade.protobuf.Balance)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string currency = 1;
  if (!this->currency().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_currency());
  }

  // double amount = 2;
  if (!(this->amount() <= 0 && this->amount() >= 0)) {
    total_size += 1 + 8;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Balance::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Balance::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Balance::GetClassData() const { return &_class_data_; }

void Balance::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<Balance *>(to)->MergeFrom(
      static_cast<const Balance &>(from));
}


void Balance::MergeFrom(const Balance& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Trade.protobuf.Balance)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from.currency().empty()) {
    _internal_set_currency(from._internal_currency());
  }
  if (!(from.amount() <= 0 && from.amount() >= 0)) {
    _internal_set_amount(from._internal_amount());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Balance::CopyFrom(const Balance& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Trade.protobuf.Balance)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Balance::IsInitialized() const {
  return true;
}

void Balance::InternalSwap(Balance* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &currency_, GetArenaForAllocation(),
      &other->currency_, other->GetArenaForAllocation()
  );
  swap(amount_, other->amount_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Balance::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_trade_2eproto_getter, &descriptor_table_trade_2eproto_once,
      file_level_metadata_trade_2eproto[1]);
}

// ===================================================================

class Account::_Internal {
 public:
  static const ::Trade::protobuf::Balance& wallet(const Account* msg);
};

const ::Trade::protobuf::Balance&
Account::_Internal::wallet(const Account* msg) {
  return *msg->wallet_;
}
Account::Account(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  orders_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Trade.protobuf.Account)
}
Account::Account(const Account& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      orders_(from.orders_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_wallet()) {
    wallet_ = new ::Trade::protobuf::Balance(*from.wallet_);
  } else {
    wallet_ = nullptr;
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:Trade.protobuf.Account)
}

inline void Account::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&wallet_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&wallet_)) + sizeof(id_));
}

Account::~Account() {
  // @@protoc_insertion_point(destructor:Trade.protobuf.Account)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Account::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete wallet_;
}

void Account::ArenaDtor(void* object) {
  Account* _this = reinterpret_cast< Account* >(object);
  (void)_this;
}
void Account::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Account::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Account::Clear() {
// @@protoc_insertion_point(message_clear_start:Trade.protobuf.Account)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  orders_.Clear();
  name_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && wallet_ != nullptr) {
    delete wallet_;
  }
  wallet_ = nullptr;
  id_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Account::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Trade.protobuf.Account.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .Trade.protobuf.Balance wallet = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_wallet(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .Trade.protobuf.Order orders = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_orders(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Account::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Trade.protobuf.Account)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // string name = 2;
  if (!this->name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Trade.protobuf.Account.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // .Trade.protobuf.Balance wallet = 3;
  if (this->has_wallet()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::wallet(this), target, stream);
  }

  // repeated .Trade.protobuf.Order orders = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_orders_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_orders(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Trade.protobuf.Account)
  return target;
}

size_t Account::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Trade.protobuf.Account)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Trade.protobuf.Order orders = 4;
  total_size += 1UL * this->_internal_orders_size();
  for (const auto& msg : this->orders_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string name = 2;
  if (!this->name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .Trade.protobuf.Balance wallet = 3;
  if (this->has_wallet()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *wallet_);
  }

  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Account::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Account::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Account::GetClassData() const { return &_class_data_; }

void Account::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<Account *>(to)->MergeFrom(
      static_cast<const Account &>(from));
}


void Account::MergeFrom(const Account& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Trade.protobuf.Account)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  orders_.MergeFrom(from.orders_);
  if (!from.name().empty()) {
    _internal_set_name(from._internal_name());
  }
  if (from.has_wallet()) {
    _internal_mutable_wallet()->::Trade::protobuf::Balance::MergeFrom(from._internal_wallet());
  }
  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Account::CopyFrom(const Account& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Trade.protobuf.Account)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Account::IsInitialized() const {
  return true;
}

void Account::InternalSwap(Account* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  orders_.InternalSwap(&other->orders_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &name_, GetArenaForAllocation(),
      &other->name_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Account, id_)
      + sizeof(Account::id_)
      - PROTOBUF_FIELD_OFFSET(Account, wallet_)>(
          reinterpret_cast<char*>(&wallet_),
          reinterpret_cast<char*>(&other->wallet_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Account::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_trade_2eproto_getter, &descriptor_table_trade_2eproto_once,
      file_level_metadata_trade_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace Trade
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Trade::protobuf::Order* Arena::CreateMaybeMessage< ::Trade::protobuf::Order >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Trade::protobuf::Order >(arena);
}
template<> PROTOBUF_NOINLINE ::Trade::protobuf::Balance* Arena::CreateMaybeMessage< ::Trade::protobuf::Balance >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Trade::protobuf::Balance >(arena);
}
template<> PROTOBUF_NOINLINE ::Trade::protobuf::Account* Arena::CreateMaybeMessage< ::Trade::protobuf::Account >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Trade::protobuf::Account >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
