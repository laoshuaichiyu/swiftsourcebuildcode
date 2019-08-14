// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 1)
//===--- tgmath.swift.gyb -------------------------------------*- swift -*-===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2019 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

import SwiftShims

// Generic functions implementable directly on FloatingPoint.
@_transparent
@available(swift, deprecated: 4.2/*, obsoleted: 5.1*/, renamed: "abs")
public func fabs<T: FloatingPoint>(_ x: T) -> T {
  return x.magnitude
}

@_transparent
public func sqrt<T: FloatingPoint>(_ x: T) -> T {
  return x.squareRoot()
}

@_transparent
public func fma<T: FloatingPoint>(_ x: T, _ y: T, _ z: T) -> T {
  return z.addingProduct(x, y)
}

@_transparent
public func remainder<T: FloatingPoint>(_ x: T, _ y: T) -> T {
  return x.remainder(dividingBy: y)
}

@_transparent
public func fmod<T: FloatingPoint>(_ x: T, _ y: T) -> T {
  return x.truncatingRemainder(dividingBy: y)
}

@_transparent
public func ceil<T: FloatingPoint>(_ x: T) -> T {
  return x.rounded(.up)
}

@_transparent
public func floor<T: FloatingPoint>(_ x: T) -> T {
  return x.rounded(.down)
}

@_transparent
public func round<T: FloatingPoint>(_ x: T) -> T {
  return x.rounded()
}

@_transparent
public func trunc<T: FloatingPoint>(_ x: T) -> T {
  return x.rounded(.towardZero)
}

@_transparent
public func scalbn<T: FloatingPoint>(_ x: T, _ n : Int) -> T {
  return T(sign: .plus, exponent: T.Exponent(n), significand: x)
}

@_transparent
public func modf<T: FloatingPoint>(_ x: T) -> (T, T) {
  // inf/NaN: return canonicalized x, fractional part zero.
  guard x.isFinite else { return (x+0, 0) }
  let integral = trunc(x)
  let fractional = x - integral
  return (integral, fractional)
}

@_transparent
public func frexp<T: BinaryFloatingPoint>(_ x: T) -> (T, Int) {
  guard x.isFinite else { return (x+0, 0) }
  guard x != 0 else { return (x, 0) }
  // The C stdlib `frexp` uses a different notion of significand / exponent
  // than IEEE 754, so we need to adjust them by a factor of two.
  return (x.significand / 2, Int(x.exponent + 1))
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 86)
@available(swift, deprecated: 4.2, renamed: "scalbn")
@_transparent
public func ldexp(_ x: Float, _ n : Int) -> Float {
  return Float(sign: .plus, exponent: n, significand: x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 86)
@available(swift, deprecated: 4.2, renamed: "scalbn")
@_transparent
public func ldexp(_ x: Double, _ n : Int) -> Double {
  return Double(sign: .plus, exponent: n, significand: x)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 93)

//  Floating-point properties that are exposed as functions in the C math
//  library. Mark those function names unavailable and direct users to the
//  properties instead.
@available(*, unavailable, message: "use the floatingPointClass property.")
public func fpclassify<T: FloatingPoint>(_ value: T) -> Int { fatalError() }

@available(*, unavailable, message: "use the isNormal property.")
public func isnormal<T: FloatingPoint>(_ value: T) -> Bool { fatalError() }

@available(*, unavailable, message: "use the isFinite property.")
public func isfinite<T: FloatingPoint>(_ value: T) -> Bool { fatalError() }

@available(*, unavailable, message: "use the isInfinite property.")
public func isinf<T: FloatingPoint>(_ value: T) -> Bool { fatalError() }

@available(*, unavailable, message: "use the isNaN property.")
public func isnan<T: FloatingPoint>(_ value: T) -> Bool { fatalError() }

@available(*, unavailable, message: "use the sign property.")
public func signbit<T: FloatingPoint>(_ value: T) -> Int { fatalError() }

@available(swift, deprecated: 4.2/*, obsoleted: 5.1*/, message: "use the exponent property.")
public func ilogb<T: BinaryFloatingPoint>(_ x: T) -> Int {
  return Int(x.exponent)
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 191)

// Unary functions
// Note these do not have a corresponding LLVM intrinsic
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func acos(_ x: Float) -> Float {
  return Float.acos(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func acos(_ x: Float80) -> Float80 {
  return Float80.acos(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func asin(_ x: Float) -> Float {
  return Float.asin(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func asin(_ x: Float80) -> Float80 {
  return Float80.asin(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func atan(_ x: Float) -> Float {
  return Float.atan(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func atan(_ x: Float80) -> Float80 {
  return Float80.atan(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func tan(_ x: Float) -> Float {
  return Float.tan(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func tan(_ x: Float80) -> Float80 {
  return Float80.tan(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func acosh(_ x: Float) -> Float {
  return Float.acosh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func acosh(_ x: Float80) -> Float80 {
  return Float80.acosh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func asinh(_ x: Float) -> Float {
  return Float.asinh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func asinh(_ x: Float80) -> Float80 {
  return Float80.asinh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func atanh(_ x: Float) -> Float {
  return Float.atanh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func atanh(_ x: Float80) -> Float80 {
  return Float80.atanh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func cosh(_ x: Float) -> Float {
  return Float.cosh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func cosh(_ x: Float80) -> Float80 {
  return Float80.cosh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func sinh(_ x: Float) -> Float {
  return Float.sinh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func sinh(_ x: Float80) -> Float80 {
  return Float80.sinh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func tanh(_ x: Float) -> Float {
  return Float.tanh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func tanh(_ x: Float80) -> Float80 {
  return Float80.tanh(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func expm1(_ x: Float) -> Float {
  return Float.expm1(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func expm1(_ x: Float80) -> Float80 {
  return Float80.expm1(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func log1p(_ x: Float) -> Float {
  return Float.log1p(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func log1p(_ x: Float80) -> Float80 {
  return Float80.log1p(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func erf(_ x: Float) -> Float {
  return Float.erf(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func erf(_ x: Float80) -> Float80 {
  return Float80.erf(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func erfc(_ x: Float) -> Float {
  return Float.erfc(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 196)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 198)
@_transparent
public func erfc(_ x: Float80) -> Float80 {
  return Float80.erfc(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 203)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 205)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 207)
@_transparent
public func cbrt(_ x: Float) -> Float {
  return Float.root(x, 3)
}

@available(swift, deprecated: 5.1, message: "Use `x.exponent` or `floor(log2(x))`.")
@_transparent
public func logb(_ x: Float) -> Float {
  return Float.log2(x).rounded(.down)
}

@_transparent
public func tgamma(_ x: Float) -> Float {
  return Float.gamma(x)
}

#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
@_transparent
public func cbrt(_ x: Float80) -> Float80 {
  return Float80.root(x, 3)
}

@available(swift, deprecated: 5.1, message: "Use `x.exponent` or `floor(log2(x))`.")
@_transparent
public func logb(_ x: Float80) -> Float80 {
  return Float80.log2(x).rounded(.down)
}

@_transparent
public func tgamma(_ x: Float80) -> Float80 {
  return Float80.gamma(x)
}
#endif

// Unary intrinsic functions
// Note these have a corresponding LLVM intrinsic
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func cos(_ x: Float) -> Float {
  return Float.cos(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func cos(_ x: Double) -> Double {
  return Double.cos(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 245)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func cos(_ x: Float80) -> Float80 {
  return Float80.cos(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 260)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func sin(_ x: Float) -> Float {
  return Float.sin(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func sin(_ x: Double) -> Double {
  return Double.sin(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 245)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func sin(_ x: Float80) -> Float80 {
  return Float80.sin(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 260)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func exp(_ x: Float) -> Float {
  return Float.exp(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func exp(_ x: Double) -> Double {
  return Double.exp(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 245)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func exp(_ x: Float80) -> Float80 {
  return Float80.exp(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 260)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func exp2(_ x: Float) -> Float {
  return Float.exp2(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func exp2(_ x: Double) -> Double {
  return Double.exp2(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 245)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func exp2(_ x: Float80) -> Float80 {
  return Float80.exp2(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 260)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func log(_ x: Float) -> Float {
  return Float.log(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func log(_ x: Double) -> Double {
  return Double.log(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 245)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func log(_ x: Float80) -> Float80 {
  return Float80.log(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 260)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func log10(_ x: Float) -> Float {
  return Float.log10(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func log10(_ x: Double) -> Double {
  return Double.log10(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 245)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func log10(_ x: Float80) -> Float80 {
  return Float80.log10(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 260)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func log2(_ x: Float) -> Float {
  return Float.log2(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func log2(_ x: Double) -> Double {
  return Double.log2(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 245)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 248)
@_transparent
public func log2(_ x: Float80) -> Float80 {
  return Float80.log2(x)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 260)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 253)
@available(swift, deprecated: 5.1, message: "Swift does not model dynamic rounding modes, use x.rounded(.toNearestOrEven) instead.")
@_transparent
public func nearbyint(_ x: Float) -> Float {
  return x.rounded(.toNearestOrEven)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 253)
@available(swift, deprecated: 5.1, message: "Swift does not model dynamic rounding modes, use x.rounded(.toNearestOrEven) instead.")
@_transparent
public func nearbyint(_ x: Double) -> Double {
  return x.rounded(.toNearestOrEven)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 245)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 253)
@available(swift, deprecated: 5.1, message: "Swift does not model dynamic rounding modes, use x.rounded(.toNearestOrEven) instead.")
@_transparent
public func nearbyint(_ x: Float80) -> Float80 {
  return x.rounded(.toNearestOrEven)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 260)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 253)
@available(swift, deprecated: 5.1, message: "Swift does not model dynamic rounding modes, use x.rounded(.toNearestOrEven) instead.")
@_transparent
public func rint(_ x: Float) -> Float {
  return x.rounded(.toNearestOrEven)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 253)
@available(swift, deprecated: 5.1, message: "Swift does not model dynamic rounding modes, use x.rounded(.toNearestOrEven) instead.")
@_transparent
public func rint(_ x: Double) -> Double {
  return x.rounded(.toNearestOrEven)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 245)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 253)
@available(swift, deprecated: 5.1, message: "Swift does not model dynamic rounding modes, use x.rounded(.toNearestOrEven) instead.")
@_transparent
public func rint(_ x: Float80) -> Float80 {
  return x.rounded(.toNearestOrEven)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 260)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 262)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 264)

// Binary functions
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 270)
@_transparent
public func atan2(_ y: Float, _ x: Float) -> Float {
  return Float.atan2(y: y, x: x)
}

@_transparent
public func hypot(_ x: Float, _ y: Float) -> Float {
  return Float.hypot(x, y)
}

@_transparent
public func pow(_ x: Float, _ y: Float) -> Float {
  return Float.pow(x, y)
}

@_transparent
public func copysign(_ x: Float, _ y: Float) -> Float {
  return Float(signOf: y, magnitudeOf: x)
}

@_transparent
public func fdim(_ x: Float, _ y: Float) -> Float {
  return Float(fdimf(CFloat(x), CFloat(y)))
}

@available(swift, deprecated: 5.1, message: "Use the .nextUp and .nextDown properties.")
@_transparent
public func nextafter(_ x: Float, _ y: Float) -> Float {
  return y > x ? x.nextUp : (y < x ? x.nextDown : y)
}

@available(swift, deprecated: 5.1, message: "Use Float.minimum( ) or Swift.min( )")
@_transparent
public func fmin(_ x: Float, _ y: Float) -> Float {
  return .minimum(x, y)
}

@available(swift, deprecated: 5.1, message: "Use Float.maximum( ) or Swift.max( )")
@_transparent
public func fmax(_ x: Float, _ y: Float) -> Float {
  return .maximum(x, y)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 315)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 268)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 270)
@_transparent
public func atan2(_ y: Float80, _ x: Float80) -> Float80 {
  return Float80.atan2(y: y, x: x)
}

@_transparent
public func hypot(_ x: Float80, _ y: Float80) -> Float80 {
  return Float80.hypot(x, y)
}

@_transparent
public func pow(_ x: Float80, _ y: Float80) -> Float80 {
  return Float80.pow(x, y)
}

@_transparent
public func copysign(_ x: Float80, _ y: Float80) -> Float80 {
  return Float80(signOf: y, magnitudeOf: x)
}

@_transparent
public func fdim(_ x: Float80, _ y: Float80) -> Float80 {
  return Float80(fdiml(CLongDouble(x), CLongDouble(y)))
}

@available(swift, deprecated: 5.1, message: "Use the .nextUp and .nextDown properties.")
@_transparent
public func nextafter(_ x: Float80, _ y: Float80) -> Float80 {
  return y > x ? x.nextUp : (y < x ? x.nextDown : y)
}

@available(swift, deprecated: 5.1, message: "Use Float80.minimum( ) or Swift.min( )")
@_transparent
public func fmin(_ x: Float80, _ y: Float80) -> Float80 {
  return .minimum(x, y)
}

@available(swift, deprecated: 5.1, message: "Use Float80.maximum( ) or Swift.max( )")
@_transparent
public func fmax(_ x: Float80, _ y: Float80) -> Float80 {
  return .maximum(x, y)
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 313)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 315)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 317)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 323)
//  lgamma not available on Windows, apparently?
#if !os(Windows)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 326)
@_transparent
public func lgamma(_ x: Float) -> (Float, Int) {
  return (Float.logGamma(x), Float.signGamma(x) == .plus ? 1 : -1)
}
#endif

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 323)
//  lgamma not available on Windows, apparently?
#if !os(Windows)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 326)
@_transparent
public func lgamma(_ x: Double) -> (Double, Int) {
  return (Double.logGamma(x), Double.signGamma(x) == .plus ? 1 : -1)
}
#endif

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 321)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 326)
@_transparent
public func lgamma(_ x: Float80) -> (Float80, Int) {
  return (Float80.logGamma(x), Float80.signGamma(x) == .plus ? 1 : -1)
}
#endif

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 333)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 339)
@_transparent
public func remquo(_ x: Float, _ y: Float) -> (Float, Int) {
  var quo = Int32(0)
  let rem = remquof(CFloat(x), CFloat(y), &quo)
  return (Float(rem), Int(quo))
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 348)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 339)
@_transparent
public func remquo(_ x: Double, _ y: Double) -> (Double, Int) {
  var quo = Int32(0)
  let rem = remquo(CDouble(x), CDouble(y), &quo)
  return (Double(rem), Int(quo))
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 348)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 337)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 339)
@_transparent
public func remquo(_ x: Float80, _ y: Float80) -> (Float80, Int) {
  var quo = Int32(0)
  let rem = remquol(CLongDouble(x), CLongDouble(y), &quo)
  return (Float80(rem), Int(quo))
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 346)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 348)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 350)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 355)
@available(swift, deprecated: 4.2/*, obsoleted: 5.1*/, message:
           "use Float(nan: Float.RawSignificand).")
@_transparent
public func nan(_ tag: String) -> Float {
  return Float(nanf(tag))
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 364)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 353)
#if (arch(i386) || arch(x86_64)) && !(os(Windows) || os(Android))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 355)
@available(swift, deprecated: 4.2/*, obsoleted: 5.1*/, message:
           "use Float80(nan: Float80.RawSignificand).")
@_transparent
public func nan(_ tag: String) -> Float80 {
  return Float80(nanl(tag))
}
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 362)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 364)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 366)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Platform/tgmath.swift.gyb", line: 368)
@_transparent
public func jn(_ n: Int, _ x: Double) -> Double {
#if os(Windows)
  return _jn(Int32(n), x)
#else
  return jn(Int32(n), x)
#endif
}

@_transparent
public func yn(_ n: Int, _ x: Double) -> Double {
#if os(Windows)
  return _yn(Int32(n), x)
#else
  return yn(Int32(n), x)
#endif
}

