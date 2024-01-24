// Generated by the protocol buffer compiler.  DO NOT EDIT!
// clang-format off
// source: core/contract/market_contract.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30007
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30007 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - MarketContractRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface MarketContractRoot : GPBRootObject
@end

#pragma mark - MarketSellAssetContract

typedef GPB_ENUM(MarketSellAssetContract_FieldNumber) {
  MarketSellAssetContract_FieldNumber_OwnerAddress = 1,
  MarketSellAssetContract_FieldNumber_SellTokenId = 2,
  MarketSellAssetContract_FieldNumber_SellTokenQuantity = 3,
  MarketSellAssetContract_FieldNumber_BuyTokenId = 4,
  MarketSellAssetContract_FieldNumber_BuyTokenQuantity = 5,
};

GPB_FINAL @interface MarketSellAssetContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSData *sellTokenId;

@property(nonatomic, readwrite) int64_t sellTokenQuantity;

@property(nonatomic, readwrite, copy, null_resettable) NSData *buyTokenId;

/** min to receive */
@property(nonatomic, readwrite) int64_t buyTokenQuantity;

@end

#pragma mark - MarketCancelOrderContract

typedef GPB_ENUM(MarketCancelOrderContract_FieldNumber) {
  MarketCancelOrderContract_FieldNumber_OwnerAddress = 1,
  MarketCancelOrderContract_FieldNumber_OrderId = 2,
};

GPB_FINAL @interface MarketCancelOrderContract : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSData *orderId;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)

// clang-format on