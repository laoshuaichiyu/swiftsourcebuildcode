// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 1)
//===--- MathFunctions.swift ----------------------------------*- swift -*-===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2019 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

import SwiftShims
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 16)

/// A type that has elementary functions available.
///
/// An ["elementary function"][elfn] is a function built up from powers, roots,
/// exponentials, logarithms, trigonometric functions (sin, cos, tan) and
/// their inverses, and the hyperbolic functions (sinh, cosh, tanh) and their
/// inverses.
///
/// Conformance to this protocol means that all of these building blocks are
/// available as static functions on the type.
///
/// ```swift
/// let x: Float = 1
/// let y = Float.sin(x) // 0.84147096
/// ```
///
/// Additional operations, such as `atan2(y:x:)`, `hypot(_:_:)` and some
/// special functions, are provided on the Real protocol, which refines both
/// ElementaryFunctions and FloatingPoint.
///
/// [elfn]: http://en.wikipedia.org/wiki/Elementary_function
@available(macOS 9999, iOS 9999, tvOS 9999, watchOS 9999, *)
public protocol ElementaryFunctions {

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  
  /// The square root of `x`.
  ///
  /// For real types, if the argument is negative, either the result is NaN
  /// or a precondition failure occurs. For complex types, this function has
  /// a branch cut along the negative real axis.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 42)

  static func sqrt(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  
  /// The cosine of `x`.
  ///
  /// For real types, `x` is interpreted as an angle measured in radians.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 42)

  static func cos(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  
  /// The sine of `x`.
  ///
  /// For real types, `x` is interpreted as an angle measured in radians.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 42)

  static func sin(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The tangent of `x`.
  static func tan(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The acos function.
  static func acos(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The asin function.
  static func asin(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The atan function.
  static func atan(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The cosh function.
  static func cosh(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The sinh function.
  static func sinh(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The tanh function.
  static func tanh(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The acosh function.
  static func acosh(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The asinh function.
  static func asinh(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The atanh function.
  static func atanh(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The exp function.
  static func exp(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The exp2 function.
  static func exp2(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The exp10 function.
  static func exp10(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The expm1 function.
  static func expm1(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The log function.
  static func log(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The log2 function.
  static func log2(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The log10 function.
  static func log10(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 41)

  /// The log1p function.
  static func log1p(_ x: Self) -> Self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 45)

  /// `exp(y log(x))` computed without loss of intermediate precision.
  ///
  /// For real types, if `x` is negative the result is NaN, even if `y` has
  /// an integral value. For complex types, there is a branch cut on the
  /// negative real axis.
  static func pow(_ x: Self, _ y: Self) -> Self

  /// `x` raised to the `n`th power.
  static func pow(_ x: Self, _ n: Int) -> Self

  /// The `n`th root of `x`.
  ///
  /// For real types, if `x` is negative and `n` is even, the result is NaN.
  /// For complex types, there is a branch cut along the negative real axis.
  static func root(_ x: Self, _ n: Int) -> Self
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 68)
extension Float: ElementaryFunctions {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func sqrt(_ x: Float) -> Float {
    return Float(Builtin.int_sqrt_FPIEEE32(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func cos(_ x: Float) -> Float {
    return Float(Builtin.int_cos_FPIEEE32(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func sin(_ x: Float) -> Float {
    return Float(Builtin.int_sin_FPIEEE32(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func tan(_ x: Float) -> Float {
    return _swift_stdlib_tanf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func acos(_ x: Float) -> Float {
    return _swift_stdlib_acosf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func asin(_ x: Float) -> Float {
    return _swift_stdlib_asinf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func atan(_ x: Float) -> Float {
    return _swift_stdlib_atanf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func cosh(_ x: Float) -> Float {
    return _swift_stdlib_coshf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func sinh(_ x: Float) -> Float {
    return _swift_stdlib_sinhf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func tanh(_ x: Float) -> Float {
    return _swift_stdlib_tanhf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func acosh(_ x: Float) -> Float {
    return _swift_stdlib_acoshf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func asinh(_ x: Float) -> Float {
    return _swift_stdlib_asinhf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func atanh(_ x: Float) -> Float {
    return _swift_stdlib_atanhf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func exp(_ x: Float) -> Float {
    return Float(Builtin.int_exp_FPIEEE32(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func exp2(_ x: Float) -> Float {
    return Float(Builtin.int_exp2_FPIEEE32(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func exp10(_ x: Float) -> Float {
    return _swift_stdlib_exp10f(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func expm1(_ x: Float) -> Float {
    return _swift_stdlib_expm1f(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log(_ x: Float) -> Float {
    return Float(Builtin.int_log_FPIEEE32(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log2(_ x: Float) -> Float {
    return Float(Builtin.int_log2_FPIEEE32(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log10(_ x: Float) -> Float {
    return Float(Builtin.int_log10_FPIEEE32(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log1p(_ x: Float) -> Float {
    return _swift_stdlib_log1pf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func erf(_ x: Float) -> Float {
    return _swift_stdlib_erff(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func erfc(_ x: Float) -> Float {
    return _swift_stdlib_erfcf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func hypot(_ x: Float, _ y: Float) -> Float {
    return _swift_stdlib_hypotf(x, y)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func gamma(_ x: Float) -> Float {
    return _swift_stdlib_tgammaf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 76)

  @_alwaysEmitIntoClient
  public static func pow(_ x: Float, _ y: Float) -> Float {
    guard x >= 0 else { return .nan }
    return Float(Builtin.int_pow_FPIEEE32(x._value, y._value))
  }

  @_alwaysEmitIntoClient
  public static func pow(_ x: Float, _ n: Int) -> Float {
    // TODO: this implementation isn't quite right for n so large that
    // the conversion to `Float` rounds. We could also consider using
    // a multiply-chain implementation for small `n`; this would be faster
    // for static `n`, but less accurate on platforms with a good `pow`
    // implementation.
    return Float(Builtin.int_pow_FPIEEE32(x._value, Float(n)._value))
  }

  @_alwaysEmitIntoClient
  public static func root(_ x: Float, _ n: Int) -> Float {
    guard x >= 0 || n % 2 != 0 else { return .nan }
    // TODO: this implementation isn't quite right for n so large that
    // the conversion to `Float` rounds.
    return Float(signOf: x, magnitudeOf: pow(x.magnitude, 1/Float(n)))
  }

  @_alwaysEmitIntoClient
  public static func atan2(y: Float, x: Float) -> Float {
    return _swift_stdlib_atan2f(y, x)
  }

#if !os(Windows)
  @_alwaysEmitIntoClient
  public static func logGamma(_ x: Float) -> Float {
    return _swift_stdlib_lgammaf(x)
  }

  @_alwaysEmitIntoClient
  public static func signGamma(_ x: Float) -> FloatingPointSign {
    if x >= 0 { return .plus }
    let trunc = x.rounded(.towardZero)
    if x == trunc { return .plus }
    let halfTrunc = trunc/2
    if halfTrunc == halfTrunc.rounded(.towardZero) { return .minus }
    return .plus
  }
#endif
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 68)
extension Double: ElementaryFunctions {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func sqrt(_ x: Double) -> Double {
    return Double(Builtin.int_sqrt_FPIEEE64(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func cos(_ x: Double) -> Double {
    return Double(Builtin.int_cos_FPIEEE64(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func sin(_ x: Double) -> Double {
    return Double(Builtin.int_sin_FPIEEE64(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func tan(_ x: Double) -> Double {
    return _swift_stdlib_tan(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func acos(_ x: Double) -> Double {
    return _swift_stdlib_acos(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func asin(_ x: Double) -> Double {
    return _swift_stdlib_asin(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func atan(_ x: Double) -> Double {
    return _swift_stdlib_atan(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func cosh(_ x: Double) -> Double {
    return _swift_stdlib_cosh(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func sinh(_ x: Double) -> Double {
    return _swift_stdlib_sinh(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func tanh(_ x: Double) -> Double {
    return _swift_stdlib_tanh(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func acosh(_ x: Double) -> Double {
    return _swift_stdlib_acosh(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func asinh(_ x: Double) -> Double {
    return _swift_stdlib_asinh(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func atanh(_ x: Double) -> Double {
    return _swift_stdlib_atanh(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func exp(_ x: Double) -> Double {
    return Double(Builtin.int_exp_FPIEEE64(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func exp2(_ x: Double) -> Double {
    return Double(Builtin.int_exp2_FPIEEE64(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func exp10(_ x: Double) -> Double {
    return _swift_stdlib_exp10(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func expm1(_ x: Double) -> Double {
    return _swift_stdlib_expm1(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log(_ x: Double) -> Double {
    return Double(Builtin.int_log_FPIEEE64(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log2(_ x: Double) -> Double {
    return Double(Builtin.int_log2_FPIEEE64(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log10(_ x: Double) -> Double {
    return Double(Builtin.int_log10_FPIEEE64(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log1p(_ x: Double) -> Double {
    return _swift_stdlib_log1p(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func erf(_ x: Double) -> Double {
    return _swift_stdlib_erf(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func erfc(_ x: Double) -> Double {
    return _swift_stdlib_erfc(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func hypot(_ x: Double, _ y: Double) -> Double {
    return _swift_stdlib_hypot(x, y)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func gamma(_ x: Double) -> Double {
    return _swift_stdlib_tgamma(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 76)

  @_alwaysEmitIntoClient
  public static func pow(_ x: Double, _ y: Double) -> Double {
    guard x >= 0 else { return .nan }
    return Double(Builtin.int_pow_FPIEEE64(x._value, y._value))
  }

  @_alwaysEmitIntoClient
  public static func pow(_ x: Double, _ n: Int) -> Double {
    // TODO: this implementation isn't quite right for n so large that
    // the conversion to `Double` rounds. We could also consider using
    // a multiply-chain implementation for small `n`; this would be faster
    // for static `n`, but less accurate on platforms with a good `pow`
    // implementation.
    return Double(Builtin.int_pow_FPIEEE64(x._value, Double(n)._value))
  }

  @_alwaysEmitIntoClient
  public static func root(_ x: Double, _ n: Int) -> Double {
    guard x >= 0 || n % 2 != 0 else { return .nan }
    // TODO: this implementation isn't quite right for n so large that
    // the conversion to `Double` rounds.
    return Double(signOf: x, magnitudeOf: pow(x.magnitude, 1/Double(n)))
  }

  @_alwaysEmitIntoClient
  public static func atan2(y: Double, x: Double) -> Double {
    return _swift_stdlib_atan2(y, x)
  }

#if !os(Windows)
  @_alwaysEmitIntoClient
  public static func logGamma(_ x: Double) -> Double {
    return _swift_stdlib_lgamma(x)
  }

  @_alwaysEmitIntoClient
  public static func signGamma(_ x: Double) -> FloatingPointSign {
    if x >= 0 { return .plus }
    let trunc = x.rounded(.towardZero)
    if x == trunc { return .plus }
    let halfTrunc = trunc/2
    if halfTrunc == halfTrunc.rounded(.towardZero) { return .minus }
    return .plus
  }
#endif
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 65)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 68)
extension Float80: ElementaryFunctions {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func sqrt(_ x: Float80) -> Float80 {
    return Float80(Builtin.int_sqrt_FPIEEE80(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func cos(_ x: Float80) -> Float80 {
    return Float80(Builtin.int_cos_FPIEEE80(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func sin(_ x: Float80) -> Float80 {
    return Float80(Builtin.int_sin_FPIEEE80(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func tan(_ x: Float80) -> Float80 {
    return _swift_stdlib_tanl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func acos(_ x: Float80) -> Float80 {
    return _swift_stdlib_acosl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func asin(_ x: Float80) -> Float80 {
    return _swift_stdlib_asinl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func atan(_ x: Float80) -> Float80 {
    return _swift_stdlib_atanl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func cosh(_ x: Float80) -> Float80 {
    return _swift_stdlib_coshl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func sinh(_ x: Float80) -> Float80 {
    return _swift_stdlib_sinhl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func tanh(_ x: Float80) -> Float80 {
    return _swift_stdlib_tanhl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func acosh(_ x: Float80) -> Float80 {
    return _swift_stdlib_acoshl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func asinh(_ x: Float80) -> Float80 {
    return _swift_stdlib_asinhl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func atanh(_ x: Float80) -> Float80 {
    return _swift_stdlib_atanhl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func exp(_ x: Float80) -> Float80 {
    return Float80(Builtin.int_exp_FPIEEE80(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func exp2(_ x: Float80) -> Float80 {
    return Float80(Builtin.int_exp2_FPIEEE80(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func exp10(_ x: Float80) -> Float80 {
    return _swift_stdlib_exp10l(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func expm1(_ x: Float80) -> Float80 {
    return _swift_stdlib_expm1l(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log(_ x: Float80) -> Float80 {
    return Float80(Builtin.int_log_FPIEEE80(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log2(_ x: Float80) -> Float80 {
    return Float80(Builtin.int_log2_FPIEEE80(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log10(_ x: Float80) -> Float80 {
    return Float80(Builtin.int_log10_FPIEEE80(x._value))
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func log1p(_ x: Float80) -> Float80 {
    return _swift_stdlib_log1pl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func erf(_ x: Float80) -> Float80 {
    return _swift_stdlib_erfl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func erfc(_ x: Float80) -> Float80 {
    return _swift_stdlib_erfcl(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func hypot(_ x: Float80, _ y: Float80) -> Float80 {
    return _swift_stdlib_hypotl(x, y)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 70)

  @_alwaysEmitIntoClient
  public static func gamma(_ x: Float80) -> Float80 {
    return _swift_stdlib_tgammal(x)
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 76)

  @_alwaysEmitIntoClient
  public static func pow(_ x: Float80, _ y: Float80) -> Float80 {
    guard x >= 0 else { return .nan }
    return Float80(Builtin.int_pow_FPIEEE80(x._value, y._value))
  }

  @_alwaysEmitIntoClient
  public static func pow(_ x: Float80, _ n: Int) -> Float80 {
    // TODO: this implementation isn't quite right for n so large that
    // the conversion to `Float80` rounds. We could also consider using
    // a multiply-chain implementation for small `n`; this would be faster
    // for static `n`, but less accurate on platforms with a good `pow`
    // implementation.
    return Float80(Builtin.int_pow_FPIEEE80(x._value, Float80(n)._value))
  }

  @_alwaysEmitIntoClient
  public static func root(_ x: Float80, _ n: Int) -> Float80 {
    guard x >= 0 || n % 2 != 0 else { return .nan }
    // TODO: this implementation isn't quite right for n so large that
    // the conversion to `Float80` rounds.
    return Float80(signOf: x, magnitudeOf: pow(x.magnitude, 1/Float80(n)))
  }

  @_alwaysEmitIntoClient
  public static func atan2(y: Float80, x: Float80) -> Float80 {
    return _swift_stdlib_atan2l(y, x)
  }

#if !os(Windows)
  @_alwaysEmitIntoClient
  public static func logGamma(_ x: Float80) -> Float80 {
    return _swift_stdlib_lgammal(x)
  }

  @_alwaysEmitIntoClient
  public static func signGamma(_ x: Float80) -> FloatingPointSign {
    if x >= 0 { return .plus }
    let trunc = x.rounded(.towardZero)
    if x == trunc { return .plus }
    let halfTrunc = trunc/2
    if halfTrunc == halfTrunc.rounded(.towardZero) { return .minus }
    return .plus
  }
#endif
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 124)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 127)

@available(macOS 9999, iOS 9999, tvOS 9999, watchOS 9999, *)
extension SIMD where Scalar: ElementaryFunctions {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func sqrt(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.sqrt(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func cos(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.cos(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func sin(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.sin(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func tan(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.tan(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func acos(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.acos(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func asin(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.asin(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func atan(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.atan(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func cosh(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.cosh(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func sinh(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.sinh(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func tanh(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.tanh(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func acosh(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.acosh(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func asinh(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.asinh(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func atanh(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.atanh(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func exp(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.exp(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func exp2(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.exp2(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func exp10(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.exp10(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func expm1(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.expm1(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func log(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.log(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func log2(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.log2(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func log10(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.log10(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 131)

  @_alwaysEmitIntoClient
  public static func log1p(_ x: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.log1p(x[i])
    }
    return r
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 141)

  @_alwaysEmitIntoClient
  public static func pow(_ x: Self, _ y: Self) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.pow(x[i], y[i])
    }
    return r
  }

  @_alwaysEmitIntoClient
  public static func pow(_ x: Self, _ n: Int) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.pow(x[i], n)
    }
    return r
  }

  @_alwaysEmitIntoClient
  public static func root(_ x: Self, _ n: Int) -> Self {
    var r = Self()
    for i in r.indices {
      r[i] = Scalar.root(x[i], n)
    }
    return r
  }
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 171)
@available(macOS 9999, iOS 9999, tvOS 9999, watchOS 9999, *)
extension SIMD2: ElementaryFunctions where Scalar: ElementaryFunctions { }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 171)
@available(macOS 9999, iOS 9999, tvOS 9999, watchOS 9999, *)
extension SIMD3: ElementaryFunctions where Scalar: ElementaryFunctions { }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 171)
@available(macOS 9999, iOS 9999, tvOS 9999, watchOS 9999, *)
extension SIMD4: ElementaryFunctions where Scalar: ElementaryFunctions { }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 171)
@available(macOS 9999, iOS 9999, tvOS 9999, watchOS 9999, *)
extension SIMD8: ElementaryFunctions where Scalar: ElementaryFunctions { }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 171)
@available(macOS 9999, iOS 9999, tvOS 9999, watchOS 9999, *)
extension SIMD16: ElementaryFunctions where Scalar: ElementaryFunctions { }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 171)
@available(macOS 9999, iOS 9999, tvOS 9999, watchOS 9999, *)
extension SIMD32: ElementaryFunctions where Scalar: ElementaryFunctions { }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/MathFunctions.swift.gyb", line: 171)
@available(macOS 9999, iOS 9999, tvOS 9999, watchOS 9999, *)
extension SIMD64: ElementaryFunctions where Scalar: ElementaryFunctions { }
