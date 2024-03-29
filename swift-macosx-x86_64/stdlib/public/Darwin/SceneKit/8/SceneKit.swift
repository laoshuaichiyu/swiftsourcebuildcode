// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/SceneKit/SceneKit.swift.gyb", line: 1)
//===----------------------------------------------------------------------===//
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

@_exported import SceneKit // Clang module
import CoreGraphics
import Foundation
import simd

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/SceneKit/SceneKit.swift.gyb", line: 22)

// MARK: Exposing SCNFloat

#if os(macOS)
public typealias SCNFloat = CGFloat
#elseif os(iOS) || os(tvOS) || os(watchOS)
public typealias SCNFloat = Float
#endif

// MARK: Working with SCNVector3

extension SCNVector3 {
  public init(_ x: Float, _ y: Float, _ z: Float) {
    self.init(x: SCNFloat(x), y: SCNFloat(y), z: SCNFloat(z))
  }
  public init(_ x: CGFloat, _ y: CGFloat, _ z: CGFloat) {
    self.init(x: SCNFloat(x), y: SCNFloat(y), z: SCNFloat(z))
  }
  public init(_ x: Double, _ y: Double, _ z: Double) {
    self.init(SCNFloat(x), SCNFloat(y), SCNFloat(z))
  }
  public init(_ x: Int, _ y: Int, _ z: Int) {
    self.init(SCNFloat(x), SCNFloat(y), SCNFloat(z))
  }
  public init(_ v: SIMD3<Float>) {
    self.init(SCNFloat(v.x), SCNFloat(v.y), SCNFloat(v.z))
  }
  public init(_ v: SIMD3<Double>) {
    self.init(SCNFloat(v.x), SCNFloat(v.y), SCNFloat(v.z))
  }
}

extension SIMD3 where Scalar == Float {
  public init(_ v: SCNVector3) {
    self.init(Float(v.x), Float(v.y), Float(v.z))
  }
}

extension SIMD3 where Scalar == Double {
  public init(_ v: SCNVector3) {
    self.init(Double(v.x), Double(v.y), Double(v.z))
  }
}

// MARK: Working with SCNVector4

extension SCNVector4 {
  public init(_ x: Float, _ y: Float, _ z: Float, _ w: Float) {
    self.init(x: SCNFloat(x), y: SCNFloat(y), z: SCNFloat(z), w: SCNFloat(w))
  }
  public init(_ x: CGFloat, _ y: CGFloat, _ z: CGFloat, _ w: CGFloat) {
    self.init(x: SCNFloat(x), y: SCNFloat(y), z: SCNFloat(z), w: SCNFloat(w))
  }
  public init(_ x: Double, _ y: Double, _ z: Double, _ w: Double) {
    self.init(SCNFloat(x), SCNFloat(y), SCNFloat(z), SCNFloat(w))
  }
  public init(_ x: Int, _ y: Int, _ z: Int, _ w: Int) {
    self.init(SCNFloat(x), SCNFloat(y), SCNFloat(z), SCNFloat(w))
  }
  public init(_ v: SIMD4<Float>) {
    self.init(SCNFloat(v.x), SCNFloat(v.y), SCNFloat(v.z), SCNFloat(v.w))
  }
  public init(_ v: SIMD4<Double>) {
    self.init(SCNFloat(v.x), SCNFloat(v.y), SCNFloat(v.z), SCNFloat(v.w))
  }
}

extension SIMD4 where Scalar == Float {
  public init(_ v: SCNVector4) {
    self.init(Float(v.x), Float(v.y), Float(v.z), Float(v.w))
  }
}

extension SIMD4 where Scalar == Double {
  public init(_ v: SCNVector4) {
    self.init(Double(v.x), Double(v.y), Double(v.z), Double(v.w))
  }
}

// MARK: Working with SCNMatrix4

extension SCNMatrix4 {
  public init(_ m: float4x4) {
    self.init(
      m11: SCNFloat(m[0,0]), m12: SCNFloat(m[0,1]), m13: SCNFloat(m[0,2]), m14: SCNFloat(m[0,3]),
      m21: SCNFloat(m[1,0]), m22: SCNFloat(m[1,1]), m23: SCNFloat(m[1,2]), m24: SCNFloat(m[1,3]),
      m31: SCNFloat(m[2,0]), m32: SCNFloat(m[2,1]), m33: SCNFloat(m[2,2]), m34: SCNFloat(m[2,3]),
      m41: SCNFloat(m[3,0]), m42: SCNFloat(m[3,1]), m43: SCNFloat(m[3,2]), m44: SCNFloat(m[3,3]))
  }
  public init(_ m: double4x4) {
    self.init(
      m11: SCNFloat(m[0,0]), m12: SCNFloat(m[0,1]), m13: SCNFloat(m[0,2]), m14: SCNFloat(m[0,3]),
      m21: SCNFloat(m[1,0]), m22: SCNFloat(m[1,1]), m23: SCNFloat(m[1,2]), m24: SCNFloat(m[1,3]),
      m31: SCNFloat(m[2,0]), m32: SCNFloat(m[2,1]), m33: SCNFloat(m[2,2]), m34: SCNFloat(m[2,3]),
      m41: SCNFloat(m[3,0]), m42: SCNFloat(m[3,1]), m43: SCNFloat(m[3,2]), m44: SCNFloat(m[3,3]))
  }
}

extension float4x4 {
  public init(_ m: SCNMatrix4) {
    self.init([
      SIMD4<Float>(Float(m.m11), Float(m.m12), Float(m.m13), Float(m.m14)),
      SIMD4<Float>(Float(m.m21), Float(m.m22), Float(m.m23), Float(m.m24)),
      SIMD4<Float>(Float(m.m31), Float(m.m32), Float(m.m33), Float(m.m34)),
      SIMD4<Float>(Float(m.m41), Float(m.m42), Float(m.m43), Float(m.m44))
      ])
  }
}

extension double4x4 {
  public init(_ m: SCNMatrix4) {
    self.init([
      SIMD4<Double>(Double(m.m11), Double(m.m12), Double(m.m13), Double(m.m14)),
      SIMD4<Double>(Double(m.m21), Double(m.m22), Double(m.m23), Double(m.m24)),
      SIMD4<Double>(Double(m.m31), Double(m.m32), Double(m.m33), Double(m.m34)),
      SIMD4<Double>(Double(m.m41), Double(m.m42), Double(m.m43), Double(m.m44))
      ])
  }
}

// MARK: Swift Extensions

@available(iOS, introduced: 8.0)
@available(macOS, introduced: 10.8)
extension SCNGeometryElement {
  /// Creates an instance from `indices` for a `primitiveType`
  /// that has a constant number of indices per primitive
  /// - Precondition: the `primitiveType` must be `.triangles`, `.triangleStrip`, `.line` or `.point`
  public convenience init<IndexType : FixedWidthInteger>(
    indices: [IndexType], primitiveType: SCNGeometryPrimitiveType
  ) {
    precondition(primitiveType == .triangles || primitiveType == .triangleStrip || primitiveType == .line || primitiveType == .point, "Expected constant number of indices per primitive")
    let indexCount = indices.count
    let primitiveCount: Int
    switch primitiveType {
    case .triangles:
      primitiveCount = indexCount / 3
    case .triangleStrip:
      primitiveCount = indexCount - 2
    case .line:
      primitiveCount = indexCount / 2
    case .point:
      primitiveCount = indexCount
    case .polygon:
      fatalError("Expected constant number of indices per primitive")
    @unknown default:
      fatalError("Unexpected primitive type")
    }
    self.init(
      data: Data(bytes: indices, count: indexCount * MemoryLayout<IndexType>.stride),
      primitiveType: primitiveType,
      primitiveCount: primitiveCount,
      bytesPerIndex: MemoryLayout<IndexType>.stride)
    _fixLifetime(indices)
  }
}

@available(iOS, introduced: 8.0)
@available(macOS, introduced: 10.8)
extension SCNGeometrySource {
  @nonobjc
  public convenience init(vertices: [SCNVector3]) {
    self.init(__vertices: vertices, count: vertices.count)
  }
  @nonobjc
  public convenience init(normals: [SCNVector3]) {
    self.init(__normals: normals, count: normals.count)
  }
  @nonobjc
  public convenience init(textureCoordinates: [CGPoint]) {
    self.init(__textureCoordinates: textureCoordinates, count: textureCoordinates.count)
  }
}

@available(iOS, introduced: 8.0)
@available(macOS, introduced: 10.10)
extension SCNBoundingVolume {
  public var boundingBox: (min: SCNVector3, max: SCNVector3) {
    get {
      var min = SCNVector3Zero
      var max = SCNVector3Zero
      __getBoundingBoxMin(&min, max: &max)
      return (min: min, max: max)
    }
    set {
      var min = newValue.min
      var max = newValue.max
      __setBoundingBoxMin(&min, max: &max)
    }
  }
  public var boundingSphere: (center: SCNVector3, radius: Float) {
    var center = SCNVector3Zero
    var radius = CGFloat(0.0)
    __getBoundingSphereCenter(&center, radius: &radius)
    return (center: center, radius: Float(radius))
  }
}

// MARK: APIs refined for Swift

@available(iOS, introduced: 8.0)
@available(macOS, introduced: 10.8)
extension SCNSceneSource {
  public func entryWithIdentifier<T: AnyObject>(_ uid: String, withClass entryClass: T.Type) -> T? {
    return self.__entry(withIdentifier: uid, with: entryClass) as! T?
  }
}

// Bridge vector and matrix types to NSValue.
//
// SceneKit implements its categories on NSValue by converting SCNVector3
// and SCNVector4 to CGRect, and SCNMatrix4 to CATransform3D, and boxing the
// converted struct instead of as the original type.

// Get the ObjC type used by -[NSValue valueWithSCN{Vector3,Vector4,Matrix4}:]
// to instantiate the resulting NSValue objects, in case these get changed
// in the future.
private let SCNVector3InNSValueObjCType =
  NSValue(scnVector3: SCNVector3()).objCType
private let SCNVector4InNSValueObjCType =
  NSValue(scnVector4: SCNVector4()).objCType


extension SCNVector3: _ObjectiveCBridgeable {
  public func _bridgeToObjectiveC() -> NSValue {
    return { NSValue(scnVector3: $0) }(self)
  }

  public static func _forceBridgeFromObjectiveC(_ source: NSValue,
                                                result: inout SCNVector3?) {
    precondition(strcmp(source.objCType,
                        { _ in SCNVector3InNSValueObjCType }(SCNVector3.self)) == 0,
                 "NSValue does not contain the right type to bridge to SCNVector3")
    result = { $0.scnVector3Value }(source)
  }

  public static func _conditionallyBridgeFromObjectiveC(_ source: NSValue,
                                                        result: inout SCNVector3?)
      -> Bool {
    if strcmp(source.objCType, { _ in SCNVector3InNSValueObjCType }(SCNVector3.self)) != 0 {
      result = nil
      return false
    }
    result = { $0.scnVector3Value }(source)
    return true
  }

  public static func _unconditionallyBridgeFromObjectiveC(_ source: NSValue?)
      -> SCNVector3 {
    let unwrappedSource = source!
    precondition(strcmp(unwrappedSource.objCType,
                        { _ in SCNVector3InNSValueObjCType }(SCNVector3.self)) == 0,
                 "NSValue does not contain the right type to bridge to SCNVector3")
    return { $0.scnVector3Value }(unwrappedSource)
  }
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/SceneKit/SceneKit.swift.gyb", line: 249)


extension SCNVector4: _ObjectiveCBridgeable {
  public func _bridgeToObjectiveC() -> NSValue {
    return { NSValue(scnVector4: $0) }(self)
  }

  public static func _forceBridgeFromObjectiveC(_ source: NSValue,
                                                result: inout SCNVector4?) {
    precondition(strcmp(source.objCType,
                        { _ in SCNVector4InNSValueObjCType }(SCNVector4.self)) == 0,
                 "NSValue does not contain the right type to bridge to SCNVector4")
    result = { $0.scnVector4Value }(source)
  }

  public static func _conditionallyBridgeFromObjectiveC(_ source: NSValue,
                                                        result: inout SCNVector4?)
      -> Bool {
    if strcmp(source.objCType, { _ in SCNVector4InNSValueObjCType }(SCNVector4.self)) != 0 {
      result = nil
      return false
    }
    result = { $0.scnVector4Value }(source)
    return true
  }

  public static func _unconditionallyBridgeFromObjectiveC(_ source: NSValue?)
      -> SCNVector4 {
    let unwrappedSource = source!
    precondition(strcmp(unwrappedSource.objCType,
                        { _ in SCNVector4InNSValueObjCType }(SCNVector4.self)) == 0,
                 "NSValue does not contain the right type to bridge to SCNVector4")
    return { $0.scnVector4Value }(unwrappedSource)
  }
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/SceneKit/SceneKit.swift.gyb", line: 255)


// On macOS, SCNMatrix4 is a typedef for CATransform3D, which is already made
// NSValue-bridgeable in the QuartzCore overlay. It is a separate struct on
// iOS, watchOS, and tvOS.

#if os(iOS) || os(tvOS) || os(watchOS)

private let SCNMatrix4InNSValueObjCType =
  NSValue(scnMatrix4: SCNMatrix4()).objCType


extension SCNMatrix4: _ObjectiveCBridgeable {
  public func _bridgeToObjectiveC() -> NSValue {
    return { NSValue(scnMatrix4: $0) }(self)
  }

  public static func _forceBridgeFromObjectiveC(_ source: NSValue,
                                                result: inout SCNMatrix4?) {
    precondition(strcmp(source.objCType,
                        { _ in SCNMatrix4InNSValueObjCType }(SCNMatrix4.self)) == 0,
                 "NSValue does not contain the right type to bridge to SCNMatrix4")
    result = { $0.scnMatrix4Value }(source)
  }

  public static func _conditionallyBridgeFromObjectiveC(_ source: NSValue,
                                                        result: inout SCNMatrix4?)
      -> Bool {
    if strcmp(source.objCType, { _ in SCNMatrix4InNSValueObjCType }(SCNMatrix4.self)) != 0 {
      result = nil
      return false
    }
    result = { $0.scnMatrix4Value }(source)
    return true
  }

  public static func _unconditionallyBridgeFromObjectiveC(_ source: NSValue?)
      -> SCNMatrix4 {
    let unwrappedSource = source!
    precondition(strcmp(unwrappedSource.objCType,
                        { _ in SCNMatrix4InNSValueObjCType }(SCNMatrix4.self)) == 0,
                 "NSValue does not contain the right type to bridge to SCNMatrix4")
    return { $0.scnMatrix4Value }(unwrappedSource)
  }
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/SceneKit/SceneKit.swift.gyb", line: 271)


#endif

