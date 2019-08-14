// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/MapKit/NSValue.swift.gyb", line: 1)
@_exported import MapKit // Clang module
import Foundation

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/MapKit/NSValue.swift.gyb", line: 8)

// Get the ObjC type used by -[NSValue valueWithMKCoordinateSpan:]
// to instantiate the resulting NSValue objects, in case these get changed
// in the future.
@available(tvOS 9.2, *)
private let MKCoordinateSpanInNSValueObjCType =
  NSValue(mkCoordinateSpan: .init()).objCType


extension MKCoordinateSpan: _ObjectiveCBridgeable {
  public func _bridgeToObjectiveC() -> NSValue {
    return {
    guard #available(tvOS 9.2, *) else {
      fatalError("MKCoordinateSpan is not supported on tvOS before tvOS 9.2")
    }
    return NSValue(mkCoordinateSpan: $0)
  }(self)
  }

  public static func _forceBridgeFromObjectiveC(_ source: NSValue,
                                                result: inout MKCoordinateSpan?) {
    precondition(strcmp(source.objCType,
                        { _ in
    guard #available(tvOS 9.2, *) else {
      fatalError("MKCoordinateSpan is not supported on tvOS before tvOS 9.2")
    }
    return MKCoordinateSpanInNSValueObjCType
  }(MKCoordinateSpan.self)) == 0,
                 "NSValue does not contain the right type to bridge to MKCoordinateSpan")
    result = {
    guard #available(tvOS 9.2, *) else {
      fatalError("MKCoordinateSpan is not supported on tvOS before tvOS 9.2")
    }
    return $0.mkCoordinateSpanValue
  }(source)
  }

  public static func _conditionallyBridgeFromObjectiveC(_ source: NSValue,
                                                        result: inout MKCoordinateSpan?)
      -> Bool {
    if strcmp(source.objCType, { _ in
    guard #available(tvOS 9.2, *) else {
      fatalError("MKCoordinateSpan is not supported on tvOS before tvOS 9.2")
    }
    return MKCoordinateSpanInNSValueObjCType
  }(MKCoordinateSpan.self)) != 0 {
      result = nil
      return false
    }
    result = {
    guard #available(tvOS 9.2, *) else {
      fatalError("MKCoordinateSpan is not supported on tvOS before tvOS 9.2")
    }
    return $0.mkCoordinateSpanValue
  }(source)
    return true
  }

  public static func _unconditionallyBridgeFromObjectiveC(_ source: NSValue?)
      -> MKCoordinateSpan {
    let unwrappedSource = source!
    precondition(strcmp(unwrappedSource.objCType,
                        { _ in
    guard #available(tvOS 9.2, *) else {
      fatalError("MKCoordinateSpan is not supported on tvOS before tvOS 9.2")
    }
    return MKCoordinateSpanInNSValueObjCType
  }(MKCoordinateSpan.self)) == 0,
                 "NSValue does not contain the right type to bridge to MKCoordinateSpan")
    return {
    guard #available(tvOS 9.2, *) else {
      fatalError("MKCoordinateSpan is not supported on tvOS before tvOS 9.2")
    }
    return $0.mkCoordinateSpanValue
  }(unwrappedSource)
  }
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/MapKit/NSValue.swift.gyb", line: 36)

