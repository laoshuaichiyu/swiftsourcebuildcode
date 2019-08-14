# Install script for directory: /Users/zhuzhenhua/Documents/SwiftSourceCode/swift/tools/driver

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
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/bin/swift")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/llvm-macosx-x86_64/Release/lib"
        "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      endif()
    endif()
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/bin/swift")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/llvm-macosx-x86_64/Release/lib"
        "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      endif()
    endif()
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/bin/swift")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/llvm-macosx-x86_64/Release/lib"
        "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      endif()
    endif()
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/bin/swift")
    if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift" AND
       NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/llvm-macosx-x86_64/Release/lib"
        "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/swift")
      endif()
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcompilerx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/llvm/cmake/modules/LLVMInstallSymlink.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcompilerx" OR NOT CMAKE_INSTALL_COMPONENT)
  install_symlink(swiftc swift bin)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xautolink-driverx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/llvm/cmake/modules/LLVMInstallSymlink.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xautolink-driverx" OR NOT CMAKE_INSTALL_COMPONENT)
  install_symlink(swift-autolink-extract swift bin)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xeditor-integrationx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/llvm/cmake/modules/LLVMInstallSymlink.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xeditor-integrationx" OR NOT CMAKE_INSTALL_COMPONENT)
  install_symlink(swift-indent swift bin)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcompilerx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/$(CONFIGURATION)$(EFFECTIVE_PLATFORM_NAME)/bin/swiftc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xautolink-driverx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/$(CONFIGURATION)$(EFFECTIVE_PLATFORM_NAME)/bin/swift-autolink-extract")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xeditor-integrationx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/$(CONFIGURATION)$(EFFECTIVE_PLATFORM_NAME)/bin/swift-indent")
endif()

