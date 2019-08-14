// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 1)
//===----------------------------------------------------------*- swift -*-===//
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
// simd.h overlays for Swift
//===----------------------------------------------------------------------===//

import Swift
import Darwin
@_exported import simd

public extension SIMD {
  @available(swift, deprecated:5, renamed: "init(repeating:)")
  @_transparent
  init(_ scalar: Scalar) { self.init(repeating: scalar) }
}

internal extension SIMD2 {
  var _descriptionAsArray: String { return "[\(x), \(y)]" }
}

internal extension SIMD3 {
  var _descriptionAsArray: String { return "[\(x), \(y), \(z)]" }
}

internal extension SIMD4 {
  var _descriptionAsArray: String { return "[\(x), \(y), \(z), \(w)]" }
}

public extension SIMD where Scalar : FixedWidthInteger {
  @available(swift, deprecated:5, message: "use 0 &- rhs")
  @_transparent
  static prefix func -(rhs: Self) -> Self { return 0 &- rhs }
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 49)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD2<Float>")
public typealias float2 = SIMD2<Float>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 63)
/// Elementwise absolute value of a vector.  The result is a vector of the same
/// length with all elements positive.
@_transparent
public func abs(_ x: SIMD2<Float>) -> SIMD2<Float> {
  return simd_abs(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD2<Float>, _ y: SIMD2<Float>) -> SIMD2<Float> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD2<Float>, _ y: SIMD2<Float>) -> SIMD2<Float> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD2<Float>, _ scalar: Float) -> SIMD2<Float> {
  return min(vector, SIMD2<Float>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD2<Float>, _ scalar: Float) -> SIMD2<Float> {
  return max(vector, SIMD2<Float>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD2<Float>, min: SIMD2<Float>, max: SIMD2<Float>)
  -> SIMD2<Float> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD2<Float>, min: Float, max: Float)
  -> SIMD2<Float> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD2<Float>) -> Float {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD2<Float>) -> Float {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD2<Float>) -> Float {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 135)

/// Sign of a vector.  Each lane contains -1 if the corresponding lane of `x`
/// is less than zero, +1 if the corresponding lane of `x` is greater than
/// zero, and 0 otherwise.
@_transparent
public func sign(_ x: SIMD2<Float>) -> SIMD2<Float> {
  return simd_sign(x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD2<Float>, _ y: SIMD2<Float>, t: SIMD2<Float>) -> SIMD2<Float> {
  return x + t*(y-x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD2<Float>, _ y: SIMD2<Float>, t: Float) -> SIMD2<Float> {
  return x + t*(y-x)
}

/// Elementwise reciprocal.
@_transparent
public func recip(_ x: SIMD2<Float>) -> SIMD2<Float> {
  return simd_recip(x)
}

/// Elementwise reciprocal square root.
@_transparent
public func rsqrt(_ x: SIMD2<Float>) -> SIMD2<Float> {
  return simd_rsqrt(x)
}

/// Alternate name for minimum of two floating-point vectors.
@_transparent
public func fmin(_ x: SIMD2<Float>, _ y: SIMD2<Float>) -> SIMD2<Float> {
  return min(x, y)
}

/// Alternate name for maximum of two floating-point vectors.
@_transparent
public func fmax(_ x: SIMD2<Float>, _ y: SIMD2<Float>) -> SIMD2<Float> {
  return max(x, y)
}

/// Each element of the result is the smallest integral value greater than or
/// equal to the corresponding element of the input.
@_transparent
public func ceil(_ x: SIMD2<Float>) -> SIMD2<Float> {
  return __tg_ceil(x)
}

/// Each element of the result is the largest integral value less than or equal
/// to the corresponding element of the input.
@_transparent
public func floor(_ x: SIMD2<Float>) -> SIMD2<Float> {
  return __tg_floor(x)
}

/// Each element of the result is the closest integral value with magnitude
/// less than or equal to that of the corresponding element of the input.
@_transparent
public func trunc(_ x: SIMD2<Float>) -> SIMD2<Float> {
  return __tg_trunc(x)
}

/// `x - floor(x)`, clamped to lie in the range [0,1).  Without this clamp step,
/// the result would be 1.0 when `x` is a very small negative number, which may
/// result in out-of-bounds table accesses in common usage.
@_transparent
public func fract(_ x: SIMD2<Float>) -> SIMD2<Float> {
  return simd_fract(x)
}

/// 0.0 if `x < edge`, and 1.0 otherwise.
@_transparent
public func step(_ x: SIMD2<Float>, edge: SIMD2<Float>) -> SIMD2<Float> {
  return simd_step(edge, x)
}

/// 0.0 if `x < edge0`, 1.0 if `x > edge1`, and cubic interpolation between
/// 0 and 1 in the interval [edge0, edge1].
@_transparent
public func smoothstep(_ x: SIMD2<Float>, edge0: SIMD2<Float>, edge1: SIMD2<Float>)
  -> SIMD2<Float> {
  return simd_smoothstep(edge0, edge1, x)
}

/// Dot product of `x` and `y`.
@_transparent
public func dot(_ x: SIMD2<Float>, _ y: SIMD2<Float>) -> Float {
  return reduce_add(x * y)
}

/// Projection of `x` onto `y`.
@_transparent
public func project(_ x: SIMD2<Float>, _ y: SIMD2<Float>) -> SIMD2<Float> {
  return simd_project(x, y)
}

/// Length of `x`, squared.  This is more efficient to compute than the length,
/// so you should use it if you only need to compare lengths to each other.
/// I.e. instead of writing:
///
///   if (length(x) < length(y)) { ... }
///
/// use:
///
///   if (length_squared(x) < length_squared(y)) { ... }
///
/// Doing it this way avoids one or two square roots, which is a fairly costly
/// operation.
@_transparent
public func length_squared(_ x: SIMD2<Float>) -> Float {
  return dot(x, x)
}

/// Length (two-norm or "Euclidean norm") of `x`.
@_transparent
public func length(_ x: SIMD2<Float>) -> Float {
  return sqrt(length_squared(x))
}

/// The one-norm (or "taxicab norm") of `x`.
@_transparent
public func norm_one(_ x: SIMD2<Float>) -> Float {
  return reduce_add(abs(x))
}

/// The infinity-norm (or "sup norm") of `x`.
@_transparent
public func norm_inf(_ x: SIMD2<Float>) -> Float {
  return reduce_max(abs(x))
}

/// Distance between `x` and `y`, squared.
@_transparent
public func distance_squared(_ x: SIMD2<Float>, _ y: SIMD2<Float>) -> Float {
  return length_squared(x - y)
}

/// Distance between `x` and `y`.
@_transparent
public func distance(_ x: SIMD2<Float>, _ y: SIMD2<Float>) -> Float {
  return length(x - y)
}

/// Unit vector pointing in the same direction as `x`.
@_transparent
public func normalize(_ x: SIMD2<Float>) -> SIMD2<Float> {
  return simd_normalize(x)
}

/// `x` reflected through the hyperplane with unit normal vector `n`, passing
/// through the origin.  E.g. if `x` is [1,2,3] and `n` is [0,0,1], the result
/// is [1,2,-3].
@_transparent
public func reflect(_ x: SIMD2<Float>, n: SIMD2<Float>) -> SIMD2<Float> {
  return simd_reflect(x, n)
}

/// The refraction direction given unit incident vector `x`, unit surface
/// normal `n`, and index of refraction `eta`.  If the angle between the
/// incident vector and the surface is so small that total internal reflection
/// occurs, zero is returned.
@_transparent
public func refract(_ x: SIMD2<Float>, n: SIMD2<Float>, eta: Float)
  -> SIMD2<Float> {
  return simd_refract(x, n, eta)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD3<Float>")
public typealias float3 = SIMD3<Float>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 63)
/// Elementwise absolute value of a vector.  The result is a vector of the same
/// length with all elements positive.
@_transparent
public func abs(_ x: SIMD3<Float>) -> SIMD3<Float> {
  return simd_abs(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD3<Float>, _ y: SIMD3<Float>) -> SIMD3<Float> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD3<Float>, _ y: SIMD3<Float>) -> SIMD3<Float> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD3<Float>, _ scalar: Float) -> SIMD3<Float> {
  return min(vector, SIMD3<Float>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD3<Float>, _ scalar: Float) -> SIMD3<Float> {
  return max(vector, SIMD3<Float>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD3<Float>, min: SIMD3<Float>, max: SIMD3<Float>)
  -> SIMD3<Float> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD3<Float>, min: Float, max: Float)
  -> SIMD3<Float> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD3<Float>) -> Float {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD3<Float>) -> Float {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD3<Float>) -> Float {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 135)

/// Sign of a vector.  Each lane contains -1 if the corresponding lane of `x`
/// is less than zero, +1 if the corresponding lane of `x` is greater than
/// zero, and 0 otherwise.
@_transparent
public func sign(_ x: SIMD3<Float>) -> SIMD3<Float> {
  return simd_sign(x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD3<Float>, _ y: SIMD3<Float>, t: SIMD3<Float>) -> SIMD3<Float> {
  return x + t*(y-x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD3<Float>, _ y: SIMD3<Float>, t: Float) -> SIMD3<Float> {
  return x + t*(y-x)
}

/// Elementwise reciprocal.
@_transparent
public func recip(_ x: SIMD3<Float>) -> SIMD3<Float> {
  return simd_recip(x)
}

/// Elementwise reciprocal square root.
@_transparent
public func rsqrt(_ x: SIMD3<Float>) -> SIMD3<Float> {
  return simd_rsqrt(x)
}

/// Alternate name for minimum of two floating-point vectors.
@_transparent
public func fmin(_ x: SIMD3<Float>, _ y: SIMD3<Float>) -> SIMD3<Float> {
  return min(x, y)
}

/// Alternate name for maximum of two floating-point vectors.
@_transparent
public func fmax(_ x: SIMD3<Float>, _ y: SIMD3<Float>) -> SIMD3<Float> {
  return max(x, y)
}

/// Each element of the result is the smallest integral value greater than or
/// equal to the corresponding element of the input.
@_transparent
public func ceil(_ x: SIMD3<Float>) -> SIMD3<Float> {
  return __tg_ceil(x)
}

/// Each element of the result is the largest integral value less than or equal
/// to the corresponding element of the input.
@_transparent
public func floor(_ x: SIMD3<Float>) -> SIMD3<Float> {
  return __tg_floor(x)
}

/// Each element of the result is the closest integral value with magnitude
/// less than or equal to that of the corresponding element of the input.
@_transparent
public func trunc(_ x: SIMD3<Float>) -> SIMD3<Float> {
  return __tg_trunc(x)
}

/// `x - floor(x)`, clamped to lie in the range [0,1).  Without this clamp step,
/// the result would be 1.0 when `x` is a very small negative number, which may
/// result in out-of-bounds table accesses in common usage.
@_transparent
public func fract(_ x: SIMD3<Float>) -> SIMD3<Float> {
  return simd_fract(x)
}

/// 0.0 if `x < edge`, and 1.0 otherwise.
@_transparent
public func step(_ x: SIMD3<Float>, edge: SIMD3<Float>) -> SIMD3<Float> {
  return simd_step(edge, x)
}

/// 0.0 if `x < edge0`, 1.0 if `x > edge1`, and cubic interpolation between
/// 0 and 1 in the interval [edge0, edge1].
@_transparent
public func smoothstep(_ x: SIMD3<Float>, edge0: SIMD3<Float>, edge1: SIMD3<Float>)
  -> SIMD3<Float> {
  return simd_smoothstep(edge0, edge1, x)
}

/// Dot product of `x` and `y`.
@_transparent
public func dot(_ x: SIMD3<Float>, _ y: SIMD3<Float>) -> Float {
  return reduce_add(x * y)
}

/// Projection of `x` onto `y`.
@_transparent
public func project(_ x: SIMD3<Float>, _ y: SIMD3<Float>) -> SIMD3<Float> {
  return simd_project(x, y)
}

/// Length of `x`, squared.  This is more efficient to compute than the length,
/// so you should use it if you only need to compare lengths to each other.
/// I.e. instead of writing:
///
///   if (length(x) < length(y)) { ... }
///
/// use:
///
///   if (length_squared(x) < length_squared(y)) { ... }
///
/// Doing it this way avoids one or two square roots, which is a fairly costly
/// operation.
@_transparent
public func length_squared(_ x: SIMD3<Float>) -> Float {
  return dot(x, x)
}

/// Length (two-norm or "Euclidean norm") of `x`.
@_transparent
public func length(_ x: SIMD3<Float>) -> Float {
  return sqrt(length_squared(x))
}

/// The one-norm (or "taxicab norm") of `x`.
@_transparent
public func norm_one(_ x: SIMD3<Float>) -> Float {
  return reduce_add(abs(x))
}

/// The infinity-norm (or "sup norm") of `x`.
@_transparent
public func norm_inf(_ x: SIMD3<Float>) -> Float {
  return reduce_max(abs(x))
}

/// Distance between `x` and `y`, squared.
@_transparent
public func distance_squared(_ x: SIMD3<Float>, _ y: SIMD3<Float>) -> Float {
  return length_squared(x - y)
}

/// Distance between `x` and `y`.
@_transparent
public func distance(_ x: SIMD3<Float>, _ y: SIMD3<Float>) -> Float {
  return length(x - y)
}

/// Unit vector pointing in the same direction as `x`.
@_transparent
public func normalize(_ x: SIMD3<Float>) -> SIMD3<Float> {
  return simd_normalize(x)
}

/// `x` reflected through the hyperplane with unit normal vector `n`, passing
/// through the origin.  E.g. if `x` is [1,2,3] and `n` is [0,0,1], the result
/// is [1,2,-3].
@_transparent
public func reflect(_ x: SIMD3<Float>, n: SIMD3<Float>) -> SIMD3<Float> {
  return simd_reflect(x, n)
}

/// The refraction direction given unit incident vector `x`, unit surface
/// normal `n`, and index of refraction `eta`.  If the angle between the
/// incident vector and the surface is so small that total internal reflection
/// occurs, zero is returned.
@_transparent
public func refract(_ x: SIMD3<Float>, n: SIMD3<Float>, eta: Float)
  -> SIMD3<Float> {
  return simd_refract(x, n, eta)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD4<Float>")
public typealias float4 = SIMD4<Float>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 63)
/// Elementwise absolute value of a vector.  The result is a vector of the same
/// length with all elements positive.
@_transparent
public func abs(_ x: SIMD4<Float>) -> SIMD4<Float> {
  return simd_abs(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD4<Float>, _ y: SIMD4<Float>) -> SIMD4<Float> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD4<Float>, _ y: SIMD4<Float>) -> SIMD4<Float> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD4<Float>, _ scalar: Float) -> SIMD4<Float> {
  return min(vector, SIMD4<Float>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD4<Float>, _ scalar: Float) -> SIMD4<Float> {
  return max(vector, SIMD4<Float>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD4<Float>, min: SIMD4<Float>, max: SIMD4<Float>)
  -> SIMD4<Float> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD4<Float>, min: Float, max: Float)
  -> SIMD4<Float> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD4<Float>) -> Float {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD4<Float>) -> Float {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD4<Float>) -> Float {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 135)

/// Sign of a vector.  Each lane contains -1 if the corresponding lane of `x`
/// is less than zero, +1 if the corresponding lane of `x` is greater than
/// zero, and 0 otherwise.
@_transparent
public func sign(_ x: SIMD4<Float>) -> SIMD4<Float> {
  return simd_sign(x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD4<Float>, _ y: SIMD4<Float>, t: SIMD4<Float>) -> SIMD4<Float> {
  return x + t*(y-x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD4<Float>, _ y: SIMD4<Float>, t: Float) -> SIMD4<Float> {
  return x + t*(y-x)
}

/// Elementwise reciprocal.
@_transparent
public func recip(_ x: SIMD4<Float>) -> SIMD4<Float> {
  return simd_recip(x)
}

/// Elementwise reciprocal square root.
@_transparent
public func rsqrt(_ x: SIMD4<Float>) -> SIMD4<Float> {
  return simd_rsqrt(x)
}

/// Alternate name for minimum of two floating-point vectors.
@_transparent
public func fmin(_ x: SIMD4<Float>, _ y: SIMD4<Float>) -> SIMD4<Float> {
  return min(x, y)
}

/// Alternate name for maximum of two floating-point vectors.
@_transparent
public func fmax(_ x: SIMD4<Float>, _ y: SIMD4<Float>) -> SIMD4<Float> {
  return max(x, y)
}

/// Each element of the result is the smallest integral value greater than or
/// equal to the corresponding element of the input.
@_transparent
public func ceil(_ x: SIMD4<Float>) -> SIMD4<Float> {
  return __tg_ceil(x)
}

/// Each element of the result is the largest integral value less than or equal
/// to the corresponding element of the input.
@_transparent
public func floor(_ x: SIMD4<Float>) -> SIMD4<Float> {
  return __tg_floor(x)
}

/// Each element of the result is the closest integral value with magnitude
/// less than or equal to that of the corresponding element of the input.
@_transparent
public func trunc(_ x: SIMD4<Float>) -> SIMD4<Float> {
  return __tg_trunc(x)
}

/// `x - floor(x)`, clamped to lie in the range [0,1).  Without this clamp step,
/// the result would be 1.0 when `x` is a very small negative number, which may
/// result in out-of-bounds table accesses in common usage.
@_transparent
public func fract(_ x: SIMD4<Float>) -> SIMD4<Float> {
  return simd_fract(x)
}

/// 0.0 if `x < edge`, and 1.0 otherwise.
@_transparent
public func step(_ x: SIMD4<Float>, edge: SIMD4<Float>) -> SIMD4<Float> {
  return simd_step(edge, x)
}

/// 0.0 if `x < edge0`, 1.0 if `x > edge1`, and cubic interpolation between
/// 0 and 1 in the interval [edge0, edge1].
@_transparent
public func smoothstep(_ x: SIMD4<Float>, edge0: SIMD4<Float>, edge1: SIMD4<Float>)
  -> SIMD4<Float> {
  return simd_smoothstep(edge0, edge1, x)
}

/// Dot product of `x` and `y`.
@_transparent
public func dot(_ x: SIMD4<Float>, _ y: SIMD4<Float>) -> Float {
  return reduce_add(x * y)
}

/// Projection of `x` onto `y`.
@_transparent
public func project(_ x: SIMD4<Float>, _ y: SIMD4<Float>) -> SIMD4<Float> {
  return simd_project(x, y)
}

/// Length of `x`, squared.  This is more efficient to compute than the length,
/// so you should use it if you only need to compare lengths to each other.
/// I.e. instead of writing:
///
///   if (length(x) < length(y)) { ... }
///
/// use:
///
///   if (length_squared(x) < length_squared(y)) { ... }
///
/// Doing it this way avoids one or two square roots, which is a fairly costly
/// operation.
@_transparent
public func length_squared(_ x: SIMD4<Float>) -> Float {
  return dot(x, x)
}

/// Length (two-norm or "Euclidean norm") of `x`.
@_transparent
public func length(_ x: SIMD4<Float>) -> Float {
  return sqrt(length_squared(x))
}

/// The one-norm (or "taxicab norm") of `x`.
@_transparent
public func norm_one(_ x: SIMD4<Float>) -> Float {
  return reduce_add(abs(x))
}

/// The infinity-norm (or "sup norm") of `x`.
@_transparent
public func norm_inf(_ x: SIMD4<Float>) -> Float {
  return reduce_max(abs(x))
}

/// Distance between `x` and `y`, squared.
@_transparent
public func distance_squared(_ x: SIMD4<Float>, _ y: SIMD4<Float>) -> Float {
  return length_squared(x - y)
}

/// Distance between `x` and `y`.
@_transparent
public func distance(_ x: SIMD4<Float>, _ y: SIMD4<Float>) -> Float {
  return length(x - y)
}

/// Unit vector pointing in the same direction as `x`.
@_transparent
public func normalize(_ x: SIMD4<Float>) -> SIMD4<Float> {
  return simd_normalize(x)
}

/// `x` reflected through the hyperplane with unit normal vector `n`, passing
/// through the origin.  E.g. if `x` is [1,2,3] and `n` is [0,0,1], the result
/// is [1,2,-3].
@_transparent
public func reflect(_ x: SIMD4<Float>, n: SIMD4<Float>) -> SIMD4<Float> {
  return simd_reflect(x, n)
}

/// The refraction direction given unit incident vector `x`, unit surface
/// normal `n`, and index of refraction `eta`.  If the angle between the
/// incident vector and the surface is so small that total internal reflection
/// occurs, zero is returned.
@_transparent
public func refract(_ x: SIMD4<Float>, n: SIMD4<Float>, eta: Float)
  -> SIMD4<Float> {
  return simd_refract(x, n, eta)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 311)
//  Scalar versions of common operations:

/// Returns -1 if `x < 0`, +1 if `x > 0`, and 0 otherwise (`sign(NaN)` is 0).
@_transparent
public func sign(_ x: Float) -> Float {
  return simd_sign(x)
}

/// Reciprocal.
@_transparent
public func recip(_ x: Float) -> Float {
  return simd_recip(x)
}

/// Reciprocal square root.
@_transparent
public func rsqrt(_ x: Float) -> Float {
  return simd_rsqrt(x)
}

/// Returns 0.0 if `x < edge`, and 1.0 otherwise.
@_transparent
public func step(_ x: Float, edge: Float) -> Float {
  return simd_step(edge, x)
}

/// Interprets two two-dimensional vectors as three-dimensional vectors in the
/// xy-plane and computes their cross product, which lies along the z-axis.
@_transparent
public func cross(_ x: SIMD2<Float>, _ y: SIMD2<Float>) -> SIMD3<Float> {
  return simd_cross(x,y)
}

/// Cross-product of two three-dimensional vectors.  The resulting vector is
/// perpendicular to the plane determined by `x` and `y`, with length equal to
/// the oriented area of the parallelogram they determine.
@_transparent
public func cross(_ x: SIMD3<Float>, _ y: SIMD3<Float>) -> SIMD3<Float> {
  return simd_cross(x,y)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD2<Double>")
public typealias double2 = SIMD2<Double>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 63)
/// Elementwise absolute value of a vector.  The result is a vector of the same
/// length with all elements positive.
@_transparent
public func abs(_ x: SIMD2<Double>) -> SIMD2<Double> {
  return simd_abs(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD2<Double>, _ y: SIMD2<Double>) -> SIMD2<Double> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD2<Double>, _ y: SIMD2<Double>) -> SIMD2<Double> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD2<Double>, _ scalar: Double) -> SIMD2<Double> {
  return min(vector, SIMD2<Double>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD2<Double>, _ scalar: Double) -> SIMD2<Double> {
  return max(vector, SIMD2<Double>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD2<Double>, min: SIMD2<Double>, max: SIMD2<Double>)
  -> SIMD2<Double> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD2<Double>, min: Double, max: Double)
  -> SIMD2<Double> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD2<Double>) -> Double {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD2<Double>) -> Double {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD2<Double>) -> Double {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 135)

/// Sign of a vector.  Each lane contains -1 if the corresponding lane of `x`
/// is less than zero, +1 if the corresponding lane of `x` is greater than
/// zero, and 0 otherwise.
@_transparent
public func sign(_ x: SIMD2<Double>) -> SIMD2<Double> {
  return simd_sign(x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD2<Double>, _ y: SIMD2<Double>, t: SIMD2<Double>) -> SIMD2<Double> {
  return x + t*(y-x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD2<Double>, _ y: SIMD2<Double>, t: Double) -> SIMD2<Double> {
  return x + t*(y-x)
}

/// Elementwise reciprocal.
@_transparent
public func recip(_ x: SIMD2<Double>) -> SIMD2<Double> {
  return simd_recip(x)
}

/// Elementwise reciprocal square root.
@_transparent
public func rsqrt(_ x: SIMD2<Double>) -> SIMD2<Double> {
  return simd_rsqrt(x)
}

/// Alternate name for minimum of two floating-point vectors.
@_transparent
public func fmin(_ x: SIMD2<Double>, _ y: SIMD2<Double>) -> SIMD2<Double> {
  return min(x, y)
}

/// Alternate name for maximum of two floating-point vectors.
@_transparent
public func fmax(_ x: SIMD2<Double>, _ y: SIMD2<Double>) -> SIMD2<Double> {
  return max(x, y)
}

/// Each element of the result is the smallest integral value greater than or
/// equal to the corresponding element of the input.
@_transparent
public func ceil(_ x: SIMD2<Double>) -> SIMD2<Double> {
  return __tg_ceil(x)
}

/// Each element of the result is the largest integral value less than or equal
/// to the corresponding element of the input.
@_transparent
public func floor(_ x: SIMD2<Double>) -> SIMD2<Double> {
  return __tg_floor(x)
}

/// Each element of the result is the closest integral value with magnitude
/// less than or equal to that of the corresponding element of the input.
@_transparent
public func trunc(_ x: SIMD2<Double>) -> SIMD2<Double> {
  return __tg_trunc(x)
}

/// `x - floor(x)`, clamped to lie in the range [0,1).  Without this clamp step,
/// the result would be 1.0 when `x` is a very small negative number, which may
/// result in out-of-bounds table accesses in common usage.
@_transparent
public func fract(_ x: SIMD2<Double>) -> SIMD2<Double> {
  return simd_fract(x)
}

/// 0.0 if `x < edge`, and 1.0 otherwise.
@_transparent
public func step(_ x: SIMD2<Double>, edge: SIMD2<Double>) -> SIMD2<Double> {
  return simd_step(edge, x)
}

/// 0.0 if `x < edge0`, 1.0 if `x > edge1`, and cubic interpolation between
/// 0 and 1 in the interval [edge0, edge1].
@_transparent
public func smoothstep(_ x: SIMD2<Double>, edge0: SIMD2<Double>, edge1: SIMD2<Double>)
  -> SIMD2<Double> {
  return simd_smoothstep(edge0, edge1, x)
}

/// Dot product of `x` and `y`.
@_transparent
public func dot(_ x: SIMD2<Double>, _ y: SIMD2<Double>) -> Double {
  return reduce_add(x * y)
}

/// Projection of `x` onto `y`.
@_transparent
public func project(_ x: SIMD2<Double>, _ y: SIMD2<Double>) -> SIMD2<Double> {
  return simd_project(x, y)
}

/// Length of `x`, squared.  This is more efficient to compute than the length,
/// so you should use it if you only need to compare lengths to each other.
/// I.e. instead of writing:
///
///   if (length(x) < length(y)) { ... }
///
/// use:
///
///   if (length_squared(x) < length_squared(y)) { ... }
///
/// Doing it this way avoids one or two square roots, which is a fairly costly
/// operation.
@_transparent
public func length_squared(_ x: SIMD2<Double>) -> Double {
  return dot(x, x)
}

/// Length (two-norm or "Euclidean norm") of `x`.
@_transparent
public func length(_ x: SIMD2<Double>) -> Double {
  return sqrt(length_squared(x))
}

/// The one-norm (or "taxicab norm") of `x`.
@_transparent
public func norm_one(_ x: SIMD2<Double>) -> Double {
  return reduce_add(abs(x))
}

/// The infinity-norm (or "sup norm") of `x`.
@_transparent
public func norm_inf(_ x: SIMD2<Double>) -> Double {
  return reduce_max(abs(x))
}

/// Distance between `x` and `y`, squared.
@_transparent
public func distance_squared(_ x: SIMD2<Double>, _ y: SIMD2<Double>) -> Double {
  return length_squared(x - y)
}

/// Distance between `x` and `y`.
@_transparent
public func distance(_ x: SIMD2<Double>, _ y: SIMD2<Double>) -> Double {
  return length(x - y)
}

/// Unit vector pointing in the same direction as `x`.
@_transparent
public func normalize(_ x: SIMD2<Double>) -> SIMD2<Double> {
  return simd_normalize(x)
}

/// `x` reflected through the hyperplane with unit normal vector `n`, passing
/// through the origin.  E.g. if `x` is [1,2,3] and `n` is [0,0,1], the result
/// is [1,2,-3].
@_transparent
public func reflect(_ x: SIMD2<Double>, n: SIMD2<Double>) -> SIMD2<Double> {
  return simd_reflect(x, n)
}

/// The refraction direction given unit incident vector `x`, unit surface
/// normal `n`, and index of refraction `eta`.  If the angle between the
/// incident vector and the surface is so small that total internal reflection
/// occurs, zero is returned.
@_transparent
public func refract(_ x: SIMD2<Double>, n: SIMD2<Double>, eta: Double)
  -> SIMD2<Double> {
  return simd_refract(x, n, eta)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD3<Double>")
public typealias double3 = SIMD3<Double>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 63)
/// Elementwise absolute value of a vector.  The result is a vector of the same
/// length with all elements positive.
@_transparent
public func abs(_ x: SIMD3<Double>) -> SIMD3<Double> {
  return simd_abs(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD3<Double>, _ y: SIMD3<Double>) -> SIMD3<Double> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD3<Double>, _ y: SIMD3<Double>) -> SIMD3<Double> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD3<Double>, _ scalar: Double) -> SIMD3<Double> {
  return min(vector, SIMD3<Double>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD3<Double>, _ scalar: Double) -> SIMD3<Double> {
  return max(vector, SIMD3<Double>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD3<Double>, min: SIMD3<Double>, max: SIMD3<Double>)
  -> SIMD3<Double> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD3<Double>, min: Double, max: Double)
  -> SIMD3<Double> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD3<Double>) -> Double {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD3<Double>) -> Double {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD3<Double>) -> Double {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 135)

/// Sign of a vector.  Each lane contains -1 if the corresponding lane of `x`
/// is less than zero, +1 if the corresponding lane of `x` is greater than
/// zero, and 0 otherwise.
@_transparent
public func sign(_ x: SIMD3<Double>) -> SIMD3<Double> {
  return simd_sign(x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD3<Double>, _ y: SIMD3<Double>, t: SIMD3<Double>) -> SIMD3<Double> {
  return x + t*(y-x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD3<Double>, _ y: SIMD3<Double>, t: Double) -> SIMD3<Double> {
  return x + t*(y-x)
}

/// Elementwise reciprocal.
@_transparent
public func recip(_ x: SIMD3<Double>) -> SIMD3<Double> {
  return simd_recip(x)
}

/// Elementwise reciprocal square root.
@_transparent
public func rsqrt(_ x: SIMD3<Double>) -> SIMD3<Double> {
  return simd_rsqrt(x)
}

/// Alternate name for minimum of two floating-point vectors.
@_transparent
public func fmin(_ x: SIMD3<Double>, _ y: SIMD3<Double>) -> SIMD3<Double> {
  return min(x, y)
}

/// Alternate name for maximum of two floating-point vectors.
@_transparent
public func fmax(_ x: SIMD3<Double>, _ y: SIMD3<Double>) -> SIMD3<Double> {
  return max(x, y)
}

/// Each element of the result is the smallest integral value greater than or
/// equal to the corresponding element of the input.
@_transparent
public func ceil(_ x: SIMD3<Double>) -> SIMD3<Double> {
  return __tg_ceil(x)
}

/// Each element of the result is the largest integral value less than or equal
/// to the corresponding element of the input.
@_transparent
public func floor(_ x: SIMD3<Double>) -> SIMD3<Double> {
  return __tg_floor(x)
}

/// Each element of the result is the closest integral value with magnitude
/// less than or equal to that of the corresponding element of the input.
@_transparent
public func trunc(_ x: SIMD3<Double>) -> SIMD3<Double> {
  return __tg_trunc(x)
}

/// `x - floor(x)`, clamped to lie in the range [0,1).  Without this clamp step,
/// the result would be 1.0 when `x` is a very small negative number, which may
/// result in out-of-bounds table accesses in common usage.
@_transparent
public func fract(_ x: SIMD3<Double>) -> SIMD3<Double> {
  return simd_fract(x)
}

/// 0.0 if `x < edge`, and 1.0 otherwise.
@_transparent
public func step(_ x: SIMD3<Double>, edge: SIMD3<Double>) -> SIMD3<Double> {
  return simd_step(edge, x)
}

/// 0.0 if `x < edge0`, 1.0 if `x > edge1`, and cubic interpolation between
/// 0 and 1 in the interval [edge0, edge1].
@_transparent
public func smoothstep(_ x: SIMD3<Double>, edge0: SIMD3<Double>, edge1: SIMD3<Double>)
  -> SIMD3<Double> {
  return simd_smoothstep(edge0, edge1, x)
}

/// Dot product of `x` and `y`.
@_transparent
public func dot(_ x: SIMD3<Double>, _ y: SIMD3<Double>) -> Double {
  return reduce_add(x * y)
}

/// Projection of `x` onto `y`.
@_transparent
public func project(_ x: SIMD3<Double>, _ y: SIMD3<Double>) -> SIMD3<Double> {
  return simd_project(x, y)
}

/// Length of `x`, squared.  This is more efficient to compute than the length,
/// so you should use it if you only need to compare lengths to each other.
/// I.e. instead of writing:
///
///   if (length(x) < length(y)) { ... }
///
/// use:
///
///   if (length_squared(x) < length_squared(y)) { ... }
///
/// Doing it this way avoids one or two square roots, which is a fairly costly
/// operation.
@_transparent
public func length_squared(_ x: SIMD3<Double>) -> Double {
  return dot(x, x)
}

/// Length (two-norm or "Euclidean norm") of `x`.
@_transparent
public func length(_ x: SIMD3<Double>) -> Double {
  return sqrt(length_squared(x))
}

/// The one-norm (or "taxicab norm") of `x`.
@_transparent
public func norm_one(_ x: SIMD3<Double>) -> Double {
  return reduce_add(abs(x))
}

/// The infinity-norm (or "sup norm") of `x`.
@_transparent
public func norm_inf(_ x: SIMD3<Double>) -> Double {
  return reduce_max(abs(x))
}

/// Distance between `x` and `y`, squared.
@_transparent
public func distance_squared(_ x: SIMD3<Double>, _ y: SIMD3<Double>) -> Double {
  return length_squared(x - y)
}

/// Distance between `x` and `y`.
@_transparent
public func distance(_ x: SIMD3<Double>, _ y: SIMD3<Double>) -> Double {
  return length(x - y)
}

/// Unit vector pointing in the same direction as `x`.
@_transparent
public func normalize(_ x: SIMD3<Double>) -> SIMD3<Double> {
  return simd_normalize(x)
}

/// `x` reflected through the hyperplane with unit normal vector `n`, passing
/// through the origin.  E.g. if `x` is [1,2,3] and `n` is [0,0,1], the result
/// is [1,2,-3].
@_transparent
public func reflect(_ x: SIMD3<Double>, n: SIMD3<Double>) -> SIMD3<Double> {
  return simd_reflect(x, n)
}

/// The refraction direction given unit incident vector `x`, unit surface
/// normal `n`, and index of refraction `eta`.  If the angle between the
/// incident vector and the surface is so small that total internal reflection
/// occurs, zero is returned.
@_transparent
public func refract(_ x: SIMD3<Double>, n: SIMD3<Double>, eta: Double)
  -> SIMD3<Double> {
  return simd_refract(x, n, eta)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD4<Double>")
public typealias double4 = SIMD4<Double>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 63)
/// Elementwise absolute value of a vector.  The result is a vector of the same
/// length with all elements positive.
@_transparent
public func abs(_ x: SIMD4<Double>) -> SIMD4<Double> {
  return simd_abs(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD4<Double>, _ y: SIMD4<Double>) -> SIMD4<Double> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD4<Double>, _ y: SIMD4<Double>) -> SIMD4<Double> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD4<Double>, _ scalar: Double) -> SIMD4<Double> {
  return min(vector, SIMD4<Double>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD4<Double>, _ scalar: Double) -> SIMD4<Double> {
  return max(vector, SIMD4<Double>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD4<Double>, min: SIMD4<Double>, max: SIMD4<Double>)
  -> SIMD4<Double> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD4<Double>, min: Double, max: Double)
  -> SIMD4<Double> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD4<Double>) -> Double {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD4<Double>) -> Double {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD4<Double>) -> Double {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 135)

/// Sign of a vector.  Each lane contains -1 if the corresponding lane of `x`
/// is less than zero, +1 if the corresponding lane of `x` is greater than
/// zero, and 0 otherwise.
@_transparent
public func sign(_ x: SIMD4<Double>) -> SIMD4<Double> {
  return simd_sign(x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD4<Double>, _ y: SIMD4<Double>, t: SIMD4<Double>) -> SIMD4<Double> {
  return x + t*(y-x)
}

/// Linear interpolation between `x` (at `t=0`) and `y` (at `t=1`).  May be
/// used with `t` outside of [0, 1] as well.
@_transparent
public func mix(_ x: SIMD4<Double>, _ y: SIMD4<Double>, t: Double) -> SIMD4<Double> {
  return x + t*(y-x)
}

/// Elementwise reciprocal.
@_transparent
public func recip(_ x: SIMD4<Double>) -> SIMD4<Double> {
  return simd_recip(x)
}

/// Elementwise reciprocal square root.
@_transparent
public func rsqrt(_ x: SIMD4<Double>) -> SIMD4<Double> {
  return simd_rsqrt(x)
}

/// Alternate name for minimum of two floating-point vectors.
@_transparent
public func fmin(_ x: SIMD4<Double>, _ y: SIMD4<Double>) -> SIMD4<Double> {
  return min(x, y)
}

/// Alternate name for maximum of two floating-point vectors.
@_transparent
public func fmax(_ x: SIMD4<Double>, _ y: SIMD4<Double>) -> SIMD4<Double> {
  return max(x, y)
}

/// Each element of the result is the smallest integral value greater than or
/// equal to the corresponding element of the input.
@_transparent
public func ceil(_ x: SIMD4<Double>) -> SIMD4<Double> {
  return __tg_ceil(x)
}

/// Each element of the result is the largest integral value less than or equal
/// to the corresponding element of the input.
@_transparent
public func floor(_ x: SIMD4<Double>) -> SIMD4<Double> {
  return __tg_floor(x)
}

/// Each element of the result is the closest integral value with magnitude
/// less than or equal to that of the corresponding element of the input.
@_transparent
public func trunc(_ x: SIMD4<Double>) -> SIMD4<Double> {
  return __tg_trunc(x)
}

/// `x - floor(x)`, clamped to lie in the range [0,1).  Without this clamp step,
/// the result would be 1.0 when `x` is a very small negative number, which may
/// result in out-of-bounds table accesses in common usage.
@_transparent
public func fract(_ x: SIMD4<Double>) -> SIMD4<Double> {
  return simd_fract(x)
}

/// 0.0 if `x < edge`, and 1.0 otherwise.
@_transparent
public func step(_ x: SIMD4<Double>, edge: SIMD4<Double>) -> SIMD4<Double> {
  return simd_step(edge, x)
}

/// 0.0 if `x < edge0`, 1.0 if `x > edge1`, and cubic interpolation between
/// 0 and 1 in the interval [edge0, edge1].
@_transparent
public func smoothstep(_ x: SIMD4<Double>, edge0: SIMD4<Double>, edge1: SIMD4<Double>)
  -> SIMD4<Double> {
  return simd_smoothstep(edge0, edge1, x)
}

/// Dot product of `x` and `y`.
@_transparent
public func dot(_ x: SIMD4<Double>, _ y: SIMD4<Double>) -> Double {
  return reduce_add(x * y)
}

/// Projection of `x` onto `y`.
@_transparent
public func project(_ x: SIMD4<Double>, _ y: SIMD4<Double>) -> SIMD4<Double> {
  return simd_project(x, y)
}

/// Length of `x`, squared.  This is more efficient to compute than the length,
/// so you should use it if you only need to compare lengths to each other.
/// I.e. instead of writing:
///
///   if (length(x) < length(y)) { ... }
///
/// use:
///
///   if (length_squared(x) < length_squared(y)) { ... }
///
/// Doing it this way avoids one or two square roots, which is a fairly costly
/// operation.
@_transparent
public func length_squared(_ x: SIMD4<Double>) -> Double {
  return dot(x, x)
}

/// Length (two-norm or "Euclidean norm") of `x`.
@_transparent
public func length(_ x: SIMD4<Double>) -> Double {
  return sqrt(length_squared(x))
}

/// The one-norm (or "taxicab norm") of `x`.
@_transparent
public func norm_one(_ x: SIMD4<Double>) -> Double {
  return reduce_add(abs(x))
}

/// The infinity-norm (or "sup norm") of `x`.
@_transparent
public func norm_inf(_ x: SIMD4<Double>) -> Double {
  return reduce_max(abs(x))
}

/// Distance between `x` and `y`, squared.
@_transparent
public func distance_squared(_ x: SIMD4<Double>, _ y: SIMD4<Double>) -> Double {
  return length_squared(x - y)
}

/// Distance between `x` and `y`.
@_transparent
public func distance(_ x: SIMD4<Double>, _ y: SIMD4<Double>) -> Double {
  return length(x - y)
}

/// Unit vector pointing in the same direction as `x`.
@_transparent
public func normalize(_ x: SIMD4<Double>) -> SIMD4<Double> {
  return simd_normalize(x)
}

/// `x` reflected through the hyperplane with unit normal vector `n`, passing
/// through the origin.  E.g. if `x` is [1,2,3] and `n` is [0,0,1], the result
/// is [1,2,-3].
@_transparent
public func reflect(_ x: SIMD4<Double>, n: SIMD4<Double>) -> SIMD4<Double> {
  return simd_reflect(x, n)
}

/// The refraction direction given unit incident vector `x`, unit surface
/// normal `n`, and index of refraction `eta`.  If the angle between the
/// incident vector and the surface is so small that total internal reflection
/// occurs, zero is returned.
@_transparent
public func refract(_ x: SIMD4<Double>, n: SIMD4<Double>, eta: Double)
  -> SIMD4<Double> {
  return simd_refract(x, n, eta)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 311)
//  Scalar versions of common operations:

/// Returns -1 if `x < 0`, +1 if `x > 0`, and 0 otherwise (`sign(NaN)` is 0).
@_transparent
public func sign(_ x: Double) -> Double {
  return simd_sign(x)
}

/// Reciprocal.
@_transparent
public func recip(_ x: Double) -> Double {
  return simd_recip(x)
}

/// Reciprocal square root.
@_transparent
public func rsqrt(_ x: Double) -> Double {
  return simd_rsqrt(x)
}

/// Returns 0.0 if `x < edge`, and 1.0 otherwise.
@_transparent
public func step(_ x: Double, edge: Double) -> Double {
  return simd_step(edge, x)
}

/// Interprets two two-dimensional vectors as three-dimensional vectors in the
/// xy-plane and computes their cross product, which lies along the z-axis.
@_transparent
public func cross(_ x: SIMD2<Double>, _ y: SIMD2<Double>) -> SIMD3<Double> {
  return simd_cross(x,y)
}

/// Cross-product of two three-dimensional vectors.  The resulting vector is
/// perpendicular to the plane determined by `x` and `y`, with length equal to
/// the oriented area of the parallelogram they determine.
@_transparent
public func cross(_ x: SIMD3<Double>, _ y: SIMD3<Double>) -> SIMD3<Double> {
  return simd_cross(x,y)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD2<Int32>")
public typealias int2 = SIMD2<Int32>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 63)
/// Elementwise absolute value of a vector.  The result is a vector of the same
/// length with all elements positive.
@_transparent
public func abs(_ x: SIMD2<Int32>) -> SIMD2<Int32> {
  return simd_abs(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD2<Int32>, _ y: SIMD2<Int32>) -> SIMD2<Int32> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD2<Int32>, _ y: SIMD2<Int32>) -> SIMD2<Int32> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD2<Int32>, _ scalar: Int32) -> SIMD2<Int32> {
  return min(vector, SIMD2<Int32>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD2<Int32>, _ scalar: Int32) -> SIMD2<Int32> {
  return max(vector, SIMD2<Int32>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD2<Int32>, min: SIMD2<Int32>, max: SIMD2<Int32>)
  -> SIMD2<Int32> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD2<Int32>, min: Int32, max: Int32)
  -> SIMD2<Int32> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD2<Int32>) -> Int32 {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD2<Int32>) -> Int32 {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD2<Int32>) -> Int32 {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD3<Int32>")
public typealias int3 = SIMD3<Int32>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 63)
/// Elementwise absolute value of a vector.  The result is a vector of the same
/// length with all elements positive.
@_transparent
public func abs(_ x: SIMD3<Int32>) -> SIMD3<Int32> {
  return simd_abs(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD3<Int32>, _ y: SIMD3<Int32>) -> SIMD3<Int32> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD3<Int32>, _ y: SIMD3<Int32>) -> SIMD3<Int32> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD3<Int32>, _ scalar: Int32) -> SIMD3<Int32> {
  return min(vector, SIMD3<Int32>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD3<Int32>, _ scalar: Int32) -> SIMD3<Int32> {
  return max(vector, SIMD3<Int32>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD3<Int32>, min: SIMD3<Int32>, max: SIMD3<Int32>)
  -> SIMD3<Int32> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD3<Int32>, min: Int32, max: Int32)
  -> SIMD3<Int32> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD3<Int32>) -> Int32 {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD3<Int32>) -> Int32 {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD3<Int32>) -> Int32 {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD4<Int32>")
public typealias int4 = SIMD4<Int32>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 63)
/// Elementwise absolute value of a vector.  The result is a vector of the same
/// length with all elements positive.
@_transparent
public func abs(_ x: SIMD4<Int32>) -> SIMD4<Int32> {
  return simd_abs(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD4<Int32>, _ y: SIMD4<Int32>) -> SIMD4<Int32> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD4<Int32>, _ y: SIMD4<Int32>) -> SIMD4<Int32> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD4<Int32>, _ scalar: Int32) -> SIMD4<Int32> {
  return min(vector, SIMD4<Int32>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD4<Int32>, _ scalar: Int32) -> SIMD4<Int32> {
  return max(vector, SIMD4<Int32>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD4<Int32>, min: SIMD4<Int32>, max: SIMD4<Int32>)
  -> SIMD4<Int32> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD4<Int32>, min: Int32, max: Int32)
  -> SIMD4<Int32> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD4<Int32>) -> Int32 {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD4<Int32>) -> Int32 {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD4<Int32>) -> Int32 {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD2<UInt32>")
public typealias uint2 = SIMD2<UInt32>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD2<UInt32>, _ y: SIMD2<UInt32>) -> SIMD2<UInt32> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD2<UInt32>, _ y: SIMD2<UInt32>) -> SIMD2<UInt32> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD2<UInt32>, _ scalar: UInt32) -> SIMD2<UInt32> {
  return min(vector, SIMD2<UInt32>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD2<UInt32>, _ scalar: UInt32) -> SIMD2<UInt32> {
  return max(vector, SIMD2<UInt32>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD2<UInt32>, min: SIMD2<UInt32>, max: SIMD2<UInt32>)
  -> SIMD2<UInt32> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD2<UInt32>, min: UInt32, max: UInt32)
  -> SIMD2<UInt32> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD2<UInt32>) -> UInt32 {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD2<UInt32>) -> UInt32 {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD2<UInt32>) -> UInt32 {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD3<UInt32>")
public typealias uint3 = SIMD3<UInt32>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD3<UInt32>, _ y: SIMD3<UInt32>) -> SIMD3<UInt32> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD3<UInt32>, _ y: SIMD3<UInt32>) -> SIMD3<UInt32> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD3<UInt32>, _ scalar: UInt32) -> SIMD3<UInt32> {
  return min(vector, SIMD3<UInt32>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD3<UInt32>, _ scalar: UInt32) -> SIMD3<UInt32> {
  return max(vector, SIMD3<UInt32>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD3<UInt32>, min: SIMD3<UInt32>, max: SIMD3<UInt32>)
  -> SIMD3<UInt32> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD3<UInt32>, min: UInt32, max: UInt32)
  -> SIMD3<UInt32> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD3<UInt32>) -> UInt32 {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD3<UInt32>) -> UInt32 {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD3<UInt32>) -> UInt32 {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 58)

@available(swift, deprecated: 5.1, message: "Use SIMD4<UInt32>")
public typealias uint4 = SIMD4<UInt32>

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 70)

/// Elementwise minimum of two vectors.  Each component of the result is the
/// smaller of the corresponding component of the inputs.
@_transparent
public func min(_ x: SIMD4<UInt32>, _ y: SIMD4<UInt32>) -> SIMD4<UInt32> {
  return simd_min(x, y)
}

/// Elementwise maximum of two vectors.  Each component of the result is the
/// larger of the corresponding component of the inputs.
@_transparent
public func max(_ x: SIMD4<UInt32>, _ y: SIMD4<UInt32>) -> SIMD4<UInt32> {
  return simd_max(x, y)
}

/// Vector-scalar minimum.  Each component of the result is the minimum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func min(_ vector: SIMD4<UInt32>, _ scalar: UInt32) -> SIMD4<UInt32> {
  return min(vector, SIMD4<UInt32>(repeating: scalar))
}

/// Vector-scalar maximum.  Each component of the result is the maximum of the
/// corresponding element of the input vector and the scalar.
@_transparent
public func max(_ vector: SIMD4<UInt32>, _ scalar: UInt32) -> SIMD4<UInt32> {
  return max(vector, SIMD4<UInt32>(repeating: scalar))
}

/// Each component of the result is the corresponding element of `x` clamped to
/// the range formed by the corresponding elements of `min` and `max`.  Any
/// lanes of `x` that contain NaN will end up with the `min` value.
@_transparent
public func clamp(_ x: SIMD4<UInt32>, min: SIMD4<UInt32>, max: SIMD4<UInt32>)
  -> SIMD4<UInt32> {
  return simd.min(simd.max(x, min), max)
}

/// Clamp each element of `x` to the range [`min`, max].  If any lane of `x` is
/// NaN, the corresponding lane of the result is `min`.
@_transparent
public func clamp(_ x: SIMD4<UInt32>, min: UInt32, max: UInt32)
  -> SIMD4<UInt32> {
  return simd.min(simd.max(x, min), max)
}

/// Sum of the elements of the vector.
@_transparent
public func reduce_add(_ x: SIMD4<UInt32>) -> UInt32 {
  return simd_reduce_add(x)
}

/// Minimum element of the vector.
@_transparent
public func reduce_min(_ x: SIMD4<UInt32>) -> UInt32 {
  return simd_reduce_min(x)
}

/// Maximum element of the vector.
@_transparent
public func reduce_max(_ x: SIMD4<UInt32>) -> UInt32 {
  return simd_reduce_max(x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 354)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias float2x2 = simd_float2x2

extension simd_float2x2 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Float) {
    self.init(diagonal: SIMD2<Float>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD2<Float>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD2<Float>]) {
    precondition(columns.count == 2, "Requires array of 2 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD2<Float>]) {
    precondition(rows.count == 2, "Requires array of 2 vectors")
    self = float2x2(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD2<Float>, _ col1: SIMD2<Float>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_float2x2) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_float2x2 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD2<Float> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Float {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_float2x2 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_float2x2([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_float2x2 : Equatable {
  @_transparent
  public static func ==(lhs: simd_float2x2, rhs: simd_float2x2) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_float2x2 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: float2x2 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 471)
  /// Inverse of the matrix if it exists, otherwise the contents of the
  /// resulting matrix are undefined.
  @available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
  @_transparent
  public var inverse: simd_float2x2 {
    return simd_inverse(self)
  }

  /// Determinant of the matrix.
  @_transparent
  public var determinant: Float {
    return simd_determinant(self)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_float2x2, rhs: simd_float2x2) -> simd_float2x2 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_float2x2) -> simd_float2x2 {
    return simd_float2x2() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_float2x2, rhs: simd_float2x2) -> simd_float2x2 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_float2x2, rhs: simd_float2x2) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_float2x2, rhs: simd_float2x2) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Float, rhs: simd_float2x2) -> simd_float2x2 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_float2x2, rhs: Float) -> simd_float2x2 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_float2x2, rhs: Float) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `FloatNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Float3x2 * Float3` to get a `Float2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_float2x2, rhs: SIMD2<Float>) -> SIMD2<Float> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD2<Float>, rhs: simd_float2x2) -> SIMD2<Float> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float2x2, rhs: float2x2) -> float2x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float2x2, rhs: float3x2) -> float3x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float2x2, rhs: float4x2) -> float4x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_float2x2, rhs: float2x2) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 571)
@available(swift, deprecated: 4, renamed: "simd_float2x2(diagonal:)")
public func matrix_from_diagonal(_ d: SIMD2<Float>) -> simd_float2x2 {
  return simd_float2x2(diagonal: d)
}

@available(swift, deprecated: 4, message: "Use the .inverse property instead.")
@available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
public func matrix_invert(_ x: simd_float2x2) -> simd_float2x2 {
  return x.inverse
}

@available(swift, deprecated: 4, message: "Use the .determinant property instead.")
public func matrix_determinant(_ x: simd_float2x2) -> Float {
  return x.determinant
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_float2x2")
public func matrix_from_columns(_ col0: SIMD2<Float>, _ col1: SIMD2<Float>) -> simd_float2x2 {
  return simd_float2x2(col0, col1)
}

public func matrix_from_rows(_ row0: SIMD2<Float>, _ row1: SIMD2<Float>) -> simd_float2x2 {
  return float2x2(row0, row1).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_float2x2) -> float2x2 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_float2x2, _ rhs: simd_float2x2) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias float3x2 = simd_float3x2

extension simd_float3x2 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Float) {
    self.init(diagonal: SIMD2<Float>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD2<Float>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD2<Float>]) {
    precondition(columns.count == 3, "Requires array of 3 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD3<Float>]) {
    precondition(rows.count == 2, "Requires array of 2 vectors")
    self = float2x3(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD2<Float>, _ col1: SIMD2<Float>, _ col2: SIMD2<Float>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_float3x2) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_float3x2 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD2<Float> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Float {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_float3x2 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_float3x2([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_float3x2 : Equatable {
  @_transparent
  public static func ==(lhs: simd_float3x2, rhs: simd_float3x2) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_float3x2 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: float2x3 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_float3x2, rhs: simd_float3x2) -> simd_float3x2 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_float3x2) -> simd_float3x2 {
    return simd_float3x2() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_float3x2, rhs: simd_float3x2) -> simd_float3x2 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_float3x2, rhs: simd_float3x2) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_float3x2, rhs: simd_float3x2) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Float, rhs: simd_float3x2) -> simd_float3x2 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_float3x2, rhs: Float) -> simd_float3x2 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_float3x2, rhs: Float) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `FloatNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Float3x2 * Float3` to get a `Float2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_float3x2, rhs: SIMD3<Float>) -> SIMD2<Float> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD2<Float>, rhs: simd_float3x2) -> SIMD3<Float> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float3x2, rhs: float2x3) -> float2x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float3x2, rhs: float3x3) -> float3x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float3x2, rhs: float4x3) -> float4x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_float3x2, rhs: float3x3) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_float3x2")
public func matrix_from_columns(_ col0: SIMD2<Float>, _ col1: SIMD2<Float>, _ col2: SIMD2<Float>) -> simd_float3x2 {
  return simd_float3x2(col0, col1, col2)
}

public func matrix_from_rows(_ row0: SIMD3<Float>, _ row1: SIMD3<Float>) -> simd_float3x2 {
  return float2x3(row0, row1).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_float3x2) -> float2x3 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_float3x2, _ rhs: simd_float3x2) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias float4x2 = simd_float4x2

extension simd_float4x2 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Float) {
    self.init(diagonal: SIMD2<Float>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD2<Float>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD2<Float>]) {
    precondition(columns.count == 4, "Requires array of 4 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.3 = columns[3]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD4<Float>]) {
    precondition(rows.count == 2, "Requires array of 2 vectors")
    self = float2x4(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD2<Float>, _ col1: SIMD2<Float>, _ col2: SIMD2<Float>, _ col3: SIMD2<Float>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.3 = col3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_float4x2) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_float4x2 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD2<Float> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 3: return columns.3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 3: columns.3 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Float {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_float4x2 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_float4x2([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray), \(columns.3._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_float4x2 : Equatable {
  @_transparent
  public static func ==(lhs: simd_float4x2, rhs: simd_float4x2) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_float4x2 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: float2x4 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_float4x2, rhs: simd_float4x2) -> simd_float4x2 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_float4x2) -> simd_float4x2 {
    return simd_float4x2() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_float4x2, rhs: simd_float4x2) -> simd_float4x2 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_float4x2, rhs: simd_float4x2) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_float4x2, rhs: simd_float4x2) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Float, rhs: simd_float4x2) -> simd_float4x2 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_float4x2, rhs: Float) -> simd_float4x2 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_float4x2, rhs: Float) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `FloatNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Float3x2 * Float3` to get a `Float2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_float4x2, rhs: SIMD4<Float>) -> SIMD2<Float> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD2<Float>, rhs: simd_float4x2) -> SIMD4<Float> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float4x2, rhs: float2x4) -> float2x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float4x2, rhs: float3x4) -> float3x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float4x2, rhs: float4x4) -> float4x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_float4x2, rhs: float4x4) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_float4x2")
public func matrix_from_columns(_ col0: SIMD2<Float>, _ col1: SIMD2<Float>, _ col2: SIMD2<Float>, _ col3: SIMD2<Float>) -> simd_float4x2 {
  return simd_float4x2(col0, col1, col2, col3)
}

public func matrix_from_rows(_ row0: SIMD4<Float>, _ row1: SIMD4<Float>) -> simd_float4x2 {
  return float2x4(row0, row1).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_float4x2) -> float2x4 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_float4x2, _ rhs: simd_float4x2) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias float2x3 = simd_float2x3

extension simd_float2x3 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Float) {
    self.init(diagonal: SIMD2<Float>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD2<Float>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD3<Float>]) {
    precondition(columns.count == 2, "Requires array of 2 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD2<Float>]) {
    precondition(rows.count == 3, "Requires array of 3 vectors")
    self = float3x2(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD3<Float>, _ col1: SIMD3<Float>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_float2x3) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_float2x3 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD3<Float> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Float {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_float2x3 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_float2x3([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_float2x3 : Equatable {
  @_transparent
  public static func ==(lhs: simd_float2x3, rhs: simd_float2x3) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_float2x3 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: float3x2 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_float2x3, rhs: simd_float2x3) -> simd_float2x3 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_float2x3) -> simd_float2x3 {
    return simd_float2x3() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_float2x3, rhs: simd_float2x3) -> simd_float2x3 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_float2x3, rhs: simd_float2x3) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_float2x3, rhs: simd_float2x3) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Float, rhs: simd_float2x3) -> simd_float2x3 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_float2x3, rhs: Float) -> simd_float2x3 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_float2x3, rhs: Float) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `FloatNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Float3x2 * Float3` to get a `Float2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_float2x3, rhs: SIMD2<Float>) -> SIMD3<Float> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD3<Float>, rhs: simd_float2x3) -> SIMD2<Float> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float2x3, rhs: float2x2) -> float2x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float2x3, rhs: float3x2) -> float3x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float2x3, rhs: float4x2) -> float4x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_float2x3, rhs: float2x2) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_float2x3")
public func matrix_from_columns(_ col0: SIMD3<Float>, _ col1: SIMD3<Float>) -> simd_float2x3 {
  return simd_float2x3(col0, col1)
}

public func matrix_from_rows(_ row0: SIMD2<Float>, _ row1: SIMD2<Float>, _ row2: SIMD2<Float>) -> simd_float2x3 {
  return float3x2(row0, row1, row2).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_float2x3) -> float3x2 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_float2x3, _ rhs: simd_float2x3) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias float3x3 = simd_float3x3

extension simd_float3x3 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Float) {
    self.init(diagonal: SIMD3<Float>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD3<Float>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.2.z = diagonal.z
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD3<Float>]) {
    precondition(columns.count == 3, "Requires array of 3 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD3<Float>]) {
    precondition(rows.count == 3, "Requires array of 3 vectors")
    self = float3x3(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD3<Float>, _ col1: SIMD3<Float>, _ col2: SIMD3<Float>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_float3x3) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_float3x3 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD3<Float> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Float {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_float3x3 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_float3x3([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_float3x3 : Equatable {
  @_transparent
  public static func ==(lhs: simd_float3x3, rhs: simd_float3x3) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_float3x3 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: float3x3 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 471)
  /// Inverse of the matrix if it exists, otherwise the contents of the
  /// resulting matrix are undefined.
  @available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
  @_transparent
  public var inverse: simd_float3x3 {
    return simd_inverse(self)
  }

  /// Determinant of the matrix.
  @_transparent
  public var determinant: Float {
    return simd_determinant(self)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_float3x3, rhs: simd_float3x3) -> simd_float3x3 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_float3x3) -> simd_float3x3 {
    return simd_float3x3() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_float3x3, rhs: simd_float3x3) -> simd_float3x3 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_float3x3, rhs: simd_float3x3) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_float3x3, rhs: simd_float3x3) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Float, rhs: simd_float3x3) -> simd_float3x3 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_float3x3, rhs: Float) -> simd_float3x3 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_float3x3, rhs: Float) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `FloatNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Float3x2 * Float3` to get a `Float2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_float3x3, rhs: SIMD3<Float>) -> SIMD3<Float> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD3<Float>, rhs: simd_float3x3) -> SIMD3<Float> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float3x3, rhs: float2x3) -> float2x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float3x3, rhs: float3x3) -> float3x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float3x3, rhs: float4x3) -> float4x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_float3x3, rhs: float3x3) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 571)
@available(swift, deprecated: 4, renamed: "simd_float3x3(diagonal:)")
public func matrix_from_diagonal(_ d: SIMD3<Float>) -> simd_float3x3 {
  return simd_float3x3(diagonal: d)
}

@available(swift, deprecated: 4, message: "Use the .inverse property instead.")
@available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
public func matrix_invert(_ x: simd_float3x3) -> simd_float3x3 {
  return x.inverse
}

@available(swift, deprecated: 4, message: "Use the .determinant property instead.")
public func matrix_determinant(_ x: simd_float3x3) -> Float {
  return x.determinant
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_float3x3")
public func matrix_from_columns(_ col0: SIMD3<Float>, _ col1: SIMD3<Float>, _ col2: SIMD3<Float>) -> simd_float3x3 {
  return simd_float3x3(col0, col1, col2)
}

public func matrix_from_rows(_ row0: SIMD3<Float>, _ row1: SIMD3<Float>, _ row2: SIMD3<Float>) -> simd_float3x3 {
  return float3x3(row0, row1, row2).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_float3x3) -> float3x3 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_float3x3, _ rhs: simd_float3x3) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias float4x3 = simd_float4x3

extension simd_float4x3 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Float) {
    self.init(diagonal: SIMD3<Float>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD3<Float>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.2.z = diagonal.z
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD3<Float>]) {
    precondition(columns.count == 4, "Requires array of 4 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.3 = columns[3]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD4<Float>]) {
    precondition(rows.count == 3, "Requires array of 3 vectors")
    self = float3x4(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD3<Float>, _ col1: SIMD3<Float>, _ col2: SIMD3<Float>, _ col3: SIMD3<Float>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.3 = col3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_float4x3) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_float4x3 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD3<Float> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 3: return columns.3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 3: columns.3 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Float {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_float4x3 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_float4x3([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray), \(columns.3._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_float4x3 : Equatable {
  @_transparent
  public static func ==(lhs: simd_float4x3, rhs: simd_float4x3) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_float4x3 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: float3x4 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_float4x3, rhs: simd_float4x3) -> simd_float4x3 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_float4x3) -> simd_float4x3 {
    return simd_float4x3() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_float4x3, rhs: simd_float4x3) -> simd_float4x3 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_float4x3, rhs: simd_float4x3) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_float4x3, rhs: simd_float4x3) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Float, rhs: simd_float4x3) -> simd_float4x3 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_float4x3, rhs: Float) -> simd_float4x3 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_float4x3, rhs: Float) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `FloatNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Float3x2 * Float3` to get a `Float2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_float4x3, rhs: SIMD4<Float>) -> SIMD3<Float> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD3<Float>, rhs: simd_float4x3) -> SIMD4<Float> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float4x3, rhs: float2x4) -> float2x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float4x3, rhs: float3x4) -> float3x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float4x3, rhs: float4x4) -> float4x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_float4x3, rhs: float4x4) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_float4x3")
public func matrix_from_columns(_ col0: SIMD3<Float>, _ col1: SIMD3<Float>, _ col2: SIMD3<Float>, _ col3: SIMD3<Float>) -> simd_float4x3 {
  return simd_float4x3(col0, col1, col2, col3)
}

public func matrix_from_rows(_ row0: SIMD4<Float>, _ row1: SIMD4<Float>, _ row2: SIMD4<Float>) -> simd_float4x3 {
  return float3x4(row0, row1, row2).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_float4x3) -> float3x4 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_float4x3, _ rhs: simd_float4x3) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias float2x4 = simd_float2x4

extension simd_float2x4 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Float) {
    self.init(diagonal: SIMD2<Float>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD2<Float>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD4<Float>]) {
    precondition(columns.count == 2, "Requires array of 2 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD2<Float>]) {
    precondition(rows.count == 4, "Requires array of 4 vectors")
    self = float4x2(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD4<Float>, _ col1: SIMD4<Float>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_float2x4) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_float2x4 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD4<Float> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Float {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_float2x4 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_float2x4([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_float2x4 : Equatable {
  @_transparent
  public static func ==(lhs: simd_float2x4, rhs: simd_float2x4) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_float2x4 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: float4x2 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_float2x4, rhs: simd_float2x4) -> simd_float2x4 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_float2x4) -> simd_float2x4 {
    return simd_float2x4() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_float2x4, rhs: simd_float2x4) -> simd_float2x4 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_float2x4, rhs: simd_float2x4) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_float2x4, rhs: simd_float2x4) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Float, rhs: simd_float2x4) -> simd_float2x4 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_float2x4, rhs: Float) -> simd_float2x4 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_float2x4, rhs: Float) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `FloatNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Float3x2 * Float3` to get a `Float2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_float2x4, rhs: SIMD2<Float>) -> SIMD4<Float> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD4<Float>, rhs: simd_float2x4) -> SIMD2<Float> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float2x4, rhs: float2x2) -> float2x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float2x4, rhs: float3x2) -> float3x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float2x4, rhs: float4x2) -> float4x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_float2x4, rhs: float2x2) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_float2x4")
public func matrix_from_columns(_ col0: SIMD4<Float>, _ col1: SIMD4<Float>) -> simd_float2x4 {
  return simd_float2x4(col0, col1)
}

public func matrix_from_rows(_ row0: SIMD2<Float>, _ row1: SIMD2<Float>, _ row2: SIMD2<Float>, _ row3: SIMD2<Float>) -> simd_float2x4 {
  return float4x2(row0, row1, row2, row3).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_float2x4) -> float4x2 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_float2x4, _ rhs: simd_float2x4) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias float3x4 = simd_float3x4

extension simd_float3x4 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Float) {
    self.init(diagonal: SIMD3<Float>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD3<Float>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.2.z = diagonal.z
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD4<Float>]) {
    precondition(columns.count == 3, "Requires array of 3 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD3<Float>]) {
    precondition(rows.count == 4, "Requires array of 4 vectors")
    self = float4x3(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD4<Float>, _ col1: SIMD4<Float>, _ col2: SIMD4<Float>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_float3x4) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_float3x4 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD4<Float> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Float {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_float3x4 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_float3x4([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_float3x4 : Equatable {
  @_transparent
  public static func ==(lhs: simd_float3x4, rhs: simd_float3x4) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_float3x4 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: float4x3 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_float3x4, rhs: simd_float3x4) -> simd_float3x4 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_float3x4) -> simd_float3x4 {
    return simd_float3x4() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_float3x4, rhs: simd_float3x4) -> simd_float3x4 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_float3x4, rhs: simd_float3x4) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_float3x4, rhs: simd_float3x4) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Float, rhs: simd_float3x4) -> simd_float3x4 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_float3x4, rhs: Float) -> simd_float3x4 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_float3x4, rhs: Float) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `FloatNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Float3x2 * Float3` to get a `Float2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_float3x4, rhs: SIMD3<Float>) -> SIMD4<Float> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD4<Float>, rhs: simd_float3x4) -> SIMD3<Float> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float3x4, rhs: float2x3) -> float2x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float3x4, rhs: float3x3) -> float3x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float3x4, rhs: float4x3) -> float4x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_float3x4, rhs: float3x3) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_float3x4")
public func matrix_from_columns(_ col0: SIMD4<Float>, _ col1: SIMD4<Float>, _ col2: SIMD4<Float>) -> simd_float3x4 {
  return simd_float3x4(col0, col1, col2)
}

public func matrix_from_rows(_ row0: SIMD3<Float>, _ row1: SIMD3<Float>, _ row2: SIMD3<Float>, _ row3: SIMD3<Float>) -> simd_float3x4 {
  return float4x3(row0, row1, row2, row3).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_float3x4) -> float4x3 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_float3x4, _ rhs: simd_float3x4) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias float4x4 = simd_float4x4

extension simd_float4x4 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Float) {
    self.init(diagonal: SIMD4<Float>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD4<Float>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.2.z = diagonal.z
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.3.w = diagonal.w
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD4<Float>]) {
    precondition(columns.count == 4, "Requires array of 4 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.3 = columns[3]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD4<Float>]) {
    precondition(rows.count == 4, "Requires array of 4 vectors")
    self = float4x4(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD4<Float>, _ col1: SIMD4<Float>, _ col2: SIMD4<Float>, _ col3: SIMD4<Float>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.3 = col3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_float4x4) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_float4x4 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD4<Float> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 3: return columns.3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 3: columns.3 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Float {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_float4x4 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_float4x4([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray), \(columns.3._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_float4x4 : Equatable {
  @_transparent
  public static func ==(lhs: simd_float4x4, rhs: simd_float4x4) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_float4x4 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: float4x4 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 471)
  /// Inverse of the matrix if it exists, otherwise the contents of the
  /// resulting matrix are undefined.
  @available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
  @_transparent
  public var inverse: simd_float4x4 {
    return simd_inverse(self)
  }

  /// Determinant of the matrix.
  @_transparent
  public var determinant: Float {
    return simd_determinant(self)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_float4x4, rhs: simd_float4x4) -> simd_float4x4 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_float4x4) -> simd_float4x4 {
    return simd_float4x4() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_float4x4, rhs: simd_float4x4) -> simd_float4x4 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_float4x4, rhs: simd_float4x4) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_float4x4, rhs: simd_float4x4) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Float, rhs: simd_float4x4) -> simd_float4x4 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_float4x4, rhs: Float) -> simd_float4x4 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_float4x4, rhs: Float) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `FloatNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Float3x2 * Float3` to get a `Float2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_float4x4, rhs: SIMD4<Float>) -> SIMD4<Float> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD4<Float>, rhs: simd_float4x4) -> SIMD4<Float> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float4x4, rhs: float2x4) -> float2x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float4x4, rhs: float3x4) -> float3x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_float4x4, rhs: float4x4) -> float4x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_float4x4, rhs: float4x4) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 571)
@available(swift, deprecated: 4, renamed: "simd_float4x4(diagonal:)")
public func matrix_from_diagonal(_ d: SIMD4<Float>) -> simd_float4x4 {
  return simd_float4x4(diagonal: d)
}

@available(swift, deprecated: 4, message: "Use the .inverse property instead.")
@available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
public func matrix_invert(_ x: simd_float4x4) -> simd_float4x4 {
  return x.inverse
}

@available(swift, deprecated: 4, message: "Use the .determinant property instead.")
public func matrix_determinant(_ x: simd_float4x4) -> Float {
  return x.determinant
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_float4x4")
public func matrix_from_columns(_ col0: SIMD4<Float>, _ col1: SIMD4<Float>, _ col2: SIMD4<Float>, _ col3: SIMD4<Float>) -> simd_float4x4 {
  return simd_float4x4(col0, col1, col2, col3)
}

public func matrix_from_rows(_ row0: SIMD4<Float>, _ row1: SIMD4<Float>, _ row2: SIMD4<Float>, _ row3: SIMD4<Float>) -> simd_float4x4 {
  return float4x4(row0, row1, row2, row3).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_float4x4) -> float4x4 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_float4x4, _ rhs: simd_float4x4) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias double2x2 = simd_double2x2

extension simd_double2x2 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Double) {
    self.init(diagonal: SIMD2<Double>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD2<Double>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD2<Double>]) {
    precondition(columns.count == 2, "Requires array of 2 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD2<Double>]) {
    precondition(rows.count == 2, "Requires array of 2 vectors")
    self = double2x2(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD2<Double>, _ col1: SIMD2<Double>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_double2x2) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_double2x2 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD2<Double> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Double {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_double2x2 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_double2x2([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_double2x2 : Equatable {
  @_transparent
  public static func ==(lhs: simd_double2x2, rhs: simd_double2x2) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_double2x2 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: double2x2 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 471)
  /// Inverse of the matrix if it exists, otherwise the contents of the
  /// resulting matrix are undefined.
  @available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
  @_transparent
  public var inverse: simd_double2x2 {
    return simd_inverse(self)
  }

  /// Determinant of the matrix.
  @_transparent
  public var determinant: Double {
    return simd_determinant(self)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_double2x2, rhs: simd_double2x2) -> simd_double2x2 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_double2x2) -> simd_double2x2 {
    return simd_double2x2() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_double2x2, rhs: simd_double2x2) -> simd_double2x2 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_double2x2, rhs: simd_double2x2) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_double2x2, rhs: simd_double2x2) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Double, rhs: simd_double2x2) -> simd_double2x2 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_double2x2, rhs: Double) -> simd_double2x2 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_double2x2, rhs: Double) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `DoubleNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Double3x2 * Double3` to get a `Double2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_double2x2, rhs: SIMD2<Double>) -> SIMD2<Double> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD2<Double>, rhs: simd_double2x2) -> SIMD2<Double> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double2x2, rhs: double2x2) -> double2x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double2x2, rhs: double3x2) -> double3x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double2x2, rhs: double4x2) -> double4x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_double2x2, rhs: double2x2) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 571)
@available(swift, deprecated: 4, renamed: "simd_double2x2(diagonal:)")
public func matrix_from_diagonal(_ d: SIMD2<Double>) -> simd_double2x2 {
  return simd_double2x2(diagonal: d)
}

@available(swift, deprecated: 4, message: "Use the .inverse property instead.")
@available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
public func matrix_invert(_ x: simd_double2x2) -> simd_double2x2 {
  return x.inverse
}

@available(swift, deprecated: 4, message: "Use the .determinant property instead.")
public func matrix_determinant(_ x: simd_double2x2) -> Double {
  return x.determinant
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_double2x2")
public func matrix_from_columns(_ col0: SIMD2<Double>, _ col1: SIMD2<Double>) -> simd_double2x2 {
  return simd_double2x2(col0, col1)
}

public func matrix_from_rows(_ row0: SIMD2<Double>, _ row1: SIMD2<Double>) -> simd_double2x2 {
  return double2x2(row0, row1).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_double2x2) -> double2x2 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_double2x2, _ rhs: simd_double2x2) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias double3x2 = simd_double3x2

extension simd_double3x2 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Double) {
    self.init(diagonal: SIMD2<Double>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD2<Double>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD2<Double>]) {
    precondition(columns.count == 3, "Requires array of 3 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD3<Double>]) {
    precondition(rows.count == 2, "Requires array of 2 vectors")
    self = double2x3(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD2<Double>, _ col1: SIMD2<Double>, _ col2: SIMD2<Double>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_double3x2) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_double3x2 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD2<Double> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Double {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_double3x2 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_double3x2([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_double3x2 : Equatable {
  @_transparent
  public static func ==(lhs: simd_double3x2, rhs: simd_double3x2) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_double3x2 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: double2x3 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_double3x2, rhs: simd_double3x2) -> simd_double3x2 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_double3x2) -> simd_double3x2 {
    return simd_double3x2() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_double3x2, rhs: simd_double3x2) -> simd_double3x2 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_double3x2, rhs: simd_double3x2) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_double3x2, rhs: simd_double3x2) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Double, rhs: simd_double3x2) -> simd_double3x2 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_double3x2, rhs: Double) -> simd_double3x2 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_double3x2, rhs: Double) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `DoubleNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Double3x2 * Double3` to get a `Double2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_double3x2, rhs: SIMD3<Double>) -> SIMD2<Double> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD2<Double>, rhs: simd_double3x2) -> SIMD3<Double> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double3x2, rhs: double2x3) -> double2x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double3x2, rhs: double3x3) -> double3x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double3x2, rhs: double4x3) -> double4x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_double3x2, rhs: double3x3) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_double3x2")
public func matrix_from_columns(_ col0: SIMD2<Double>, _ col1: SIMD2<Double>, _ col2: SIMD2<Double>) -> simd_double3x2 {
  return simd_double3x2(col0, col1, col2)
}

public func matrix_from_rows(_ row0: SIMD3<Double>, _ row1: SIMD3<Double>) -> simd_double3x2 {
  return double2x3(row0, row1).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_double3x2) -> double2x3 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_double3x2, _ rhs: simd_double3x2) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias double4x2 = simd_double4x2

extension simd_double4x2 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Double) {
    self.init(diagonal: SIMD2<Double>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD2<Double>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD2<Double>]) {
    precondition(columns.count == 4, "Requires array of 4 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.3 = columns[3]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD4<Double>]) {
    precondition(rows.count == 2, "Requires array of 2 vectors")
    self = double2x4(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD2<Double>, _ col1: SIMD2<Double>, _ col2: SIMD2<Double>, _ col3: SIMD2<Double>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.3 = col3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_double4x2) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_double4x2 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD2<Double> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 3: return columns.3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 3: columns.3 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Double {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_double4x2 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_double4x2([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray), \(columns.3._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_double4x2 : Equatable {
  @_transparent
  public static func ==(lhs: simd_double4x2, rhs: simd_double4x2) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_double4x2 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: double2x4 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_double4x2, rhs: simd_double4x2) -> simd_double4x2 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_double4x2) -> simd_double4x2 {
    return simd_double4x2() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_double4x2, rhs: simd_double4x2) -> simd_double4x2 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_double4x2, rhs: simd_double4x2) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_double4x2, rhs: simd_double4x2) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Double, rhs: simd_double4x2) -> simd_double4x2 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_double4x2, rhs: Double) -> simd_double4x2 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_double4x2, rhs: Double) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `DoubleNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Double3x2 * Double3` to get a `Double2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_double4x2, rhs: SIMD4<Double>) -> SIMD2<Double> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD2<Double>, rhs: simd_double4x2) -> SIMD4<Double> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double4x2, rhs: double2x4) -> double2x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double4x2, rhs: double3x4) -> double3x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double4x2, rhs: double4x4) -> double4x2 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_double4x2, rhs: double4x4) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_double4x2")
public func matrix_from_columns(_ col0: SIMD2<Double>, _ col1: SIMD2<Double>, _ col2: SIMD2<Double>, _ col3: SIMD2<Double>) -> simd_double4x2 {
  return simd_double4x2(col0, col1, col2, col3)
}

public func matrix_from_rows(_ row0: SIMD4<Double>, _ row1: SIMD4<Double>) -> simd_double4x2 {
  return double2x4(row0, row1).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_double4x2) -> double2x4 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_double4x2, _ rhs: simd_double4x2) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias double2x3 = simd_double2x3

extension simd_double2x3 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Double) {
    self.init(diagonal: SIMD2<Double>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD2<Double>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD3<Double>]) {
    precondition(columns.count == 2, "Requires array of 2 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD2<Double>]) {
    precondition(rows.count == 3, "Requires array of 3 vectors")
    self = double3x2(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD3<Double>, _ col1: SIMD3<Double>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_double2x3) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_double2x3 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD3<Double> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Double {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_double2x3 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_double2x3([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_double2x3 : Equatable {
  @_transparent
  public static func ==(lhs: simd_double2x3, rhs: simd_double2x3) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_double2x3 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: double3x2 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_double2x3, rhs: simd_double2x3) -> simd_double2x3 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_double2x3) -> simd_double2x3 {
    return simd_double2x3() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_double2x3, rhs: simd_double2x3) -> simd_double2x3 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_double2x3, rhs: simd_double2x3) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_double2x3, rhs: simd_double2x3) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Double, rhs: simd_double2x3) -> simd_double2x3 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_double2x3, rhs: Double) -> simd_double2x3 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_double2x3, rhs: Double) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `DoubleNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Double3x2 * Double3` to get a `Double2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_double2x3, rhs: SIMD2<Double>) -> SIMD3<Double> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD3<Double>, rhs: simd_double2x3) -> SIMD2<Double> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double2x3, rhs: double2x2) -> double2x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double2x3, rhs: double3x2) -> double3x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double2x3, rhs: double4x2) -> double4x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_double2x3, rhs: double2x2) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_double2x3")
public func matrix_from_columns(_ col0: SIMD3<Double>, _ col1: SIMD3<Double>) -> simd_double2x3 {
  return simd_double2x3(col0, col1)
}

public func matrix_from_rows(_ row0: SIMD2<Double>, _ row1: SIMD2<Double>, _ row2: SIMD2<Double>) -> simd_double2x3 {
  return double3x2(row0, row1, row2).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_double2x3) -> double3x2 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_double2x3, _ rhs: simd_double2x3) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias double3x3 = simd_double3x3

extension simd_double3x3 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Double) {
    self.init(diagonal: SIMD3<Double>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD3<Double>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.2.z = diagonal.z
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD3<Double>]) {
    precondition(columns.count == 3, "Requires array of 3 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD3<Double>]) {
    precondition(rows.count == 3, "Requires array of 3 vectors")
    self = double3x3(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD3<Double>, _ col1: SIMD3<Double>, _ col2: SIMD3<Double>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_double3x3) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_double3x3 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD3<Double> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Double {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_double3x3 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_double3x3([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_double3x3 : Equatable {
  @_transparent
  public static func ==(lhs: simd_double3x3, rhs: simd_double3x3) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_double3x3 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: double3x3 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 471)
  /// Inverse of the matrix if it exists, otherwise the contents of the
  /// resulting matrix are undefined.
  @available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
  @_transparent
  public var inverse: simd_double3x3 {
    return simd_inverse(self)
  }

  /// Determinant of the matrix.
  @_transparent
  public var determinant: Double {
    return simd_determinant(self)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_double3x3, rhs: simd_double3x3) -> simd_double3x3 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_double3x3) -> simd_double3x3 {
    return simd_double3x3() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_double3x3, rhs: simd_double3x3) -> simd_double3x3 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_double3x3, rhs: simd_double3x3) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_double3x3, rhs: simd_double3x3) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Double, rhs: simd_double3x3) -> simd_double3x3 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_double3x3, rhs: Double) -> simd_double3x3 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_double3x3, rhs: Double) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `DoubleNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Double3x2 * Double3` to get a `Double2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_double3x3, rhs: SIMD3<Double>) -> SIMD3<Double> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD3<Double>, rhs: simd_double3x3) -> SIMD3<Double> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double3x3, rhs: double2x3) -> double2x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double3x3, rhs: double3x3) -> double3x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double3x3, rhs: double4x3) -> double4x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_double3x3, rhs: double3x3) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 571)
@available(swift, deprecated: 4, renamed: "simd_double3x3(diagonal:)")
public func matrix_from_diagonal(_ d: SIMD3<Double>) -> simd_double3x3 {
  return simd_double3x3(diagonal: d)
}

@available(swift, deprecated: 4, message: "Use the .inverse property instead.")
@available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
public func matrix_invert(_ x: simd_double3x3) -> simd_double3x3 {
  return x.inverse
}

@available(swift, deprecated: 4, message: "Use the .determinant property instead.")
public func matrix_determinant(_ x: simd_double3x3) -> Double {
  return x.determinant
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_double3x3")
public func matrix_from_columns(_ col0: SIMD3<Double>, _ col1: SIMD3<Double>, _ col2: SIMD3<Double>) -> simd_double3x3 {
  return simd_double3x3(col0, col1, col2)
}

public func matrix_from_rows(_ row0: SIMD3<Double>, _ row1: SIMD3<Double>, _ row2: SIMD3<Double>) -> simd_double3x3 {
  return double3x3(row0, row1, row2).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_double3x3) -> double3x3 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_double3x3, _ rhs: simd_double3x3) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias double4x3 = simd_double4x3

extension simd_double4x3 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Double) {
    self.init(diagonal: SIMD3<Double>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD3<Double>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.2.z = diagonal.z
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD3<Double>]) {
    precondition(columns.count == 4, "Requires array of 4 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.3 = columns[3]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD4<Double>]) {
    precondition(rows.count == 3, "Requires array of 3 vectors")
    self = double3x4(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD3<Double>, _ col1: SIMD3<Double>, _ col2: SIMD3<Double>, _ col3: SIMD3<Double>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.3 = col3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_double4x3) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_double4x3 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD3<Double> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 3: return columns.3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 3: columns.3 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Double {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_double4x3 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_double4x3([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray), \(columns.3._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_double4x3 : Equatable {
  @_transparent
  public static func ==(lhs: simd_double4x3, rhs: simd_double4x3) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_double4x3 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: double3x4 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_double4x3, rhs: simd_double4x3) -> simd_double4x3 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_double4x3) -> simd_double4x3 {
    return simd_double4x3() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_double4x3, rhs: simd_double4x3) -> simd_double4x3 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_double4x3, rhs: simd_double4x3) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_double4x3, rhs: simd_double4x3) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Double, rhs: simd_double4x3) -> simd_double4x3 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_double4x3, rhs: Double) -> simd_double4x3 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_double4x3, rhs: Double) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `DoubleNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Double3x2 * Double3` to get a `Double2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_double4x3, rhs: SIMD4<Double>) -> SIMD3<Double> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD3<Double>, rhs: simd_double4x3) -> SIMD4<Double> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double4x3, rhs: double2x4) -> double2x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double4x3, rhs: double3x4) -> double3x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double4x3, rhs: double4x4) -> double4x3 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_double4x3, rhs: double4x4) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_double4x3")
public func matrix_from_columns(_ col0: SIMD3<Double>, _ col1: SIMD3<Double>, _ col2: SIMD3<Double>, _ col3: SIMD3<Double>) -> simd_double4x3 {
  return simd_double4x3(col0, col1, col2, col3)
}

public func matrix_from_rows(_ row0: SIMD4<Double>, _ row1: SIMD4<Double>, _ row2: SIMD4<Double>) -> simd_double4x3 {
  return double3x4(row0, row1, row2).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_double4x3) -> double3x4 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_double4x3, _ rhs: simd_double4x3) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias double2x4 = simd_double2x4

extension simd_double2x4 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Double) {
    self.init(diagonal: SIMD2<Double>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD2<Double>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD4<Double>]) {
    precondition(columns.count == 2, "Requires array of 2 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD2<Double>]) {
    precondition(rows.count == 4, "Requires array of 4 vectors")
    self = double4x2(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD4<Double>, _ col1: SIMD4<Double>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_double2x4) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_double2x4 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD4<Double> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Double {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_double2x4 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_double2x4([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_double2x4 : Equatable {
  @_transparent
  public static func ==(lhs: simd_double2x4, rhs: simd_double2x4) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_double2x4 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: double4x2 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_double2x4, rhs: simd_double2x4) -> simd_double2x4 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_double2x4) -> simd_double2x4 {
    return simd_double2x4() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_double2x4, rhs: simd_double2x4) -> simd_double2x4 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_double2x4, rhs: simd_double2x4) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_double2x4, rhs: simd_double2x4) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Double, rhs: simd_double2x4) -> simd_double2x4 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_double2x4, rhs: Double) -> simd_double2x4 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_double2x4, rhs: Double) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `DoubleNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Double3x2 * Double3` to get a `Double2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_double2x4, rhs: SIMD2<Double>) -> SIMD4<Double> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD4<Double>, rhs: simd_double2x4) -> SIMD2<Double> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double2x4, rhs: double2x2) -> double2x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double2x4, rhs: double3x2) -> double3x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double2x4, rhs: double4x2) -> double4x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_double2x4, rhs: double2x2) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_double2x4")
public func matrix_from_columns(_ col0: SIMD4<Double>, _ col1: SIMD4<Double>) -> simd_double2x4 {
  return simd_double2x4(col0, col1)
}

public func matrix_from_rows(_ row0: SIMD2<Double>, _ row1: SIMD2<Double>, _ row2: SIMD2<Double>, _ row3: SIMD2<Double>) -> simd_double2x4 {
  return double4x2(row0, row1, row2, row3).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_double2x4) -> double4x2 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_double2x4, _ rhs: simd_double2x4) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias double3x4 = simd_double3x4

extension simd_double3x4 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Double) {
    self.init(diagonal: SIMD3<Double>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD3<Double>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.2.z = diagonal.z
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD4<Double>]) {
    precondition(columns.count == 3, "Requires array of 3 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD3<Double>]) {
    precondition(rows.count == 4, "Requires array of 4 vectors")
    self = double4x3(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD4<Double>, _ col1: SIMD4<Double>, _ col2: SIMD4<Double>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_double3x4) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_double3x4 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD4<Double> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Double {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_double3x4 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_double3x4([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_double3x4 : Equatable {
  @_transparent
  public static func ==(lhs: simd_double3x4, rhs: simd_double3x4) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_double3x4 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: double4x3 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_double3x4, rhs: simd_double3x4) -> simd_double3x4 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_double3x4) -> simd_double3x4 {
    return simd_double3x4() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_double3x4, rhs: simd_double3x4) -> simd_double3x4 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_double3x4, rhs: simd_double3x4) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_double3x4, rhs: simd_double3x4) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Double, rhs: simd_double3x4) -> simd_double3x4 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_double3x4, rhs: Double) -> simd_double3x4 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_double3x4, rhs: Double) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `DoubleNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Double3x2 * Double3` to get a `Double2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_double3x4, rhs: SIMD3<Double>) -> SIMD4<Double> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD4<Double>, rhs: simd_double3x4) -> SIMD3<Double> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double3x4, rhs: double2x3) -> double2x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double3x4, rhs: double3x3) -> double3x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double3x4, rhs: double4x3) -> double4x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_double3x4, rhs: double3x3) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_double3x4")
public func matrix_from_columns(_ col0: SIMD4<Double>, _ col1: SIMD4<Double>, _ col2: SIMD4<Double>) -> simd_double3x4 {
  return simd_double3x4(col0, col1, col2)
}

public func matrix_from_rows(_ row0: SIMD3<Double>, _ row1: SIMD3<Double>, _ row2: SIMD3<Double>, _ row3: SIMD3<Double>) -> simd_double3x4 {
  return double4x3(row0, row1, row2, row3).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_double3x4) -> double4x3 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_double3x4, _ rhs: simd_double3x4) -> Bool {
  return lhs == rhs
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 364)

public typealias double4x4 = simd_double4x4

extension simd_double4x4 {

  /// Initialize matrix to have `scalar` on main diagonal, zeros elsewhere.
  public init(_ scalar: Double) {
    self.init(diagonal: SIMD4<Double>(repeating: scalar))
  }

  /// Initialize matrix to have specified `diagonal`, and zeros elsewhere.
  public init(diagonal: SIMD4<Double>) {
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.0.x = diagonal.x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.1.y = diagonal.y
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.2.z = diagonal.z
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 378)
    self.columns.3.w = diagonal.w
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 380)
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ columns: [SIMD4<Double>]) {
    precondition(columns.count == 4, "Requires array of 4 vectors")
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.0 = columns[0]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.1 = columns[1]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.2 = columns[2]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 387)
    self.columns.3 = columns[3]
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 389)
  }

  /// Initialize matrix to have specified `rows`.
  public init(rows: [SIMD4<Double>]) {
    precondition(rows.count == 4, "Requires array of 4 vectors")
    self = double4x4(rows).transpose
  }

  /// Initialize matrix to have specified `columns`.
  public init(_ col0: SIMD4<Double>, _ col1: SIMD4<Double>, _ col2: SIMD4<Double>, _ col3: SIMD4<Double>) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 400)
    self.init()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.0 = col0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.1 = col1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.2 = col2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 402)
      self.columns.3 = col3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 404)
  }

  /// Initialize matrix from corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This conversion is no longer necessary; use `cmatrix` directly.")
  @_transparent
  public init(_ cmatrix: simd_double4x4) {
    self = cmatrix
  }

  /// Get the matrix as the corresponding C matrix type.
  @available(swift, deprecated: 4, message: "This property is no longer needed; use the matrix itself.")
  @_transparent
  public var cmatrix: simd_double4x4 {
    return self
  }

  /// Access to individual columns.
  public subscript(column: Int) -> SIMD4<Double> {
    get {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 0: return columns.0
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 1: return columns.1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 2: return columns.2
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 425)
      case 3: return columns.3
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 427)
      default: preconditionFailure("Column index out of range")
      }
    }
    set (value) {
      switch(column) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 0: columns.0 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 1: columns.1 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 2: columns.2 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 433)
      case 3: columns.3 = value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 435)
      default: preconditionFailure("Column index out of range")
      }
    }
  }

  /// Access to individual elements.
  public subscript(column: Int, row: Int) -> Double {
    get { return self[column][row] }
    set (value) { self[column][row] = value }
  }
}

extension simd_double4x4 : CustomDebugStringConvertible {
  public var debugDescription: String {
    return "simd_double4x4([\(columns.0._descriptionAsArray), \(columns.1._descriptionAsArray), \(columns.2._descriptionAsArray), \(columns.3._descriptionAsArray)])"
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 452)
  }
}

extension simd_double4x4 : Equatable {
  @_transparent
  public static func ==(lhs: simd_double4x4, rhs: simd_double4x4) -> Bool {
    return simd_equal(lhs, rhs)
  }
}

extension simd_double4x4 {

  /// Transpose of the matrix.
  @_transparent
  public var transpose: double4x4 {
    return simd_transpose(self)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 471)
  /// Inverse of the matrix if it exists, otherwise the contents of the
  /// resulting matrix are undefined.
  @available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
  @_transparent
  public var inverse: simd_double4x4 {
    return simd_inverse(self)
  }

  /// Determinant of the matrix.
  @_transparent
  public var determinant: Double {
    return simd_determinant(self)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 485)

  /// Sum of two matrices.
  @_transparent
  public static func +(lhs: simd_double4x4, rhs: simd_double4x4) -> simd_double4x4 {
    return simd_add(lhs, rhs)
  }

  /// Negation of a matrix.
  @_transparent
  public static prefix func -(rhs: simd_double4x4) -> simd_double4x4 {
    return simd_double4x4() - rhs
  }

  /// Difference of two matrices.
  @_transparent
  public static func -(lhs: simd_double4x4, rhs: simd_double4x4) -> simd_double4x4 {
    return simd_sub(lhs, rhs)
  }

  @_transparent
  public static func +=(lhs: inout simd_double4x4, rhs: simd_double4x4) -> Void {
    lhs = lhs + rhs
  }

  @_transparent
  public static func -=(lhs: inout simd_double4x4, rhs: simd_double4x4) -> Void {
    lhs = lhs - rhs
  }

  /// Scalar-Matrix multiplication.
  @_transparent
  public static func *(lhs: Double, rhs: simd_double4x4) -> simd_double4x4 {
    return simd_mul(lhs, rhs)
  }

  /// Matrix-Scalar multiplication.
  @_transparent
  public static func *(lhs: simd_double4x4, rhs: Double) -> simd_double4x4 {
    return rhs*lhs
  }

  @_transparent
  public static func *=(lhs: inout simd_double4x4, rhs: Double) -> Void {
    lhs = lhs*rhs
  }

  /// Matrix-Vector multiplication.  Keep in mind that matrix types are named
  /// `DoubleNxM` where `N` is the number of *columns* and `M` is the number of
  /// *rows*, so we multiply a `Double3x2 * Double3` to get a `Double2`, for
  /// example.
  @_transparent
  public static func *(lhs: simd_double4x4, rhs: SIMD4<Double>) -> SIMD4<Double> {
    return simd_mul(lhs, rhs)
  }

  /// Vector-Matrix multiplication.
  @_transparent
  public static func *(lhs: SIMD4<Double>, rhs: simd_double4x4) -> SIMD4<Double> {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double4x4, rhs: double2x4) -> double2x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double4x4, rhs: double3x4) -> double3x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 547)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 551)
  @_transparent
  public static func *(lhs: simd_double4x4, rhs: double4x4) -> double4x4 {
    return simd_mul(lhs, rhs)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 557)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 559)
  /// Matrix multiplication (the "usual" matrix product, not the elementwise
  /// product).
  @_transparent
  public static func *=(lhs: inout simd_double4x4, rhs: double4x4) -> Void {
    lhs = lhs*rhs
  }
}

// Make old-style C free functions with the `matrix_` prefix available but
// deprecated in Swift 4.

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 571)
@available(swift, deprecated: 4, renamed: "simd_double4x4(diagonal:)")
public func matrix_from_diagonal(_ d: SIMD4<Double>) -> simd_double4x4 {
  return simd_double4x4(diagonal: d)
}

@available(swift, deprecated: 4, message: "Use the .inverse property instead.")
@available(macOS 10.10, iOS 8.0, tvOS 10.0, watchOS 3.0, *)
public func matrix_invert(_ x: simd_double4x4) -> simd_double4x4 {
  return x.inverse
}

@available(swift, deprecated: 4, message: "Use the .determinant property instead.")
public func matrix_determinant(_ x: simd_double4x4) -> Double {
  return x.determinant
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin/simd/simd.swift.gyb", line: 588)
@available(swift, deprecated: 4, renamed: "simd_double4x4")
public func matrix_from_columns(_ col0: SIMD4<Double>, _ col1: SIMD4<Double>, _ col2: SIMD4<Double>, _ col3: SIMD4<Double>) -> simd_double4x4 {
  return simd_double4x4(col0, col1, col2, col3)
}

public func matrix_from_rows(_ row0: SIMD4<Double>, _ row1: SIMD4<Double>, _ row2: SIMD4<Double>, _ row3: SIMD4<Double>) -> simd_double4x4 {
  return double4x4(row0, row1, row2, row3).transpose
}

@available(swift, deprecated: 4, message: "Use the .transpose property instead.")
public func matrix_transpose(_ x: simd_double4x4) -> double4x4 {
  return x.transpose
}

@available(swift, deprecated: 4, renamed: "==")
public func matrix_equal(_ lhs: simd_double4x4, _ rhs: simd_double4x4) -> Bool {
  return lhs == rhs
}

