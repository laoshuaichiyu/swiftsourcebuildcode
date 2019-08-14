// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/private/SwiftPrivate/AtomicInt.swift.gyb", line: 1)
//===----------------------------------------------------------------------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2018 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

import Swift

// This type intentionally shadows the stdlib one
@available(swift, introduced: 5.0)
public final class _stdlib_AtomicInt {
  internal var _value: Int

  internal var _valuePtr: UnsafeMutablePointer<Int> {
    return _getUnsafePointerToStoredProperties(self).assumingMemoryBound(
      to: Int.self)
  }

  public init(_ value: Int = 0) {
    _value = value
  }

  public func store(_ desired: Int) {
    return _swift_stdlib_atomicStoreInt(object: _valuePtr, desired: desired)
  }

  public func load() -> Int {
    return _swift_stdlib_atomicLoadInt(object: _valuePtr)
  }

// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/private/SwiftPrivate/AtomicInt.swift.gyb", line: 38)
  @discardableResult
  public func fetchAndAdd(_ operand: Int) -> Int {
    return _swift_stdlib_atomicFetchAddInt(
      object: _valuePtr,
      operand: operand)
  }

  public func addAndFetch(_ operand: Int) -> Int {
    return fetchAndAdd(operand) + operand
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/private/SwiftPrivate/AtomicInt.swift.gyb", line: 38)
  @discardableResult
  public func fetchAndAnd(_ operand: Int) -> Int {
    return _swift_stdlib_atomicFetchAndInt(
      object: _valuePtr,
      operand: operand)
  }

  public func andAndFetch(_ operand: Int) -> Int {
    return fetchAndAnd(operand) & operand
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/private/SwiftPrivate/AtomicInt.swift.gyb", line: 38)
  @discardableResult
  public func fetchAndOr(_ operand: Int) -> Int {
    return _swift_stdlib_atomicFetchOrInt(
      object: _valuePtr,
      operand: operand)
  }

  public func orAndFetch(_ operand: Int) -> Int {
    return fetchAndOr(operand) | operand
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/private/SwiftPrivate/AtomicInt.swift.gyb", line: 38)
  @discardableResult
  public func fetchAndXor(_ operand: Int) -> Int {
    return _swift_stdlib_atomicFetchXorInt(
      object: _valuePtr,
      operand: operand)
  }

  public func xorAndFetch(_ operand: Int) -> Int {
    return fetchAndXor(operand) ^ operand
  }
// ###sourceLocation(file: "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/private/SwiftPrivate/AtomicInt.swift.gyb", line: 49)

  public func compareExchange(expected: inout Int, desired: Int) -> Bool {
    var expectedVar = expected
    let result = _swift_stdlib_atomicCompareExchangeStrongInt(
      object: _valuePtr,
      expected: &expectedVar,
      desired: desired)
    expected = expectedVar
    return result
  }
}

