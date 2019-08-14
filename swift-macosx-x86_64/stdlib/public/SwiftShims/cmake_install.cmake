# Install script for directory: /Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xstdlibx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/swift/shims" TYPE FILE FILES
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/AssertionReporting.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/CoreFoundationShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/FoundationShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/GlobalObjects.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/HeapObject.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/KeyPath.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/LibcOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/LibcShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/Random.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/RefCount.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/RuntimeShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/RuntimeStubs.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/SwiftStdbool.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/SwiftStddef.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/SwiftStdint.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/System.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/Target.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/ThreadLocalStorage.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/UnicodeShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/Visibility.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/CoreMediaOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/DispatchOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NetworkOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/OSOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/ObjectiveCOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/SafariServicesOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/UIKitOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/XCTestOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/XPCOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/CoreFoundationOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/CFCharacterSetShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/CFHashingShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/FoundationOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/FoundationShimSupport.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSCalendarShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSCharacterSetShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSCoderShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSDataShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSDictionaryShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSErrorShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSFileManagerShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSIndexPathShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSIndexSetShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSKeyedArchiverShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSLocaleShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSTimeZoneShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/NSUndoManagerShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/ClockKitOverlayShims.h"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/SwiftShims/module.modulemap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-builtin-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/swift/clang" TYPE DIRECTORY FILES "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/llvm-macosx-x86_64/Release/lib/clang/7.0.0/" REGEX "/[^/]*\\.h$")
endif()

