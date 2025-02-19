// Generated by Apple Swift version 3.0.1 (swiftlang-800.0.58.6 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import CoreBluetooth;
@import ObjectiveC;
@import CoreLocation;
@import Foundation;
#endif

#import <CCLocation/CCLocation.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface CBCentralManager (SWIFT_EXTENSION(CCLocation))
@end


SWIFT_CLASS("_TtC10CCLocation10CCLocation")
@interface CCLocation : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) CCLocation * _Nonnull sharedInstance;)
+ (CCLocation * _Nonnull)sharedInstance;
- (void)startWithURLString:(NSString * _Null_unspecified)withURLString apiKey:(NSString * _Null_unspecified)apiKey;
- (NSString * _Nullable)getDeviceId;
- (void)sendMarkerWithMessage:(NSString * _Nonnull)message;
- (void)setAliasesWithAliases:(NSDictionary<NSString *, NSString *> * _Nonnull)aliases;
- (void)stop;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface CCLocation (SWIFT_EXTENSION(CCLocation)) <CCRequestDelegate>
- (void)ccRequestDidFailWithError:(NSError * _Null_unspecified)error;
- (void)ccRequestDidConnect;
- (void)receivedTextMessage:(NSDictionary * _Null_unspecified)message;
@end

@protocol CCLocationManagerDelegate;

SWIFT_CLASS("_TtC10CCLocation17CCLocationManager")
@interface CCLocationManager : NSObject <CLLocationManagerDelegate>
@property (nonatomic, weak) id <CCLocationManagerDelegate> _Nullable delegate;
- (void)stopAllLocationObservations;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class CLLocationManager;

@interface CCLocationManager (SWIFT_EXTENSION(CCLocation))
- (void)locationManager:(CLLocationManager * _Nonnull)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status;
@end


@interface CCLocationManager (SWIFT_EXTENSION(CCLocation)) <CBCentralManagerDelegate>
- (void)centralManagerDidUpdateState:(CBCentralManager * _Nonnull)central;
@end

@class CLBeacon;
@class CLBeaconRegion;

@interface CCLocationManager (SWIFT_EXTENSION(CCLocation))
- (void)locationManager:(CLLocationManager * _Nonnull)manager didRangeBeacons:(NSArray<CLBeacon *> * _Nonnull)beacons inRegion:(CLBeaconRegion * _Nonnull)region;
- (void)locationManager:(CLLocationManager * _Nonnull)manager rangingBeaconsDidFailForRegion:(CLBeaconRegion * _Nonnull)region withError:(NSError * _Nonnull)error;
@end


@interface CCLocationManager (SWIFT_EXTENSION(CCLocation))
@end

@class CLLocation;

@interface CCLocationManager (SWIFT_EXTENSION(CCLocation))
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didFailWithError:(NSError * _Nonnull)error;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didFinishDeferredUpdatesWithError:(NSError * _Nullable)error;
@end

@class CLRegion;

@interface CCLocationManager (SWIFT_EXTENSION(CCLocation))
- (void)locationManager:(CLLocationManager * _Nonnull)manager didEnterRegion:(CLRegion * _Nonnull)region;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didExitRegion:(CLRegion * _Nonnull)region;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didDetermineState:(CLRegionState)state forRegion:(CLRegion * _Nonnull)region;
- (void)locationManager:(CLLocationManager * _Nonnull)manager monitoringDidFailForRegion:(CLRegion * _Nullable)region withError:(NSError * _Nonnull)error;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didStartMonitoringForRegion:(CLRegion * _Nonnull)region;
@end


SWIFT_PROTOCOL("_TtP10CCLocation25CCLocationManagerDelegate_")
@protocol CCLocationManagerDelegate
- (void)receivedGEOLocationWithLocation:(CLLocation * _Nonnull)location;
- (void)receivediBeaconInfoWithBeacon:(CLBeacon * _Nonnull)beacon;
@end


SWIFT_CLASS("_TtC10CCLocation18CCRequestMessaging")
@interface CCRequestMessaging : NSObject
- (BOOL)processServerMessageWithData:(NSData * _Nonnull)data error:(NSError * _Nullable * _Nullable)error;
- (void)sendiBeaconMessageWithUuid:(NSUUID * _Nonnull)uuid major:(NSInteger)major minor:(NSInteger)minor rssi:(NSInteger)rssi accuracy:(double)accuracy proximity:(NSInteger)proximity timeInterval:(NSTimeInterval)timeInterval;
- (void)sendBluetoothMessageWithUuid:(NSUUID * _Nonnull)uuid rssi:(NSInteger)rssi timeInterval:(NSTimeInterval)timeInterval;
- (void)sendLocationMessageWithLocation:(CLLocation * _Nonnull)location;
- (void)sendAliasMessageWithAliases:(NSDictionary<NSString *, NSString *> * _Nonnull)aliases;
- (void)sendMarkerMessageWithData:(NSString * _Nonnull)data;
- (void)webSocketDidOpen;
- (void)webSocketDidClose;
- (void)sendQueuedClientMessagesWithFirstMessage:(NSData * _Nullable)firstMessage;
- (void)newTrueTimeAvailableWithTrueTime:(NSDate * _Nonnull)trueTime timeIntervalSinceBootTime:(NSTimeInterval)timeIntervalSinceBootTime systemTime:(NSDate * _Nonnull)systemTime lastRebootTime:(NSDate * _Nonnull)lastRebootTime;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface CCRequestMessaging (SWIFT_EXTENSION(CCLocation))
@end

#pragma clang diagnostic pop
