// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/CoreLocation/NSValue.swift.gyb", line: 1)
@_exported import CoreLocation
import Foundation

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/CoreLocation/NSValue.swift.gyb", line: 8)

// Get the ObjC type used by -[NSValue valueWithMKCoordinate:]
// to instantiate the resulting NSValue objects, in case these get changed
// in the future. This is extra tricky because MapKit *might not be loaded*,
// in which case we need to fall back to the static @encode string.
private let CLLocationCoordinate2DInNSValueObjCType: UnsafePointer<CChar> = {
  let factorySel = Selector(("valueWithMKCoordinate:"))
  guard let opaqueFactoryMethod = NSValue.method(for: factorySel) else {
    return _getObjCTypeEncoding(CLLocationCoordinate2D.self)
  }
  typealias FactoryMethodType =
      @convention(c) (AnyClass, Selector, CLLocationCoordinate2D) -> NSValue
  let factoryMethod =
      unsafeBitCast(opaqueFactoryMethod, to: FactoryMethodType.self)
  return factoryMethod(NSValue.self, factorySel, .init()).objCType
}()


extension CLLocationCoordinate2D: _ObjectiveCBridgeable {
  public func _bridgeToObjectiveC() -> NSValue {
    return {
    var addressableValue = $0
    return NSValue(bytes: &addressableValue,
                   objCType: CLLocationCoordinate2DInNSValueObjCType)
  }(self)
  }

  public static func _forceBridgeFromObjectiveC(_ source: NSValue,
                                                result: inout CLLocationCoordinate2D?) {
    precondition(strcmp(source.objCType,
                        { _ in CLLocationCoordinate2DInNSValueObjCType }(CLLocationCoordinate2D.self)) == 0,
                 "NSValue does not contain the right type to bridge to CLLocationCoordinate2D")
    result = {
    var result = CLLocationCoordinate2D()
    $0.getValue(&result)
    return result
  }(source)
  }

  public static func _conditionallyBridgeFromObjectiveC(_ source: NSValue,
                                                        result: inout CLLocationCoordinate2D?)
      -> Bool {
    if strcmp(source.objCType, { _ in CLLocationCoordinate2DInNSValueObjCType }(CLLocationCoordinate2D.self)) != 0 {
      result = nil
      return false
    }
    result = {
    var result = CLLocationCoordinate2D()
    $0.getValue(&result)
    return result
  }(source)
    return true
  }

  public static func _unconditionallyBridgeFromObjectiveC(_ source: NSValue?)
      -> CLLocationCoordinate2D {
    let unwrappedSource = source!
    precondition(strcmp(unwrappedSource.objCType,
                        { _ in CLLocationCoordinate2DInNSValueObjCType }(CLLocationCoordinate2D.self)) == 0,
                 "NSValue does not contain the right type to bridge to CLLocationCoordinate2D")
    return {
    var result = CLLocationCoordinate2D()
    $0.getValue(&result)
    return result
  }(unwrappedSource)
  }
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/CoreLocation/NSValue.swift.gyb", line: 38)

