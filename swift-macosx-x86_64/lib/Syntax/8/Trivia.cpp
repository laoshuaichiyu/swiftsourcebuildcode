#line 7 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
//// Automatically Generated From Trivia.cpp.gyb.
//// Do Not Edit Directly!
//===--- Trivia.cpp - Swift Syntax Trivia Implementation ------------------===//
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

#include "swift/Syntax/RawSyntax.h"
#include "swift/Syntax/Trivia.h"

using namespace swift;
using namespace swift::syntax;

TriviaPiece TriviaPiece::fromText(TriviaKind kind, StringRef text) {
  switch (kind) {
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Space:
#line 32 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    assert(text.size() % 1 == 0);
    return TriviaPiece(kind, text.size()/1);
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Tab:
#line 32 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    assert(text.size() % 1 == 0);
    return TriviaPiece(kind, text.size()/1);
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::VerticalTab:
#line 32 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    assert(text.size() % 1 == 0);
    return TriviaPiece(kind, text.size()/1);
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Formfeed:
#line 32 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    assert(text.size() % 1 == 0);
    return TriviaPiece(kind, text.size()/1);
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Newline:
#line 32 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    assert(text.size() % 1 == 0);
    return TriviaPiece(kind, text.size()/1);
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturn:
#line 32 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    assert(text.size() % 1 == 0);
    return TriviaPiece(kind, text.size()/1);
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturnLineFeed:
#line 32 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    assert(text.size() % 2 == 0);
    return TriviaPiece(kind, text.size()/2);
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Backtick:
#line 32 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    assert(text.size() % 1 == 0);
    return TriviaPiece(kind, text.size()/1);
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::LineComment:
#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return TriviaPiece(kind, OwnedString::makeRefCounted(text));
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::BlockComment:
#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return TriviaPiece(kind, OwnedString::makeRefCounted(text));
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocLineComment:
#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return TriviaPiece(kind, OwnedString::makeRefCounted(text));
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocBlockComment:
#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return TriviaPiece(kind, OwnedString::makeRefCounted(text));
#line 30 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::GarbageText:
#line 35 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return TriviaPiece(kind, OwnedString::makeRefCounted(text));
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  }
}

void TriviaPiece::dump(llvm::raw_ostream &OS, unsigned Indent) const {
  for (decltype(Count) i = 0; i < Indent; ++i)
    OS << ' ';
  OS << "(trivia ";

  switch (Kind) {
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Space:
     OS << "space ";
#line 51 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Count;
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Tab:
     OS << "tab ";
#line 51 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Count;
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::VerticalTab:
     OS << "verticalTab ";
#line 51 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Count;
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Formfeed:
     OS << "formfeed ";
#line 51 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Count;
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Newline:
     OS << "newline ";
#line 51 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Count;
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturn:
     OS << "carriageReturn ";
#line 51 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Count;
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturnLineFeed:
     OS << "carriageReturnLineFeed ";
#line 51 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Count;
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Backtick:
     OS << "backtick ";
#line 51 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Count;
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::LineComment:
     OS << "lineComment ";
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS.write_escaped(Text.str());
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::BlockComment:
     OS << "blockComment ";
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS.write_escaped(Text.str());
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocLineComment:
     OS << "docLineComment ";
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS.write_escaped(Text.str());
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocBlockComment:
     OS << "docBlockComment ";
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS.write_escaped(Text.str());
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::GarbageText:
     OS << "garbageText ";
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS.write_escaped(Text.str());
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  }
  OS << ')';
}

bool syntax::isCommentTriviaKind(TriviaKind Kind) {
  switch (Kind) {
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Space:
#line 68 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Tab:
#line 68 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::VerticalTab:
#line 68 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Formfeed:
#line 68 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Newline:
#line 68 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturn:
#line 68 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturnLineFeed:
#line 68 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Backtick:
#line 68 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::LineComment:
#line 66 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return true;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::BlockComment:
#line 66 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return true;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocLineComment:
#line 66 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return true;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocBlockComment:
#line 66 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return true;
#line 64 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::GarbageText:
#line 68 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 71 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  }
  llvm_unreachable("unknown kind");
}

void TriviaPiece::accumulateAbsolutePosition(AbsolutePosition &Pos) const {
  switch (Kind) {
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Space:
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addColumns(Count);
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Tab:
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addColumns(Count);
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::VerticalTab:
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addColumns(Count);
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Formfeed:
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addColumns(Count);
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Newline:
#line 82 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addNewlines(Count, 1);
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturn:
#line 82 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addNewlines(Count, 1);
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturnLineFeed:
#line 82 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addNewlines(Count, 2);
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Backtick:
#line 84 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addColumns(Count);
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::LineComment:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addText(Text.str());
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::BlockComment:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addText(Text.str());
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocLineComment:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addText(Text.str());
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocBlockComment:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addText(Text.str());
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 78 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::GarbageText:
#line 80 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Pos.addText(Text.str());
#line 86 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  break;
#line 88 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  }
}

bool TriviaPiece::trySquash(const TriviaPiece &Next) {
  if (Kind != Next.Kind) { return false; }
  switch (Kind) {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Space:
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Count+= Next.Count;
    return true;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Tab:
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Count+= Next.Count;
    return true;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::VerticalTab:
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Count+= Next.Count;
    return true;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Formfeed:
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Count+= Next.Count;
    return true;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Newline:
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Count+= Next.Count;
    return true;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturn:
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Count+= Next.Count;
    return true;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturnLineFeed:
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Count+= Next.Count;
    return true;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Backtick:
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    Count+= Next.Count;
    return true;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::LineComment:
#line 100 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::BlockComment:
#line 100 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocLineComment:
#line 100 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocBlockComment:
#line 100 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::GarbageText:
#line 100 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return false;
#line 103 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  }
  llvm_unreachable("unknown kind");
}

void TriviaPiece::print(llvm::raw_ostream &OS) const {
  switch (Kind) {
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Space:
#line 113 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    for (unsigned i = 0; i < Count; i ++)
      OS << " ";
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Tab:
#line 113 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    for (unsigned i = 0; i < Count; i ++)
      OS << "\t";
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::VerticalTab:
#line 113 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    for (unsigned i = 0; i < Count; i ++)
      OS << "\v";
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Formfeed:
#line 113 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    for (unsigned i = 0; i < Count; i ++)
      OS << "\f";
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Newline:
#line 113 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    for (unsigned i = 0; i < Count; i ++)
      OS << "\n";
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturn:
#line 113 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    for (unsigned i = 0; i < Count; i ++)
      OS << "\r";
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::CarriageReturnLineFeed:
#line 113 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    for (unsigned i = 0; i < Count; i ++)
      OS << "\r\n";
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::Backtick:
#line 113 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    for (unsigned i = 0; i < Count; i ++)
      OS << "`";
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::LineComment:
#line 116 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Text.str();
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::BlockComment:
#line 116 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Text.str();
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocLineComment:
#line 116 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Text.str();
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::DocBlockComment:
#line 116 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Text.str();
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  case TriviaKind::GarbageText:
#line 116 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    OS << Text.str();
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
    return;
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/Trivia.cpp.gyb"
  }
}

#pragma mark - Trivia collection

void Trivia::appendOrSquash(const TriviaPiece &Next) {
  if (Pieces.size() > 0) {
    TriviaPiece &last = Pieces.back();
    if (last.trySquash(Next)) {
      return;
    }
  }

  push_back(Next);
}

Trivia Trivia::appending(const Trivia &Other) const {
  auto NewPieces = Pieces;
  std::copy(Other.begin(), Other.end(), std::back_inserter(NewPieces));
  return { NewPieces };
}

void Trivia::dump(llvm::raw_ostream &OS, unsigned Indent) const {
  for (const auto &Piece : Pieces) {
    Piece.dump(OS, Indent);
  }
}

void Trivia::dump() const {
  dump(llvm::errs());
}

void Trivia::print(llvm::raw_ostream &OS) const {
  for (const auto &Piece : Pieces) {
    Piece.print(OS);
  }
}

TriviaList::const_iterator Trivia::find(const TriviaKind DesiredKind) const {
  return std::find_if(Pieces.begin(), Pieces.end(),
                      [=](const TriviaPiece &Piece) -> bool {
                        return Piece.getKind() == DesiredKind;
                      });
}

Trivia Trivia::operator+(const Trivia &Other) const {
  auto NewPieces = Pieces;
  std::copy(Other.Pieces.begin(), Other.Pieces.end(),
            std::back_inserter(NewPieces));
  return { NewPieces };
}
