# Install script for directory: /Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Migrator

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcompilerx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/swift/migrator" TYPE FILE FILES
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Migrator/macos4.json"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Migrator/ios4.json"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Migrator/tvos4.json"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Migrator/watchos4.json"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Migrator/overlay4.json"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Migrator/macos42.json"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Migrator/ios42.json"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Migrator/tvos42.json"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Migrator/watchos42.json"
    "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Migrator/overlay42.json"
    )
endif()
