# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.swift-reflection-test-macosx-x86_64.Debug:
PostBuild.swiftRemoteMirror-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/bin/swift-reflection-test-macosx-x86_64
PostBuild.swiftReflection-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/bin/swift-reflection-test-macosx-x86_64
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/bin/swift-reflection-test-macosx-x86_64
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/bin/swift-reflection-test-macosx-x86_64:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftReflection.a\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/bin/swift-reflection-test-macosx-x86_64


PostBuild.swiftAVFoundation-macosx-x86_64.Debug:
PostBuild.swiftsimd-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreMedia-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib


PostBuild.swiftAccelerate-macosx-x86_64.Debug:
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftos-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAccelerate.dylib


PostBuild.swiftAppKit-macosx-x86_64.Debug:
PostBuild.swiftCoreData-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib


PostBuild.swiftCloudKit-macosx-x86_64.Debug:
PostBuild.swiftCoreLocation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftos-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCloudKit.dylib


PostBuild.swiftCompatibility50-macosx-x86_64.Debug:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCompatibility50.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCompatibility50.a


PostBuild.swiftCompatibilityDynamicReplacements-macosx-x86_64.Debug:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCompatibilityDynamicReplacements.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCompatibilityDynamicReplacements.a


PostBuild.swiftCompression-macosx-x86_64.Debug:
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCompression.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCompression.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCompression.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCompression.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCompression.dylib


PostBuild.swiftContacts-macosx-x86_64.Debug:
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftContacts.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftContacts.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftContacts.dylib


PostBuild.swiftCore-macosx-x86_64.Debug:
PostBuild.swiftRuntime-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib
PostBuild.swiftStdlibStubs-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/runtime/swift-stdlib.build/Debug/swiftRuntime-macosx-x86_64.build/libswiftRuntime-macosx-x86_64.a\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/stubs/swift-stdlib.build/Debug/swiftStdlibStubs-macosx-x86_64.build/libswiftStdlibStubs-macosx-x86_64.a
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib


PostBuild.swiftCoreAudio-macosx-x86_64.Debug:
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib


PostBuild.swiftCoreData-macosx-x86_64.Debug:
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib


PostBuild.swiftCoreFoundation-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib


PostBuild.swiftCoreGraphics-macosx-x86_64.Debug:
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib


PostBuild.swiftCoreImage-macosx-x86_64.Debug:
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib


PostBuild.swiftCoreLocation-macosx-x86_64.Debug:
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib


PostBuild.swiftCoreMedia-macosx-x86_64.Debug:
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib


PostBuild.swiftCryptoTokenKit-macosx-x86_64.Debug:
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib


PostBuild.swiftDarwin-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib


PostBuild.swiftDispatch-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib


PostBuild.swiftFoundation-macosx-x86_64.Debug:
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib


PostBuild.swiftGLKit-macosx-x86_64.Debug:
PostBuild.swiftAppKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftsimd-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib


PostBuild.swiftGameplayKit-macosx-x86_64.Debug:
PostBuild.swiftSceneKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftSpriteKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftGLKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftsimd-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib


PostBuild.swiftIOKit-macosx-x86_64.Debug:
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib


PostBuild.swiftImageRegistrationObjectCOFF-macosx-x86_64.Debug:
PostBuild.swiftImageRegistrationObjectELF-macosx-x86_64.Debug:
PostBuild.swiftIntents-macosx-x86_64.Debug:
PostBuild.swiftCoreLocation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIntents.dylib


PostBuild.swiftMapKit-macosx-x86_64.Debug:
PostBuild.swiftCoreLocation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMapKit.dylib


PostBuild.swiftMetal-macosx-x86_64.Debug:
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftos-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib


PostBuild.swiftMetalKit-macosx-x86_64.Debug:
PostBuild.swiftAppKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftsimd-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetalKit.dylib


PostBuild.swiftModelIO-macosx-x86_64.Debug:
PostBuild.swiftsimd-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib


PostBuild.swiftNaturalLanguage-macosx-x86_64.Debug:
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib


PostBuild.swiftNetwork-macosx-x86_64.Debug:
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNetwork.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNetwork.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftNetwork.dylib


PostBuild.swiftOSLogPrototype-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
PostBuild.swiftos-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib


PostBuild.swiftObjectiveC-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib


PostBuild.swiftOpenCL-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftOpenCL.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftOpenCL.dylib


PostBuild.swiftPhotos-macosx-x86_64.Debug:
PostBuild.swiftAVFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreMedia-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreLocation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftsimd-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftPhotos.dylib


PostBuild.swiftQuartzCore-macosx-x86_64.Debug:
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib


PostBuild.swiftReflection.Debug:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/libswiftReflection.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/libswiftReflection.a


PostBuild.swiftReflection-macosx-x86_64.Debug:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftReflection.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftReflection.a


PostBuild.swiftRemoteMirror.Debug:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/libswiftRemoteMirror.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/libswiftRemoteMirror.a


PostBuild.swiftRemoteMirror-macosx-x86_64.Debug:
PostBuild.swiftReflection-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftReflection.a
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib


PostBuild.swiftRuntime-macosx-x86_64.Debug:
PostBuild.swiftRuntimeUnittest-macosx-x86_64.Debug:
PostBuild.swiftStdlibUnittest-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib


PostBuild.swiftSafariServices-macosx-x86_64.Debug:
PostBuild.swiftAppKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreData-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSafariServices.dylib


PostBuild.swiftSceneKit-macosx-x86_64.Debug:
PostBuild.swiftGLKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftsimd-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib


PostBuild.swiftSpriteKit-macosx-x86_64.Debug:
PostBuild.swiftGLKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftsimd-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib


PostBuild.swiftStdlibCollectionUnittest-macosx-x86_64.Debug:
PostBuild.swiftStdlibUnittest-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib


PostBuild.swiftStdlibStubs-macosx-x86_64.Debug:
PostBuild.swiftStdlibUnicodeUnittest-macosx-x86_64.Debug:
PostBuild.swiftStdlibUnittest-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib


PostBuild.swiftStdlibUnittest-macosx-x86_64.Debug:
PostBuild.swiftSwiftPrivate-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftSwiftPrivateThreadExtras-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftSwiftPrivateLibcExtras-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib


PostBuild.swiftStdlibUnittestFoundationExtras-macosx-x86_64.Debug:
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
PostBuild.swiftStdlibUnittest-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib


PostBuild.swiftSwiftOnoneSupport-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib


PostBuild.swiftSwiftPrivate-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib


PostBuild.swiftSwiftPrivateLibcExtras-macosx-x86_64.Debug:
PostBuild.swiftSwiftPrivate-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib


PostBuild.swiftSwiftPrivateThreadExtras-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib


PostBuild.swiftSwiftReflectionTest-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib


PostBuild.swiftVision-macosx-x86_64.Debug:
PostBuild.swiftCoreImage-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftMetal-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftsimd-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftIOKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftVision.dylib


PostBuild.swiftXCTest-macosx-x86_64.Debug:
PostBuild.swiftAppKit-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftFoundation-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXCTest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXCTest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXCTest.dylib


PostBuild.swiftXPC-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib


PostBuild.swiftos-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftDispatch-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftXPC-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib


PostBuild.swiftsimd-macosx-x86_64.Debug:
PostBuild.swiftCore-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib
PostBuild.swiftDarwin-macosx-x86_64.Debug: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib


PostBuild.swift-reflection-test-macosx-x86_64.Release:
PostBuild.swiftRemoteMirror-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/bin/swift-reflection-test-macosx-x86_64
PostBuild.swiftReflection-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/bin/swift-reflection-test-macosx-x86_64
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/bin/swift-reflection-test-macosx-x86_64
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/bin/swift-reflection-test-macosx-x86_64:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftReflection.a\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/bin/swift-reflection-test-macosx-x86_64


PostBuild.swiftAVFoundation-macosx-x86_64.Release:
PostBuild.swiftsimd-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreMedia-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib


PostBuild.swiftAccelerate-macosx-x86_64.Release:
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftos-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAccelerate.dylib


PostBuild.swiftAppKit-macosx-x86_64.Release:
PostBuild.swiftCoreData-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib


PostBuild.swiftCloudKit-macosx-x86_64.Release:
PostBuild.swiftCoreLocation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftos-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCloudKit.dylib


PostBuild.swiftCompatibility50-macosx-x86_64.Release:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCompatibility50.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCompatibility50.a


PostBuild.swiftCompatibilityDynamicReplacements-macosx-x86_64.Release:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCompatibilityDynamicReplacements.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCompatibilityDynamicReplacements.a


PostBuild.swiftCompression-macosx-x86_64.Release:
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCompression.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCompression.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCompression.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCompression.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCompression.dylib


PostBuild.swiftContacts-macosx-x86_64.Release:
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftContacts.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftContacts.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftContacts.dylib


PostBuild.swiftCore-macosx-x86_64.Release:
PostBuild.swiftRuntime-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib
PostBuild.swiftStdlibStubs-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/runtime/swift-stdlib.build/Release/swiftRuntime-macosx-x86_64.build/libswiftRuntime-macosx-x86_64.a\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/stubs/swift-stdlib.build/Release/swiftStdlibStubs-macosx-x86_64.build/libswiftStdlibStubs-macosx-x86_64.a
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib


PostBuild.swiftCoreAudio-macosx-x86_64.Release:
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib


PostBuild.swiftCoreData-macosx-x86_64.Release:
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib


PostBuild.swiftCoreFoundation-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib


PostBuild.swiftCoreGraphics-macosx-x86_64.Release:
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib


PostBuild.swiftCoreImage-macosx-x86_64.Release:
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib


PostBuild.swiftCoreLocation-macosx-x86_64.Release:
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib


PostBuild.swiftCoreMedia-macosx-x86_64.Release:
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib


PostBuild.swiftCryptoTokenKit-macosx-x86_64.Release:
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib


PostBuild.swiftDarwin-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib


PostBuild.swiftDispatch-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib


PostBuild.swiftFoundation-macosx-x86_64.Release:
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib


PostBuild.swiftGLKit-macosx-x86_64.Release:
PostBuild.swiftAppKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftsimd-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib


PostBuild.swiftGameplayKit-macosx-x86_64.Release:
PostBuild.swiftSceneKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftSpriteKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftGLKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftsimd-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib


PostBuild.swiftIOKit-macosx-x86_64.Release:
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib


PostBuild.swiftImageRegistrationObjectCOFF-macosx-x86_64.Release:
PostBuild.swiftImageRegistrationObjectELF-macosx-x86_64.Release:
PostBuild.swiftIntents-macosx-x86_64.Release:
PostBuild.swiftCoreLocation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIntents.dylib


PostBuild.swiftMapKit-macosx-x86_64.Release:
PostBuild.swiftCoreLocation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMapKit.dylib


PostBuild.swiftMetal-macosx-x86_64.Release:
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftos-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib


PostBuild.swiftMetalKit-macosx-x86_64.Release:
PostBuild.swiftAppKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftsimd-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetalKit.dylib


PostBuild.swiftModelIO-macosx-x86_64.Release:
PostBuild.swiftsimd-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib


PostBuild.swiftNaturalLanguage-macosx-x86_64.Release:
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib


PostBuild.swiftNetwork-macosx-x86_64.Release:
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNetwork.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNetwork.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftNetwork.dylib


PostBuild.swiftOSLogPrototype-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
PostBuild.swiftos-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib


PostBuild.swiftObjectiveC-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib


PostBuild.swiftOpenCL-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftOpenCL.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftOpenCL.dylib


PostBuild.swiftPhotos-macosx-x86_64.Release:
PostBuild.swiftAVFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreMedia-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreLocation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftsimd-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftPhotos.dylib


PostBuild.swiftQuartzCore-macosx-x86_64.Release:
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib


PostBuild.swiftReflection.Release:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/libswiftReflection.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/libswiftReflection.a


PostBuild.swiftReflection-macosx-x86_64.Release:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftReflection.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftReflection.a


PostBuild.swiftRemoteMirror.Release:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/libswiftRemoteMirror.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/libswiftRemoteMirror.a


PostBuild.swiftRemoteMirror-macosx-x86_64.Release:
PostBuild.swiftReflection-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftReflection.a
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib


PostBuild.swiftRuntime-macosx-x86_64.Release:
PostBuild.swiftRuntimeUnittest-macosx-x86_64.Release:
PostBuild.swiftStdlibUnittest-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib


PostBuild.swiftSafariServices-macosx-x86_64.Release:
PostBuild.swiftAppKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreData-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSafariServices.dylib


PostBuild.swiftSceneKit-macosx-x86_64.Release:
PostBuild.swiftGLKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftsimd-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib


PostBuild.swiftSpriteKit-macosx-x86_64.Release:
PostBuild.swiftGLKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftsimd-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib


PostBuild.swiftStdlibCollectionUnittest-macosx-x86_64.Release:
PostBuild.swiftStdlibUnittest-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib


PostBuild.swiftStdlibStubs-macosx-x86_64.Release:
PostBuild.swiftStdlibUnicodeUnittest-macosx-x86_64.Release:
PostBuild.swiftStdlibUnittest-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib


PostBuild.swiftStdlibUnittest-macosx-x86_64.Release:
PostBuild.swiftSwiftPrivate-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftSwiftPrivateThreadExtras-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftSwiftPrivateLibcExtras-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib


PostBuild.swiftStdlibUnittestFoundationExtras-macosx-x86_64.Release:
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
PostBuild.swiftStdlibUnittest-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib


PostBuild.swiftSwiftOnoneSupport-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib


PostBuild.swiftSwiftPrivate-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib


PostBuild.swiftSwiftPrivateLibcExtras-macosx-x86_64.Release:
PostBuild.swiftSwiftPrivate-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib


PostBuild.swiftSwiftPrivateThreadExtras-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib


PostBuild.swiftSwiftReflectionTest-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib


PostBuild.swiftVision-macosx-x86_64.Release:
PostBuild.swiftCoreImage-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftMetal-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftsimd-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftIOKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftVision.dylib


PostBuild.swiftXCTest-macosx-x86_64.Release:
PostBuild.swiftAppKit-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftFoundation-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXCTest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXCTest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXCTest.dylib


PostBuild.swiftXPC-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib


PostBuild.swiftos-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftDispatch-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftXPC-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib


PostBuild.swiftsimd-macosx-x86_64.Release:
PostBuild.swiftCore-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib
PostBuild.swiftDarwin-macosx-x86_64.Release: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib


PostBuild.swift-reflection-test-macosx-x86_64.MinSizeRel:
PostBuild.swiftRemoteMirror-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/bin/swift-reflection-test-macosx-x86_64
PostBuild.swiftReflection-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/bin/swift-reflection-test-macosx-x86_64
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/bin/swift-reflection-test-macosx-x86_64
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/bin/swift-reflection-test-macosx-x86_64:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftReflection.a\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/bin/swift-reflection-test-macosx-x86_64


PostBuild.swiftAVFoundation-macosx-x86_64.MinSizeRel:
PostBuild.swiftsimd-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreMedia-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib


PostBuild.swiftAccelerate-macosx-x86_64.MinSizeRel:
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftos-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAccelerate.dylib


PostBuild.swiftAppKit-macosx-x86_64.MinSizeRel:
PostBuild.swiftCoreData-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib


PostBuild.swiftCloudKit-macosx-x86_64.MinSizeRel:
PostBuild.swiftCoreLocation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftos-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCloudKit.dylib


PostBuild.swiftCompatibility50-macosx-x86_64.MinSizeRel:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCompatibility50.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCompatibility50.a


PostBuild.swiftCompatibilityDynamicReplacements-macosx-x86_64.MinSizeRel:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCompatibilityDynamicReplacements.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCompatibilityDynamicReplacements.a


PostBuild.swiftCompression-macosx-x86_64.MinSizeRel:
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCompression.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCompression.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCompression.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCompression.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCompression.dylib


PostBuild.swiftContacts-macosx-x86_64.MinSizeRel:
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftContacts.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftContacts.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftContacts.dylib


PostBuild.swiftCore-macosx-x86_64.MinSizeRel:
PostBuild.swiftRuntime-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib
PostBuild.swiftStdlibStubs-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/runtime/swift-stdlib.build/MinSizeRel/swiftRuntime-macosx-x86_64.build/libswiftRuntime-macosx-x86_64.a\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/stubs/swift-stdlib.build/MinSizeRel/swiftStdlibStubs-macosx-x86_64.build/libswiftStdlibStubs-macosx-x86_64.a
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib


PostBuild.swiftCoreAudio-macosx-x86_64.MinSizeRel:
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib


PostBuild.swiftCoreData-macosx-x86_64.MinSizeRel:
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib


PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib


PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel:
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib


PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel:
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib


PostBuild.swiftCoreLocation-macosx-x86_64.MinSizeRel:
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib


PostBuild.swiftCoreMedia-macosx-x86_64.MinSizeRel:
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib


PostBuild.swiftCryptoTokenKit-macosx-x86_64.MinSizeRel:
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib


PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib


PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib


PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel:
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib


PostBuild.swiftGLKit-macosx-x86_64.MinSizeRel:
PostBuild.swiftAppKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftsimd-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib


PostBuild.swiftGameplayKit-macosx-x86_64.MinSizeRel:
PostBuild.swiftSceneKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftSpriteKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftGLKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftsimd-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib


PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel:
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib


PostBuild.swiftImageRegistrationObjectCOFF-macosx-x86_64.MinSizeRel:
PostBuild.swiftImageRegistrationObjectELF-macosx-x86_64.MinSizeRel:
PostBuild.swiftIntents-macosx-x86_64.MinSizeRel:
PostBuild.swiftCoreLocation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIntents.dylib


PostBuild.swiftMapKit-macosx-x86_64.MinSizeRel:
PostBuild.swiftCoreLocation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMapKit.dylib


PostBuild.swiftMetal-macosx-x86_64.MinSizeRel:
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftos-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib


PostBuild.swiftMetalKit-macosx-x86_64.MinSizeRel:
PostBuild.swiftAppKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftsimd-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetalKit.dylib


PostBuild.swiftModelIO-macosx-x86_64.MinSizeRel:
PostBuild.swiftsimd-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib


PostBuild.swiftNaturalLanguage-macosx-x86_64.MinSizeRel:
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib


PostBuild.swiftNetwork-macosx-x86_64.MinSizeRel:
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNetwork.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNetwork.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftNetwork.dylib


PostBuild.swiftOSLogPrototype-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
PostBuild.swiftos-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib


PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib


PostBuild.swiftOpenCL-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftOpenCL.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftOpenCL.dylib


PostBuild.swiftPhotos-macosx-x86_64.MinSizeRel:
PostBuild.swiftAVFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreMedia-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreLocation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftsimd-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftPhotos.dylib


PostBuild.swiftQuartzCore-macosx-x86_64.MinSizeRel:
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib


PostBuild.swiftReflection.MinSizeRel:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/libswiftReflection.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/libswiftReflection.a


PostBuild.swiftReflection-macosx-x86_64.MinSizeRel:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftReflection.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftReflection.a


PostBuild.swiftRemoteMirror.MinSizeRel:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/libswiftRemoteMirror.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/libswiftRemoteMirror.a


PostBuild.swiftRemoteMirror-macosx-x86_64.MinSizeRel:
PostBuild.swiftReflection-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftReflection.a
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib


PostBuild.swiftRuntime-macosx-x86_64.MinSizeRel:
PostBuild.swiftRuntimeUnittest-macosx-x86_64.MinSizeRel:
PostBuild.swiftStdlibUnittest-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib


PostBuild.swiftSafariServices-macosx-x86_64.MinSizeRel:
PostBuild.swiftAppKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreData-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSafariServices.dylib


PostBuild.swiftSceneKit-macosx-x86_64.MinSizeRel:
PostBuild.swiftGLKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftsimd-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib


PostBuild.swiftSpriteKit-macosx-x86_64.MinSizeRel:
PostBuild.swiftGLKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftsimd-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib


PostBuild.swiftStdlibCollectionUnittest-macosx-x86_64.MinSizeRel:
PostBuild.swiftStdlibUnittest-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib


PostBuild.swiftStdlibStubs-macosx-x86_64.MinSizeRel:
PostBuild.swiftStdlibUnicodeUnittest-macosx-x86_64.MinSizeRel:
PostBuild.swiftStdlibUnittest-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib


PostBuild.swiftStdlibUnittest-macosx-x86_64.MinSizeRel:
PostBuild.swiftSwiftPrivate-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftSwiftPrivateThreadExtras-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftSwiftPrivateLibcExtras-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib


PostBuild.swiftStdlibUnittestFoundationExtras-macosx-x86_64.MinSizeRel:
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
PostBuild.swiftStdlibUnittest-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib


PostBuild.swiftSwiftOnoneSupport-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib


PostBuild.swiftSwiftPrivate-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib


PostBuild.swiftSwiftPrivateLibcExtras-macosx-x86_64.MinSizeRel:
PostBuild.swiftSwiftPrivate-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib


PostBuild.swiftSwiftPrivateThreadExtras-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib


PostBuild.swiftSwiftReflectionTest-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib


PostBuild.swiftVision-macosx-x86_64.MinSizeRel:
PostBuild.swiftCoreImage-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftMetal-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftsimd-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftIOKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftVision.dylib


PostBuild.swiftXCTest-macosx-x86_64.MinSizeRel:
PostBuild.swiftAppKit-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftFoundation-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXCTest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXCTest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXCTest.dylib


PostBuild.swiftXPC-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib


PostBuild.swiftos-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftDispatch-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftXPC-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib


PostBuild.swiftsimd-macosx-x86_64.MinSizeRel:
PostBuild.swiftCore-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib
PostBuild.swiftDarwin-macosx-x86_64.MinSizeRel: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib


PostBuild.swift-reflection-test-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftRemoteMirror-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/bin/swift-reflection-test-macosx-x86_64
PostBuild.swiftReflection-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/bin/swift-reflection-test-macosx-x86_64
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/bin/swift-reflection-test-macosx-x86_64
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/bin/swift-reflection-test-macosx-x86_64:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftReflection.a\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/bin/swift-reflection-test-macosx-x86_64


PostBuild.swiftAVFoundation-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftsimd-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreMedia-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib


PostBuild.swiftAccelerate-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftos-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAccelerate.dylib


PostBuild.swiftAppKit-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCoreData-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib


PostBuild.swiftCloudKit-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCoreLocation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftos-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCloudKit.dylib


PostBuild.swiftCompatibility50-macosx-x86_64.RelWithDebInfo:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCompatibility50.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCompatibility50.a


PostBuild.swiftCompatibilityDynamicReplacements-macosx-x86_64.RelWithDebInfo:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCompatibilityDynamicReplacements.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCompatibilityDynamicReplacements.a


PostBuild.swiftCompression-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCompression.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCompression.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCompression.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCompression.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCompression.dylib


PostBuild.swiftContacts-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftContacts.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftContacts.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftContacts.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftContacts.dylib


PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftRuntime-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib
PostBuild.swiftStdlibStubs-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/runtime/swift-stdlib.build/RelWithDebInfo/swiftRuntime-macosx-x86_64.build/libswiftRuntime-macosx-x86_64.a\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/stubs/swift-stdlib.build/RelWithDebInfo/swiftStdlibStubs-macosx-x86_64.build/libswiftStdlibStubs-macosx-x86_64.a
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib


PostBuild.swiftCoreAudio-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib


PostBuild.swiftCoreData-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib


PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib


PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib


PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib


PostBuild.swiftCoreLocation-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib


PostBuild.swiftCoreMedia-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib


PostBuild.swiftCryptoTokenKit-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCryptoTokenKit.dylib


PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib


PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib


PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib


PostBuild.swiftGLKit-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftAppKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftsimd-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib


PostBuild.swiftGameplayKit-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftSceneKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftSpriteKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftGLKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftsimd-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGameplayKit.dylib


PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib


PostBuild.swiftImageRegistrationObjectCOFF-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftImageRegistrationObjectELF-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftIntents-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCoreLocation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIntents.dylib


PostBuild.swiftMapKit-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCoreLocation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMapKit.dylib


PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftos-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib


PostBuild.swiftMetalKit-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftAppKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftsimd-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetalKit.dylib


PostBuild.swiftModelIO-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftsimd-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib


PostBuild.swiftNaturalLanguage-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNaturalLanguage.dylib


PostBuild.swiftNetwork-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNetwork.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNetwork.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNetwork.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftNetwork.dylib


PostBuild.swiftOSLogPrototype-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
PostBuild.swiftos-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftOSLogPrototype.dylib


PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib


PostBuild.swiftOpenCL-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftOpenCL.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftOpenCL.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftOpenCL.dylib


PostBuild.swiftPhotos-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftAVFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreMedia-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreLocation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreAudio-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftsimd-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftPhotos.dylib


PostBuild.swiftQuartzCore-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib


PostBuild.swiftReflection.RelWithDebInfo:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/libswiftReflection.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/libswiftReflection.a


PostBuild.swiftReflection-macosx-x86_64.RelWithDebInfo:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftReflection.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftReflection.a


PostBuild.swiftRemoteMirror.RelWithDebInfo:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/libswiftRemoteMirror.a:
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/libswiftRemoteMirror.a


PostBuild.swiftRemoteMirror-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftReflection-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftReflection.a
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib


PostBuild.swiftRuntime-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftRuntimeUnittest-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftStdlibUnittest-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftRuntimeUnittest.dylib


PostBuild.swiftSafariServices-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftAppKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreData-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSafariServices.dylib


PostBuild.swiftSceneKit-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftGLKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftsimd-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib


PostBuild.swiftSpriteKit-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftGLKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftAppKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftModelIO-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreData-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftQuartzCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftsimd-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib


PostBuild.swiftStdlibCollectionUnittest-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftStdlibUnittest-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibCollectionUnittest.dylib


PostBuild.swiftStdlibStubs-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftStdlibUnicodeUnittest-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftStdlibUnittest-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnicodeUnittest.dylib


PostBuild.swiftStdlibUnittest-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftSwiftPrivate-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftSwiftPrivateThreadExtras-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftSwiftPrivateLibcExtras-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib


PostBuild.swiftStdlibUnittestFoundationExtras-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
PostBuild.swiftStdlibUnittest-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittestFoundationExtras.dylib


PostBuild.swiftSwiftOnoneSupport-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftOnoneSupport.dylib


PostBuild.swiftSwiftPrivate-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib


PostBuild.swiftSwiftPrivateLibcExtras-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftSwiftPrivate-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib


PostBuild.swiftSwiftPrivateThreadExtras-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib


PostBuild.swiftSwiftReflectionTest-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftReflectionTest.dylib


PostBuild.swiftVision-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCoreImage-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftMetal-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftsimd-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCoreGraphics-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftIOKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCoreFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftVision.dylib


PostBuild.swiftXCTest-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftAppKit-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftFoundation-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXCTest.dylib
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXCTest.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXCTest.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXCTest.dylib


PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib


PostBuild.swiftos-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftDispatch-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftObjectiveC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib
PostBuild.swiftXPC-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib


PostBuild.swiftsimd-macosx-x86_64.RelWithDebInfo:
PostBuild.swiftCore-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib
PostBuild.swiftDarwin-macosx-x86_64.RelWithDebInfo: /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib:\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib\
	/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib
	/bin/rm -f /Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib




# For each target create a dummy ruleso the target does not have to exist
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftAppKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCore.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreData.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreImage.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDarwin.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftDispatch.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftGLKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftIOKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftMetal.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftModelIO.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftReflection.a:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSceneKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftXPC.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftos.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Debug/lib/swift/macosx/x86_64/libswiftsimd.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftAppKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCore.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreData.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreImage.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDarwin.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftDispatch.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftGLKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftIOKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftMetal.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftModelIO.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftReflection.a:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSceneKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftXPC.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftos.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/MinSizeRel/lib/swift/macosx/x86_64/libswiftsimd.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftAppKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCore.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreData.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreImage.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDarwin.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftDispatch.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftGLKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftIOKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftMetal.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftModelIO.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftReflection.a:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSceneKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftXPC.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftos.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/RelWithDebInfo/lib/swift/macosx/x86_64/libswiftsimd.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAVFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftAppKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCore.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreAudio.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreData.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreGraphics.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreImage.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreLocation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftCoreMedia.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDarwin.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftDispatch.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftFoundation.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftGLKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftIOKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftMetal.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftModelIO.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftObjectiveC.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftQuartzCore.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftReflection.a:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftRemoteMirror.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSceneKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSpriteKit.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftStdlibUnittest.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivate.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateLibcExtras.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftSwiftPrivateThreadExtras.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftXPC.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftos.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/Release/lib/swift/macosx/x86_64/libswiftsimd.dylib:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/runtime/swift-stdlib.build/Debug/swiftRuntime-macosx-x86_64.build/libswiftRuntime-macosx-x86_64.a:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/runtime/swift-stdlib.build/MinSizeRel/swiftRuntime-macosx-x86_64.build/libswiftRuntime-macosx-x86_64.a:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/runtime/swift-stdlib.build/RelWithDebInfo/swiftRuntime-macosx-x86_64.build/libswiftRuntime-macosx-x86_64.a:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/runtime/swift-stdlib.build/Release/swiftRuntime-macosx-x86_64.build/libswiftRuntime-macosx-x86_64.a:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/stubs/swift-stdlib.build/Debug/swiftStdlibStubs-macosx-x86_64.build/libswiftStdlibStubs-macosx-x86_64.a:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/stubs/swift-stdlib.build/MinSizeRel/swiftStdlibStubs-macosx-x86_64.build/libswiftStdlibStubs-macosx-x86_64.a:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/stubs/swift-stdlib.build/RelWithDebInfo/swiftStdlibStubs-macosx-x86_64.build/libswiftStdlibStubs-macosx-x86_64.a:
/Users/zhuzhenhua/Documents/SwiftSourceCode/build/Xcode-ReleaseAssert/swift-macosx-x86_64/stdlib/public/stubs/swift-stdlib.build/Release/swiftStdlibStubs-macosx-x86_64.build/libswiftStdlibStubs-macosx-x86_64.a:
