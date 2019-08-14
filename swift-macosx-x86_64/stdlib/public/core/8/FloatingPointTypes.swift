// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1)
//===--- FloatingPointTypes.swift.gyb -------------------------*- swift -*-===//
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

import SwiftShims

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 29)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 55)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 59)

/// A single-precision, floating-point value type.
@frozen
public struct Float {
  public // @testable
  var _value: Builtin.FPIEEE32

  @_transparent
  public init() {
    let zero: Int64 = 0
    self._value = Builtin.sitofp_Int64_FPIEEE32(zero._value)
  }

  @_transparent
  public // @testable
  init(_ _value: Builtin.FPIEEE32) {
    self._value = _value
  }
}

extension Float: CustomStringConvertible {
  /// A textual representation of the value.
  public var description: String {
    if isNaN {
      return "nan"
    } else {
      var (buffer, length) = _float32ToString(self, debug: false)
      return buffer.withBytes { (bufferPtr) in
        String._fromASCII(
          UnsafeBufferPointer(start: bufferPtr, count: length))
      }
    }
  }
}

extension Float: CustomDebugStringConvertible {
  /// A textual representation of the value, suitable for debugging.
  public var debugDescription: String {
    var (buffer, length) = _float32ToString(self, debug: true)
    return buffer.withBytes { (bufferPtr) in
      String._fromASCII(
        UnsafeBufferPointer(start: bufferPtr, count: length))
    }
  }
}

extension Float: TextOutputStreamable {
  public func write<Target>(to target: inout Target) where Target: TextOutputStream {
    var (buffer, length) = _float32ToString(self, debug: true)
    buffer.withBytes { (bufferPtr) in
      let bufPtr = UnsafeBufferPointer(start: bufferPtr, count: length)
      target._writeASCII(bufPtr)
    }
  }
}

extension Float: BinaryFloatingPoint {

  // Floating-point types are always symmetric, so Magnitude is Self.
  public typealias Magnitude = Float

  public typealias Exponent = Int

  public typealias RawSignificand = UInt32

  @inlinable
  public static var exponentBitCount: Int {
    return 8
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 137)
  @inlinable
  public static var significandBitCount: Int {
    return 23
  }

  //  Implementation details.
  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _infinityExponent: UInt {
    @inline(__always) get { return 1 &<< UInt(exponentBitCount) - 1 }
  }

  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _exponentBias: UInt {
    @inline(__always) get { return _infinityExponent &>> 1 }
  }

  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _significandMask: UInt32 {
    @inline(__always) get {
      return 1 &<< UInt32(significandBitCount) - 1
    }
  }

  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _quietNaNMask: UInt32 {
    @inline(__always) get {
      return 1 &<< UInt32(significandBitCount - 1)
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 168)
  //  Conversions to/from integer encoding.  These are not part of the
  //  BinaryFloatingPoint prototype because there's no guarantee that an
  //  integer type of the same size actually exists (e.g. Float80).
  //
  //  If we want them in a protocol at some future point, that protocol should
  //  be "InterchangeFloatingPoint" or "PortableFloatingPoint" or similar, and
  //  apply to IEEE 754 "interchange types".
  /// The bit pattern of the value's encoding.
  ///
  /// The bit pattern matches the binary interchange format defined by the
  /// [IEEE 754 specification][spec].
  ///
  /// [spec]: http://ieeexplore.ieee.org/servlet/opac?punumber=4610933
  @inlinable
  public var bitPattern: UInt32 {
    return UInt32(Builtin.bitcast_FPIEEE32_Int32(_value))
  }

  /// Creates a new value with the given bit pattern.
  ///
  /// The value passed as `bitPattern` is interpreted in the binary interchange
  /// format defined by the [IEEE 754 specification][spec].
  ///
  /// [spec]: http://ieeexplore.ieee.org/servlet/opac?punumber=4610933
  ///
  /// - Parameter bitPattern: The integer encoding of a `Float` instance.
  @inlinable
  public init(bitPattern: UInt32) {
    self.init(Builtin.bitcast_Int32_FPIEEE32(bitPattern._value))
  }

  @inlinable
  public var sign: FloatingPointSign {
    let shift = Float.significandBitCount + Float.exponentBitCount
    return FloatingPointSign(
      rawValue: Int(bitPattern &>> UInt32(shift))
    )!
  }

  @available(*, unavailable, renamed: "sign")
  public var isSignMinus: Bool { Builtin.unreachable() }

  @inlinable
  public var exponentBitPattern: UInt {
    return UInt(bitPattern &>> UInt32(Float.significandBitCount)) &
      Float._infinityExponent
  }

  @inlinable
  public var significandBitPattern: UInt32 {
    return UInt32(bitPattern) & Float._significandMask
  }

  @inlinable
  public init(
    sign: FloatingPointSign,
    exponentBitPattern: UInt,
    significandBitPattern: UInt32
  ) {
    let signShift = Float.significandBitCount + Float.exponentBitCount
    let sign = UInt32(sign == .minus ? 1 : 0)
    let exponent = UInt32(
      exponentBitPattern & Float._infinityExponent
    )
    let significand = UInt32(
      significandBitPattern & Float._significandMask
    )
    self.init(bitPattern:
      sign &<< UInt32(signShift) |
      exponent &<< UInt32(Float.significandBitCount) |
      significand
    )
  }

  @inlinable
  public var isCanonical: Bool {
    // All Float and Double encodings are canonical in IEEE 754.
    //
    // On platforms that do not support subnormals, we treat them as
    // non-canonical encodings of zero.
    if Self.leastNonzeroMagnitude == Self.leastNormalMagnitude {
      if exponentBitPattern == 0 && significandBitPattern != 0 {
        return false
      }
    }
    return true
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 368)

  @inlinable
  public static var infinity: Float {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 372)
    return Float(bitPattern: 0x7f800000)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 388)
  }

  @inlinable
  public static var nan: Float {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 393)
    return Float(bitPattern: 0x7fc00000)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 405)
  }

  @inlinable
  public static var signalingNaN: Float {
    return Float(nan: 0, signaling: true)
  }

  @available(*, unavailable, renamed: "nan")
  public static var quietNaN: Float { Builtin.unreachable() }

  @inlinable
  public static var greatestFiniteMagnitude: Float {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 418)
    return 0x1.fffffep127
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 430)
  }

  @inlinable
  public static var pi: Float {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 435)
    // Note: this is not the correctly rounded (to nearest) value of pi,
    // because pi would round *up* in Float precision, which can result
    // in angles in the wrong quadrant if users aren't careful.  This is
    // not a problem for Double or Float80, as pi rounds down in both of
    // those formats.
    return 0x1.921fb4p1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 446)
  }

  @inlinable
  public var ulp: Float {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 451)
    guard _fastPath(isFinite) else { return .nan }
    if _fastPath(isNormal) {
      let bitPattern_ = bitPattern & Float.infinity.bitPattern
      return Float(bitPattern: bitPattern_) * 0x1p-23
    }
    // On arm, flush subnormal values to 0.
    return .leastNormalMagnitude * 0x1p-23
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 486)
  }

  @inlinable
  public static var leastNormalMagnitude: Float {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 491)
    return 0x1p-126
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 502)
  }

  @inlinable
  public static var leastNonzeroMagnitude: Float {
#if arch(arm)
    // On 32b arm, the default FPCR has subnormals flushed to zero.
    return leastNormalMagnitude
#else
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 511)
    return 0x1p-149
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 523)
#endif
  }

  /// The unit in the last place of 1.0.
  ///
  /// The positive difference between 1.0 and the next greater representable
  /// number. The `ulpOfOne` constant corresponds to the C macros
  /// `FLT_EPSILON`, `DBL_EPSILON`, and others with a similar purpose.
  @inlinable
  public static var ulpOfOne: Float {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 534)
    return 0x1p-23
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 540)
  }

  @inlinable
  public var exponent: Int {
    if !isFinite { return .max }
    if isZero { return .min }
    let provisional = Int(exponentBitPattern) - Int(Float._exponentBias)
    if isNormal { return provisional }
    let shift =
      Float.significandBitCount - significandBitPattern._binaryLogarithm()
    return provisional + 1 - shift
  }

  @inlinable
  public var significand: Float {
    if isNaN { return self }
    if isNormal {
      return Float(sign: .plus,
        exponentBitPattern: Float._exponentBias,
        significandBitPattern: significandBitPattern)
    }
    if isSubnormal {
      let shift =
        Float.significandBitCount - significandBitPattern._binaryLogarithm()
      return Float(
        sign: .plus,
        exponentBitPattern: Float._exponentBias,
        significandBitPattern: significandBitPattern &<< shift
      )
    }
    // zero or infinity.
    return Float(
      sign: .plus,
      exponentBitPattern: exponentBitPattern,
      significandBitPattern: 0
    )
  }

  @inlinable
  public init(sign: FloatingPointSign, exponent: Int, significand: Float) {
    var result = significand
    if sign == .minus { result = -result }
    if significand.isFinite && !significand.isZero {
      var clamped = exponent
      let leastNormalExponent = 1 - Int(Float._exponentBias)
      let greatestFiniteExponent = Int(Float._exponentBias)
      if clamped < leastNormalExponent {
        clamped = max(clamped, 3*leastNormalExponent)
        while clamped < leastNormalExponent {
          result  *= Float.leastNormalMagnitude
          clamped -= leastNormalExponent
        }
      }
      else if clamped > greatestFiniteExponent {
        clamped = min(clamped, 3*greatestFiniteExponent)
        let step = Float(sign: .plus,
          exponentBitPattern: Float._infinityExponent - 1,
          significandBitPattern: 0)
        while clamped > greatestFiniteExponent {
          result  *= step
          clamped -= greatestFiniteExponent
        }
      }
      let scale = Float(
        sign: .plus,
        exponentBitPattern: UInt(Int(Float._exponentBias) + clamped),
        significandBitPattern: 0
      )
      result = result * scale
    }
    self = result
  }
  
  /// Creates a NaN ("not a number") value with the specified payload.
  ///
  /// NaN values compare not equal to every value, including themselves. Most
  /// operations with a NaN operand produce a NaN result. Don't use the
  /// equal-to operator (`==`) to test whether a value is NaN. Instead, use
  /// the value's `isNaN` property.
  ///
  ///     let x = Float(nan: 0, signaling: false)
  ///     print(x == .nan)
  ///     // Prints "false"
  ///     print(x.isNaN)
  ///     // Prints "true"
  ///
  /// - Parameters:
  ///   - payload: The payload to use for the new NaN value.
  ///   - signaling: Pass `true` to create a signaling NaN or `false` to create
  ///     a quiet NaN.
  @inlinable
  public init(nan payload: RawSignificand, signaling: Bool) {
    // We use significandBitCount - 2 bits for NaN payload.
    _precondition(payload < (Float._quietNaNMask &>> 1),
      "NaN payload is not encodable.")
    var significand = payload
    significand |= Float._quietNaNMask &>> (signaling ? 1 : 0)
    self.init(
      sign: .plus,
      exponentBitPattern: Float._infinityExponent,
      significandBitPattern: significand
    )
  }

  @inlinable
  public var nextUp: Float {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 647)
    // Silence signaling NaNs, map -0 to +0.
    let x = self + 0
#if arch(arm)
    // On arm, treat subnormal values as zero.
    if _slowPath(x == 0) { return .leastNonzeroMagnitude }
    if _slowPath(x == -.leastNonzeroMagnitude) { return -0.0 }
#endif
    if _fastPath(x < .infinity) {
      let increment = Int32(bitPattern: x.bitPattern) &>> 31 | 1
      let bitPattern_ = x.bitPattern &+ UInt32(bitPattern: increment)
      return Float(bitPattern: bitPattern_)
    }
    return x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 685)
  }

  //  For core standard library floating-point types, LLVM can lower copysign
  //  for us; this gets somewhat better codegen than the generic implementation,
  //  but more importantly allows it to participate in other optimizations
  //  at the LLVM level.
  @_transparent
  public init(signOf sign: Float, magnitudeOf mag: Float) {
    _value = Builtin.int_copysign_FPIEEE32(mag._value, sign._value)
  }

  @_transparent
  public mutating func round(_ rule: FloatingPointRoundingRule) {
    switch rule {
    case .toNearestOrAwayFromZero:
      _value = Builtin.int_round_FPIEEE32(_value)
    case .toNearestOrEven:
      _value = Builtin.int_rint_FPIEEE32(_value)
    case .towardZero:
      _value = Builtin.int_trunc_FPIEEE32(_value)
    case .awayFromZero:
      if sign == .minus {
        _value = Builtin.int_floor_FPIEEE32(_value)
      }
      else {
        _value = Builtin.int_ceil_FPIEEE32(_value)
      }
    case .up:
      _value = Builtin.int_ceil_FPIEEE32(_value)
    case .down:
      _value = Builtin.int_floor_FPIEEE32(_value)
    @unknown default:
      self._roundSlowPath(rule)
    }
  }
  
  // Slow path for new cases that might have been inlined into an old
  // ABI-stable version of round(_:) called from a newer version. If this is
  // the case, this non-inlinable function will call into the _newer_ version
  // which _will_ support this rounding rule.
  @usableFromInline
  internal mutating func _roundSlowPath(_ rule: FloatingPointRoundingRule) {
    self.round(rule)
  }

  @_transparent
  public mutating func negate() {
    _value = Builtin.fneg_FPIEEE32(self._value)
  }

  @_transparent
  public static func +=(lhs: inout Float, rhs: Float) {
    lhs._value = Builtin.fadd_FPIEEE32(lhs._value, rhs._value)
  }

  @_transparent
  public static func -=(lhs: inout Float, rhs: Float) {
    lhs._value = Builtin.fsub_FPIEEE32(lhs._value, rhs._value)
  }

  @_transparent
  public static func *=(lhs: inout Float, rhs: Float) {
    lhs._value = Builtin.fmul_FPIEEE32(lhs._value, rhs._value)
  }

  @_transparent
  public static func /=(lhs: inout Float, rhs: Float) {
    lhs._value = Builtin.fdiv_FPIEEE32(lhs._value, rhs._value)
  }

  @inlinable // FIXME(inline-always)
  @inline(__always)
  public mutating func formRemainder(dividingBy other: Float) {
    self = _swift_stdlib_remainderf(self, other)
  }

  @inlinable // FIXME(inline-always)
  @inline(__always)
  public mutating func formTruncatingRemainder(dividingBy other: Float) {
    _value = Builtin.frem_FPIEEE32(self._value, other._value)
  }

  @_transparent
  public mutating func formSquareRoot( ) {
    self = _swift_stdlib_squareRootf(self)
  }

  @_transparent
  public mutating func addProduct(_ lhs: Float, _ rhs: Float) {
    _value = Builtin.int_fma_FPIEEE32(lhs._value, rhs._value, _value)
  }

  @_transparent
  public func isEqual(to other: Float) -> Bool {
    return Bool(Builtin.fcmp_oeq_FPIEEE32(self._value, other._value))
  }

  @_transparent
  public func isLess(than other: Float) -> Bool {
    return Bool(Builtin.fcmp_olt_FPIEEE32(self._value, other._value))
  }

  @_transparent
  public func isLessThanOrEqualTo(_ other: Float) -> Bool {
    return Bool(Builtin.fcmp_ole_FPIEEE32(self._value, other._value))
  }

  @inlinable // FIXME(inline-always)
  public var isNormal: Bool {
    @inline(__always)
    get {
      return exponentBitPattern > 0 && isFinite
    }
  }

  @inlinable // FIXME(inline-always)
  public var isFinite: Bool {
    @inline(__always)
    get {
      return exponentBitPattern < Float._infinityExponent
    }
  }

  @inlinable // FIXME(inline-always)
  public var isZero: Bool {
    @inline(__always)
    get {
      return exponentBitPattern == 0 && significandBitPattern == 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isSubnormal:  Bool {
    @inline(__always)
    get {
      return exponentBitPattern == 0 && significandBitPattern != 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isInfinite:  Bool {
    @inline(__always)
    get {
      return !isFinite && significandBitPattern == 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isNaN:  Bool {
    @inline(__always)
    get {
      return !isFinite && significandBitPattern != 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isSignalingNaN: Bool {
    @inline(__always)
    get {
      return isNaN && (significandBitPattern & Float._quietNaNMask) == 0
    }
  }

  @inlinable
  public var binade: Float {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 851)
    guard _fastPath(isFinite) else { return .nan }
#if !arch(arm)
    if _slowPath(isSubnormal) {
      let bitPattern_ =
        (self * 0x1p23).bitPattern
          & (-Float.infinity).bitPattern
      return Float(bitPattern: bitPattern_) * 0x1p-23
    }
#endif
    return Float(bitPattern: bitPattern & (-Float.infinity).bitPattern)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 873)
  }

  @inlinable
  public var significandWidth: Int {
    let trailingZeroBits = significandBitPattern.trailingZeroBitCount
    if isNormal {
      guard significandBitPattern != 0 else { return 0 }
      return Float.significandBitCount &- trailingZeroBits
    }
    if isSubnormal {
      let leadingZeroBits = significandBitPattern.leadingZeroBitCount
      return UInt32.bitWidth &- (trailingZeroBits &+ leadingZeroBits &+ 1)
    }
    return -1
  }

  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(floatLiteral value: Float) {
    self = value
  }
}

extension Float: _ExpressibleByBuiltinIntegerLiteral, ExpressibleByIntegerLiteral {
  @_transparent
  public
  init(_builtinIntegerLiteral value: Builtin.IntLiteral){
    self = Float(Builtin.itofp_with_overflow_IntLiteral_FPIEEE32(value))
  }

  @_transparent
  public init(integerLiteral value: Int64) {
    self = Float(Builtin.sitofp_Int64_FPIEEE32(value._value))
  }
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 910)
#if !os(Windows) && (arch(i386) || arch(x86_64))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 912)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 914)
extension Float: _ExpressibleByBuiltinFloatLiteral {
  @_transparent
  public
  init(_builtinFloatLiteral value: Builtin.FPIEEE80) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 921)
    self = Float(Builtin.fptrunc_FPIEEE80_FPIEEE32(value))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 926)
  }
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 930)
#else

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 933)
extension Float: _ExpressibleByBuiltinFloatLiteral {
  @_transparent
  public
  init(_builtinFloatLiteral value: Builtin.FPIEEE64) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 940)
    // FIXME: This can result in double rounding errors (SR-7124).
    self = Float(Builtin.fptrunc_FPIEEE64_FPIEEE32(value))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 946)
  }
}

#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 951)

extension Float: Hashable {
  @inlinable
  public func hash(into hasher: inout Hasher) {
    var v = self
    if isZero {
      // To satisfy the axiom that equality implies hash equality, we need to
      // finesse the hash value of -0.0 to match +0.0.
      v = 0
    }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 965)
    hasher.combine(v.bitPattern)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 967)
  }

  @inlinable
  public func _rawHashValue(seed: Int) -> Int {
    // To satisfy the axiom that equality implies hash equality, we need to
    // finesse the hash value of -0.0 to match +0.0.
    let v = isZero ? 0 : self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 982)
    return Hasher._hash(seed: seed, bytes: UInt64(v.bitPattern), count: 4)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 984)
  }
}

extension Float: _HasCustomAnyHashableRepresentation {
  // Not @inlinable
  public func _toCustomAnyHashable() -> AnyHashable? {
    return AnyHashable(_box: _FloatAnyHashableBox(self))
  }
}

extension Float {
  @inlinable // FIXME(inline-always)
  public var magnitude: Float {
    @inline(__always)
    get {
      return Float(Builtin.int_fabs_FPIEEE32(_value))
    }
  }
}

extension Float {
  @_transparent
  public static prefix func - (x: Float) -> Float {
    return Float(Builtin.fneg_FPIEEE32(x._value))
  }
}

//===----------------------------------------------------------------------===//
// Explicit conversions between types.
//===----------------------------------------------------------------------===//

// Construction from other concrete types.
extension Float {

  // We "shouldn't" need this, but the typechecker barfs on an expression
  // in the test suite without it.
  // If replaced with @inline(__always) the init no longer gets
  // inlined in -Onone and this breaks the abi_v7k test in a subtle way.
  @_transparent
  public init(_ v: Int) {
    _value = Builtin.sitofp_Int64_FPIEEE32(v._value)
  }

  // Fast-path for conversion when the source is representable as a 64-bit int,
  // falling back on the generic _convert operation otherwise.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init<Source: BinaryInteger>(_ value: Source) {
    if value.bitWidth <= 64 {
      if Source.isSigned {
        let asInt = Int(truncatingIfNeeded: value)
        _value = Builtin.sitofp_Int64_FPIEEE32(asInt._value)
      } else {
        let asUInt = Int(truncatingIfNeeded: value)
        _value = Builtin.uitofp_Int64_FPIEEE32(asUInt._value)
      }
    } else {
      self = Float._convert(from: value).value
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1048)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1052)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1054)
  /// Creates a new instance initialized to the given value.
  ///
  /// The value of `other` is represented exactly by the new instance. A NaN
  /// passed as `other` results in another NaN, with a signaling NaN value
  /// converted to quiet NaN.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1066)
  ///
  ///     let x: Float = 21.25
  ///     let y = Float(x)
  ///     // y == 21.25
  ///
  ///     let z = Float(Float.nan)
  ///     // z.isNaN == true
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(_ other: Float) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1083)
    _value = other._value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1085)
  }

  /// Creates a new instance initialized to the given value, if it can be
  /// represented without rounding.
  ///
  /// If `other` can't be represented as an instance of `Float` without
  /// rounding, the result of this initializer is `nil`. In particular,
  /// passing NaN as `other` always results in `nil`.
  ///
  ///     let x: Float = 21.25
  ///     let y = Float(exactly: x)
  ///     // y == Optional.some(21.25)
  ///
  ///     let z = Float(exactly: Float.nan)
  ///     // z == nil
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable
  @inline(__always)
  public init?(exactly other: Float) {
    self.init(other)
    // Converting the infinity value is considered value preserving.
    // In other cases, check that we can round-trip and get the same value.
    // NaN always fails.
    if Float(self) != other {
      return nil
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1048)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1052)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1060)
  /// Creates a new instance that approximates the given value.
  ///
  /// The value of `other` is rounded to a representable value, if necessary.
  /// A NaN passed as `other` results in another NaN, with a signaling NaN
  /// value converted to quiet NaN.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1066)
  ///
  ///     let x: Double = 21.25
  ///     let y = Float(x)
  ///     // y == 21.25
  ///
  ///     let z = Float(Double.nan)
  ///     // z.isNaN == true
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(_ other: Double) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1079)
    _value = Builtin.fptrunc_FPIEEE64_FPIEEE32(other._value)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1085)
  }

  /// Creates a new instance initialized to the given value, if it can be
  /// represented without rounding.
  ///
  /// If `other` can't be represented as an instance of `Float` without
  /// rounding, the result of this initializer is `nil`. In particular,
  /// passing NaN as `other` always results in `nil`.
  ///
  ///     let x: Double = 21.25
  ///     let y = Float(exactly: x)
  ///     // y == Optional.some(21.25)
  ///
  ///     let z = Float(exactly: Double.nan)
  ///     // z == nil
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable
  @inline(__always)
  public init?(exactly other: Double) {
    self.init(other)
    // Converting the infinity value is considered value preserving.
    // In other cases, check that we can round-trip and get the same value.
    // NaN always fails.
    if Double(self) != other {
      return nil
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1048)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1050)
#if !(os(Windows) || os(Android)) && (arch(i386) || arch(x86_64))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1052)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1060)
  /// Creates a new instance that approximates the given value.
  ///
  /// The value of `other` is rounded to a representable value, if necessary.
  /// A NaN passed as `other` results in another NaN, with a signaling NaN
  /// value converted to quiet NaN.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1066)
  ///
  ///     let x: Float80 = 21.25
  ///     let y = Float(x)
  ///     // y == 21.25
  ///
  ///     let z = Float(Float80.nan)
  ///     // z.isNaN == true
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(_ other: Float80) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1079)
    _value = Builtin.fptrunc_FPIEEE80_FPIEEE32(other._value)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1085)
  }

  /// Creates a new instance initialized to the given value, if it can be
  /// represented without rounding.
  ///
  /// If `other` can't be represented as an instance of `Float` without
  /// rounding, the result of this initializer is `nil`. In particular,
  /// passing NaN as `other` always results in `nil`.
  ///
  ///     let x: Float80 = 21.25
  ///     let y = Float(exactly: x)
  ///     // y == Optional.some(21.25)
  ///
  ///     let z = Float(exactly: Float80.nan)
  ///     // z == nil
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable
  @inline(__always)
  public init?(exactly other: Float80) {
    self.init(other)
    // Converting the infinity value is considered value preserving.
    // In other cases, check that we can round-trip and get the same value.
    // NaN always fails.
    if Float80(self) != other {
      return nil
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1115)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1118)
}

//===----------------------------------------------------------------------===//
// Standard Operator Table
//===----------------------------------------------------------------------===//

//  TODO: These should not be necessary, since they're already provided by
//  <T: FloatingPoint>, but in practice they are currently needed to
//  disambiguate overloads.  We should find a way to remove them, either by
//  tweaking the overload resolution rules, or by removing the other
//  definitions in the standard lib, or both.

extension Float {
  @_transparent
  public static func + (lhs: Float, rhs: Float) -> Float {
    var lhs = lhs
    lhs += rhs
    return lhs
  }

  @_transparent
  public static func - (lhs: Float, rhs: Float) -> Float {
    var lhs = lhs
    lhs -= rhs
    return lhs
  }

  @_transparent
  public static func * (lhs: Float, rhs: Float) -> Float {
    var lhs = lhs
    lhs *= rhs
    return lhs
  }

  @_transparent
  public static func / (lhs: Float, rhs: Float) -> Float {
    var lhs = lhs
    lhs /= rhs
    return lhs
  }
}

//===----------------------------------------------------------------------===//
// Strideable Conformance
//===----------------------------------------------------------------------===//

extension Float: Strideable {
  @_transparent
  public func distance(to other: Float) -> Float {
    return other - self
  }

  @_transparent
  public func advanced(by amount: Float) -> Float {
    return self + amount
  }
}

//===----------------------------------------------------------------------===//
// AnyHashable
//===----------------------------------------------------------------------===//

internal struct _FloatAnyHashableBox: _AnyHashableBox {
  internal typealias Base = Float
  internal let _value: Base

  internal init(_ value: Base) {
    self._value = value
  }

  internal var _canonicalBox: _AnyHashableBox {
    // Float and Double are bridged with NSNumber, so we have to follow
    // NSNumber's rules for equality.  I.e., we need to make sure equal
    // numerical values end up in identical boxes after canonicalization, so
    // that _isEqual will consider them equal and they're hashed the same way.
    //
    // Note that these AnyHashable boxes don't currently feed discriminator bits
    // to the hasher, so we allow repeatable collisions. E.g., -1 will always
    // collide with UInt64.max.
    if _value < 0 {
      if let i = Int64(exactly: _value) {
        return _IntegerAnyHashableBox(i)
      }
    } else {
      if let i = UInt64(exactly: _value) {
        return _IntegerAnyHashableBox(i)
      }
    }
    if let d = Double(exactly: _value) {
      return _DoubleAnyHashableBox(d)
    }
    // If a value can't be represented by a Double, keep it in its original
    // representation so that it won't compare equal to approximations. (So that
    // we don't round off Float80 values.)
    return self
  }

  internal func _isEqual(to box: _AnyHashableBox) -> Bool? {
    _internalInvariant(Int64(exactly: _value) == nil, "self isn't canonical")
    _internalInvariant(UInt64(exactly: _value) == nil, "self isn't canonical")
    if let box = box as? _FloatAnyHashableBox {
      return _value == box._value
    }
    return nil
  }

  internal var _hashValue: Int {
    return _rawHashValue(_seed: 0)
  }

  internal func _hash(into hasher: inout Hasher) {
    _internalInvariant(Int64(exactly: _value) == nil, "self isn't canonical")
    _internalInvariant(UInt64(exactly: _value) == nil, "self isn't canonical")
    hasher.combine(_value)
  }

  internal func _rawHashValue(_seed: Int) -> Int {
    var hasher = Hasher(_seed: _seed)
    _hash(into: &hasher)
    return hasher.finalize()
  }

  internal var _base: Any {
    return _value
  }

  internal func _unbox<T: Hashable>() -> T? {
    return _value as? T
  }

  internal func _downCastConditional<T>(
    into result: UnsafeMutablePointer<T>
  ) -> Bool {
    guard let value = _value as? T else { return false }
    result.initialize(to: value)
    return true
  }
}

//===----------------------------------------------------------------------===//
// Deprecated operators
//===----------------------------------------------------------------------===//

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 55)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 59)

/// A double-precision, floating-point value type.
@frozen
public struct Double {
  public // @testable
  var _value: Builtin.FPIEEE64

  @_transparent
  public init() {
    let zero: Int64 = 0
    self._value = Builtin.sitofp_Int64_FPIEEE64(zero._value)
  }

  @_transparent
  public // @testable
  init(_ _value: Builtin.FPIEEE64) {
    self._value = _value
  }
}

extension Double: CustomStringConvertible {
  /// A textual representation of the value.
  public var description: String {
    if isNaN {
      return "nan"
    } else {
      var (buffer, length) = _float64ToString(self, debug: false)
      return buffer.withBytes { (bufferPtr) in
        String._fromASCII(
          UnsafeBufferPointer(start: bufferPtr, count: length))
      }
    }
  }
}

extension Double: CustomDebugStringConvertible {
  /// A textual representation of the value, suitable for debugging.
  public var debugDescription: String {
    var (buffer, length) = _float64ToString(self, debug: true)
    return buffer.withBytes { (bufferPtr) in
      String._fromASCII(
        UnsafeBufferPointer(start: bufferPtr, count: length))
    }
  }
}

extension Double: TextOutputStreamable {
  public func write<Target>(to target: inout Target) where Target: TextOutputStream {
    var (buffer, length) = _float64ToString(self, debug: true)
    buffer.withBytes { (bufferPtr) in
      let bufPtr = UnsafeBufferPointer(start: bufferPtr, count: length)
      target._writeASCII(bufPtr)
    }
  }
}

extension Double: BinaryFloatingPoint {

  // Floating-point types are always symmetric, so Magnitude is Self.
  public typealias Magnitude = Double

  public typealias Exponent = Int

  public typealias RawSignificand = UInt64

  @inlinable
  public static var exponentBitCount: Int {
    return 11
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 137)
  @inlinable
  public static var significandBitCount: Int {
    return 52
  }

  //  Implementation details.
  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _infinityExponent: UInt {
    @inline(__always) get { return 1 &<< UInt(exponentBitCount) - 1 }
  }

  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _exponentBias: UInt {
    @inline(__always) get { return _infinityExponent &>> 1 }
  }

  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _significandMask: UInt64 {
    @inline(__always) get {
      return 1 &<< UInt64(significandBitCount) - 1
    }
  }

  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _quietNaNMask: UInt64 {
    @inline(__always) get {
      return 1 &<< UInt64(significandBitCount - 1)
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 168)
  //  Conversions to/from integer encoding.  These are not part of the
  //  BinaryFloatingPoint prototype because there's no guarantee that an
  //  integer type of the same size actually exists (e.g. Float80).
  //
  //  If we want them in a protocol at some future point, that protocol should
  //  be "InterchangeFloatingPoint" or "PortableFloatingPoint" or similar, and
  //  apply to IEEE 754 "interchange types".
  /// The bit pattern of the value's encoding.
  ///
  /// The bit pattern matches the binary interchange format defined by the
  /// [IEEE 754 specification][spec].
  ///
  /// [spec]: http://ieeexplore.ieee.org/servlet/opac?punumber=4610933
  @inlinable
  public var bitPattern: UInt64 {
    return UInt64(Builtin.bitcast_FPIEEE64_Int64(_value))
  }

  /// Creates a new value with the given bit pattern.
  ///
  /// The value passed as `bitPattern` is interpreted in the binary interchange
  /// format defined by the [IEEE 754 specification][spec].
  ///
  /// [spec]: http://ieeexplore.ieee.org/servlet/opac?punumber=4610933
  ///
  /// - Parameter bitPattern: The integer encoding of a `Double` instance.
  @inlinable
  public init(bitPattern: UInt64) {
    self.init(Builtin.bitcast_Int64_FPIEEE64(bitPattern._value))
  }

  @inlinable
  public var sign: FloatingPointSign {
    let shift = Double.significandBitCount + Double.exponentBitCount
    return FloatingPointSign(
      rawValue: Int(bitPattern &>> UInt64(shift))
    )!
  }

  @available(*, unavailable, renamed: "sign")
  public var isSignMinus: Bool { Builtin.unreachable() }

  @inlinable
  public var exponentBitPattern: UInt {
    return UInt(bitPattern &>> UInt64(Double.significandBitCount)) &
      Double._infinityExponent
  }

  @inlinable
  public var significandBitPattern: UInt64 {
    return UInt64(bitPattern) & Double._significandMask
  }

  @inlinable
  public init(
    sign: FloatingPointSign,
    exponentBitPattern: UInt,
    significandBitPattern: UInt64
  ) {
    let signShift = Double.significandBitCount + Double.exponentBitCount
    let sign = UInt64(sign == .minus ? 1 : 0)
    let exponent = UInt64(
      exponentBitPattern & Double._infinityExponent
    )
    let significand = UInt64(
      significandBitPattern & Double._significandMask
    )
    self.init(bitPattern:
      sign &<< UInt64(signShift) |
      exponent &<< UInt64(Double.significandBitCount) |
      significand
    )
  }

  @inlinable
  public var isCanonical: Bool {
    // All Float and Double encodings are canonical in IEEE 754.
    //
    // On platforms that do not support subnormals, we treat them as
    // non-canonical encodings of zero.
    if Self.leastNonzeroMagnitude == Self.leastNormalMagnitude {
      if exponentBitPattern == 0 && significandBitPattern != 0 {
        return false
      }
    }
    return true
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 368)

  @inlinable
  public static var infinity: Double {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 374)
    return Double(bitPattern: 0x7ff0000000000000)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 388)
  }

  @inlinable
  public static var nan: Double {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 395)
    return Double(bitPattern: 0x7ff8000000000000)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 405)
  }

  @inlinable
  public static var signalingNaN: Double {
    return Double(nan: 0, signaling: true)
  }

  @available(*, unavailable, renamed: "nan")
  public static var quietNaN: Double { Builtin.unreachable() }

  @inlinable
  public static var greatestFiniteMagnitude: Double {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 420)
    return 0x1.fffffffffffffp1023
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 430)
  }

  @inlinable
  public static var pi: Double {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 442)
    return 0x1.921fb54442d18p1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 446)
  }

  @inlinable
  public var ulp: Double {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 451)
    guard _fastPath(isFinite) else { return .nan }
    if _fastPath(isNormal) {
      let bitPattern_ = bitPattern & Double.infinity.bitPattern
      return Double(bitPattern: bitPattern_) * 0x1p-52
    }
    // On arm, flush subnormal values to 0.
    return .leastNormalMagnitude * 0x1p-52
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 486)
  }

  @inlinable
  public static var leastNormalMagnitude: Double {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 493)
    return 0x1p-1022
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 502)
  }

  @inlinable
  public static var leastNonzeroMagnitude: Double {
#if arch(arm)
    // On 32b arm, the default FPCR has subnormals flushed to zero.
    return leastNormalMagnitude
#else
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 513)
    return 0x1p-1074
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 523)
#endif
  }

  /// The unit in the last place of 1.0.
  ///
  /// The positive difference between 1.0 and the next greater representable
  /// number. The `ulpOfOne` constant corresponds to the C macros
  /// `FLT_EPSILON`, `DBL_EPSILON`, and others with a similar purpose.
  @inlinable
  public static var ulpOfOne: Double {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 536)
    return 0x1p-52
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 540)
  }

  @inlinable
  public var exponent: Int {
    if !isFinite { return .max }
    if isZero { return .min }
    let provisional = Int(exponentBitPattern) - Int(Double._exponentBias)
    if isNormal { return provisional }
    let shift =
      Double.significandBitCount - significandBitPattern._binaryLogarithm()
    return provisional + 1 - shift
  }

  @inlinable
  public var significand: Double {
    if isNaN { return self }
    if isNormal {
      return Double(sign: .plus,
        exponentBitPattern: Double._exponentBias,
        significandBitPattern: significandBitPattern)
    }
    if isSubnormal {
      let shift =
        Double.significandBitCount - significandBitPattern._binaryLogarithm()
      return Double(
        sign: .plus,
        exponentBitPattern: Double._exponentBias,
        significandBitPattern: significandBitPattern &<< shift
      )
    }
    // zero or infinity.
    return Double(
      sign: .plus,
      exponentBitPattern: exponentBitPattern,
      significandBitPattern: 0
    )
  }

  @inlinable
  public init(sign: FloatingPointSign, exponent: Int, significand: Double) {
    var result = significand
    if sign == .minus { result = -result }
    if significand.isFinite && !significand.isZero {
      var clamped = exponent
      let leastNormalExponent = 1 - Int(Double._exponentBias)
      let greatestFiniteExponent = Int(Double._exponentBias)
      if clamped < leastNormalExponent {
        clamped = max(clamped, 3*leastNormalExponent)
        while clamped < leastNormalExponent {
          result  *= Double.leastNormalMagnitude
          clamped -= leastNormalExponent
        }
      }
      else if clamped > greatestFiniteExponent {
        clamped = min(clamped, 3*greatestFiniteExponent)
        let step = Double(sign: .plus,
          exponentBitPattern: Double._infinityExponent - 1,
          significandBitPattern: 0)
        while clamped > greatestFiniteExponent {
          result  *= step
          clamped -= greatestFiniteExponent
        }
      }
      let scale = Double(
        sign: .plus,
        exponentBitPattern: UInt(Int(Double._exponentBias) + clamped),
        significandBitPattern: 0
      )
      result = result * scale
    }
    self = result
  }
  
  /// Creates a NaN ("not a number") value with the specified payload.
  ///
  /// NaN values compare not equal to every value, including themselves. Most
  /// operations with a NaN operand produce a NaN result. Don't use the
  /// equal-to operator (`==`) to test whether a value is NaN. Instead, use
  /// the value's `isNaN` property.
  ///
  ///     let x = Double(nan: 0, signaling: false)
  ///     print(x == .nan)
  ///     // Prints "false"
  ///     print(x.isNaN)
  ///     // Prints "true"
  ///
  /// - Parameters:
  ///   - payload: The payload to use for the new NaN value.
  ///   - signaling: Pass `true` to create a signaling NaN or `false` to create
  ///     a quiet NaN.
  @inlinable
  public init(nan payload: RawSignificand, signaling: Bool) {
    // We use significandBitCount - 2 bits for NaN payload.
    _precondition(payload < (Double._quietNaNMask &>> 1),
      "NaN payload is not encodable.")
    var significand = payload
    significand |= Double._quietNaNMask &>> (signaling ? 1 : 0)
    self.init(
      sign: .plus,
      exponentBitPattern: Double._infinityExponent,
      significandBitPattern: significand
    )
  }

  @inlinable
  public var nextUp: Double {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 647)
    // Silence signaling NaNs, map -0 to +0.
    let x = self + 0
#if arch(arm)
    // On arm, treat subnormal values as zero.
    if _slowPath(x == 0) { return .leastNonzeroMagnitude }
    if _slowPath(x == -.leastNonzeroMagnitude) { return -0.0 }
#endif
    if _fastPath(x < .infinity) {
      let increment = Int64(bitPattern: x.bitPattern) &>> 63 | 1
      let bitPattern_ = x.bitPattern &+ UInt64(bitPattern: increment)
      return Double(bitPattern: bitPattern_)
    }
    return x
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 685)
  }

  //  For core standard library floating-point types, LLVM can lower copysign
  //  for us; this gets somewhat better codegen than the generic implementation,
  //  but more importantly allows it to participate in other optimizations
  //  at the LLVM level.
  @_transparent
  public init(signOf sign: Double, magnitudeOf mag: Double) {
    _value = Builtin.int_copysign_FPIEEE64(mag._value, sign._value)
  }

  @_transparent
  public mutating func round(_ rule: FloatingPointRoundingRule) {
    switch rule {
    case .toNearestOrAwayFromZero:
      _value = Builtin.int_round_FPIEEE64(_value)
    case .toNearestOrEven:
      _value = Builtin.int_rint_FPIEEE64(_value)
    case .towardZero:
      _value = Builtin.int_trunc_FPIEEE64(_value)
    case .awayFromZero:
      if sign == .minus {
        _value = Builtin.int_floor_FPIEEE64(_value)
      }
      else {
        _value = Builtin.int_ceil_FPIEEE64(_value)
      }
    case .up:
      _value = Builtin.int_ceil_FPIEEE64(_value)
    case .down:
      _value = Builtin.int_floor_FPIEEE64(_value)
    @unknown default:
      self._roundSlowPath(rule)
    }
  }
  
  // Slow path for new cases that might have been inlined into an old
  // ABI-stable version of round(_:) called from a newer version. If this is
  // the case, this non-inlinable function will call into the _newer_ version
  // which _will_ support this rounding rule.
  @usableFromInline
  internal mutating func _roundSlowPath(_ rule: FloatingPointRoundingRule) {
    self.round(rule)
  }

  @_transparent
  public mutating func negate() {
    _value = Builtin.fneg_FPIEEE64(self._value)
  }

  @_transparent
  public static func +=(lhs: inout Double, rhs: Double) {
    lhs._value = Builtin.fadd_FPIEEE64(lhs._value, rhs._value)
  }

  @_transparent
  public static func -=(lhs: inout Double, rhs: Double) {
    lhs._value = Builtin.fsub_FPIEEE64(lhs._value, rhs._value)
  }

  @_transparent
  public static func *=(lhs: inout Double, rhs: Double) {
    lhs._value = Builtin.fmul_FPIEEE64(lhs._value, rhs._value)
  }

  @_transparent
  public static func /=(lhs: inout Double, rhs: Double) {
    lhs._value = Builtin.fdiv_FPIEEE64(lhs._value, rhs._value)
  }

  @inlinable // FIXME(inline-always)
  @inline(__always)
  public mutating func formRemainder(dividingBy other: Double) {
    self = _swift_stdlib_remainder(self, other)
  }

  @inlinable // FIXME(inline-always)
  @inline(__always)
  public mutating func formTruncatingRemainder(dividingBy other: Double) {
    _value = Builtin.frem_FPIEEE64(self._value, other._value)
  }

  @_transparent
  public mutating func formSquareRoot( ) {
    self = _swift_stdlib_squareRoot(self)
  }

  @_transparent
  public mutating func addProduct(_ lhs: Double, _ rhs: Double) {
    _value = Builtin.int_fma_FPIEEE64(lhs._value, rhs._value, _value)
  }

  @_transparent
  public func isEqual(to other: Double) -> Bool {
    return Bool(Builtin.fcmp_oeq_FPIEEE64(self._value, other._value))
  }

  @_transparent
  public func isLess(than other: Double) -> Bool {
    return Bool(Builtin.fcmp_olt_FPIEEE64(self._value, other._value))
  }

  @_transparent
  public func isLessThanOrEqualTo(_ other: Double) -> Bool {
    return Bool(Builtin.fcmp_ole_FPIEEE64(self._value, other._value))
  }

  @inlinable // FIXME(inline-always)
  public var isNormal: Bool {
    @inline(__always)
    get {
      return exponentBitPattern > 0 && isFinite
    }
  }

  @inlinable // FIXME(inline-always)
  public var isFinite: Bool {
    @inline(__always)
    get {
      return exponentBitPattern < Double._infinityExponent
    }
  }

  @inlinable // FIXME(inline-always)
  public var isZero: Bool {
    @inline(__always)
    get {
      return exponentBitPattern == 0 && significandBitPattern == 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isSubnormal:  Bool {
    @inline(__always)
    get {
      return exponentBitPattern == 0 && significandBitPattern != 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isInfinite:  Bool {
    @inline(__always)
    get {
      return !isFinite && significandBitPattern == 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isNaN:  Bool {
    @inline(__always)
    get {
      return !isFinite && significandBitPattern != 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isSignalingNaN: Bool {
    @inline(__always)
    get {
      return isNaN && (significandBitPattern & Double._quietNaNMask) == 0
    }
  }

  @inlinable
  public var binade: Double {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 851)
    guard _fastPath(isFinite) else { return .nan }
#if !arch(arm)
    if _slowPath(isSubnormal) {
      let bitPattern_ =
        (self * 0x1p52).bitPattern
          & (-Double.infinity).bitPattern
      return Double(bitPattern: bitPattern_) * 0x1p-52
    }
#endif
    return Double(bitPattern: bitPattern & (-Double.infinity).bitPattern)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 873)
  }

  @inlinable
  public var significandWidth: Int {
    let trailingZeroBits = significandBitPattern.trailingZeroBitCount
    if isNormal {
      guard significandBitPattern != 0 else { return 0 }
      return Double.significandBitCount &- trailingZeroBits
    }
    if isSubnormal {
      let leadingZeroBits = significandBitPattern.leadingZeroBitCount
      return UInt64.bitWidth &- (trailingZeroBits &+ leadingZeroBits &+ 1)
    }
    return -1
  }

  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(floatLiteral value: Double) {
    self = value
  }
}

extension Double: _ExpressibleByBuiltinIntegerLiteral, ExpressibleByIntegerLiteral {
  @_transparent
  public
  init(_builtinIntegerLiteral value: Builtin.IntLiteral){
    self = Double(Builtin.itofp_with_overflow_IntLiteral_FPIEEE64(value))
  }

  @_transparent
  public init(integerLiteral value: Int64) {
    self = Double(Builtin.sitofp_Int64_FPIEEE64(value._value))
  }
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 910)
#if !os(Windows) && (arch(i386) || arch(x86_64))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 912)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 914)
extension Double: _ExpressibleByBuiltinFloatLiteral {
  @_transparent
  public
  init(_builtinFloatLiteral value: Builtin.FPIEEE80) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 921)
    self = Double(Builtin.fptrunc_FPIEEE80_FPIEEE64(value))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 926)
  }
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 930)
#else

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 933)
extension Double: _ExpressibleByBuiltinFloatLiteral {
  @_transparent
  public
  init(_builtinFloatLiteral value: Builtin.FPIEEE64) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 938)
    self = Double(value)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 946)
  }
}

#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 951)

extension Double: Hashable {
  @inlinable
  public func hash(into hasher: inout Hasher) {
    var v = self
    if isZero {
      // To satisfy the axiom that equality implies hash equality, we need to
      // finesse the hash value of -0.0 to match +0.0.
      v = 0
    }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 965)
    hasher.combine(v.bitPattern)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 967)
  }

  @inlinable
  public func _rawHashValue(seed: Int) -> Int {
    // To satisfy the axiom that equality implies hash equality, we need to
    // finesse the hash value of -0.0 to match +0.0.
    let v = isZero ? 0 : self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 980)
    return Hasher._hash(seed: seed, v.bitPattern)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 984)
  }
}

extension Double: _HasCustomAnyHashableRepresentation {
  // Not @inlinable
  public func _toCustomAnyHashable() -> AnyHashable? {
    return AnyHashable(_box: _DoubleAnyHashableBox(self))
  }
}

extension Double {
  @inlinable // FIXME(inline-always)
  public var magnitude: Double {
    @inline(__always)
    get {
      return Double(Builtin.int_fabs_FPIEEE64(_value))
    }
  }
}

extension Double {
  @_transparent
  public static prefix func - (x: Double) -> Double {
    return Double(Builtin.fneg_FPIEEE64(x._value))
  }
}

//===----------------------------------------------------------------------===//
// Explicit conversions between types.
//===----------------------------------------------------------------------===//

// Construction from other concrete types.
extension Double {

  // We "shouldn't" need this, but the typechecker barfs on an expression
  // in the test suite without it.
  // If replaced with @inline(__always) the init no longer gets
  // inlined in -Onone and this breaks the abi_v7k test in a subtle way.
  @_transparent
  public init(_ v: Int) {
    _value = Builtin.sitofp_Int64_FPIEEE64(v._value)
  }

  // Fast-path for conversion when the source is representable as a 64-bit int,
  // falling back on the generic _convert operation otherwise.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init<Source: BinaryInteger>(_ value: Source) {
    if value.bitWidth <= 64 {
      if Source.isSigned {
        let asInt = Int(truncatingIfNeeded: value)
        _value = Builtin.sitofp_Int64_FPIEEE64(asInt._value)
      } else {
        let asUInt = Int(truncatingIfNeeded: value)
        _value = Builtin.uitofp_Int64_FPIEEE64(asUInt._value)
      }
    } else {
      self = Double._convert(from: value).value
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1048)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1052)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1060)
  /// Creates a new instance that approximates the given value.
  ///
  /// The value of `other` is rounded to a representable value, if necessary.
  /// A NaN passed as `other` results in another NaN, with a signaling NaN
  /// value converted to quiet NaN.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1066)
  ///
  ///     let x: Float = 21.25
  ///     let y = Double(x)
  ///     // y == 21.25
  ///
  ///     let z = Double(Float.nan)
  ///     // z.isNaN == true
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(_ other: Float) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1081)
    _value = Builtin.fpext_FPIEEE32_FPIEEE64(other._value)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1085)
  }

  /// Creates a new instance initialized to the given value, if it can be
  /// represented without rounding.
  ///
  /// If `other` can't be represented as an instance of `Double` without
  /// rounding, the result of this initializer is `nil`. In particular,
  /// passing NaN as `other` always results in `nil`.
  ///
  ///     let x: Float = 21.25
  ///     let y = Double(exactly: x)
  ///     // y == Optional.some(21.25)
  ///
  ///     let z = Double(exactly: Float.nan)
  ///     // z == nil
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable
  @inline(__always)
  public init?(exactly other: Float) {
    self.init(other)
    // Converting the infinity value is considered value preserving.
    // In other cases, check that we can round-trip and get the same value.
    // NaN always fails.
    if Float(self) != other {
      return nil
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1048)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1052)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1054)
  /// Creates a new instance initialized to the given value.
  ///
  /// The value of `other` is represented exactly by the new instance. A NaN
  /// passed as `other` results in another NaN, with a signaling NaN value
  /// converted to quiet NaN.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1066)
  ///
  ///     let x: Double = 21.25
  ///     let y = Double(x)
  ///     // y == 21.25
  ///
  ///     let z = Double(Double.nan)
  ///     // z.isNaN == true
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(_ other: Double) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1083)
    _value = other._value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1085)
  }

  /// Creates a new instance initialized to the given value, if it can be
  /// represented without rounding.
  ///
  /// If `other` can't be represented as an instance of `Double` without
  /// rounding, the result of this initializer is `nil`. In particular,
  /// passing NaN as `other` always results in `nil`.
  ///
  ///     let x: Double = 21.25
  ///     let y = Double(exactly: x)
  ///     // y == Optional.some(21.25)
  ///
  ///     let z = Double(exactly: Double.nan)
  ///     // z == nil
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable
  @inline(__always)
  public init?(exactly other: Double) {
    self.init(other)
    // Converting the infinity value is considered value preserving.
    // In other cases, check that we can round-trip and get the same value.
    // NaN always fails.
    if Double(self) != other {
      return nil
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1048)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1050)
#if !(os(Windows) || os(Android)) && (arch(i386) || arch(x86_64))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1052)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1060)
  /// Creates a new instance that approximates the given value.
  ///
  /// The value of `other` is rounded to a representable value, if necessary.
  /// A NaN passed as `other` results in another NaN, with a signaling NaN
  /// value converted to quiet NaN.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1066)
  ///
  ///     let x: Float80 = 21.25
  ///     let y = Double(x)
  ///     // y == 21.25
  ///
  ///     let z = Double(Float80.nan)
  ///     // z.isNaN == true
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(_ other: Float80) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1079)
    _value = Builtin.fptrunc_FPIEEE80_FPIEEE64(other._value)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1085)
  }

  /// Creates a new instance initialized to the given value, if it can be
  /// represented without rounding.
  ///
  /// If `other` can't be represented as an instance of `Double` without
  /// rounding, the result of this initializer is `nil`. In particular,
  /// passing NaN as `other` always results in `nil`.
  ///
  ///     let x: Float80 = 21.25
  ///     let y = Double(exactly: x)
  ///     // y == Optional.some(21.25)
  ///
  ///     let z = Double(exactly: Float80.nan)
  ///     // z == nil
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable
  @inline(__always)
  public init?(exactly other: Float80) {
    self.init(other)
    // Converting the infinity value is considered value preserving.
    // In other cases, check that we can round-trip and get the same value.
    // NaN always fails.
    if Float80(self) != other {
      return nil
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1115)
#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1118)
}

//===----------------------------------------------------------------------===//
// Standard Operator Table
//===----------------------------------------------------------------------===//

//  TODO: These should not be necessary, since they're already provided by
//  <T: FloatingPoint>, but in practice they are currently needed to
//  disambiguate overloads.  We should find a way to remove them, either by
//  tweaking the overload resolution rules, or by removing the other
//  definitions in the standard lib, or both.

extension Double {
  @_transparent
  public static func + (lhs: Double, rhs: Double) -> Double {
    var lhs = lhs
    lhs += rhs
    return lhs
  }

  @_transparent
  public static func - (lhs: Double, rhs: Double) -> Double {
    var lhs = lhs
    lhs -= rhs
    return lhs
  }

  @_transparent
  public static func * (lhs: Double, rhs: Double) -> Double {
    var lhs = lhs
    lhs *= rhs
    return lhs
  }

  @_transparent
  public static func / (lhs: Double, rhs: Double) -> Double {
    var lhs = lhs
    lhs /= rhs
    return lhs
  }
}

//===----------------------------------------------------------------------===//
// Strideable Conformance
//===----------------------------------------------------------------------===//

extension Double: Strideable {
  @_transparent
  public func distance(to other: Double) -> Double {
    return other - self
  }

  @_transparent
  public func advanced(by amount: Double) -> Double {
    return self + amount
  }
}

//===----------------------------------------------------------------------===//
// AnyHashable
//===----------------------------------------------------------------------===//

internal struct _DoubleAnyHashableBox: _AnyHashableBox {
  internal typealias Base = Double
  internal let _value: Base

  internal init(_ value: Base) {
    self._value = value
  }

  internal var _canonicalBox: _AnyHashableBox {
    // Float and Double are bridged with NSNumber, so we have to follow
    // NSNumber's rules for equality.  I.e., we need to make sure equal
    // numerical values end up in identical boxes after canonicalization, so
    // that _isEqual will consider them equal and they're hashed the same way.
    //
    // Note that these AnyHashable boxes don't currently feed discriminator bits
    // to the hasher, so we allow repeatable collisions. E.g., -1 will always
    // collide with UInt64.max.
    if _value < 0 {
      if let i = Int64(exactly: _value) {
        return _IntegerAnyHashableBox(i)
      }
    } else {
      if let i = UInt64(exactly: _value) {
        return _IntegerAnyHashableBox(i)
      }
    }
    if let d = Double(exactly: _value) {
      return _DoubleAnyHashableBox(d)
    }
    // If a value can't be represented by a Double, keep it in its original
    // representation so that it won't compare equal to approximations. (So that
    // we don't round off Float80 values.)
    return self
  }

  internal func _isEqual(to box: _AnyHashableBox) -> Bool? {
    _internalInvariant(Int64(exactly: _value) == nil, "self isn't canonical")
    _internalInvariant(UInt64(exactly: _value) == nil, "self isn't canonical")
    if let box = box as? _DoubleAnyHashableBox {
      return _value == box._value
    }
    return nil
  }

  internal var _hashValue: Int {
    return _rawHashValue(_seed: 0)
  }

  internal func _hash(into hasher: inout Hasher) {
    _internalInvariant(Int64(exactly: _value) == nil, "self isn't canonical")
    _internalInvariant(UInt64(exactly: _value) == nil, "self isn't canonical")
    hasher.combine(_value)
  }

  internal func _rawHashValue(_seed: Int) -> Int {
    var hasher = Hasher(_seed: _seed)
    _hash(into: &hasher)
    return hasher.finalize()
  }

  internal var _base: Any {
    return _value
  }

  internal func _unbox<T: Hashable>() -> T? {
    return _value as? T
  }

  internal func _downCastConditional<T>(
    into result: UnsafeMutablePointer<T>
  ) -> Bool {
    guard let value = _value as? T else { return false }
    result.initialize(to: value)
    return true
  }
}

//===----------------------------------------------------------------------===//
// Deprecated operators
//===----------------------------------------------------------------------===//

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 55)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 57)
#if !(os(Windows) || os(Android)) && (arch(i386) || arch(x86_64))
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 59)

/// An extended-precision, floating-point value type.
@frozen
public struct Float80 {
  public // @testable
  var _value: Builtin.FPIEEE80

  @_transparent
  public init() {
    let zero: Int64 = 0
    self._value = Builtin.sitofp_Int64_FPIEEE80(zero._value)
  }

  @_transparent
  public // @testable
  init(_ _value: Builtin.FPIEEE80) {
    self._value = _value
  }
}

extension Float80: CustomStringConvertible {
  /// A textual representation of the value.
  public var description: String {
    if isNaN {
      return "nan"
    } else {
      var (buffer, length) = _float80ToString(self, debug: false)
      return buffer.withBytes { (bufferPtr) in
        String._fromASCII(
          UnsafeBufferPointer(start: bufferPtr, count: length))
      }
    }
  }
}

extension Float80: CustomDebugStringConvertible {
  /// A textual representation of the value, suitable for debugging.
  public var debugDescription: String {
    var (buffer, length) = _float80ToString(self, debug: true)
    return buffer.withBytes { (bufferPtr) in
      String._fromASCII(
        UnsafeBufferPointer(start: bufferPtr, count: length))
    }
  }
}

extension Float80: TextOutputStreamable {
  public func write<Target>(to target: inout Target) where Target: TextOutputStream {
    var (buffer, length) = _float80ToString(self, debug: true)
    buffer.withBytes { (bufferPtr) in
      let bufPtr = UnsafeBufferPointer(start: bufferPtr, count: length)
      target._writeASCII(bufPtr)
    }
  }
}

extension Float80: BinaryFloatingPoint {

  // Floating-point types are always symmetric, so Magnitude is Self.
  public typealias Magnitude = Float80

  public typealias Exponent = Int

  public typealias RawSignificand = UInt64

  @inlinable
  public static var exponentBitCount: Int {
    return 15
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 130)
  // `Float80.significandBitCount` is 63, even though 64 bits are used to
  // store the significand in the memory representation of a `Float80`
  // instance. Unlike other floating-point types, the `Float80` type
  // explicitly stores the leading integral significand bit; we abstract
  // that away to present the same user-facing interface as the floating-
  // point types.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 137)
  @inlinable
  public static var significandBitCount: Int {
    return 63
  }

  //  Implementation details.
  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _infinityExponent: UInt {
    @inline(__always) get { return 1 &<< UInt(exponentBitCount) - 1 }
  }

  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _exponentBias: UInt {
    @inline(__always) get { return _infinityExponent &>> 1 }
  }

  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _significandMask: UInt64 {
    @inline(__always) get {
      return 1 &<< UInt64(significandBitCount) - 1
    }
  }

  @inlinable // FIXME(inline-always) was usableFromInline
  internal static var _quietNaNMask: UInt64 {
    @inline(__always) get {
      return 1 &<< UInt64(significandBitCount - 1)
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 256)
  // Internal implementation details of x86 Float80
  @frozen
  @usableFromInline
  internal struct _Representation {
    @usableFromInline
    internal var _storage: (UInt64, UInt16, /* pad */ UInt16, UInt16, UInt16)

    @usableFromInline
    @_transparent
    internal var explicitSignificand: UInt64 { return _storage.0 }

    @usableFromInline
    @_transparent
    internal var signAndExponent: UInt16 { return _storage.1 }

    @usableFromInline
    @_transparent
    internal var sign: FloatingPointSign {
      return FloatingPointSign(rawValue: Int(signAndExponent &>> 15))!
    }

    @usableFromInline
    @_transparent
    internal var exponentBitPattern: UInt {
      return UInt(signAndExponent) & 0x7fff
    }

    @usableFromInline
    @_transparent
    internal init(explicitSignificand: UInt64, signAndExponent: UInt16) {
      _storage = (explicitSignificand, signAndExponent, 0, 0, 0)
    }
  }

  @inlinable
  internal var _representation: _Representation {
    return unsafeBitCast(self, to: _Representation.self)
  }

  @inlinable
  public var sign: FloatingPointSign {
    return _representation.sign
  }

  @inlinable
  internal static var _explicitBitMask: UInt64 {
    @inline(__always) get { return 1 &<< 63 }
  }

  @inlinable
  public var exponentBitPattern: UInt {
    let provisional = _representation.exponentBitPattern
    if provisional == 0 {
      if _representation.explicitSignificand >= Float80._explicitBitMask {
        //  Pseudo-denormals have an exponent of 0 but the leading bit of the
        //  significand field is set.  These are noncanonical encodings of the
        //  same significand with an exponent of 1.
        return 1
      }
      //  Exponent is zero, leading bit of significand is clear, so this is
      //  a canonical zero or subnormal number.
      return 0
    }
    if _representation.explicitSignificand < Float80._explicitBitMask {
      //  If the exponent is not-zero but the leading bit of the significand
      //  is clear, then we have an invalid operand (unnormal, pseudo-inf, or
      //  pseudo-NaN).  All of these are noncanonical encodings of NaN.
      return Float80._infinityExponent
    }
    //  We have a canonical number, so the provisional exponent is correct.
    return provisional
  }

  @inlinable
  public var significandBitPattern: UInt64 {
    if _representation.exponentBitPattern > 0 &&
      _representation.explicitSignificand < Float80._explicitBitMask {
        //  If the exponent is nonzero and the leading bit of the significand
        //  is clear, then we have an invalid operand (unnormal, pseudo-inf, or
        //  pseudo-NaN).  All of these are noncanonical encodings of qNaN.
        return _representation.explicitSignificand | Float80._quietNaNMask
    }
    //  Otherwise we always get the "right" significand by simply clearing the
    //  integral bit.
    return _representation.explicitSignificand & Float80._significandMask
  }

  @inlinable
  public init(sign: FloatingPointSign,
              exponentBitPattern: UInt,
              significandBitPattern: UInt64) {
    let signBit = UInt16(sign == .minus ? 0x8000 : 0)
    let exponent = UInt16(exponentBitPattern)
    var significand = significandBitPattern
    if exponent != 0 { significand |= Float80._explicitBitMask }
    let rep = _Representation(
      explicitSignificand: significand, signAndExponent: signBit|exponent)
    self = unsafeBitCast(rep, to: Float80.self)
  }

  @inlinable
  public var isCanonical: Bool {
    if exponentBitPattern == 0 {
      // If exponent field is zero, canonical numbers have the explicit
      // significand bit clear.
      return _representation.explicitSignificand < Float80._explicitBitMask
    }
    // If exponent is nonzero, canonical values have the explicit significand
    // bit set.
    return _representation.explicitSignificand >= Float80._explicitBitMask
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 368)

  @inlinable
  public static var infinity: Float80 {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 376)
    let rep = _Representation(
      explicitSignificand: Float80._explicitBitMask,
      signAndExponent: 0x7fff
    )
    return unsafeBitCast(rep, to: Float80.self)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 388)
  }

  @inlinable
  public static var nan: Float80 {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 397)
    let rep = _Representation(
      explicitSignificand: Float80._explicitBitMask | Float80._quietNaNMask,
      signAndExponent: 0x7fff
    )
    return unsafeBitCast(rep, to: Float80.self)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 405)
  }

  @inlinable
  public static var signalingNaN: Float80 {
    return Float80(nan: 0, signaling: true)
  }

  @available(*, unavailable, renamed: "nan")
  public static var quietNaN: Float80 { Builtin.unreachable() }

  @inlinable
  public static var greatestFiniteMagnitude: Float80 {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 422)
    return 0x1.fffffffffffffffep16383
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 430)
  }

  @inlinable
  public static var pi: Float80 {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 444)
    return 0x1.921fb54442d1846ap1
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 446)
  }

  @inlinable
  public var ulp: Float80 {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 459)
    guard _fastPath(isFinite) else { return .nan }
    if exponentBitPattern > UInt(Float80.significandBitCount) {
      // self is large enough that self.ulp is normal, so we just compute its
      // exponent and construct it with a significand of zero.
      let ulpExponent =
        exponentBitPattern - UInt(Float80.significandBitCount)
      return Float80(
        sign: .plus,
        exponentBitPattern: ulpExponent,
        significandBitPattern: 0
      )
    }
    if exponentBitPattern >= 1 {
      // self is normal but ulp is subnormal.
      let ulpShift = UInt64(exponentBitPattern - 1)
      return Float80(
        sign: .plus,
        exponentBitPattern: 0,
        significandBitPattern: 1 &<< ulpShift
      )
    }
    return Float80(
      sign: .plus,
      exponentBitPattern: 0,
      significandBitPattern: 1
    )
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 486)
  }

  @inlinable
  public static var leastNormalMagnitude: Float80 {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 495)
    return 0x1p-16382
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 502)
  }

  @inlinable
  public static var leastNonzeroMagnitude: Float80 {
#if arch(arm)
    // On 32b arm, the default FPCR has subnormals flushed to zero.
    return leastNormalMagnitude
#else
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 515)
    return 0x1p-16445
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 523)
#endif
  }

  /// The unit in the last place of 1.0.
  ///
  /// The positive difference between 1.0 and the next greater representable
  /// number. The `ulpOfOne` constant corresponds to the C macros
  /// `FLT_EPSILON`, `DBL_EPSILON`, and others with a similar purpose.
  @inlinable
  public static var ulpOfOne: Float80 {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 538)
    return 0x1p-63
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 540)
  }

  @inlinable
  public var exponent: Int {
    if !isFinite { return .max }
    if isZero { return .min }
    let provisional = Int(exponentBitPattern) - Int(Float80._exponentBias)
    if isNormal { return provisional }
    let shift =
      Float80.significandBitCount - significandBitPattern._binaryLogarithm()
    return provisional + 1 - shift
  }

  @inlinable
  public var significand: Float80 {
    if isNaN { return self }
    if isNormal {
      return Float80(sign: .plus,
        exponentBitPattern: Float80._exponentBias,
        significandBitPattern: significandBitPattern)
    }
    if isSubnormal {
      let shift =
        Float80.significandBitCount - significandBitPattern._binaryLogarithm()
      return Float80(
        sign: .plus,
        exponentBitPattern: Float80._exponentBias,
        significandBitPattern: significandBitPattern &<< shift
      )
    }
    // zero or infinity.
    return Float80(
      sign: .plus,
      exponentBitPattern: exponentBitPattern,
      significandBitPattern: 0
    )
  }

  @inlinable
  public init(sign: FloatingPointSign, exponent: Int, significand: Float80) {
    var result = significand
    if sign == .minus { result = -result }
    if significand.isFinite && !significand.isZero {
      var clamped = exponent
      let leastNormalExponent = 1 - Int(Float80._exponentBias)
      let greatestFiniteExponent = Int(Float80._exponentBias)
      if clamped < leastNormalExponent {
        clamped = max(clamped, 3*leastNormalExponent)
        while clamped < leastNormalExponent {
          result  *= Float80.leastNormalMagnitude
          clamped -= leastNormalExponent
        }
      }
      else if clamped > greatestFiniteExponent {
        clamped = min(clamped, 3*greatestFiniteExponent)
        let step = Float80(sign: .plus,
          exponentBitPattern: Float80._infinityExponent - 1,
          significandBitPattern: 0)
        while clamped > greatestFiniteExponent {
          result  *= step
          clamped -= greatestFiniteExponent
        }
      }
      let scale = Float80(
        sign: .plus,
        exponentBitPattern: UInt(Int(Float80._exponentBias) + clamped),
        significandBitPattern: 0
      )
      result = result * scale
    }
    self = result
  }
  
  /// Creates a NaN ("not a number") value with the specified payload.
  ///
  /// NaN values compare not equal to every value, including themselves. Most
  /// operations with a NaN operand produce a NaN result. Don't use the
  /// equal-to operator (`==`) to test whether a value is NaN. Instead, use
  /// the value's `isNaN` property.
  ///
  ///     let x = Float80(nan: 0, signaling: false)
  ///     print(x == .nan)
  ///     // Prints "false"
  ///     print(x.isNaN)
  ///     // Prints "true"
  ///
  /// - Parameters:
  ///   - payload: The payload to use for the new NaN value.
  ///   - signaling: Pass `true` to create a signaling NaN or `false` to create
  ///     a quiet NaN.
  @inlinable
  public init(nan payload: RawSignificand, signaling: Bool) {
    // We use significandBitCount - 2 bits for NaN payload.
    _precondition(payload < (Float80._quietNaNMask &>> 1),
      "NaN payload is not encodable.")
    var significand = payload
    significand |= Float80._quietNaNMask &>> (signaling ? 1 : 0)
    self.init(
      sign: .plus,
      exponentBitPattern: Float80._infinityExponent,
      significandBitPattern: significand
    )
  }

  @inlinable
  public var nextUp: Float80 {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 661)
    if isNaN { /* Silence signaling NaNs. */ return self + 0 }
    if sign == .minus {
      if significandBitPattern == 0 {
        if exponentBitPattern == 0 {
          return .leastNonzeroMagnitude
        }
        return Float80(sign: .minus,
          exponentBitPattern: exponentBitPattern - 1,
          significandBitPattern: Float80._significandMask)
      }
      return Float80(sign: .minus,
        exponentBitPattern: exponentBitPattern,
        significandBitPattern: significandBitPattern - 1)
    }
    if isInfinite { return self }
    if significandBitPattern == Float80._significandMask {
      return Float80(sign: .plus,
        exponentBitPattern: exponentBitPattern + 1,
        significandBitPattern: 0)
    }
    return Float80(sign: .plus,
      exponentBitPattern: exponentBitPattern,
      significandBitPattern: significandBitPattern + 1)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 685)
  }

  //  For core standard library floating-point types, LLVM can lower copysign
  //  for us; this gets somewhat better codegen than the generic implementation,
  //  but more importantly allows it to participate in other optimizations
  //  at the LLVM level.
  @_transparent
  public init(signOf sign: Float80, magnitudeOf mag: Float80) {
    _value = Builtin.int_copysign_FPIEEE80(mag._value, sign._value)
  }

  @_transparent
  public mutating func round(_ rule: FloatingPointRoundingRule) {
    switch rule {
    case .toNearestOrAwayFromZero:
      _value = Builtin.int_round_FPIEEE80(_value)
    case .toNearestOrEven:
      _value = Builtin.int_rint_FPIEEE80(_value)
    case .towardZero:
      _value = Builtin.int_trunc_FPIEEE80(_value)
    case .awayFromZero:
      if sign == .minus {
        _value = Builtin.int_floor_FPIEEE80(_value)
      }
      else {
        _value = Builtin.int_ceil_FPIEEE80(_value)
      }
    case .up:
      _value = Builtin.int_ceil_FPIEEE80(_value)
    case .down:
      _value = Builtin.int_floor_FPIEEE80(_value)
    @unknown default:
      self._roundSlowPath(rule)
    }
  }
  
  // Slow path for new cases that might have been inlined into an old
  // ABI-stable version of round(_:) called from a newer version. If this is
  // the case, this non-inlinable function will call into the _newer_ version
  // which _will_ support this rounding rule.
  @usableFromInline
  internal mutating func _roundSlowPath(_ rule: FloatingPointRoundingRule) {
    self.round(rule)
  }

  @_transparent
  public mutating func negate() {
    _value = Builtin.fneg_FPIEEE80(self._value)
  }

  @_transparent
  public static func +=(lhs: inout Float80, rhs: Float80) {
    lhs._value = Builtin.fadd_FPIEEE80(lhs._value, rhs._value)
  }

  @_transparent
  public static func -=(lhs: inout Float80, rhs: Float80) {
    lhs._value = Builtin.fsub_FPIEEE80(lhs._value, rhs._value)
  }

  @_transparent
  public static func *=(lhs: inout Float80, rhs: Float80) {
    lhs._value = Builtin.fmul_FPIEEE80(lhs._value, rhs._value)
  }

  @_transparent
  public static func /=(lhs: inout Float80, rhs: Float80) {
    lhs._value = Builtin.fdiv_FPIEEE80(lhs._value, rhs._value)
  }

  @inlinable // FIXME(inline-always)
  @inline(__always)
  public mutating func formRemainder(dividingBy other: Float80) {
    self = _swift_stdlib_remainderl(self, other)
  }

  @inlinable // FIXME(inline-always)
  @inline(__always)
  public mutating func formTruncatingRemainder(dividingBy other: Float80) {
    _value = Builtin.frem_FPIEEE80(self._value, other._value)
  }

  @_transparent
  public mutating func formSquareRoot( ) {
    self = _swift_stdlib_squareRootl(self)
  }

  @_transparent
  public mutating func addProduct(_ lhs: Float80, _ rhs: Float80) {
    _value = Builtin.int_fma_FPIEEE80(lhs._value, rhs._value, _value)
  }

  @_transparent
  public func isEqual(to other: Float80) -> Bool {
    return Bool(Builtin.fcmp_oeq_FPIEEE80(self._value, other._value))
  }

  @_transparent
  public func isLess(than other: Float80) -> Bool {
    return Bool(Builtin.fcmp_olt_FPIEEE80(self._value, other._value))
  }

  @_transparent
  public func isLessThanOrEqualTo(_ other: Float80) -> Bool {
    return Bool(Builtin.fcmp_ole_FPIEEE80(self._value, other._value))
  }

  @inlinable // FIXME(inline-always)
  public var isNormal: Bool {
    @inline(__always)
    get {
      return exponentBitPattern > 0 && isFinite
    }
  }

  @inlinable // FIXME(inline-always)
  public var isFinite: Bool {
    @inline(__always)
    get {
      return exponentBitPattern < Float80._infinityExponent
    }
  }

  @inlinable // FIXME(inline-always)
  public var isZero: Bool {
    @inline(__always)
    get {
      return exponentBitPattern == 0 && significandBitPattern == 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isSubnormal:  Bool {
    @inline(__always)
    get {
      return exponentBitPattern == 0 && significandBitPattern != 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isInfinite:  Bool {
    @inline(__always)
    get {
      return !isFinite && significandBitPattern == 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isNaN:  Bool {
    @inline(__always)
    get {
      return !isFinite && significandBitPattern != 0
    }
  }

  @inlinable // FIXME(inline-always)
  public var isSignalingNaN: Bool {
    @inline(__always)
    get {
      return isNaN && (significandBitPattern & Float80._quietNaNMask) == 0
    }
  }

  @inlinable
  public var binade: Float80 {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 862)
    guard _fastPath(isFinite) else { return .nan }
    if exponentBitPattern != 0 {
      return Float80(sign: sign, exponentBitPattern: exponentBitPattern,
        significandBitPattern: 0)
    }
    if significandBitPattern == 0 { return self }
    // For subnormals, we isolate the leading significand bit.
    let index = significandBitPattern._binaryLogarithm()
    return Float80(sign: sign, exponentBitPattern: 0,
      significandBitPattern: 1 &<< index)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 873)
  }

  @inlinable
  public var significandWidth: Int {
    let trailingZeroBits = significandBitPattern.trailingZeroBitCount
    if isNormal {
      guard significandBitPattern != 0 else { return 0 }
      return Float80.significandBitCount &- trailingZeroBits
    }
    if isSubnormal {
      let leadingZeroBits = significandBitPattern.leadingZeroBitCount
      return UInt64.bitWidth &- (trailingZeroBits &+ leadingZeroBits &+ 1)
    }
    return -1
  }

  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(floatLiteral value: Float80) {
    self = value
  }
}

extension Float80: _ExpressibleByBuiltinIntegerLiteral, ExpressibleByIntegerLiteral {
  @_transparent
  public
  init(_builtinIntegerLiteral value: Builtin.IntLiteral){
    self = Float80(Builtin.itofp_with_overflow_IntLiteral_FPIEEE80(value))
  }

  @_transparent
  public init(integerLiteral value: Int64) {
    self = Float80(Builtin.sitofp_Int64_FPIEEE80(value._value))
  }
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 912)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 914)
extension Float80: _ExpressibleByBuiltinFloatLiteral {
  @_transparent
  public
  init(_builtinFloatLiteral value: Builtin.FPIEEE80) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 919)
    self = Float80(value)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 926)
  }
}

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 951)

extension Float80: Hashable {
  @inlinable
  public func hash(into hasher: inout Hasher) {
    var v = self
    if isZero {
      // To satisfy the axiom that equality implies hash equality, we need to
      // finesse the hash value of -0.0 to match +0.0.
      v = 0
    }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 962)
    hasher.combine(v._representation.signAndExponent)
    hasher.combine(v.significandBitPattern)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 967)
  }

  @inlinable
  public func _rawHashValue(seed: Int) -> Int {
    // To satisfy the axiom that equality implies hash equality, we need to
    // finesse the hash value of -0.0 to match +0.0.
    let v = isZero ? 0 : self
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 975)
    var hasher = Hasher(_seed: seed)
    hasher.combine(v._representation.signAndExponent)
    hasher.combine(v.significandBitPattern)
    return hasher._finalize()
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 984)
  }
}

extension Float80: _HasCustomAnyHashableRepresentation {
  // Not @inlinable
  public func _toCustomAnyHashable() -> AnyHashable? {
    return AnyHashable(_box: _Float80AnyHashableBox(self))
  }
}

extension Float80 {
  @inlinable // FIXME(inline-always)
  public var magnitude: Float80 {
    @inline(__always)
    get {
      return Float80(Builtin.int_fabs_FPIEEE80(_value))
    }
  }
}

extension Float80 {
  @_transparent
  public static prefix func - (x: Float80) -> Float80 {
    return Float80(Builtin.fneg_FPIEEE80(x._value))
  }
}

//===----------------------------------------------------------------------===//
// Explicit conversions between types.
//===----------------------------------------------------------------------===//

// Construction from other concrete types.
extension Float80 {

  // We "shouldn't" need this, but the typechecker barfs on an expression
  // in the test suite without it.
  // If replaced with @inline(__always) the init no longer gets
  // inlined in -Onone and this breaks the abi_v7k test in a subtle way.
  @_transparent
  public init(_ v: Int) {
    _value = Builtin.sitofp_Int64_FPIEEE80(v._value)
  }

  // Fast-path for conversion when the source is representable as a 64-bit int,
  // falling back on the generic _convert operation otherwise.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init<Source: BinaryInteger>(_ value: Source) {
    if value.bitWidth <= 64 {
      if Source.isSigned {
        let asInt = Int(truncatingIfNeeded: value)
        _value = Builtin.sitofp_Int64_FPIEEE80(asInt._value)
      } else {
        let asUInt = Int(truncatingIfNeeded: value)
        _value = Builtin.uitofp_Int64_FPIEEE80(asUInt._value)
      }
    } else {
      self = Float80._convert(from: value).value
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1048)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1052)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1060)
  /// Creates a new instance that approximates the given value.
  ///
  /// The value of `other` is rounded to a representable value, if necessary.
  /// A NaN passed as `other` results in another NaN, with a signaling NaN
  /// value converted to quiet NaN.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1066)
  ///
  ///     let x: Float = 21.25
  ///     let y = Float80(x)
  ///     // y == 21.25
  ///
  ///     let z = Float80(Float.nan)
  ///     // z.isNaN == true
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(_ other: Float) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1081)
    _value = Builtin.fpext_FPIEEE32_FPIEEE80(other._value)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1085)
  }

  /// Creates a new instance initialized to the given value, if it can be
  /// represented without rounding.
  ///
  /// If `other` can't be represented as an instance of `Float80` without
  /// rounding, the result of this initializer is `nil`. In particular,
  /// passing NaN as `other` always results in `nil`.
  ///
  ///     let x: Float = 21.25
  ///     let y = Float80(exactly: x)
  ///     // y == Optional.some(21.25)
  ///
  ///     let z = Float80(exactly: Float.nan)
  ///     // z == nil
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable
  @inline(__always)
  public init?(exactly other: Float) {
    self.init(other)
    // Converting the infinity value is considered value preserving.
    // In other cases, check that we can round-trip and get the same value.
    // NaN always fails.
    if Float(self) != other {
      return nil
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1048)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1052)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1060)
  /// Creates a new instance that approximates the given value.
  ///
  /// The value of `other` is rounded to a representable value, if necessary.
  /// A NaN passed as `other` results in another NaN, with a signaling NaN
  /// value converted to quiet NaN.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1066)
  ///
  ///     let x: Double = 21.25
  ///     let y = Float80(x)
  ///     // y == 21.25
  ///
  ///     let z = Float80(Double.nan)
  ///     // z.isNaN == true
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(_ other: Double) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1081)
    _value = Builtin.fpext_FPIEEE64_FPIEEE80(other._value)
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1085)
  }

  /// Creates a new instance initialized to the given value, if it can be
  /// represented without rounding.
  ///
  /// If `other` can't be represented as an instance of `Float80` without
  /// rounding, the result of this initializer is `nil`. In particular,
  /// passing NaN as `other` always results in `nil`.
  ///
  ///     let x: Double = 21.25
  ///     let y = Float80(exactly: x)
  ///     // y == Optional.some(21.25)
  ///
  ///     let z = Float80(exactly: Double.nan)
  ///     // z == nil
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable
  @inline(__always)
  public init?(exactly other: Double) {
    self.init(other)
    // Converting the infinity value is considered value preserving.
    // In other cases, check that we can round-trip and get the same value.
    // NaN always fails.
    if Double(self) != other {
      return nil
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1048)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1052)

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1054)
  /// Creates a new instance initialized to the given value.
  ///
  /// The value of `other` is represented exactly by the new instance. A NaN
  /// passed as `other` results in another NaN, with a signaling NaN value
  /// converted to quiet NaN.
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1066)
  ///
  ///     let x: Float80 = 21.25
  ///     let y = Float80(x)
  ///     // y == 21.25
  ///
  ///     let z = Float80(Float80.nan)
  ///     // z.isNaN == true
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable // FIXME(inline-always)
  @inline(__always)
  public init(_ other: Float80) {
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1083)
    _value = other._value
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1085)
  }

  /// Creates a new instance initialized to the given value, if it can be
  /// represented without rounding.
  ///
  /// If `other` can't be represented as an instance of `Float80` without
  /// rounding, the result of this initializer is `nil`. In particular,
  /// passing NaN as `other` always results in `nil`.
  ///
  ///     let x: Float80 = 21.25
  ///     let y = Float80(exactly: x)
  ///     // y == Optional.some(21.25)
  ///
  ///     let z = Float80(exactly: Float80.nan)
  ///     // z == nil
  ///
  /// - Parameter other: The value to use for the new instance.
  @inlinable
  @inline(__always)
  public init?(exactly other: Float80) {
    self.init(other)
    // Converting the infinity value is considered value preserving.
    // In other cases, check that we can round-trip and get the same value.
    // NaN always fails.
    if Float80(self) != other {
      return nil
    }
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1118)
}

//===----------------------------------------------------------------------===//
// Standard Operator Table
//===----------------------------------------------------------------------===//

//  TODO: These should not be necessary, since they're already provided by
//  <T: FloatingPoint>, but in practice they are currently needed to
//  disambiguate overloads.  We should find a way to remove them, either by
//  tweaking the overload resolution rules, or by removing the other
//  definitions in the standard lib, or both.

extension Float80 {
  @_transparent
  public static func + (lhs: Float80, rhs: Float80) -> Float80 {
    var lhs = lhs
    lhs += rhs
    return lhs
  }

  @_transparent
  public static func - (lhs: Float80, rhs: Float80) -> Float80 {
    var lhs = lhs
    lhs -= rhs
    return lhs
  }

  @_transparent
  public static func * (lhs: Float80, rhs: Float80) -> Float80 {
    var lhs = lhs
    lhs *= rhs
    return lhs
  }

  @_transparent
  public static func / (lhs: Float80, rhs: Float80) -> Float80 {
    var lhs = lhs
    lhs /= rhs
    return lhs
  }
}

//===----------------------------------------------------------------------===//
// Strideable Conformance
//===----------------------------------------------------------------------===//

extension Float80: Strideable {
  @_transparent
  public func distance(to other: Float80) -> Float80 {
    return other - self
  }

  @_transparent
  public func advanced(by amount: Float80) -> Float80 {
    return self + amount
  }
}

//===----------------------------------------------------------------------===//
// AnyHashable
//===----------------------------------------------------------------------===//

internal struct _Float80AnyHashableBox: _AnyHashableBox {
  internal typealias Base = Float80
  internal let _value: Base

  internal init(_ value: Base) {
    self._value = value
  }

  internal var _canonicalBox: _AnyHashableBox {
    // Float and Double are bridged with NSNumber, so we have to follow
    // NSNumber's rules for equality.  I.e., we need to make sure equal
    // numerical values end up in identical boxes after canonicalization, so
    // that _isEqual will consider them equal and they're hashed the same way.
    //
    // Note that these AnyHashable boxes don't currently feed discriminator bits
    // to the hasher, so we allow repeatable collisions. E.g., -1 will always
    // collide with UInt64.max.
    if _value < 0 {
      if let i = Int64(exactly: _value) {
        return _IntegerAnyHashableBox(i)
      }
    } else {
      if let i = UInt64(exactly: _value) {
        return _IntegerAnyHashableBox(i)
      }
    }
    if let d = Double(exactly: _value) {
      return _DoubleAnyHashableBox(d)
    }
    // If a value can't be represented by a Double, keep it in its original
    // representation so that it won't compare equal to approximations. (So that
    // we don't round off Float80 values.)
    return self
  }

  internal func _isEqual(to box: _AnyHashableBox) -> Bool? {
    _internalInvariant(Int64(exactly: _value) == nil, "self isn't canonical")
    _internalInvariant(UInt64(exactly: _value) == nil, "self isn't canonical")
    if let box = box as? _Float80AnyHashableBox {
      return _value == box._value
    }
    return nil
  }

  internal var _hashValue: Int {
    return _rawHashValue(_seed: 0)
  }

  internal func _hash(into hasher: inout Hasher) {
    _internalInvariant(Int64(exactly: _value) == nil, "self isn't canonical")
    _internalInvariant(UInt64(exactly: _value) == nil, "self isn't canonical")
    hasher.combine(_value)
  }

  internal func _rawHashValue(_seed: Int) -> Int {
    var hasher = Hasher(_seed: _seed)
    _hash(into: &hasher)
    return hasher.finalize()
  }

  internal var _base: Any {
    return _value
  }

  internal func _unbox<T: Hashable>() -> T? {
    return _value as? T
  }

  internal func _downCastConditional<T>(
    into result: UnsafeMutablePointer<T>
  ) -> Bool {
    guard let value = _value as? T else { return false }
    result.initialize(to: value)
    return true
  }
}

//===----------------------------------------------------------------------===//
// Deprecated operators
//===----------------------------------------------------------------------===//

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1262)
#else

/// An extended-precision, floating-point value type.
@frozen
@available(*, unavailable, message: "Float80 is only available on non-Windows x86 targets.")
public struct Float80 {
  /// Creates a value initialized to zero.
  @_transparent
  public init() {
    fatalError("Float80 is not available")
  }
}

#endif
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/core/FloatingPointTypes.swift.gyb", line: 1278)

@_transparent
@available(*, unavailable,
  message: "For floating point numbers use truncatingRemainder instead")
public func % <T: BinaryFloatingPoint>(lhs: T, rhs: T) -> T {
  fatalError("% is not available.")
}

@_transparent
@available(*, unavailable,
  message: "For floating point numbers use formTruncatingRemainder instead")
public func %= <T: BinaryFloatingPoint> (lhs: inout T, rhs: T) {
  fatalError("%= is not available.")
}

// Local Variables:
// eval: (read-only-mode 1)
// End:
