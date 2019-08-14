# Install script for directory: /Users/zhuzhenhua/Documents/SwiftSourceCode/swift

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensex" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/swift" TYPE FILE FILES "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/LICENSE.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/apinotes/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/include/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/lib/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/tools/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/utils/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/benchmark/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/test/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/unittests/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/docs/cmake_install.cmake")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/cmake/modules/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
