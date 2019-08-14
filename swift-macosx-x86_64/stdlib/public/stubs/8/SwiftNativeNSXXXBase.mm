// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/stubs/SwiftNativeNSXXXBase.mm.gyb", line: 1)
//===--- SwiftNativeNSXXXBase.mm.gyb - Cocoa classes with fast refcounts --===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
//
// Classes derived from ObjC bases but that use native swift reference
// counting, layout, and allocation.
//
// These classes declare a native Swift object header and override the
// NSObject methods that do reference counting to use it accordingly.
// We can only do this trick with objc classes that are known not to
// use the storage where Swift places its native object header.  This
// takes care of how the classes are handled from Objective-C code.
//    _NSSwiftArrayBase, _NSSwiftDictionaryBase, _NSSwiftSetBase
//    _NSSwiftSetBase, _NSSwiftStringBase
//
// To trick Swift into using its fast refcounting and allocation
// directly (rather than going through objc_msgSend to arrive at the
// implementations defined here), we define subclasses on the Swift
// side but we establish the inheritance relationship with
// the special @_swift_native_objc_runtime_base attribute rather
// than directly subclassing the classes defined here.
//
//===----------------------------------------------------------------------===//

#include "swift/Runtime/Config.h"

#if SWIFT_OBJC_INTEROP
#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>
#include <objc/NSObject.h>
#include <objc/runtime.h>
#include <objc/objc.h>
#include "swift/Runtime/HeapObject.h"
#include "swift/Runtime/Metadata.h"
#include "swift/Runtime/ObjCBridge.h"
#include "llvm/ADT/DenseMap.h"
#include <stdio.h>
#include <stdlib.h>

using namespace swift;

// NOTE: older runtimes called these _SwiftNativeNSXXXBase. The two must
// coexist, so these were renamed. The old names must not be used in the new
// runtime.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/stubs/SwiftNativeNSXXXBase.mm.gyb", line: 54)
SWIFT_RUNTIME_STDLIB_API
@interface __SwiftNativeNSArrayBase : NSArray
{
 @private
  SWIFT_HEAPOBJECT_NON_OBJC_MEMBERS;
}
@end


@implementation __SwiftNativeNSArrayBase

- (id)initWithCoder: (NSCoder *)coder {
  return [super init];
}
- (id)retain {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  swift_retain(SELF);
  return self;
}
- (oneway void)release {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  swift_release(SELF);
}
- (id)autorelease {
  return _objc_rootAutorelease(self);
}
- (NSUInteger)retainCount {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  return swift_retainCount(SELF);
}

- (BOOL)_tryRetain {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  return (bool)swift_tryRetain(SELF);
}
- (BOOL)_isDeallocating {
  return swift_isDeallocating(reinterpret_cast<HeapObject *>(self));
}
- (BOOL)allowsWeakReference {
  return !swift_isDeallocating(reinterpret_cast<HeapObject *>(self));
}
- (BOOL)retainWeakReference {
  return swift_tryRetain(reinterpret_cast<HeapObject*>(self)) != nullptr;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(NSString *)key {
  return NO;
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-missing-super-calls"
- (void)dealloc {
  swift_rootObjCDealloc(reinterpret_cast<HeapObject *>(self));
}
#pragma clang diagnostic pop

@end
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/stubs/SwiftNativeNSXXXBase.mm.gyb", line: 54)
SWIFT_RUNTIME_STDLIB_API
@interface __SwiftNativeNSDictionaryBase : NSDictionary
{
 @private
  SWIFT_HEAPOBJECT_NON_OBJC_MEMBERS;
}
@end


@implementation __SwiftNativeNSDictionaryBase

- (id)initWithCoder: (NSCoder *)coder {
  return [super init];
}
- (id)retain {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  swift_retain(SELF);
  return self;
}
- (oneway void)release {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  swift_release(SELF);
}
- (id)autorelease {
  return _objc_rootAutorelease(self);
}
- (NSUInteger)retainCount {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  return swift_retainCount(SELF);
}

- (BOOL)_tryRetain {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  return (bool)swift_tryRetain(SELF);
}
- (BOOL)_isDeallocating {
  return swift_isDeallocating(reinterpret_cast<HeapObject *>(self));
}
- (BOOL)allowsWeakReference {
  return !swift_isDeallocating(reinterpret_cast<HeapObject *>(self));
}
- (BOOL)retainWeakReference {
  return swift_tryRetain(reinterpret_cast<HeapObject*>(self)) != nullptr;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(NSString *)key {
  return NO;
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-missing-super-calls"
- (void)dealloc {
  swift_rootObjCDealloc(reinterpret_cast<HeapObject *>(self));
}
#pragma clang diagnostic pop

@end
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/stubs/SwiftNativeNSXXXBase.mm.gyb", line: 54)
SWIFT_RUNTIME_STDLIB_API
@interface __SwiftNativeNSSetBase : NSSet
{
 @private
  SWIFT_HEAPOBJECT_NON_OBJC_MEMBERS;
}
@end


@implementation __SwiftNativeNSSetBase

- (id)initWithCoder: (NSCoder *)coder {
  return [super init];
}
- (id)retain {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  swift_retain(SELF);
  return self;
}
- (oneway void)release {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  swift_release(SELF);
}
- (id)autorelease {
  return _objc_rootAutorelease(self);
}
- (NSUInteger)retainCount {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  return swift_retainCount(SELF);
}

- (BOOL)_tryRetain {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  return (bool)swift_tryRetain(SELF);
}
- (BOOL)_isDeallocating {
  return swift_isDeallocating(reinterpret_cast<HeapObject *>(self));
}
- (BOOL)allowsWeakReference {
  return !swift_isDeallocating(reinterpret_cast<HeapObject *>(self));
}
- (BOOL)retainWeakReference {
  return swift_tryRetain(reinterpret_cast<HeapObject*>(self)) != nullptr;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(NSString *)key {
  return NO;
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-missing-super-calls"
- (void)dealloc {
  swift_rootObjCDealloc(reinterpret_cast<HeapObject *>(self));
}
#pragma clang diagnostic pop

@end
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/stubs/SwiftNativeNSXXXBase.mm.gyb", line: 54)
SWIFT_RUNTIME_STDLIB_API
@interface __SwiftNativeNSStringBase : NSString
{
 @private
  SWIFT_HEAPOBJECT_NON_OBJC_MEMBERS;
}
@end


@implementation __SwiftNativeNSStringBase

- (id)initWithCoder: (NSCoder *)coder {
  return [super init];
}
- (id)retain {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  swift_retain(SELF);
  return self;
}
- (oneway void)release {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  swift_release(SELF);
}
- (id)autorelease {
  return _objc_rootAutorelease(self);
}
- (NSUInteger)retainCount {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  return swift_retainCount(SELF);
}

- (BOOL)_tryRetain {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  return (bool)swift_tryRetain(SELF);
}
- (BOOL)_isDeallocating {
  return swift_isDeallocating(reinterpret_cast<HeapObject *>(self));
}
- (BOOL)allowsWeakReference {
  return !swift_isDeallocating(reinterpret_cast<HeapObject *>(self));
}
- (BOOL)retainWeakReference {
  return swift_tryRetain(reinterpret_cast<HeapObject*>(self)) != nullptr;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(NSString *)key {
  return NO;
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-missing-super-calls"
- (void)dealloc {
  swift_rootObjCDealloc(reinterpret_cast<HeapObject *>(self));
}
#pragma clang diagnostic pop

@end
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/stubs/SwiftNativeNSXXXBase.mm.gyb", line: 54)
SWIFT_RUNTIME_STDLIB_API
@interface __SwiftNativeNSEnumeratorBase : NSEnumerator
{
 @private
  SWIFT_HEAPOBJECT_NON_OBJC_MEMBERS;
}
@end


@implementation __SwiftNativeNSEnumeratorBase

- (id)initWithCoder: (NSCoder *)coder {
  return [super init];
}
- (id)retain {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  swift_retain(SELF);
  return self;
}
- (oneway void)release {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  swift_release(SELF);
}
- (id)autorelease {
  return _objc_rootAutorelease(self);
}
- (NSUInteger)retainCount {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  return swift_retainCount(SELF);
}

- (BOOL)_tryRetain {
  auto SELF = reinterpret_cast<HeapObject *>(self);
  return (bool)swift_tryRetain(SELF);
}
- (BOOL)_isDeallocating {
  return swift_isDeallocating(reinterpret_cast<HeapObject *>(self));
}
- (BOOL)allowsWeakReference {
  return !swift_isDeallocating(reinterpret_cast<HeapObject *>(self));
}
- (BOOL)retainWeakReference {
  return swift_tryRetain(reinterpret_cast<HeapObject*>(self)) != nullptr;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(NSString *)key {
  return NO;
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-missing-super-calls"
- (void)dealloc {
  swift_rootObjCDealloc(reinterpret_cast<HeapObject *>(self));
}
#pragma clang diagnostic pop

@end
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/stubs/SwiftNativeNSXXXBase.mm.gyb", line: 112)

SWIFT_CC(swift) SWIFT_RUNTIME_STDLIB_SPI
bool
swift_stdlib_NSObject_isEqual(NSObject *lhs,
                              NSObject *rhs) {
  return (lhs == rhs) || [lhs isEqual:rhs];
}

SWIFT_CC(swift) SWIFT_RUNTIME_STDLIB_API
int32_t swift_stdlib_compareNSStringDeterministicUnicodeCollation(
    NSString *lhs, NSString *rhs) {
  // 'kCFCompareNonliteral' actually means "normalize to NFD".
  return CFStringCompare((__bridge CFStringRef)lhs,
                         (__bridge CFStringRef)rhs, kCFCompareNonliteral);
}

SWIFT_CC(swift) SWIFT_RUNTIME_STDLIB_API
int32_t
swift_stdlib_compareNSStringDeterministicUnicodeCollationPtr(void *Lhs,
                                                             void *Rhs) {
  NSString *lhs = (NSString *)Lhs;
  NSString *rhs = (NSString *)Rhs;

  // 'kCFCompareNonliteral' actually means "normalize to NFD".
  int Result = CFStringCompare((__bridge CFStringRef)lhs,
                               (__bridge CFStringRef)rhs, kCFCompareNonliteral);
  return Result;
}

SWIFT_CC(swift) SWIFT_RUNTIME_STDLIB_INTERNAL
void swift_stdlib_CFSetGetValues(NSSet *set,
                                 const void **values) {
  CFSetGetValues((__bridge CFSetRef)set, values);
}
#endif

// Local Variables:
// eval: (read-only-mode 1)
// End:
