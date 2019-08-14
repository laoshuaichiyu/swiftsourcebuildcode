#line 7 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
//// Automatically Generated From Trivia.h.gyb.
//// Do Not Edit Directly!
//===--- Trivia.h - Swift Syntax Trivia Interface ---------------*- C++ -*-===//
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
//
// This file defines a data structure representing "trivia" in the Swift
// language, such as formatting text like whitespace, or other pieces of
// syntax that don't affect program behavior, like comments.
//
// All source trivia except for comments are kind of "run-length encoded".
// For example, a token might follow 2 newlines and 2 spaces, like so:
//
// func foo() {
//   var x = 2
// }
//
// Here, the 'var' keyword would have the following "leading" trivia:
// [ Newlines(2), Spaces(2) ]
//
// and the following "trailing" trivia:
// [ Spaces(1) ]
//
// Every terminal token in the tree has "leading" and "trailing" trivia.
//
// There is one basic rule to follow when attaching trivia:
//
// 1. A token owns all of its trailing trivia up to, but not including,
//    the next newline character.
//
// 2. Looking backward in the text, a token owns all of the leading trivia
//    up to and including the first contiguous sequence of newlines characters.
//
// For this example again:
//
// func foo() {
//   var x = 2
// }
//
// 'func'
// - Has no leading trivia.
// - Takes up the space after because of rule 1.
// - Leading: [] Trailing: [ Space(1) ]
//
// 'foo'
// - Has no leading trivia. 'func' ate it as its trailing trivia.
// - Has no trailing trivia, because it is butted up against the next '('.
// - Leading: [] Trailing: []
//
// '('
// - Has no leading or trailing trivia.
// - Leading: [] Trailing: []
//
// ')'
// - Has no leading trivia.
// - Takes up the space after because of rule 1.
// - Leading: [] Trailing: [ Space(1) ]
//
// '{'
// - Has no leading trivia. ')' ate it as its trailing trivia.
// - Has no trailing trivia. Because of Rule 1, it doesn't take the newline.
// - Leading: [] Trailing: []
//
// 'var'
// - Takes the newline and preceding two spaces because of Rule 2.
// - Takes the single space that follows because of Rule 1.
// - Leading: [ Newline(1), Space(2) ] Trailing: [ Space(1) ]
//
// ... and so on.
//
//===----------------------------------------------------------------------===//

#ifndef SWIFT_SYNTAX_TRIVIA_H
#define SWIFT_SYNTAX_TRIVIA_H

#include "swift/Basic/OwnedString.h"
#include "swift/Basic/JSONSerialization.h"
#include "swift/Basic/ByteTreeSerialization.h"
#include "llvm/ADT/FoldingSet.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/YAMLTraits.h"

#include <vector>

namespace swift {
namespace syntax {

class AbsolutePosition;

/// The kind of source trivia, such as spaces, newlines, or comments.
enum class TriviaKind {
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A space ' ' character.
  Space,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A tab '\t' character.
  Tab,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A vertical tab '\v' character.
  VerticalTab,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A form-feed 'f' character.
  Formfeed,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A newline '\n' character.
  Newline,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A newline '\r' character.
  CarriageReturn,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A newline consists of contiguous '\r' and '\n' characters.
  CarriageReturnLineFeed,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A backtick '`' character, used to escape identifiers.
  Backtick,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A developer line comment, starting with '//'
  LineComment,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A developer block comment, starting with '/*' and ending with '*/'.
  BlockComment,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A documentation line comment, starting with '///'.
  DocLineComment,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // A documentation block comment, starting with '/**' and ending with '*/'.
  DocBlockComment,
#line 107 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  // Any skipped garbage text.
  GarbageText,
#line 110 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
};

bool isCommentTriviaKind(TriviaKind kind);

/// A contiguous stretch of a single kind of trivia. The constituent part of
/// a `Trivia` collection.
///
/// For example, four spaces would be represented by
/// { TriviaKind::Space, 4, "" }.
///
/// All trivia except for comments don't need to store text, since they can be
/// reconstituted using their Kind and Count.
///
/// In general, you should deal with the actual Trivia collection instead
/// of individual pieces whenever possible.
class TriviaPiece {
  TriviaKind Kind;
  unsigned Count;
  OwnedString Text;

  TriviaPiece(const TriviaKind Kind, const OwnedString Text)
      : Kind(Kind), Count(1), Text(Text) {}
  TriviaPiece(const TriviaKind Kind, const unsigned Count)
      : Kind(Kind), Count(Count), Text() {}

  friend struct json::ObjectTraits<TriviaPiece>;
  friend struct llvm::yaml::MappingTraits<TriviaPiece>;

public:

#line 142 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece spaces(unsigned Count) {
    return {TriviaKind::Space, Count};
  }
  static TriviaPiece space() {
    return spaces(1);
  }
#line 142 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece tabs(unsigned Count) {
    return {TriviaKind::Tab, Count};
  }
  static TriviaPiece tab() {
    return tabs(1);
  }
#line 142 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece verticalTabs(unsigned Count) {
    return {TriviaKind::VerticalTab, Count};
  }
  static TriviaPiece verticalTab() {
    return verticalTabs(1);
  }
#line 142 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece formfeeds(unsigned Count) {
    return {TriviaKind::Formfeed, Count};
  }
  static TriviaPiece formfeed() {
    return formfeeds(1);
  }
#line 142 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece newlines(unsigned Count) {
    return {TriviaKind::Newline, Count};
  }
  static TriviaPiece newline() {
    return newlines(1);
  }
#line 142 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece carriageReturns(unsigned Count) {
    return {TriviaKind::CarriageReturn, Count};
  }
  static TriviaPiece carriageReturn() {
    return carriageReturns(1);
  }
#line 142 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece carriageReturnLineFeeds(unsigned Count) {
    return {TriviaKind::CarriageReturnLineFeed, Count};
  }
  static TriviaPiece carriageReturnLineFeed() {
    return carriageReturnLineFeeds(1);
  }
#line 142 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece backticks(unsigned Count) {
    return {TriviaKind::Backtick, Count};
  }
  static TriviaPiece backtick() {
    return backticks(1);
  }
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece lineComment(const OwnedString Text) {
    return {TriviaKind::LineComment, Text};
  }
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece blockComment(const OwnedString Text) {
    return {TriviaKind::BlockComment, Text};
  }
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece docLineComment(const OwnedString Text) {
    return {TriviaKind::DocLineComment, Text};
  }
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece docBlockComment(const OwnedString Text) {
    return {TriviaKind::DocBlockComment, Text};
  }
#line 149 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static TriviaPiece garbageText(const OwnedString Text) {
    return {TriviaKind::GarbageText, Text};
  }
#line 154 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"

  static TriviaPiece fromText(TriviaKind kind, StringRef text);

  /// Return kind of the trivia.
  TriviaKind getKind() const { return Kind; }

  /// Return the text of the trivia.
  StringRef getText() const { return Text.str(); }

  /// Return the text of the trivia.
  unsigned getCount() const { return Count; }

  /// Return textual length of the trivia.
  size_t getTextLength() const {
    switch (Kind) {
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::Space:
#line 172 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Count * 1;
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::Tab:
#line 172 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Count * 1;
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::VerticalTab:
#line 172 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Count * 1;
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::Formfeed:
#line 172 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Count * 1;
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::Newline:
#line 172 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Count * 1;
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::CarriageReturn:
#line 172 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Count * 1;
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::CarriageReturnLineFeed:
#line 172 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Count * 2;
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::Backtick:
#line 172 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Count * 1;
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::LineComment:
#line 174 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Text.size();
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::BlockComment:
#line 174 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Text.size();
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::DocLineComment:
#line 174 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Text.size();
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::DocBlockComment:
#line 174 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Text.size();
#line 170 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::GarbageText:
#line 174 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      return Text.size();
#line 177 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    }
    llvm_unreachable("unhandled kind");
  }

  bool isComment() const {
    return isCommentTriviaKind(getKind());
  }

  void accumulateAbsolutePosition(AbsolutePosition &Pos) const;
  
  /// Try to compose this and Next to one TriviaPiece.
  /// It returns true if it is succeeded.
  bool trySquash(const TriviaPiece &Next);

  /// Print a debug representation of this trivia piece to the provided output
  /// stream and indentation level.
  void dump(llvm::raw_ostream &OS, unsigned Indent = 0) const;

  /// Print this piece of trivia to the provided output stream.
  void print(llvm::raw_ostream &OS) const;

  bool operator==(const TriviaPiece &Other) const {
    return Kind == Other.Kind &&
           Count == Other.Count &&
           Text.str().compare(Other.Text.str()) == 0;
  }

  bool operator!=(const TriviaPiece &Other) const {
    return !(*this == Other);
  }

  void Profile(llvm::FoldingSetNodeID &ID) const {
    ID.AddInteger(unsigned(Kind));
    switch (Kind) {
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::Space:
#line 214 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddInteger(Count);
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::Tab:
#line 214 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddInteger(Count);
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::VerticalTab:
#line 214 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddInteger(Count);
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::Formfeed:
#line 214 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddInteger(Count);
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::Newline:
#line 214 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddInteger(Count);
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::CarriageReturn:
#line 214 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddInteger(Count);
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::CarriageReturnLineFeed:
#line 214 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddInteger(Count);
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::Backtick:
#line 214 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddInteger(Count);
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::LineComment:
#line 216 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddString(Text.str());
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::BlockComment:
#line 216 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddString(Text.str());
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::DocLineComment:
#line 216 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddString(Text.str());
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::DocBlockComment:
#line 216 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddString(Text.str());
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 212 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case TriviaKind::GarbageText:
#line 216 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      ID.AddString(Text.str());
#line 218 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    break;
#line 220 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    }
  }
};

using TriviaList = std::vector<TriviaPiece>;

/// A collection of leading or trailing trivia. This is the main data structure
/// for thinking about trivia.
struct Trivia {
  TriviaList Pieces;

  /// Get the begin iterator of the pieces.
  TriviaList::const_iterator begin() const {
    return Pieces.begin();
  }

  /// Get the end iterator of the pieces.
  TriviaList::const_iterator end() const {
    return Pieces.end();
  }

  /// Add a piece to the end of the collection.
  void push_back(const TriviaPiece &Piece) {
    Pieces.push_back(Piece);
  }

  /// Add a piece to the beginning of the collection.
  void push_front(const TriviaPiece &Piece) {
    Pieces.insert(Pieces.begin(), Piece);
  }

  /// Clear pieces.
  void clear() {
    Pieces.clear();
  }

  /// Return a reference to the first piece.
  ///
  /// Precondition: !empty()
  const TriviaPiece &front() const {
    assert(!empty());
    return Pieces.front();
  }

  /// Return a reference to the last piece.
  ///
  /// Precondition: !empty()
  const TriviaPiece &back() const  {
    assert(!empty());
    return Pieces.back();
  }

  /// Remove the last piece from the Trivia collection.
  ///
  /// Precondition: !empty()
  void pop_back() {
    assert(!empty());
    Pieces.pop_back();
  }

  /// Returns true if there are no pieces in this Trivia collection.
  bool empty() const {
    return Pieces.empty();
  }

  /// Return the number of pieces in this Trivia collection.
  size_t size() const {
    return Pieces.size();
  }

  size_t getTextLength() const {
    size_t Len = 0;
    for (auto &P : Pieces)
      Len += P.getTextLength();
    return Len;
  }
  
  /// Append Next TriviaPiece or compose last TriviaPiece and
  /// Next TriviaPiece to one last TriviaPiece if it can.
  void appendOrSquash(const TriviaPiece &Next);

  /// Dump a debug representation of this Trivia collection to standard error.
  void dump() const;

  /// Dump a debug representation of this Trivia collection to the provided
  /// stream and indentation level.
  void dump(llvm::raw_ostream &OS, unsigned Indent = 0) const;

  /// Print all of the pieces to the provided output stream in source order.
  void print(llvm::raw_ostream &OS) const;

  /// Return a new Trivia collection by appending pieces from `Other`.
  Trivia appending(const Trivia &Other) const;
  Trivia operator+(const Trivia &Other) const;

  /// Look for the first TriviaPiece with the DesiredKind. If not found,
  /// returns the end iterator.
  TriviaList::const_iterator find(const TriviaKind DesiredKind) const;

  /// Returns true if the Trivia collection contains a piece of the given Kind.
  bool contains(const TriviaKind Kind) const {
    return find(Kind) != end();
  }

  bool operator==(const Trivia &Other) const {
    if (Pieces.size() != Other.size()) {
      return false;
    }

    for (size_t i = 0; i < Pieces.size(); ++i) {
      if (Pieces[i] != Other.Pieces[i]) {
        return false;
      }
    }

    return true;
  }

  bool operator!=(const Trivia &Other) const {
    return !(*this == Other);
  }

#line 344 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia spaces(unsigned Count) {
    if (Count == 0) {
      return {};
    }
    return {{TriviaPiece::spaces(Count)}};
  }
  static Trivia space() {
    return {{TriviaPiece::spaces(1)}};
  }
#line 344 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia tabs(unsigned Count) {
    if (Count == 0) {
      return {};
    }
    return {{TriviaPiece::tabs(Count)}};
  }
  static Trivia tab() {
    return {{TriviaPiece::tabs(1)}};
  }
#line 344 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia verticalTabs(unsigned Count) {
    if (Count == 0) {
      return {};
    }
    return {{TriviaPiece::verticalTabs(Count)}};
  }
  static Trivia verticalTab() {
    return {{TriviaPiece::verticalTabs(1)}};
  }
#line 344 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia formfeeds(unsigned Count) {
    if (Count == 0) {
      return {};
    }
    return {{TriviaPiece::formfeeds(Count)}};
  }
  static Trivia formfeed() {
    return {{TriviaPiece::formfeeds(1)}};
  }
#line 344 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia newlines(unsigned Count) {
    if (Count == 0) {
      return {};
    }
    return {{TriviaPiece::newlines(Count)}};
  }
  static Trivia newline() {
    return {{TriviaPiece::newlines(1)}};
  }
#line 344 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia carriageReturns(unsigned Count) {
    if (Count == 0) {
      return {};
    }
    return {{TriviaPiece::carriageReturns(Count)}};
  }
  static Trivia carriageReturn() {
    return {{TriviaPiece::carriageReturns(1)}};
  }
#line 344 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia carriageReturnLineFeeds(unsigned Count) {
    if (Count == 0) {
      return {};
    }
    return {{TriviaPiece::carriageReturnLineFeeds(Count)}};
  }
  static Trivia carriageReturnLineFeed() {
    return {{TriviaPiece::carriageReturnLineFeeds(1)}};
  }
#line 344 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia backticks(unsigned Count) {
    if (Count == 0) {
      return {};
    }
    return {{TriviaPiece::backticks(Count)}};
  }
  static Trivia backtick() {
    return {{TriviaPiece::backticks(1)}};
  }
#line 354 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia lineComment(const OwnedString Text) {
    assert(checkTriviaText(Text.str(), TriviaKind::LineComment));
    return {{TriviaPiece::lineComment(Text)}};
  }
#line 354 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia blockComment(const OwnedString Text) {
    assert(checkTriviaText(Text.str(), TriviaKind::BlockComment));
    return {{TriviaPiece::blockComment(Text)}};
  }
#line 354 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia docLineComment(const OwnedString Text) {
    assert(checkTriviaText(Text.str(), TriviaKind::DocLineComment));
    return {{TriviaPiece::docLineComment(Text)}};
  }
#line 354 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia docBlockComment(const OwnedString Text) {
    assert(checkTriviaText(Text.str(), TriviaKind::DocBlockComment));
    return {{TriviaPiece::docBlockComment(Text)}};
  }
#line 354 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  static Trivia garbageText(const OwnedString Text) {
    assert(checkTriviaText(Text.str(), TriviaKind::GarbageText));
    return {{TriviaPiece::garbageText(Text)}};
  }
#line 360 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"

private:
  static bool checkTriviaText(StringRef Text, TriviaKind Kind) {
    switch(Kind) {
    case TriviaKind::LineComment:
      return Text.startswith("//");
    case TriviaKind::BlockComment:
      return Text.startswith("/*") && Text.endswith("*/");
    case TriviaKind::DocLineComment:
      return Text.startswith("///");
    case TriviaKind::DocBlockComment:
      return Text.startswith("/**") && Text.endswith("*/");
    case TriviaKind::GarbageText:
      return !Text.empty();
#line 376 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case TriviaKind::Space: return true;
#line 376 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case TriviaKind::Tab: return true;
#line 376 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case TriviaKind::VerticalTab: return true;
#line 376 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case TriviaKind::Formfeed: return true;
#line 376 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case TriviaKind::Newline: return true;
#line 376 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case TriviaKind::CarriageReturn: return true;
#line 376 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case TriviaKind::CarriageReturnLineFeed: return true;
#line 376 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case TriviaKind::Backtick: return true;
#line 379 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  }
  }
};
} // namespace syntax

namespace byteTree {

template <>
struct WrapperTypeTraits<syntax::TriviaKind> {
  static uint8_t numericValue(const syntax::TriviaKind &Kind) {
    switch (Kind) {
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::Space: return 0;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::Tab: return 1;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::VerticalTab: return 2;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::Formfeed: return 3;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::Newline: return 4;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::CarriageReturn: return 5;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::CarriageReturnLineFeed: return 6;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::Backtick: return 7;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::LineComment: return 8;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::BlockComment: return 9;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::DocLineComment: return 10;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::DocBlockComment: return 11;
#line 391 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  case syntax::TriviaKind::GarbageText: return 12;
#line 393 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    }
    llvm_unreachable("unhandled kind");
  }

  static void write(ByteTreeWriter &Writer, const syntax::TriviaKind &Kind,
                    unsigned Index) {
    Writer.write(numericValue(Kind), Index);
  }
};

template <>
struct ObjectTraits<syntax::TriviaPiece> {
  static unsigned numFields(const syntax::TriviaPiece &Trivia,
                            UserInfoMap &UserInfo) {
    return 2;
  }

  static void write(ByteTreeWriter &Writer, const syntax::TriviaPiece &Trivia,
                    UserInfoMap &UserInfo) {
    Writer.write(Trivia.getKind(), /*Index=*/0);
    // Write the trivia's text or count depending on its kind
    switch (Trivia.getKind()) {
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Space:
#line 418 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(static_cast<uint32_t>(Trivia.getCount()), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Tab:
#line 418 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(static_cast<uint32_t>(Trivia.getCount()), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::VerticalTab:
#line 418 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(static_cast<uint32_t>(Trivia.getCount()), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Formfeed:
#line 418 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(static_cast<uint32_t>(Trivia.getCount()), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Newline:
#line 418 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(static_cast<uint32_t>(Trivia.getCount()), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::CarriageReturn:
#line 418 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(static_cast<uint32_t>(Trivia.getCount()), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::CarriageReturnLineFeed:
#line 418 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(static_cast<uint32_t>(Trivia.getCount()), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Backtick:
#line 418 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(static_cast<uint32_t>(Trivia.getCount()), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::LineComment:
#line 420 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(Trivia.getText(), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::BlockComment:
#line 420 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(Trivia.getText(), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::DocLineComment:
#line 420 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(Trivia.getText(), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::DocBlockComment:
#line 420 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(Trivia.getText(), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 416 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::GarbageText:
#line 420 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      Writer.write(Trivia.getText(), /*Index=*/1);
#line 422 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
#line 424 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    }
  }
};

} // end namespace byteTree

namespace json {
/// Serialization traits for TriviaPiece.
/// - All trivia pieces will have a "kind" key that contains the serialized
///   name of the trivia kind.
/// - Comment trivia will have the associated text of the comment under the
///   "value" key.
/// - All other trivia will have the associated integer count of their
///   occurrences under the "value" key.
template<>
struct ObjectTraits<syntax::TriviaPiece> {
  static void mapping(Output &out, syntax::TriviaPiece &value) {
    auto kind = value.getKind();
    out.mapRequired("kind", kind);
    switch (kind) {
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Space: {
#line 447 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto count = value.getCount();
      out.mapRequired("value", count);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Tab: {
#line 447 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto count = value.getCount();
      out.mapRequired("value", count);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::VerticalTab: {
#line 447 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto count = value.getCount();
      out.mapRequired("value", count);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Formfeed: {
#line 447 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto count = value.getCount();
      out.mapRequired("value", count);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Newline: {
#line 447 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto count = value.getCount();
      out.mapRequired("value", count);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::CarriageReturn: {
#line 447 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto count = value.getCount();
      out.mapRequired("value", count);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::CarriageReturnLineFeed: {
#line 447 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto count = value.getCount();
      out.mapRequired("value", count);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Backtick: {
#line 447 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto count = value.getCount();
      out.mapRequired("value", count);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::LineComment: {
#line 450 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto text = value.getText();
      out.mapRequired("value", text);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::BlockComment: {
#line 450 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto text = value.getText();
      out.mapRequired("value", text);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::DocLineComment: {
#line 450 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto text = value.getText();
      out.mapRequired("value", text);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::DocBlockComment: {
#line 450 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto text = value.getText();
      out.mapRequired("value", text);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 445 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::GarbageText: {
#line 450 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      auto text = value.getText();
      out.mapRequired("value", text);
#line 453 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 456 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    }
  }
};

/// Serialization traits for TriviaKind.
template <>
struct ScalarReferenceTraits<syntax::TriviaKind> {
  static StringRef stringRef(const syntax::TriviaKind &value) {
    switch (value) {
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Space:
      return "\"Space\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Tab:
      return "\"Tab\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::VerticalTab:
      return "\"VerticalTab\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Formfeed:
      return "\"Formfeed\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Newline:
      return "\"Newline\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::CarriageReturn:
      return "\"CarriageReturn\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::CarriageReturnLineFeed:
      return "\"CarriageReturnLineFeed\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::Backtick:
      return "\"Backtick\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::LineComment:
      return "\"LineComment\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::BlockComment:
      return "\"BlockComment\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::DocLineComment:
      return "\"DocLineComment\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::DocBlockComment:
      return "\"DocBlockComment\"";
#line 466 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case syntax::TriviaKind::GarbageText:
      return "\"GarbageText\"";
#line 469 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    }
    llvm_unreachable("unhandled kind");
  }

  static bool mustQuote(StringRef) {
    // The string is already quoted. This is more efficient since it does not
    // check for characters that need to be escaped
    return false;
  }
};
} // namespace json
} // namespace swift

namespace llvm {
namespace yaml {

/// Deserialization traits for TriviaPiece.
/// - All trivia pieces will have a "kind" key that contains the serialized
///   name of the trivia kind.
/// - Comment trivia will have the associated text of the comment under the
///   "value" key.
/// - All other trivia will have the associated integer count of their
///   occurrences under the "value" key.
template<>
struct MappingTraits<swift::syntax::TriviaPiece> {
  static swift::syntax::TriviaPiece mapping(IO &in) {
    swift::syntax::TriviaKind kind;
    in.mapRequired("kind", kind);
    switch (kind) {
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::Space: {
#line 501 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"

/// FIXME: This is a workaround for existing bug from llvm yaml parser
/// which would raise error when deserializing number with trailing character
/// like "1\n". See https://bugs.llvm.org/show_bug.cgi?id=15505
      StringRef str;
      in.mapRequired("value", str);
      unsigned count = std::atoi(str.data());
      return swift::syntax::TriviaPiece(kind, count);
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::Tab: {
#line 501 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"

/// FIXME: This is a workaround for existing bug from llvm yaml parser
/// which would raise error when deserializing number with trailing character
/// like "1\n". See https://bugs.llvm.org/show_bug.cgi?id=15505
      StringRef str;
      in.mapRequired("value", str);
      unsigned count = std::atoi(str.data());
      return swift::syntax::TriviaPiece(kind, count);
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::VerticalTab: {
#line 501 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"

/// FIXME: This is a workaround for existing bug from llvm yaml parser
/// which would raise error when deserializing number with trailing character
/// like "1\n". See https://bugs.llvm.org/show_bug.cgi?id=15505
      StringRef str;
      in.mapRequired("value", str);
      unsigned count = std::atoi(str.data());
      return swift::syntax::TriviaPiece(kind, count);
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::Formfeed: {
#line 501 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"

/// FIXME: This is a workaround for existing bug from llvm yaml parser
/// which would raise error when deserializing number with trailing character
/// like "1\n". See https://bugs.llvm.org/show_bug.cgi?id=15505
      StringRef str;
      in.mapRequired("value", str);
      unsigned count = std::atoi(str.data());
      return swift::syntax::TriviaPiece(kind, count);
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::Newline: {
#line 501 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"

/// FIXME: This is a workaround for existing bug from llvm yaml parser
/// which would raise error when deserializing number with trailing character
/// like "1\n". See https://bugs.llvm.org/show_bug.cgi?id=15505
      StringRef str;
      in.mapRequired("value", str);
      unsigned count = std::atoi(str.data());
      return swift::syntax::TriviaPiece(kind, count);
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::CarriageReturn: {
#line 501 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"

/// FIXME: This is a workaround for existing bug from llvm yaml parser
/// which would raise error when deserializing number with trailing character
/// like "1\n". See https://bugs.llvm.org/show_bug.cgi?id=15505
      StringRef str;
      in.mapRequired("value", str);
      unsigned count = std::atoi(str.data());
      return swift::syntax::TriviaPiece(kind, count);
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::CarriageReturnLineFeed: {
#line 501 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"

/// FIXME: This is a workaround for existing bug from llvm yaml parser
/// which would raise error when deserializing number with trailing character
/// like "1\n". See https://bugs.llvm.org/show_bug.cgi?id=15505
      StringRef str;
      in.mapRequired("value", str);
      unsigned count = std::atoi(str.data());
      return swift::syntax::TriviaPiece(kind, count);
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::Backtick: {
#line 501 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"

/// FIXME: This is a workaround for existing bug from llvm yaml parser
/// which would raise error when deserializing number with trailing character
/// like "1\n". See https://bugs.llvm.org/show_bug.cgi?id=15505
      StringRef str;
      in.mapRequired("value", str);
      unsigned count = std::atoi(str.data());
      return swift::syntax::TriviaPiece(kind, count);
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::LineComment: {
#line 510 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      StringRef text;
      in.mapRequired("value", text);
      return swift::syntax::TriviaPiece(
          kind, swift::OwnedString::makeRefCounted(text));
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::BlockComment: {
#line 510 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      StringRef text;
      in.mapRequired("value", text);
      return swift::syntax::TriviaPiece(
          kind, swift::OwnedString::makeRefCounted(text));
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::DocLineComment: {
#line 510 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      StringRef text;
      in.mapRequired("value", text);
      return swift::syntax::TriviaPiece(
          kind, swift::OwnedString::makeRefCounted(text));
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::DocBlockComment: {
#line 510 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      StringRef text;
      in.mapRequired("value", text);
      return swift::syntax::TriviaPiece(
          kind, swift::OwnedString::makeRefCounted(text));
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 499 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    case swift::syntax::TriviaKind::GarbageText: {
#line 510 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      StringRef text;
      in.mapRequired("value", text);
      return swift::syntax::TriviaPiece(
          kind, swift::OwnedString::makeRefCounted(text));
#line 515 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
      break;
    }
#line 518 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    }
    llvm_unreachable("covered switch");
  }
};

/// Deserialization traits for TriviaKind.
template <>
struct ScalarEnumerationTraits<swift::syntax::TriviaKind> {
  static void enumeration(IO &in, swift::syntax::TriviaKind &value) {
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "Space", swift::syntax::TriviaKind::Space);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "Tab", swift::syntax::TriviaKind::Tab);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "VerticalTab", swift::syntax::TriviaKind::VerticalTab);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "Formfeed", swift::syntax::TriviaKind::Formfeed);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "Newline", swift::syntax::TriviaKind::Newline);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "CarriageReturn", swift::syntax::TriviaKind::CarriageReturn);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "CarriageReturnLineFeed", swift::syntax::TriviaKind::CarriageReturnLineFeed);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "Backtick", swift::syntax::TriviaKind::Backtick);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "LineComment", swift::syntax::TriviaKind::LineComment);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "BlockComment", swift::syntax::TriviaKind::BlockComment);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "DocLineComment", swift::syntax::TriviaKind::DocLineComment);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "DocBlockComment", swift::syntax::TriviaKind::DocBlockComment);
#line 528 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
    in.enumCase(value, "GarbageText", swift::syntax::TriviaKind::GarbageText);
#line 530 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Syntax/Trivia.h.gyb"
  }
};


} // namespace yaml
} // namespace llvm
#endif // SWIFT_SYNTAX_TRIVIA_H
