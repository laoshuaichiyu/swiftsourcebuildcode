# Install script for directory: /Users/zhuzhenhua/Documents/SwiftSourceCode/swift/stdlib/public/Darwin

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/Accelerate/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/AppKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/ARKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/AssetsLibrary/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/AVFoundation/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/CallKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/CloudKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/Compression/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/Contacts/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/CoreAudio/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/CoreData/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/CoreFoundation/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/CoreGraphics/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/CoreImage/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/CoreLocation/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/CoreMedia/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/CryptoTokenKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/Dispatch/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/Foundation/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/GameplayKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/GLKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/HomeKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/IOKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/Intents/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/MapKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/MediaPlayer/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/Metal/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/MetalKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/ModelIO/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/NaturalLanguage/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/Network/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/ObjectiveC/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/OpenCL/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/os/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/Photos/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/QuartzCore/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/SafariServices/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/SceneKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/simd/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/SpriteKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/UIKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/Vision/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/WatchKit/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/XCTest/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/Darwin/XPC/cmake_install.cmake")

endif()
