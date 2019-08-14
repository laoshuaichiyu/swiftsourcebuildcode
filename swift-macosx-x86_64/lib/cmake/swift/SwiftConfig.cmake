# This file provides information and services to the final user.



set(SWIFT_VERSION 5.1)
set(SWIFT_MAIN_SRC_DIR /Users/zhuzhenhua/Documents/SwiftSourceCode/swift)

set(SWIFT_INCLUDE_DIRS "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/include;/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include")
set(SWIFT_LIBRARY_DIRS "")

# These variables are duplicated, but they must match the LLVM variables of the
# same name. The variables ending in "S" could some day become lists, and are
# preserved for convention and compatibility.
set(SWIFT_INCLUDE_DIR "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/include;/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include")
set(SWIFT_LIBRARY_DIR "")

set(SWIFT_CMAKE_DIR "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/cmake/modules")
set(SWIFT_BINARY_DIR "/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64")

set(CMARK_TARGETS_FILE /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/cmark-macosx-x86_64/src/CMarkExports.cmake)
if(NOT TARGET libcmark_static AND EXISTS ${CMARK_TARGETS_FILE})
  include(${CMARK_TARGETS_FILE})
endif()

if(NOT TARGET swift)
  set(SWIFT_EXPORTED_TARGETS "swiftCompatibility50-macosx-x86_64;swiftCompatibilityDynamicReplacements-macosx-x86_64;swiftCore-macosx-x86_64;swiftSwiftOnoneSupport-macosx-x86_64;swiftRemoteMirror-macosx-x86_64;swiftDarwin-macosx-x86_64;swiftAccelerate-macosx-x86_64;swiftAppKit-macosx-x86_64;swiftAVFoundation-macosx-x86_64;swiftCloudKit-macosx-x86_64;swiftCompression-macosx-x86_64;swiftContacts-macosx-x86_64;swiftCoreAudio-macosx-x86_64;swiftCoreData-macosx-x86_64;swiftCoreFoundation-macosx-x86_64;swiftCoreGraphics-macosx-x86_64;swiftCoreImage-macosx-x86_64;swiftCoreLocation-macosx-x86_64;swiftCoreMedia-macosx-x86_64;swiftCryptoTokenKit-macosx-x86_64;swiftDispatch-macosx-x86_64;swiftFoundation-macosx-x86_64;swiftGameplayKit-macosx-x86_64;swiftGLKit-macosx-x86_64;swiftIOKit-macosx-x86_64;swiftIntents-macosx-x86_64;swiftMapKit-macosx-x86_64;swiftMetal-macosx-x86_64;swiftMetalKit-macosx-x86_64;swiftModelIO-macosx-x86_64;swiftNaturalLanguage-macosx-x86_64;swiftNetwork-macosx-x86_64;swiftObjectiveC-macosx-x86_64;swiftOpenCL-macosx-x86_64;swiftos-macosx-x86_64;swiftPhotos-macosx-x86_64;swiftQuartzCore-macosx-x86_64;swiftSafariServices-macosx-x86_64;swiftSceneKit-macosx-x86_64;swiftsimd-macosx-x86_64;swiftSpriteKit-macosx-x86_64;swiftVision-macosx-x86_64;swiftXCTest-macosx-x86_64;swiftXPC-macosx-x86_64;swift;sil-opt;swift-ide-test;swift-remoteast-test;swift-demangle;swift-demangle-yamldump;lldb-moduleimport-test;sil-func-extractor;sil-llvm-gen;sil-nm;sil-passpipeline-dumper;swift-llvm-opt;swift-api-digester;swift-ast-script;swift-syntax-test;swift-refactor;swift-syntax-parser-test;swiftSwiftLang-macosx-x86_64;swift-stdlib-tool;swift-reflection-dump;swiftReflection-macosx-x86_64;swiftReflection;swiftRemoteMirror;swiftSwiftPrivate-macosx-x86_64;swiftRuntimeUnittest-macosx-x86_64;swiftStdlibUnicodeUnittest-macosx-x86_64;swiftStdlibCollectionUnittest-macosx-x86_64;swiftSwiftPrivateLibcExtras-macosx-x86_64;swiftSwiftPrivateThreadExtras-macosx-x86_64;swiftStdlibUnittest-macosx-x86_64;swiftOSLogPrototype-macosx-x86_64;swiftStdlibUnittestFoundationExtras-macosx-x86_64;swiftSwiftReflectionTest-macosx-x86_64;swiftAST;swiftASTSectionImporter;swiftBasic;swiftClangImporter;swiftDemangling;swiftDriver;swiftDWARFImporter;swiftFrontend;swiftFrontendTool;swiftIndex;swiftIDE;swiftImmediate;swiftIRGen;swiftLLVMPasses;swiftMarkup;swiftMigrator;swiftOption;swiftParse;swiftParseSIL;swiftPrintAsObjC;swiftRemoteAST;swiftSema;swiftSerialization;swiftDemangle;swiftSIL;swiftSILGen;swiftSILOptimizer;swiftSyntax;swiftSyntaxParse;swiftTBDGen;libSwiftSyntaxParser")
  include("/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/lib/cmake/swift/SwiftExports.cmake")
endif()
