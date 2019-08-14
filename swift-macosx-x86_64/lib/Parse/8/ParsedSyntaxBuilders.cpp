#line 7 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
//// Automatically Generated From ParsedSyntaxBuilders.cpp.gyb.
//// Do Not Edit Directly!
//===------------- ParsedSyntaxBuilders.cpp - Parsed Syntax Building ------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2019 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

#include "swift/Parse/ParsedSyntaxBuilders.h"
#include "swift/Parse/ParsedRawSyntaxRecorder.h"
#include "swift/Parse/SyntaxParsingContext.h"
#include "swift/Syntax/SyntaxNodes.h"

using namespace swift;
using namespace swift::syntax;

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCodeBlockItemSyntaxBuilder &
ParsedCodeBlockItemSyntaxBuilder::useItem(ParsedSyntax Item) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CodeBlockItemSyntax::Cursor::Item)] =
    Item.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCodeBlockItemSyntaxBuilder &
ParsedCodeBlockItemSyntaxBuilder::useSemicolon(ParsedTokenSyntax Semicolon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CodeBlockItemSyntax::Cursor::Semicolon)] =
    Semicolon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCodeBlockItemSyntaxBuilder &
ParsedCodeBlockItemSyntaxBuilder::useErrorTokens(ParsedSyntax ErrorTokens) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CodeBlockItemSyntax::Cursor::ErrorTokens)] =
    ErrorTokens.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedCodeBlockItemSyntax
ParsedCodeBlockItemSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::CodeBlockItem, Layout);
  return ParsedCodeBlockItemSyntax(std::move(raw));
}

ParsedCodeBlockItemSyntax
ParsedCodeBlockItemSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CodeBlockItem,
    Layout, SPCtx);
  return ParsedCodeBlockItemSyntax(std::move(raw));
}

ParsedCodeBlockItemSyntax
ParsedCodeBlockItemSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedCodeBlockItemSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCodeBlockSyntaxBuilder &
ParsedCodeBlockSyntaxBuilder::useLeftBrace(ParsedTokenSyntax LeftBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CodeBlockSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCodeBlockSyntaxBuilder &
ParsedCodeBlockSyntaxBuilder::useStatements(ParsedCodeBlockItemListSyntax Statements) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(StatementsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CodeBlockSyntax::Cursor::Statements)] =
    Statements.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCodeBlockSyntaxBuilder &
ParsedCodeBlockSyntaxBuilder::addStatementsMember(ParsedCodeBlockItemSyntax CodeBlockItem) {
  assert(Layout[cursorIndex(CodeBlockSyntax::Cursor::Statements)].isNull() && "use either 'use' function or 'add', not both");
  StatementsMembers.push_back(std::move(CodeBlockItem.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCodeBlockSyntaxBuilder &
ParsedCodeBlockSyntaxBuilder::useRightBrace(ParsedTokenSyntax RightBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CodeBlockSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedCodeBlockSyntax
ParsedCodeBlockSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::CodeBlock, Layout);
  return ParsedCodeBlockSyntax(std::move(raw));
}

ParsedCodeBlockSyntax
ParsedCodeBlockSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CodeBlock,
    Layout, SPCtx);
  return ParsedCodeBlockSyntax(std::move(raw));
}

ParsedCodeBlockSyntax
ParsedCodeBlockSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedCodeBlockSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_brace, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!StatementsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CodeBlockItemList,
                          StatementsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::CodeBlockItemList, StatementsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CodeBlockItemList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::CodeBlockItemList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_brace, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInOutExprSyntaxBuilder &
ParsedInOutExprSyntaxBuilder::useAmpersand(ParsedTokenSyntax Ampersand) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InOutExprSyntax::Cursor::Ampersand)] =
    Ampersand.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInOutExprSyntaxBuilder &
ParsedInOutExprSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InOutExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedInOutExprSyntax
ParsedInOutExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::InOutExpr, Layout);
  return ParsedInOutExprSyntax(std::move(raw));
}

ParsedInOutExprSyntax
ParsedInOutExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::InOutExpr,
    Layout, SPCtx);
  return ParsedInOutExprSyntax(std::move(raw));
}

ParsedInOutExprSyntax
ParsedInOutExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedInOutExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::amp_prefix, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::amp_prefix, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundColumnExprSyntaxBuilder &
ParsedPoundColumnExprSyntaxBuilder::usePoundColumn(ParsedTokenSyntax PoundColumn) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundColumnExprSyntax::Cursor::PoundColumn)] =
    PoundColumn.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPoundColumnExprSyntax
ParsedPoundColumnExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PoundColumnExpr, Layout);
  return ParsedPoundColumnExprSyntax(std::move(raw));
}

ParsedPoundColumnExprSyntax
ParsedPoundColumnExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PoundColumnExpr,
    Layout, SPCtx);
  return ParsedPoundColumnExprSyntax(std::move(raw));
}

ParsedPoundColumnExprSyntax
ParsedPoundColumnExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPoundColumnExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_column, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_column, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTryExprSyntaxBuilder &
ParsedTryExprSyntaxBuilder::useTryKeyword(ParsedTokenSyntax TryKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TryExprSyntax::Cursor::TryKeyword)] =
    TryKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTryExprSyntaxBuilder &
ParsedTryExprSyntaxBuilder::useQuestionOrExclamationMark(ParsedTokenSyntax QuestionOrExclamationMark) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TryExprSyntax::Cursor::QuestionOrExclamationMark)] =
    QuestionOrExclamationMark.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTryExprSyntaxBuilder &
ParsedTryExprSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TryExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTryExprSyntax
ParsedTryExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TryExpr, Layout);
  return ParsedTryExprSyntax(std::move(raw));
}

ParsedTryExprSyntax
ParsedTryExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TryExpr,
    Layout, SPCtx);
  return ParsedTryExprSyntax(std::move(raw));
}

ParsedTryExprSyntax
ParsedTryExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTryExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_try, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_try, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclNameArgumentSyntaxBuilder &
ParsedDeclNameArgumentSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclNameArgumentSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclNameArgumentSyntaxBuilder &
ParsedDeclNameArgumentSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclNameArgumentSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDeclNameArgumentSyntax
ParsedDeclNameArgumentSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DeclNameArgument, Layout);
  return ParsedDeclNameArgumentSyntax(std::move(raw));
}

ParsedDeclNameArgumentSyntax
ParsedDeclNameArgumentSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DeclNameArgument,
    Layout, SPCtx);
  return ParsedDeclNameArgumentSyntax(std::move(raw));
}

ParsedDeclNameArgumentSyntax
ParsedDeclNameArgumentSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDeclNameArgumentSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::unknown, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::unknown, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclNameArgumentsSyntaxBuilder &
ParsedDeclNameArgumentsSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclNameArgumentsSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclNameArgumentsSyntaxBuilder &
ParsedDeclNameArgumentsSyntaxBuilder::useArguments(ParsedDeclNameArgumentListSyntax Arguments) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ArgumentsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclNameArgumentsSyntax::Cursor::Arguments)] =
    Arguments.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclNameArgumentsSyntaxBuilder &
ParsedDeclNameArgumentsSyntaxBuilder::addArgumentsMember(ParsedDeclNameArgumentSyntax DeclNameArgument) {
  assert(Layout[cursorIndex(DeclNameArgumentsSyntax::Cursor::Arguments)].isNull() && "use either 'use' function or 'add', not both");
  ArgumentsMembers.push_back(std::move(DeclNameArgument.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclNameArgumentsSyntaxBuilder &
ParsedDeclNameArgumentsSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclNameArgumentsSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDeclNameArgumentsSyntax
ParsedDeclNameArgumentsSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DeclNameArguments, Layout);
  return ParsedDeclNameArgumentsSyntax(std::move(raw));
}

ParsedDeclNameArgumentsSyntax
ParsedDeclNameArgumentsSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DeclNameArguments,
    Layout, SPCtx);
  return ParsedDeclNameArgumentsSyntax(std::move(raw));
}

ParsedDeclNameArgumentsSyntax
ParsedDeclNameArgumentsSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDeclNameArgumentsSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ArgumentsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DeclNameArgumentList,
                          ArgumentsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::DeclNameArgumentList, ArgumentsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DeclNameArgumentList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::DeclNameArgumentList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIdentifierExprSyntaxBuilder &
ParsedIdentifierExprSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IdentifierExprSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIdentifierExprSyntaxBuilder &
ParsedIdentifierExprSyntaxBuilder::useDeclNameArguments(ParsedDeclNameArgumentsSyntax DeclNameArguments) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IdentifierExprSyntax::Cursor::DeclNameArguments)] =
    DeclNameArguments.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedIdentifierExprSyntax
ParsedIdentifierExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::IdentifierExpr, Layout);
  return ParsedIdentifierExprSyntax(std::move(raw));
}

ParsedIdentifierExprSyntax
ParsedIdentifierExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IdentifierExpr,
    Layout, SPCtx);
  return ParsedIdentifierExprSyntax(std::move(raw));
}

ParsedIdentifierExprSyntax
ParsedIdentifierExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedIdentifierExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSuperRefExprSyntaxBuilder &
ParsedSuperRefExprSyntaxBuilder::useSuperKeyword(ParsedTokenSyntax SuperKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SuperRefExprSyntax::Cursor::SuperKeyword)] =
    SuperKeyword.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSuperRefExprSyntax
ParsedSuperRefExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SuperRefExpr, Layout);
  return ParsedSuperRefExprSyntax(std::move(raw));
}

ParsedSuperRefExprSyntax
ParsedSuperRefExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SuperRefExpr,
    Layout, SPCtx);
  return ParsedSuperRefExprSyntax(std::move(raw));
}

ParsedSuperRefExprSyntax
ParsedSuperRefExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSuperRefExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_super, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_super, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedNilLiteralExprSyntaxBuilder &
ParsedNilLiteralExprSyntaxBuilder::useNilKeyword(ParsedTokenSyntax NilKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(NilLiteralExprSyntax::Cursor::NilKeyword)] =
    NilKeyword.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedNilLiteralExprSyntax
ParsedNilLiteralExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::NilLiteralExpr, Layout);
  return ParsedNilLiteralExprSyntax(std::move(raw));
}

ParsedNilLiteralExprSyntax
ParsedNilLiteralExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::NilLiteralExpr,
    Layout, SPCtx);
  return ParsedNilLiteralExprSyntax(std::move(raw));
}

ParsedNilLiteralExprSyntax
ParsedNilLiteralExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedNilLiteralExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_nil, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_nil, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDiscardAssignmentExprSyntaxBuilder &
ParsedDiscardAssignmentExprSyntaxBuilder::useWildcard(ParsedTokenSyntax Wildcard) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DiscardAssignmentExprSyntax::Cursor::Wildcard)] =
    Wildcard.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDiscardAssignmentExprSyntax
ParsedDiscardAssignmentExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DiscardAssignmentExpr, Layout);
  return ParsedDiscardAssignmentExprSyntax(std::move(raw));
}

ParsedDiscardAssignmentExprSyntax
ParsedDiscardAssignmentExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DiscardAssignmentExpr,
    Layout, SPCtx);
  return ParsedDiscardAssignmentExprSyntax(std::move(raw));
}

ParsedDiscardAssignmentExprSyntax
ParsedDiscardAssignmentExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDiscardAssignmentExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw__, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw__, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAssignmentExprSyntaxBuilder &
ParsedAssignmentExprSyntaxBuilder::useAssignToken(ParsedTokenSyntax AssignToken) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AssignmentExprSyntax::Cursor::AssignToken)] =
    AssignToken.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAssignmentExprSyntax
ParsedAssignmentExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AssignmentExpr, Layout);
  return ParsedAssignmentExprSyntax(std::move(raw));
}

ParsedAssignmentExprSyntax
ParsedAssignmentExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AssignmentExpr,
    Layout, SPCtx);
  return ParsedAssignmentExprSyntax(std::move(raw));
}

ParsedAssignmentExprSyntax
ParsedAssignmentExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAssignmentExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::equal, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::equal, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSequenceExprSyntaxBuilder &
ParsedSequenceExprSyntaxBuilder::useElements(ParsedExprListSyntax Elements) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ElementsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SequenceExprSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSequenceExprSyntaxBuilder &
ParsedSequenceExprSyntaxBuilder::addElementsMember(ParsedExprSyntax Expression) {
  assert(Layout[cursorIndex(SequenceExprSyntax::Cursor::Elements)].isNull() && "use either 'use' function or 'add', not both");
  ElementsMembers.push_back(std::move(Expression.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSequenceExprSyntax
ParsedSequenceExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SequenceExpr, Layout);
  return ParsedSequenceExprSyntax(std::move(raw));
}

ParsedSequenceExprSyntax
ParsedSequenceExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SequenceExpr,
    Layout, SPCtx);
  return ParsedSequenceExprSyntax(std::move(raw));
}

ParsedSequenceExprSyntax
ParsedSequenceExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSequenceExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ElementsMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ExprList,
                          ElementsMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::ExprList, ElementsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ExprList, {}, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::ExprList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundLineExprSyntaxBuilder &
ParsedPoundLineExprSyntaxBuilder::usePoundLine(ParsedTokenSyntax PoundLine) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundLineExprSyntax::Cursor::PoundLine)] =
    PoundLine.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPoundLineExprSyntax
ParsedPoundLineExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PoundLineExpr, Layout);
  return ParsedPoundLineExprSyntax(std::move(raw));
}

ParsedPoundLineExprSyntax
ParsedPoundLineExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PoundLineExpr,
    Layout, SPCtx);
  return ParsedPoundLineExprSyntax(std::move(raw));
}

ParsedPoundLineExprSyntax
ParsedPoundLineExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPoundLineExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_line, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_line, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundFileExprSyntaxBuilder &
ParsedPoundFileExprSyntaxBuilder::usePoundFile(ParsedTokenSyntax PoundFile) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundFileExprSyntax::Cursor::PoundFile)] =
    PoundFile.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPoundFileExprSyntax
ParsedPoundFileExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PoundFileExpr, Layout);
  return ParsedPoundFileExprSyntax(std::move(raw));
}

ParsedPoundFileExprSyntax
ParsedPoundFileExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PoundFileExpr,
    Layout, SPCtx);
  return ParsedPoundFileExprSyntax(std::move(raw));
}

ParsedPoundFileExprSyntax
ParsedPoundFileExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPoundFileExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_file, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_file, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundFunctionExprSyntaxBuilder &
ParsedPoundFunctionExprSyntaxBuilder::usePoundFunction(ParsedTokenSyntax PoundFunction) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundFunctionExprSyntax::Cursor::PoundFunction)] =
    PoundFunction.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPoundFunctionExprSyntax
ParsedPoundFunctionExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PoundFunctionExpr, Layout);
  return ParsedPoundFunctionExprSyntax(std::move(raw));
}

ParsedPoundFunctionExprSyntax
ParsedPoundFunctionExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PoundFunctionExpr,
    Layout, SPCtx);
  return ParsedPoundFunctionExprSyntax(std::move(raw));
}

ParsedPoundFunctionExprSyntax
ParsedPoundFunctionExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPoundFunctionExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_function, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_function, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundDsohandleExprSyntaxBuilder &
ParsedPoundDsohandleExprSyntaxBuilder::usePoundDsohandle(ParsedTokenSyntax PoundDsohandle) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundDsohandleExprSyntax::Cursor::PoundDsohandle)] =
    PoundDsohandle.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPoundDsohandleExprSyntax
ParsedPoundDsohandleExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PoundDsohandleExpr, Layout);
  return ParsedPoundDsohandleExprSyntax(std::move(raw));
}

ParsedPoundDsohandleExprSyntax
ParsedPoundDsohandleExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PoundDsohandleExpr,
    Layout, SPCtx);
  return ParsedPoundDsohandleExprSyntax(std::move(raw));
}

ParsedPoundDsohandleExprSyntax
ParsedPoundDsohandleExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPoundDsohandleExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_dsohandle, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_dsohandle, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSymbolicReferenceExprSyntaxBuilder &
ParsedSymbolicReferenceExprSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SymbolicReferenceExprSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSymbolicReferenceExprSyntaxBuilder &
ParsedSymbolicReferenceExprSyntaxBuilder::useGenericArgumentClause(ParsedGenericArgumentClauseSyntax GenericArgumentClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SymbolicReferenceExprSyntax::Cursor::GenericArgumentClause)] =
    GenericArgumentClause.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSymbolicReferenceExprSyntax
ParsedSymbolicReferenceExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SymbolicReferenceExpr, Layout);
  return ParsedSymbolicReferenceExprSyntax(std::move(raw));
}

ParsedSymbolicReferenceExprSyntax
ParsedSymbolicReferenceExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SymbolicReferenceExpr,
    Layout, SPCtx);
  return ParsedSymbolicReferenceExprSyntax(std::move(raw));
}

ParsedSymbolicReferenceExprSyntax
ParsedSymbolicReferenceExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSymbolicReferenceExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrefixOperatorExprSyntaxBuilder &
ParsedPrefixOperatorExprSyntaxBuilder::useOperatorToken(ParsedTokenSyntax OperatorToken) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrefixOperatorExprSyntax::Cursor::OperatorToken)] =
    OperatorToken.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrefixOperatorExprSyntaxBuilder &
ParsedPrefixOperatorExprSyntaxBuilder::usePostfixExpression(ParsedExprSyntax PostfixExpression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrefixOperatorExprSyntax::Cursor::PostfixExpression)] =
    PostfixExpression.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPrefixOperatorExprSyntax
ParsedPrefixOperatorExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PrefixOperatorExpr, Layout);
  return ParsedPrefixOperatorExprSyntax(std::move(raw));
}

ParsedPrefixOperatorExprSyntax
ParsedPrefixOperatorExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PrefixOperatorExpr,
    Layout, SPCtx);
  return ParsedPrefixOperatorExprSyntax(std::move(raw));
}

ParsedPrefixOperatorExprSyntax
ParsedPrefixOperatorExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPrefixOperatorExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedBinaryOperatorExprSyntaxBuilder &
ParsedBinaryOperatorExprSyntaxBuilder::useOperatorToken(ParsedTokenSyntax OperatorToken) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(BinaryOperatorExprSyntax::Cursor::OperatorToken)] =
    OperatorToken.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedBinaryOperatorExprSyntax
ParsedBinaryOperatorExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::BinaryOperatorExpr, Layout);
  return ParsedBinaryOperatorExprSyntax(std::move(raw));
}

ParsedBinaryOperatorExprSyntax
ParsedBinaryOperatorExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::BinaryOperatorExpr,
    Layout, SPCtx);
  return ParsedBinaryOperatorExprSyntax(std::move(raw));
}

ParsedBinaryOperatorExprSyntax
ParsedBinaryOperatorExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedBinaryOperatorExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::unknown, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::unknown, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedArrowExprSyntaxBuilder &
ParsedArrowExprSyntaxBuilder::useThrowsToken(ParsedTokenSyntax ThrowsToken) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ArrowExprSyntax::Cursor::ThrowsToken)] =
    ThrowsToken.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedArrowExprSyntaxBuilder &
ParsedArrowExprSyntaxBuilder::useArrowToken(ParsedTokenSyntax ArrowToken) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ArrowExprSyntax::Cursor::ArrowToken)] =
    ArrowToken.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedArrowExprSyntax
ParsedArrowExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ArrowExpr, Layout);
  return ParsedArrowExprSyntax(std::move(raw));
}

ParsedArrowExprSyntax
ParsedArrowExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ArrowExpr,
    Layout, SPCtx);
  return ParsedArrowExprSyntax(std::move(raw));
}

ParsedArrowExprSyntax
ParsedArrowExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedArrowExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::arrow, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::arrow, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFloatLiteralExprSyntaxBuilder &
ParsedFloatLiteralExprSyntaxBuilder::useFloatingDigits(ParsedTokenSyntax FloatingDigits) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FloatLiteralExprSyntax::Cursor::FloatingDigits)] =
    FloatingDigits.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedFloatLiteralExprSyntax
ParsedFloatLiteralExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::FloatLiteralExpr, Layout);
  return ParsedFloatLiteralExprSyntax(std::move(raw));
}

ParsedFloatLiteralExprSyntax
ParsedFloatLiteralExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FloatLiteralExpr,
    Layout, SPCtx);
  return ParsedFloatLiteralExprSyntax(std::move(raw));
}

ParsedFloatLiteralExprSyntax
ParsedFloatLiteralExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedFloatLiteralExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::floating_literal, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::floating_literal, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleExprSyntaxBuilder &
ParsedTupleExprSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleExprSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleExprSyntaxBuilder &
ParsedTupleExprSyntaxBuilder::useElementList(ParsedTupleElementListSyntax ElementList) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ElementListMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleExprSyntax::Cursor::ElementList)] =
    ElementList.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleExprSyntaxBuilder &
ParsedTupleExprSyntaxBuilder::addElementListMember(ParsedTupleElementSyntax TupleElement) {
  assert(Layout[cursorIndex(TupleExprSyntax::Cursor::ElementList)].isNull() && "use either 'use' function or 'add', not both");
  ElementListMembers.push_back(std::move(TupleElement.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleExprSyntaxBuilder &
ParsedTupleExprSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleExprSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTupleExprSyntax
ParsedTupleExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TupleExpr, Layout);
  return ParsedTupleExprSyntax(std::move(raw));
}

ParsedTupleExprSyntax
ParsedTupleExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TupleExpr,
    Layout, SPCtx);
  return ParsedTupleExprSyntax(std::move(raw));
}

ParsedTupleExprSyntax
ParsedTupleExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTupleExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ElementListMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TupleElementList,
                          ElementListMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::TupleElementList, ElementListMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TupleElementList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::TupleElementList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedArrayExprSyntaxBuilder &
ParsedArrayExprSyntaxBuilder::useLeftSquare(ParsedTokenSyntax LeftSquare) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ArrayExprSyntax::Cursor::LeftSquare)] =
    LeftSquare.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedArrayExprSyntaxBuilder &
ParsedArrayExprSyntaxBuilder::useElements(ParsedArrayElementListSyntax Elements) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ElementsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ArrayExprSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedArrayExprSyntaxBuilder &
ParsedArrayExprSyntaxBuilder::addElementsMember(ParsedArrayElementSyntax ArrayElement) {
  assert(Layout[cursorIndex(ArrayExprSyntax::Cursor::Elements)].isNull() && "use either 'use' function or 'add', not both");
  ElementsMembers.push_back(std::move(ArrayElement.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedArrayExprSyntaxBuilder &
ParsedArrayExprSyntaxBuilder::useRightSquare(ParsedTokenSyntax RightSquare) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ArrayExprSyntax::Cursor::RightSquare)] =
    RightSquare.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedArrayExprSyntax
ParsedArrayExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ArrayExpr, Layout);
  return ParsedArrayExprSyntax(std::move(raw));
}

ParsedArrayExprSyntax
ParsedArrayExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ArrayExpr,
    Layout, SPCtx);
  return ParsedArrayExprSyntax(std::move(raw));
}

ParsedArrayExprSyntax
ParsedArrayExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedArrayExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_square, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ElementsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ArrayElementList,
                          ElementsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ArrayElementList, ElementsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ArrayElementList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ArrayElementList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_square, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryExprSyntaxBuilder &
ParsedDictionaryExprSyntaxBuilder::useLeftSquare(ParsedTokenSyntax LeftSquare) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryExprSyntax::Cursor::LeftSquare)] =
    LeftSquare.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryExprSyntaxBuilder &
ParsedDictionaryExprSyntaxBuilder::useContent(ParsedSyntax Content) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryExprSyntax::Cursor::Content)] =
    Content.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryExprSyntaxBuilder &
ParsedDictionaryExprSyntaxBuilder::useRightSquare(ParsedTokenSyntax RightSquare) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryExprSyntax::Cursor::RightSquare)] =
    RightSquare.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDictionaryExprSyntax
ParsedDictionaryExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DictionaryExpr, Layout);
  return ParsedDictionaryExprSyntax(std::move(raw));
}

ParsedDictionaryExprSyntax
ParsedDictionaryExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DictionaryExpr,
    Layout, SPCtx);
  return ParsedDictionaryExprSyntax(std::move(raw));
}

ParsedDictionaryExprSyntax
ParsedDictionaryExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDictionaryExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_square, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_square, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionCallArgumentSyntaxBuilder &
ParsedFunctionCallArgumentSyntaxBuilder::useLabel(ParsedTokenSyntax Label) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionCallArgumentSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionCallArgumentSyntaxBuilder &
ParsedFunctionCallArgumentSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionCallArgumentSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionCallArgumentSyntaxBuilder &
ParsedFunctionCallArgumentSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionCallArgumentSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionCallArgumentSyntaxBuilder &
ParsedFunctionCallArgumentSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionCallArgumentSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedFunctionCallArgumentSyntax
ParsedFunctionCallArgumentSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::FunctionCallArgument, Layout);
  return ParsedFunctionCallArgumentSyntax(std::move(raw));
}

ParsedFunctionCallArgumentSyntax
ParsedFunctionCallArgumentSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionCallArgument,
    Layout, SPCtx);
  return ParsedFunctionCallArgumentSyntax(std::move(raw));
}

ParsedFunctionCallArgumentSyntax
ParsedFunctionCallArgumentSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedFunctionCallArgumentSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleElementSyntaxBuilder &
ParsedTupleElementSyntaxBuilder::useLabel(ParsedTokenSyntax Label) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleElementSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleElementSyntaxBuilder &
ParsedTupleElementSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleElementSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleElementSyntaxBuilder &
ParsedTupleElementSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleElementSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleElementSyntaxBuilder &
ParsedTupleElementSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTupleElementSyntax
ParsedTupleElementSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TupleElement, Layout);
  return ParsedTupleElementSyntax(std::move(raw));
}

ParsedTupleElementSyntax
ParsedTupleElementSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TupleElement,
    Layout, SPCtx);
  return ParsedTupleElementSyntax(std::move(raw));
}

ParsedTupleElementSyntax
ParsedTupleElementSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTupleElementSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedArrayElementSyntaxBuilder &
ParsedArrayElementSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ArrayElementSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedArrayElementSyntaxBuilder &
ParsedArrayElementSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ArrayElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedArrayElementSyntax
ParsedArrayElementSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ArrayElement, Layout);
  return ParsedArrayElementSyntax(std::move(raw));
}

ParsedArrayElementSyntax
ParsedArrayElementSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ArrayElement,
    Layout, SPCtx);
  return ParsedArrayElementSyntax(std::move(raw));
}

ParsedArrayElementSyntax
ParsedArrayElementSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedArrayElementSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryElementSyntaxBuilder &
ParsedDictionaryElementSyntaxBuilder::useKeyExpression(ParsedExprSyntax KeyExpression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryElementSyntax::Cursor::KeyExpression)] =
    KeyExpression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryElementSyntaxBuilder &
ParsedDictionaryElementSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryElementSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryElementSyntaxBuilder &
ParsedDictionaryElementSyntaxBuilder::useValueExpression(ParsedExprSyntax ValueExpression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryElementSyntax::Cursor::ValueExpression)] =
    ValueExpression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryElementSyntaxBuilder &
ParsedDictionaryElementSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDictionaryElementSyntax
ParsedDictionaryElementSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DictionaryElement, Layout);
  return ParsedDictionaryElementSyntax(std::move(raw));
}

ParsedDictionaryElementSyntax
ParsedDictionaryElementSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DictionaryElement,
    Layout, SPCtx);
  return ParsedDictionaryElementSyntax(std::move(raw));
}

ParsedDictionaryElementSyntax
ParsedDictionaryElementSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDictionaryElementSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIntegerLiteralExprSyntaxBuilder &
ParsedIntegerLiteralExprSyntaxBuilder::useDigits(ParsedTokenSyntax Digits) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IntegerLiteralExprSyntax::Cursor::Digits)] =
    Digits.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedIntegerLiteralExprSyntax
ParsedIntegerLiteralExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::IntegerLiteralExpr, Layout);
  return ParsedIntegerLiteralExprSyntax(std::move(raw));
}

ParsedIntegerLiteralExprSyntax
ParsedIntegerLiteralExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IntegerLiteralExpr,
    Layout, SPCtx);
  return ParsedIntegerLiteralExprSyntax(std::move(raw));
}

ParsedIntegerLiteralExprSyntax
ParsedIntegerLiteralExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedIntegerLiteralExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::integer_literal, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::integer_literal, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedBooleanLiteralExprSyntaxBuilder &
ParsedBooleanLiteralExprSyntaxBuilder::useBooleanLiteral(ParsedTokenSyntax BooleanLiteral) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(BooleanLiteralExprSyntax::Cursor::BooleanLiteral)] =
    BooleanLiteral.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedBooleanLiteralExprSyntax
ParsedBooleanLiteralExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::BooleanLiteralExpr, Layout);
  return ParsedBooleanLiteralExprSyntax(std::move(raw));
}

ParsedBooleanLiteralExprSyntax
ParsedBooleanLiteralExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::BooleanLiteralExpr,
    Layout, SPCtx);
  return ParsedBooleanLiteralExprSyntax(std::move(raw));
}

ParsedBooleanLiteralExprSyntax
ParsedBooleanLiteralExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedBooleanLiteralExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_true, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_true, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTernaryExprSyntaxBuilder &
ParsedTernaryExprSyntaxBuilder::useConditionExpression(ParsedExprSyntax ConditionExpression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TernaryExprSyntax::Cursor::ConditionExpression)] =
    ConditionExpression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTernaryExprSyntaxBuilder &
ParsedTernaryExprSyntaxBuilder::useQuestionMark(ParsedTokenSyntax QuestionMark) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TernaryExprSyntax::Cursor::QuestionMark)] =
    QuestionMark.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTernaryExprSyntaxBuilder &
ParsedTernaryExprSyntaxBuilder::useFirstChoice(ParsedExprSyntax FirstChoice) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TernaryExprSyntax::Cursor::FirstChoice)] =
    FirstChoice.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTernaryExprSyntaxBuilder &
ParsedTernaryExprSyntaxBuilder::useColonMark(ParsedTokenSyntax ColonMark) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TernaryExprSyntax::Cursor::ColonMark)] =
    ColonMark.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTernaryExprSyntaxBuilder &
ParsedTernaryExprSyntaxBuilder::useSecondChoice(ParsedExprSyntax SecondChoice) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TernaryExprSyntax::Cursor::SecondChoice)] =
    SecondChoice.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTernaryExprSyntax
ParsedTernaryExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TernaryExpr, Layout);
  return ParsedTernaryExprSyntax(std::move(raw));
}

ParsedTernaryExprSyntax
ParsedTernaryExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TernaryExpr,
    Layout, SPCtx);
  return ParsedTernaryExprSyntax(std::move(raw));
}

ParsedTernaryExprSyntax
ParsedTernaryExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTernaryExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::question_infix, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::question_infix, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberAccessExprSyntaxBuilder &
ParsedMemberAccessExprSyntaxBuilder::useBase(ParsedExprSyntax Base) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberAccessExprSyntax::Cursor::Base)] =
    Base.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberAccessExprSyntaxBuilder &
ParsedMemberAccessExprSyntaxBuilder::useDot(ParsedTokenSyntax Dot) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberAccessExprSyntax::Cursor::Dot)] =
    Dot.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberAccessExprSyntaxBuilder &
ParsedMemberAccessExprSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberAccessExprSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberAccessExprSyntaxBuilder &
ParsedMemberAccessExprSyntaxBuilder::useDeclNameArguments(ParsedDeclNameArgumentsSyntax DeclNameArguments) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberAccessExprSyntax::Cursor::DeclNameArguments)] =
    DeclNameArguments.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedMemberAccessExprSyntax
ParsedMemberAccessExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::MemberAccessExpr, Layout);
  return ParsedMemberAccessExprSyntax(std::move(raw));
}

ParsedMemberAccessExprSyntax
ParsedMemberAccessExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::MemberAccessExpr,
    Layout, SPCtx);
  return ParsedMemberAccessExprSyntax(std::move(raw));
}

ParsedMemberAccessExprSyntax
ParsedMemberAccessExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedMemberAccessExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::period, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::period, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::unknown, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::unknown, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIsExprSyntaxBuilder &
ParsedIsExprSyntaxBuilder::useIsTok(ParsedTokenSyntax IsTok) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IsExprSyntax::Cursor::IsTok)] =
    IsTok.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIsExprSyntaxBuilder &
ParsedIsExprSyntaxBuilder::useTypeName(ParsedTypeSyntax TypeName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IsExprSyntax::Cursor::TypeName)] =
    TypeName.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedIsExprSyntax
ParsedIsExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::IsExpr, Layout);
  return ParsedIsExprSyntax(std::move(raw));
}

ParsedIsExprSyntax
ParsedIsExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IsExpr,
    Layout, SPCtx);
  return ParsedIsExprSyntax(std::move(raw));
}

ParsedIsExprSyntax
ParsedIsExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedIsExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_is, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_is, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAsExprSyntaxBuilder &
ParsedAsExprSyntaxBuilder::useAsTok(ParsedTokenSyntax AsTok) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AsExprSyntax::Cursor::AsTok)] =
    AsTok.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAsExprSyntaxBuilder &
ParsedAsExprSyntaxBuilder::useQuestionOrExclamationMark(ParsedTokenSyntax QuestionOrExclamationMark) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AsExprSyntax::Cursor::QuestionOrExclamationMark)] =
    QuestionOrExclamationMark.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAsExprSyntaxBuilder &
ParsedAsExprSyntaxBuilder::useTypeName(ParsedTypeSyntax TypeName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AsExprSyntax::Cursor::TypeName)] =
    TypeName.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAsExprSyntax
ParsedAsExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AsExpr, Layout);
  return ParsedAsExprSyntax(std::move(raw));
}

ParsedAsExprSyntax
ParsedAsExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AsExpr,
    Layout, SPCtx);
  return ParsedAsExprSyntax(std::move(raw));
}

ParsedAsExprSyntax
ParsedAsExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAsExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_as, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_as, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypeExprSyntaxBuilder &
ParsedTypeExprSyntaxBuilder::useType(ParsedTypeSyntax Type) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypeExprSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTypeExprSyntax
ParsedTypeExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TypeExpr, Layout);
  return ParsedTypeExprSyntax(std::move(raw));
}

ParsedTypeExprSyntax
ParsedTypeExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TypeExpr,
    Layout, SPCtx);
  return ParsedTypeExprSyntax(std::move(raw));
}

ParsedTypeExprSyntax
ParsedTypeExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTypeExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureCaptureItemSyntaxBuilder &
ParsedClosureCaptureItemSyntaxBuilder::useSpecifier(ParsedTokenListSyntax Specifier) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(SpecifierMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::Specifier)] =
    Specifier.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureCaptureItemSyntaxBuilder &
ParsedClosureCaptureItemSyntaxBuilder::addSpecifierMember(ParsedTokenSyntax Token) {
  assert(Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::Specifier)].isNull() && "use either 'use' function or 'add', not both");
  SpecifierMembers.push_back(std::move(Token.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureCaptureItemSyntaxBuilder &
ParsedClosureCaptureItemSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureCaptureItemSyntaxBuilder &
ParsedClosureCaptureItemSyntaxBuilder::useAssignToken(ParsedTokenSyntax AssignToken) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::AssignToken)] =
    AssignToken.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureCaptureItemSyntaxBuilder &
ParsedClosureCaptureItemSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureCaptureItemSyntaxBuilder &
ParsedClosureCaptureItemSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedClosureCaptureItemSyntax
ParsedClosureCaptureItemSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ClosureCaptureItem, Layout);
  return ParsedClosureCaptureItemSyntax(std::move(raw));
}

ParsedClosureCaptureItemSyntax
ParsedClosureCaptureItemSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ClosureCaptureItem,
    Layout, SPCtx);
  return ParsedClosureCaptureItemSyntax(std::move(raw));
}

ParsedClosureCaptureItemSyntax
ParsedClosureCaptureItemSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedClosureCaptureItemSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!SpecifierMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TokenList,
                          SpecifierMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::TokenList, SpecifierMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureCaptureSignatureSyntaxBuilder &
ParsedClosureCaptureSignatureSyntaxBuilder::useLeftSquare(ParsedTokenSyntax LeftSquare) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureCaptureSignatureSyntax::Cursor::LeftSquare)] =
    LeftSquare.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureCaptureSignatureSyntaxBuilder &
ParsedClosureCaptureSignatureSyntaxBuilder::useItems(ParsedClosureCaptureItemListSyntax Items) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ItemsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureCaptureSignatureSyntax::Cursor::Items)] =
    Items.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureCaptureSignatureSyntaxBuilder &
ParsedClosureCaptureSignatureSyntaxBuilder::addItemsMember(ParsedClosureCaptureItemSyntax ClosureCaptureItem) {
  assert(Layout[cursorIndex(ClosureCaptureSignatureSyntax::Cursor::Items)].isNull() && "use either 'use' function or 'add', not both");
  ItemsMembers.push_back(std::move(ClosureCaptureItem.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureCaptureSignatureSyntaxBuilder &
ParsedClosureCaptureSignatureSyntaxBuilder::useRightSquare(ParsedTokenSyntax RightSquare) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureCaptureSignatureSyntax::Cursor::RightSquare)] =
    RightSquare.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedClosureCaptureSignatureSyntax
ParsedClosureCaptureSignatureSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ClosureCaptureSignature, Layout);
  return ParsedClosureCaptureSignatureSyntax(std::move(raw));
}

ParsedClosureCaptureSignatureSyntax
ParsedClosureCaptureSignatureSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ClosureCaptureSignature,
    Layout, SPCtx);
  return ParsedClosureCaptureSignatureSyntax(std::move(raw));
}

ParsedClosureCaptureSignatureSyntax
ParsedClosureCaptureSignatureSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedClosureCaptureSignatureSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_square, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ItemsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ClosureCaptureItemList,
                          ItemsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ClosureCaptureItemList, ItemsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_square, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureParamSyntaxBuilder &
ParsedClosureParamSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureParamSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureParamSyntaxBuilder &
ParsedClosureParamSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureParamSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedClosureParamSyntax
ParsedClosureParamSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ClosureParam, Layout);
  return ParsedClosureParamSyntax(std::move(raw));
}

ParsedClosureParamSyntax
ParsedClosureParamSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ClosureParam,
    Layout, SPCtx);
  return ParsedClosureParamSyntax(std::move(raw));
}

ParsedClosureParamSyntax
ParsedClosureParamSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedClosureParamSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureSignatureSyntaxBuilder &
ParsedClosureSignatureSyntaxBuilder::useCapture(ParsedClosureCaptureSignatureSyntax Capture) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureSignatureSyntax::Cursor::Capture)] =
    Capture.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureSignatureSyntaxBuilder &
ParsedClosureSignatureSyntaxBuilder::useInput(ParsedSyntax Input) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureSignatureSyntax::Cursor::Input)] =
    Input.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureSignatureSyntaxBuilder &
ParsedClosureSignatureSyntaxBuilder::useThrowsTok(ParsedTokenSyntax ThrowsTok) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureSignatureSyntax::Cursor::ThrowsTok)] =
    ThrowsTok.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureSignatureSyntaxBuilder &
ParsedClosureSignatureSyntaxBuilder::useOutput(ParsedReturnClauseSyntax Output) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureSignatureSyntax::Cursor::Output)] =
    Output.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureSignatureSyntaxBuilder &
ParsedClosureSignatureSyntaxBuilder::useInTok(ParsedTokenSyntax InTok) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureSignatureSyntax::Cursor::InTok)] =
    InTok.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedClosureSignatureSyntax
ParsedClosureSignatureSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ClosureSignature, Layout);
  return ParsedClosureSignatureSyntax(std::move(raw));
}

ParsedClosureSignatureSyntax
ParsedClosureSignatureSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ClosureSignature,
    Layout, SPCtx);
  return ParsedClosureSignatureSyntax(std::move(raw));
}

ParsedClosureSignatureSyntax
ParsedClosureSignatureSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedClosureSignatureSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[4] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_in, SourceLoc());
    } else {
      Layout[4] = Rec.recordMissingToken(tok::kw_in, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureExprSyntaxBuilder &
ParsedClosureExprSyntaxBuilder::useLeftBrace(ParsedTokenSyntax LeftBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureExprSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureExprSyntaxBuilder &
ParsedClosureExprSyntaxBuilder::useSignature(ParsedClosureSignatureSyntax Signature) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureExprSyntax::Cursor::Signature)] =
    Signature.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureExprSyntaxBuilder &
ParsedClosureExprSyntaxBuilder::useStatements(ParsedCodeBlockItemListSyntax Statements) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(StatementsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureExprSyntax::Cursor::Statements)] =
    Statements.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureExprSyntaxBuilder &
ParsedClosureExprSyntaxBuilder::addStatementsMember(ParsedCodeBlockItemSyntax CodeBlockItem) {
  assert(Layout[cursorIndex(ClosureExprSyntax::Cursor::Statements)].isNull() && "use either 'use' function or 'add', not both");
  StatementsMembers.push_back(std::move(CodeBlockItem.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClosureExprSyntaxBuilder &
ParsedClosureExprSyntaxBuilder::useRightBrace(ParsedTokenSyntax RightBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClosureExprSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedClosureExprSyntax
ParsedClosureExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ClosureExpr, Layout);
  return ParsedClosureExprSyntax(std::move(raw));
}

ParsedClosureExprSyntax
ParsedClosureExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ClosureExpr,
    Layout, SPCtx);
  return ParsedClosureExprSyntax(std::move(raw));
}

ParsedClosureExprSyntax
ParsedClosureExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedClosureExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_brace, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!StatementsMembers.empty()) {
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CodeBlockItemList,
                          StatementsMembers, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::CodeBlockItemList, StatementsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CodeBlockItemList, {}, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::CodeBlockItemList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_brace, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::r_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedUnresolvedPatternExprSyntaxBuilder &
ParsedUnresolvedPatternExprSyntaxBuilder::usePattern(ParsedPatternSyntax Pattern) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(UnresolvedPatternExprSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedUnresolvedPatternExprSyntax
ParsedUnresolvedPatternExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::UnresolvedPatternExpr, Layout);
  return ParsedUnresolvedPatternExprSyntax(std::move(raw));
}

ParsedUnresolvedPatternExprSyntax
ParsedUnresolvedPatternExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::UnresolvedPatternExpr,
    Layout, SPCtx);
  return ParsedUnresolvedPatternExprSyntax(std::move(raw));
}

ParsedUnresolvedPatternExprSyntax
ParsedUnresolvedPatternExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedUnresolvedPatternExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionCallExprSyntaxBuilder &
ParsedFunctionCallExprSyntaxBuilder::useCalledExpression(ParsedExprSyntax CalledExpression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionCallExprSyntax::Cursor::CalledExpression)] =
    CalledExpression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionCallExprSyntaxBuilder &
ParsedFunctionCallExprSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionCallExprSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionCallExprSyntaxBuilder &
ParsedFunctionCallExprSyntaxBuilder::useArgumentList(ParsedFunctionCallArgumentListSyntax ArgumentList) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ArgumentListMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionCallExprSyntax::Cursor::ArgumentList)] =
    ArgumentList.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionCallExprSyntaxBuilder &
ParsedFunctionCallExprSyntaxBuilder::addArgumentListMember(ParsedFunctionCallArgumentSyntax FunctionCallArgument) {
  assert(Layout[cursorIndex(FunctionCallExprSyntax::Cursor::ArgumentList)].isNull() && "use either 'use' function or 'add', not both");
  ArgumentListMembers.push_back(std::move(FunctionCallArgument.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionCallExprSyntaxBuilder &
ParsedFunctionCallExprSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionCallExprSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionCallExprSyntaxBuilder &
ParsedFunctionCallExprSyntaxBuilder::useTrailingClosure(ParsedClosureExprSyntax TrailingClosure) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionCallExprSyntax::Cursor::TrailingClosure)] =
    TrailingClosure.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedFunctionCallExprSyntax
ParsedFunctionCallExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::FunctionCallExpr, Layout);
  return ParsedFunctionCallExprSyntax(std::move(raw));
}

ParsedFunctionCallExprSyntax
ParsedFunctionCallExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionCallExpr,
    Layout, SPCtx);
  return ParsedFunctionCallExprSyntax(std::move(raw));
}

ParsedFunctionCallExprSyntax
ParsedFunctionCallExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedFunctionCallExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ArgumentListMembers.empty()) {
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionCallArgumentList,
                          ArgumentListMembers, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::FunctionCallArgumentList, ArgumentListMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionCallArgumentList, {}, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::FunctionCallArgumentList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptExprSyntaxBuilder &
ParsedSubscriptExprSyntaxBuilder::useCalledExpression(ParsedExprSyntax CalledExpression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptExprSyntax::Cursor::CalledExpression)] =
    CalledExpression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptExprSyntaxBuilder &
ParsedSubscriptExprSyntaxBuilder::useLeftBracket(ParsedTokenSyntax LeftBracket) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptExprSyntax::Cursor::LeftBracket)] =
    LeftBracket.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptExprSyntaxBuilder &
ParsedSubscriptExprSyntaxBuilder::useArgumentList(ParsedFunctionCallArgumentListSyntax ArgumentList) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ArgumentListMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptExprSyntax::Cursor::ArgumentList)] =
    ArgumentList.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptExprSyntaxBuilder &
ParsedSubscriptExprSyntaxBuilder::addArgumentListMember(ParsedFunctionCallArgumentSyntax FunctionCallArgument) {
  assert(Layout[cursorIndex(SubscriptExprSyntax::Cursor::ArgumentList)].isNull() && "use either 'use' function or 'add', not both");
  ArgumentListMembers.push_back(std::move(FunctionCallArgument.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptExprSyntaxBuilder &
ParsedSubscriptExprSyntaxBuilder::useRightBracket(ParsedTokenSyntax RightBracket) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptExprSyntax::Cursor::RightBracket)] =
    RightBracket.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptExprSyntaxBuilder &
ParsedSubscriptExprSyntaxBuilder::useTrailingClosure(ParsedClosureExprSyntax TrailingClosure) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptExprSyntax::Cursor::TrailingClosure)] =
    TrailingClosure.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSubscriptExprSyntax
ParsedSubscriptExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SubscriptExpr, Layout);
  return ParsedSubscriptExprSyntax(std::move(raw));
}

ParsedSubscriptExprSyntax
ParsedSubscriptExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SubscriptExpr,
    Layout, SPCtx);
  return ParsedSubscriptExprSyntax(std::move(raw));
}

ParsedSubscriptExprSyntax
ParsedSubscriptExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSubscriptExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_square, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::l_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ArgumentListMembers.empty()) {
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionCallArgumentList,
                          ArgumentListMembers, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::FunctionCallArgumentList, ArgumentListMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionCallArgumentList, {}, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::FunctionCallArgumentList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_square, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::r_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOptionalChainingExprSyntaxBuilder &
ParsedOptionalChainingExprSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OptionalChainingExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOptionalChainingExprSyntaxBuilder &
ParsedOptionalChainingExprSyntaxBuilder::useQuestionMark(ParsedTokenSyntax QuestionMark) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OptionalChainingExprSyntax::Cursor::QuestionMark)] =
    QuestionMark.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedOptionalChainingExprSyntax
ParsedOptionalChainingExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::OptionalChainingExpr, Layout);
  return ParsedOptionalChainingExprSyntax(std::move(raw));
}

ParsedOptionalChainingExprSyntax
ParsedOptionalChainingExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::OptionalChainingExpr,
    Layout, SPCtx);
  return ParsedOptionalChainingExprSyntax(std::move(raw));
}

ParsedOptionalChainingExprSyntax
ParsedOptionalChainingExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedOptionalChainingExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::question_postfix, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::question_postfix, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForcedValueExprSyntaxBuilder &
ParsedForcedValueExprSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForcedValueExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForcedValueExprSyntaxBuilder &
ParsedForcedValueExprSyntaxBuilder::useExclamationMark(ParsedTokenSyntax ExclamationMark) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForcedValueExprSyntax::Cursor::ExclamationMark)] =
    ExclamationMark.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedForcedValueExprSyntax
ParsedForcedValueExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ForcedValueExpr, Layout);
  return ParsedForcedValueExprSyntax(std::move(raw));
}

ParsedForcedValueExprSyntax
ParsedForcedValueExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ForcedValueExpr,
    Layout, SPCtx);
  return ParsedForcedValueExprSyntax(std::move(raw));
}

ParsedForcedValueExprSyntax
ParsedForcedValueExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedForcedValueExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::exclaim_postfix, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::exclaim_postfix, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPostfixUnaryExprSyntaxBuilder &
ParsedPostfixUnaryExprSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PostfixUnaryExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPostfixUnaryExprSyntaxBuilder &
ParsedPostfixUnaryExprSyntaxBuilder::useOperatorToken(ParsedTokenSyntax OperatorToken) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PostfixUnaryExprSyntax::Cursor::OperatorToken)] =
    OperatorToken.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPostfixUnaryExprSyntax
ParsedPostfixUnaryExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PostfixUnaryExpr, Layout);
  return ParsedPostfixUnaryExprSyntax(std::move(raw));
}

ParsedPostfixUnaryExprSyntax
ParsedPostfixUnaryExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PostfixUnaryExpr,
    Layout, SPCtx);
  return ParsedPostfixUnaryExprSyntax(std::move(raw));
}

ParsedPostfixUnaryExprSyntax
ParsedPostfixUnaryExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPostfixUnaryExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::oper_postfix, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::oper_postfix, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSpecializeExprSyntaxBuilder &
ParsedSpecializeExprSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SpecializeExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSpecializeExprSyntaxBuilder &
ParsedSpecializeExprSyntaxBuilder::useGenericArgumentClause(ParsedGenericArgumentClauseSyntax GenericArgumentClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SpecializeExprSyntax::Cursor::GenericArgumentClause)] =
    GenericArgumentClause.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSpecializeExprSyntax
ParsedSpecializeExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SpecializeExpr, Layout);
  return ParsedSpecializeExprSyntax(std::move(raw));
}

ParsedSpecializeExprSyntax
ParsedSpecializeExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SpecializeExpr,
    Layout, SPCtx);
  return ParsedSpecializeExprSyntax(std::move(raw));
}

ParsedSpecializeExprSyntax
ParsedSpecializeExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSpecializeExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStringSegmentSyntaxBuilder &
ParsedStringSegmentSyntaxBuilder::useContent(ParsedTokenSyntax Content) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StringSegmentSyntax::Cursor::Content)] =
    Content.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedStringSegmentSyntax
ParsedStringSegmentSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::StringSegment, Layout);
  return ParsedStringSegmentSyntax(std::move(raw));
}

ParsedStringSegmentSyntax
ParsedStringSegmentSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::StringSegment,
    Layout, SPCtx);
  return ParsedStringSegmentSyntax(std::move(raw));
}

ParsedStringSegmentSyntax
ParsedStringSegmentSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedStringSegmentSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::string_segment, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::string_segment, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExpressionSegmentSyntaxBuilder &
ParsedExpressionSegmentSyntaxBuilder::useBackslash(ParsedTokenSyntax Backslash) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::Backslash)] =
    Backslash.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExpressionSegmentSyntaxBuilder &
ParsedExpressionSegmentSyntaxBuilder::useDelimiter(ParsedTokenSyntax Delimiter) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::Delimiter)] =
    Delimiter.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExpressionSegmentSyntaxBuilder &
ParsedExpressionSegmentSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExpressionSegmentSyntaxBuilder &
ParsedExpressionSegmentSyntaxBuilder::useExpressions(ParsedFunctionCallArgumentListSyntax Expressions) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ExpressionsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::Expressions)] =
    Expressions.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExpressionSegmentSyntaxBuilder &
ParsedExpressionSegmentSyntaxBuilder::addExpressionsMember(ParsedFunctionCallArgumentSyntax FunctionCallArgument) {
  assert(Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::Expressions)].isNull() && "use either 'use' function or 'add', not both");
  ExpressionsMembers.push_back(std::move(FunctionCallArgument.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExpressionSegmentSyntaxBuilder &
ParsedExpressionSegmentSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedExpressionSegmentSyntax
ParsedExpressionSegmentSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ExpressionSegment, Layout);
  return ParsedExpressionSegmentSyntax(std::move(raw));
}

ParsedExpressionSegmentSyntax
ParsedExpressionSegmentSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ExpressionSegment,
    Layout, SPCtx);
  return ParsedExpressionSegmentSyntax(std::move(raw));
}

ParsedExpressionSegmentSyntax
ParsedExpressionSegmentSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedExpressionSegmentSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::backslash, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::backslash, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ExpressionsMembers.empty()) {
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionCallArgumentList,
                          ExpressionsMembers, SPCtx);
    } else {
      Layout[3] = Rec.recordRawSyntax(SyntaxKind::FunctionCallArgumentList, ExpressionsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionCallArgumentList, {}, SPCtx);
    } else {
      Layout[3] = Rec.recordRawSyntax(SyntaxKind::FunctionCallArgumentList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[4] = ParsedRawSyntaxNode::makeDeferredMissing(tok::string_interpolation_anchor, SourceLoc());
    } else {
      Layout[4] = Rec.recordMissingToken(tok::string_interpolation_anchor, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStringLiteralExprSyntaxBuilder &
ParsedStringLiteralExprSyntaxBuilder::useOpenDelimiter(ParsedTokenSyntax OpenDelimiter) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StringLiteralExprSyntax::Cursor::OpenDelimiter)] =
    OpenDelimiter.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStringLiteralExprSyntaxBuilder &
ParsedStringLiteralExprSyntaxBuilder::useOpenQuote(ParsedTokenSyntax OpenQuote) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StringLiteralExprSyntax::Cursor::OpenQuote)] =
    OpenQuote.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStringLiteralExprSyntaxBuilder &
ParsedStringLiteralExprSyntaxBuilder::useSegments(ParsedStringLiteralSegmentsSyntax Segments) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(SegmentsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StringLiteralExprSyntax::Cursor::Segments)] =
    Segments.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStringLiteralExprSyntaxBuilder &
ParsedStringLiteralExprSyntaxBuilder::addSegmentsMember(ParsedSyntax Segment) {
  assert(Layout[cursorIndex(StringLiteralExprSyntax::Cursor::Segments)].isNull() && "use either 'use' function or 'add', not both");
  SegmentsMembers.push_back(std::move(Segment.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStringLiteralExprSyntaxBuilder &
ParsedStringLiteralExprSyntaxBuilder::useCloseQuote(ParsedTokenSyntax CloseQuote) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StringLiteralExprSyntax::Cursor::CloseQuote)] =
    CloseQuote.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStringLiteralExprSyntaxBuilder &
ParsedStringLiteralExprSyntaxBuilder::useCloseDelimiter(ParsedTokenSyntax CloseDelimiter) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StringLiteralExprSyntax::Cursor::CloseDelimiter)] =
    CloseDelimiter.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedStringLiteralExprSyntax
ParsedStringLiteralExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::StringLiteralExpr, Layout);
  return ParsedStringLiteralExprSyntax(std::move(raw));
}

ParsedStringLiteralExprSyntax
ParsedStringLiteralExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::StringLiteralExpr,
    Layout, SPCtx);
  return ParsedStringLiteralExprSyntax(std::move(raw));
}

ParsedStringLiteralExprSyntax
ParsedStringLiteralExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedStringLiteralExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::string_quote, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::string_quote, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!SegmentsMembers.empty()) {
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::StringLiteralSegments,
                          SegmentsMembers, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::StringLiteralSegments, SegmentsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::StringLiteralSegments, {}, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::StringLiteralSegments, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::string_quote, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::string_quote, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedKeyPathExprSyntaxBuilder &
ParsedKeyPathExprSyntaxBuilder::useBackslash(ParsedTokenSyntax Backslash) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(KeyPathExprSyntax::Cursor::Backslash)] =
    Backslash.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedKeyPathExprSyntaxBuilder &
ParsedKeyPathExprSyntaxBuilder::useRootExpr(ParsedExprSyntax RootExpr) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(KeyPathExprSyntax::Cursor::RootExpr)] =
    RootExpr.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedKeyPathExprSyntaxBuilder &
ParsedKeyPathExprSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(KeyPathExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedKeyPathExprSyntax
ParsedKeyPathExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::KeyPathExpr, Layout);
  return ParsedKeyPathExprSyntax(std::move(raw));
}

ParsedKeyPathExprSyntax
ParsedKeyPathExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::KeyPathExpr,
    Layout, SPCtx);
  return ParsedKeyPathExprSyntax(std::move(raw));
}

ParsedKeyPathExprSyntax
ParsedKeyPathExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedKeyPathExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::backslash, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::backslash, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedKeyPathBaseExprSyntaxBuilder &
ParsedKeyPathBaseExprSyntaxBuilder::usePeriod(ParsedTokenSyntax Period) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(KeyPathBaseExprSyntax::Cursor::Period)] =
    Period.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedKeyPathBaseExprSyntax
ParsedKeyPathBaseExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::KeyPathBaseExpr, Layout);
  return ParsedKeyPathBaseExprSyntax(std::move(raw));
}

ParsedKeyPathBaseExprSyntax
ParsedKeyPathBaseExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::KeyPathBaseExpr,
    Layout, SPCtx);
  return ParsedKeyPathBaseExprSyntax(std::move(raw));
}

ParsedKeyPathBaseExprSyntax
ParsedKeyPathBaseExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedKeyPathBaseExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::period, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::period, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcNamePieceSyntaxBuilder &
ParsedObjcNamePieceSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcNamePieceSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcNamePieceSyntaxBuilder &
ParsedObjcNamePieceSyntaxBuilder::useDot(ParsedTokenSyntax Dot) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcNamePieceSyntax::Cursor::Dot)] =
    Dot.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedObjcNamePieceSyntax
ParsedObjcNamePieceSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ObjcNamePiece, Layout);
  return ParsedObjcNamePieceSyntax(std::move(raw));
}

ParsedObjcNamePieceSyntax
ParsedObjcNamePieceSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ObjcNamePiece,
    Layout, SPCtx);
  return ParsedObjcNamePieceSyntax(std::move(raw));
}

ParsedObjcNamePieceSyntax
ParsedObjcNamePieceSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedObjcNamePieceSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcKeyPathExprSyntaxBuilder &
ParsedObjcKeyPathExprSyntaxBuilder::useKeyPath(ParsedTokenSyntax KeyPath) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcKeyPathExprSyntax::Cursor::KeyPath)] =
    KeyPath.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcKeyPathExprSyntaxBuilder &
ParsedObjcKeyPathExprSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcKeyPathExprSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcKeyPathExprSyntaxBuilder &
ParsedObjcKeyPathExprSyntaxBuilder::useName(ParsedObjcNameSyntax Name) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(NameMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcKeyPathExprSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcKeyPathExprSyntaxBuilder &
ParsedObjcKeyPathExprSyntaxBuilder::addNameMember(ParsedObjcNamePieceSyntax ObjcNamePiece) {
  assert(Layout[cursorIndex(ObjcKeyPathExprSyntax::Cursor::Name)].isNull() && "use either 'use' function or 'add', not both");
  NameMembers.push_back(std::move(ObjcNamePiece.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcKeyPathExprSyntaxBuilder &
ParsedObjcKeyPathExprSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcKeyPathExprSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedObjcKeyPathExprSyntax
ParsedObjcKeyPathExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ObjcKeyPathExpr, Layout);
  return ParsedObjcKeyPathExprSyntax(std::move(raw));
}

ParsedObjcKeyPathExprSyntax
ParsedObjcKeyPathExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ObjcKeyPathExpr,
    Layout, SPCtx);
  return ParsedObjcKeyPathExprSyntax(std::move(raw));
}

ParsedObjcKeyPathExprSyntax
ParsedObjcKeyPathExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedObjcKeyPathExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_keyPath, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_keyPath, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!NameMembers.empty()) {
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ObjcName,
                          NameMembers, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::ObjcName, NameMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ObjcName, {}, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::ObjcName, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcSelectorExprSyntaxBuilder &
ParsedObjcSelectorExprSyntaxBuilder::usePoundSelector(ParsedTokenSyntax PoundSelector) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::PoundSelector)] =
    PoundSelector.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcSelectorExprSyntaxBuilder &
ParsedObjcSelectorExprSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcSelectorExprSyntaxBuilder &
ParsedObjcSelectorExprSyntaxBuilder::useKind(ParsedTokenSyntax Kind) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::Kind)] =
    Kind.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcSelectorExprSyntaxBuilder &
ParsedObjcSelectorExprSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcSelectorExprSyntaxBuilder &
ParsedObjcSelectorExprSyntaxBuilder::useName(ParsedExprSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjcSelectorExprSyntaxBuilder &
ParsedObjcSelectorExprSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedObjcSelectorExprSyntax
ParsedObjcSelectorExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ObjcSelectorExpr, Layout);
  return ParsedObjcSelectorExprSyntax(std::move(raw));
}

ParsedObjcSelectorExprSyntax
ParsedObjcSelectorExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ObjcSelectorExpr,
    Layout, SPCtx);
  return ParsedObjcSelectorExprSyntax(std::move(raw));
}

ParsedObjcSelectorExprSyntax
ParsedObjcSelectorExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedObjcSelectorExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_selector, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_selector, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[5].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[5] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[5] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEditorPlaceholderExprSyntaxBuilder &
ParsedEditorPlaceholderExprSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EditorPlaceholderExprSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedEditorPlaceholderExprSyntax
ParsedEditorPlaceholderExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::EditorPlaceholderExpr, Layout);
  return ParsedEditorPlaceholderExprSyntax(std::move(raw));
}

ParsedEditorPlaceholderExprSyntax
ParsedEditorPlaceholderExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::EditorPlaceholderExpr,
    Layout, SPCtx);
  return ParsedEditorPlaceholderExprSyntax(std::move(raw));
}

ParsedEditorPlaceholderExprSyntax
ParsedEditorPlaceholderExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedEditorPlaceholderExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjectLiteralExprSyntaxBuilder &
ParsedObjectLiteralExprSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjectLiteralExprSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjectLiteralExprSyntaxBuilder &
ParsedObjectLiteralExprSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjectLiteralExprSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjectLiteralExprSyntaxBuilder &
ParsedObjectLiteralExprSyntaxBuilder::useArguments(ParsedFunctionCallArgumentListSyntax Arguments) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ArgumentsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjectLiteralExprSyntax::Cursor::Arguments)] =
    Arguments.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjectLiteralExprSyntaxBuilder &
ParsedObjectLiteralExprSyntaxBuilder::addArgumentsMember(ParsedFunctionCallArgumentSyntax FunctionCallArgument) {
  assert(Layout[cursorIndex(ObjectLiteralExprSyntax::Cursor::Arguments)].isNull() && "use either 'use' function or 'add', not both");
  ArgumentsMembers.push_back(std::move(FunctionCallArgument.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjectLiteralExprSyntaxBuilder &
ParsedObjectLiteralExprSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjectLiteralExprSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedObjectLiteralExprSyntax
ParsedObjectLiteralExprSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ObjectLiteralExpr, Layout);
  return ParsedObjectLiteralExprSyntax(std::move(raw));
}

ParsedObjectLiteralExprSyntax
ParsedObjectLiteralExprSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ObjectLiteralExpr,
    Layout, SPCtx);
  return ParsedObjectLiteralExprSyntax(std::move(raw));
}

ParsedObjectLiteralExprSyntax
ParsedObjectLiteralExprSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedObjectLiteralExprSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_colorLiteral, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_colorLiteral, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ArgumentsMembers.empty()) {
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionCallArgumentList,
                          ArgumentsMembers, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::FunctionCallArgumentList, ArgumentsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionCallArgumentList, {}, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::FunctionCallArgumentList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypeInitializerClauseSyntaxBuilder &
ParsedTypeInitializerClauseSyntaxBuilder::useEqual(ParsedTokenSyntax Equal) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypeInitializerClauseSyntax::Cursor::Equal)] =
    Equal.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypeInitializerClauseSyntaxBuilder &
ParsedTypeInitializerClauseSyntaxBuilder::useValue(ParsedTypeSyntax Value) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypeInitializerClauseSyntax::Cursor::Value)] =
    Value.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTypeInitializerClauseSyntax
ParsedTypeInitializerClauseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TypeInitializerClause, Layout);
  return ParsedTypeInitializerClauseSyntax(std::move(raw));
}

ParsedTypeInitializerClauseSyntax
ParsedTypeInitializerClauseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TypeInitializerClause,
    Layout, SPCtx);
  return ParsedTypeInitializerClauseSyntax(std::move(raw));
}

ParsedTypeInitializerClauseSyntax
ParsedTypeInitializerClauseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTypeInitializerClauseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::equal, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::equal, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypealiasDeclSyntaxBuilder &
ParsedTypealiasDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypealiasDeclSyntaxBuilder &
ParsedTypealiasDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypealiasDeclSyntaxBuilder &
ParsedTypealiasDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypealiasDeclSyntaxBuilder &
ParsedTypealiasDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypealiasDeclSyntaxBuilder &
ParsedTypealiasDeclSyntaxBuilder::useTypealiasKeyword(ParsedTokenSyntax TypealiasKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::TypealiasKeyword)] =
    TypealiasKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypealiasDeclSyntaxBuilder &
ParsedTypealiasDeclSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypealiasDeclSyntaxBuilder &
ParsedTypealiasDeclSyntaxBuilder::useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypealiasDeclSyntaxBuilder &
ParsedTypealiasDeclSyntaxBuilder::useInitializer(ParsedTypeInitializerClauseSyntax Initializer) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypealiasDeclSyntaxBuilder &
ParsedTypealiasDeclSyntaxBuilder::useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTypealiasDeclSyntax
ParsedTypealiasDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TypealiasDecl, Layout);
  return ParsedTypealiasDeclSyntax(std::move(raw));
}

ParsedTypealiasDeclSyntax
ParsedTypealiasDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TypealiasDecl,
    Layout, SPCtx);
  return ParsedTypealiasDeclSyntax(std::move(raw));
}

ParsedTypealiasDeclSyntax
ParsedTypealiasDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTypealiasDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_typealias, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_typealias, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAssociatedtypeDeclSyntaxBuilder &
ParsedAssociatedtypeDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAssociatedtypeDeclSyntaxBuilder &
ParsedAssociatedtypeDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAssociatedtypeDeclSyntaxBuilder &
ParsedAssociatedtypeDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAssociatedtypeDeclSyntaxBuilder &
ParsedAssociatedtypeDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAssociatedtypeDeclSyntaxBuilder &
ParsedAssociatedtypeDeclSyntaxBuilder::useAssociatedtypeKeyword(ParsedTokenSyntax AssociatedtypeKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::AssociatedtypeKeyword)] =
    AssociatedtypeKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAssociatedtypeDeclSyntaxBuilder &
ParsedAssociatedtypeDeclSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAssociatedtypeDeclSyntaxBuilder &
ParsedAssociatedtypeDeclSyntaxBuilder::useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAssociatedtypeDeclSyntaxBuilder &
ParsedAssociatedtypeDeclSyntaxBuilder::useInitializer(ParsedTypeInitializerClauseSyntax Initializer) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAssociatedtypeDeclSyntaxBuilder &
ParsedAssociatedtypeDeclSyntaxBuilder::useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAssociatedtypeDeclSyntax
ParsedAssociatedtypeDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AssociatedtypeDecl, Layout);
  return ParsedAssociatedtypeDeclSyntax(std::move(raw));
}

ParsedAssociatedtypeDeclSyntax
ParsedAssociatedtypeDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AssociatedtypeDecl,
    Layout, SPCtx);
  return ParsedAssociatedtypeDeclSyntax(std::move(raw));
}

ParsedAssociatedtypeDeclSyntax
ParsedAssociatedtypeDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAssociatedtypeDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_associatedtype, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_associatedtype, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedParameterClauseSyntaxBuilder &
ParsedParameterClauseSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ParameterClauseSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedParameterClauseSyntaxBuilder &
ParsedParameterClauseSyntaxBuilder::useParameterList(ParsedFunctionParameterListSyntax ParameterList) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ParameterListMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ParameterClauseSyntax::Cursor::ParameterList)] =
    ParameterList.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedParameterClauseSyntaxBuilder &
ParsedParameterClauseSyntaxBuilder::addParameterListMember(ParsedFunctionParameterSyntax FunctionParameter) {
  assert(Layout[cursorIndex(ParameterClauseSyntax::Cursor::ParameterList)].isNull() && "use either 'use' function or 'add', not both");
  ParameterListMembers.push_back(std::move(FunctionParameter.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedParameterClauseSyntaxBuilder &
ParsedParameterClauseSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ParameterClauseSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedParameterClauseSyntax
ParsedParameterClauseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ParameterClause, Layout);
  return ParsedParameterClauseSyntax(std::move(raw));
}

ParsedParameterClauseSyntax
ParsedParameterClauseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ParameterClause,
    Layout, SPCtx);
  return ParsedParameterClauseSyntax(std::move(raw));
}

ParsedParameterClauseSyntax
ParsedParameterClauseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedParameterClauseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ParameterListMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionParameterList,
                          ParameterListMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::FunctionParameterList, ParameterListMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionParameterList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::FunctionParameterList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedReturnClauseSyntaxBuilder &
ParsedReturnClauseSyntaxBuilder::useArrow(ParsedTokenSyntax Arrow) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ReturnClauseSyntax::Cursor::Arrow)] =
    Arrow.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedReturnClauseSyntaxBuilder &
ParsedReturnClauseSyntaxBuilder::useReturnType(ParsedTypeSyntax ReturnType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ReturnClauseSyntax::Cursor::ReturnType)] =
    ReturnType.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedReturnClauseSyntax
ParsedReturnClauseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ReturnClause, Layout);
  return ParsedReturnClauseSyntax(std::move(raw));
}

ParsedReturnClauseSyntax
ParsedReturnClauseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ReturnClause,
    Layout, SPCtx);
  return ParsedReturnClauseSyntax(std::move(raw));
}

ParsedReturnClauseSyntax
ParsedReturnClauseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedReturnClauseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::arrow, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::arrow, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionSignatureSyntaxBuilder &
ParsedFunctionSignatureSyntaxBuilder::useInput(ParsedParameterClauseSyntax Input) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionSignatureSyntax::Cursor::Input)] =
    Input.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionSignatureSyntaxBuilder &
ParsedFunctionSignatureSyntaxBuilder::useThrowsOrRethrowsKeyword(ParsedTokenSyntax ThrowsOrRethrowsKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionSignatureSyntax::Cursor::ThrowsOrRethrowsKeyword)] =
    ThrowsOrRethrowsKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionSignatureSyntaxBuilder &
ParsedFunctionSignatureSyntaxBuilder::useOutput(ParsedReturnClauseSyntax Output) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionSignatureSyntax::Cursor::Output)] =
    Output.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedFunctionSignatureSyntax
ParsedFunctionSignatureSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::FunctionSignature, Layout);
  return ParsedFunctionSignatureSyntax(std::move(raw));
}

ParsedFunctionSignatureSyntax
ParsedFunctionSignatureSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionSignature,
    Layout, SPCtx);
  return ParsedFunctionSignatureSyntax(std::move(raw));
}

ParsedFunctionSignatureSyntax
ParsedFunctionSignatureSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedFunctionSignatureSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfConfigClauseSyntaxBuilder &
ParsedIfConfigClauseSyntaxBuilder::usePoundKeyword(ParsedTokenSyntax PoundKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfConfigClauseSyntax::Cursor::PoundKeyword)] =
    PoundKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfConfigClauseSyntaxBuilder &
ParsedIfConfigClauseSyntaxBuilder::useCondition(ParsedExprSyntax Condition) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfConfigClauseSyntax::Cursor::Condition)] =
    Condition.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfConfigClauseSyntaxBuilder &
ParsedIfConfigClauseSyntaxBuilder::useElements(ParsedSyntax Elements) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfConfigClauseSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedIfConfigClauseSyntax
ParsedIfConfigClauseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::IfConfigClause, Layout);
  return ParsedIfConfigClauseSyntax(std::move(raw));
}

ParsedIfConfigClauseSyntax
ParsedIfConfigClauseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IfConfigClause,
    Layout, SPCtx);
  return ParsedIfConfigClauseSyntax(std::move(raw));
}

ParsedIfConfigClauseSyntax
ParsedIfConfigClauseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedIfConfigClauseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_if, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_if, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfConfigDeclSyntaxBuilder &
ParsedIfConfigDeclSyntaxBuilder::useClauses(ParsedIfConfigClauseListSyntax Clauses) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ClausesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfConfigDeclSyntax::Cursor::Clauses)] =
    Clauses.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfConfigDeclSyntaxBuilder &
ParsedIfConfigDeclSyntaxBuilder::addClausesMember(ParsedIfConfigClauseSyntax IfConfigClause) {
  assert(Layout[cursorIndex(IfConfigDeclSyntax::Cursor::Clauses)].isNull() && "use either 'use' function or 'add', not both");
  ClausesMembers.push_back(std::move(IfConfigClause.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfConfigDeclSyntaxBuilder &
ParsedIfConfigDeclSyntaxBuilder::usePoundEndif(ParsedTokenSyntax PoundEndif) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfConfigDeclSyntax::Cursor::PoundEndif)] =
    PoundEndif.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedIfConfigDeclSyntax
ParsedIfConfigDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::IfConfigDecl, Layout);
  return ParsedIfConfigDeclSyntax(std::move(raw));
}

ParsedIfConfigDeclSyntax
ParsedIfConfigDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IfConfigDecl,
    Layout, SPCtx);
  return ParsedIfConfigDeclSyntax(std::move(raw));
}

ParsedIfConfigDeclSyntax
ParsedIfConfigDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedIfConfigDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ClausesMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IfConfigClauseList,
                          ClausesMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::IfConfigClauseList, ClausesMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IfConfigClauseList, {}, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::IfConfigClauseList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_endif, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::pound_endif, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundErrorDeclSyntaxBuilder &
ParsedPoundErrorDeclSyntaxBuilder::usePoundError(ParsedTokenSyntax PoundError) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundErrorDeclSyntax::Cursor::PoundError)] =
    PoundError.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundErrorDeclSyntaxBuilder &
ParsedPoundErrorDeclSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundErrorDeclSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundErrorDeclSyntaxBuilder &
ParsedPoundErrorDeclSyntaxBuilder::useMessage(ParsedStringLiteralExprSyntax Message) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundErrorDeclSyntax::Cursor::Message)] =
    Message.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundErrorDeclSyntaxBuilder &
ParsedPoundErrorDeclSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundErrorDeclSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPoundErrorDeclSyntax
ParsedPoundErrorDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PoundErrorDecl, Layout);
  return ParsedPoundErrorDeclSyntax(std::move(raw));
}

ParsedPoundErrorDeclSyntax
ParsedPoundErrorDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PoundErrorDecl,
    Layout, SPCtx);
  return ParsedPoundErrorDeclSyntax(std::move(raw));
}

ParsedPoundErrorDeclSyntax
ParsedPoundErrorDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPoundErrorDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_error, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_error, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundWarningDeclSyntaxBuilder &
ParsedPoundWarningDeclSyntaxBuilder::usePoundWarning(ParsedTokenSyntax PoundWarning) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundWarningDeclSyntax::Cursor::PoundWarning)] =
    PoundWarning.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundWarningDeclSyntaxBuilder &
ParsedPoundWarningDeclSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundWarningDeclSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundWarningDeclSyntaxBuilder &
ParsedPoundWarningDeclSyntaxBuilder::useMessage(ParsedStringLiteralExprSyntax Message) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundWarningDeclSyntax::Cursor::Message)] =
    Message.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundWarningDeclSyntaxBuilder &
ParsedPoundWarningDeclSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundWarningDeclSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPoundWarningDeclSyntax
ParsedPoundWarningDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PoundWarningDecl, Layout);
  return ParsedPoundWarningDeclSyntax(std::move(raw));
}

ParsedPoundWarningDeclSyntax
ParsedPoundWarningDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PoundWarningDecl,
    Layout, SPCtx);
  return ParsedPoundWarningDeclSyntax(std::move(raw));
}

ParsedPoundWarningDeclSyntax
ParsedPoundWarningDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPoundWarningDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_warning, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_warning, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundSourceLocationSyntaxBuilder &
ParsedPoundSourceLocationSyntaxBuilder::usePoundSourceLocation(ParsedTokenSyntax PoundSourceLocation) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundSourceLocationSyntax::Cursor::PoundSourceLocation)] =
    PoundSourceLocation.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundSourceLocationSyntaxBuilder &
ParsedPoundSourceLocationSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundSourceLocationSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundSourceLocationSyntaxBuilder &
ParsedPoundSourceLocationSyntaxBuilder::useArgs(ParsedPoundSourceLocationArgsSyntax Args) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundSourceLocationSyntax::Cursor::Args)] =
    Args.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundSourceLocationSyntaxBuilder &
ParsedPoundSourceLocationSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundSourceLocationSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPoundSourceLocationSyntax
ParsedPoundSourceLocationSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PoundSourceLocation, Layout);
  return ParsedPoundSourceLocationSyntax(std::move(raw));
}

ParsedPoundSourceLocationSyntax
ParsedPoundSourceLocationSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PoundSourceLocation,
    Layout, SPCtx);
  return ParsedPoundSourceLocationSyntax(std::move(raw));
}

ParsedPoundSourceLocationSyntax
ParsedPoundSourceLocationSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPoundSourceLocationSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_sourceLocation, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_sourceLocation, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundSourceLocationArgsSyntaxBuilder &
ParsedPoundSourceLocationArgsSyntaxBuilder::useFileArgLabel(ParsedTokenSyntax FileArgLabel) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::FileArgLabel)] =
    FileArgLabel.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundSourceLocationArgsSyntaxBuilder &
ParsedPoundSourceLocationArgsSyntaxBuilder::useFileArgColon(ParsedTokenSyntax FileArgColon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::FileArgColon)] =
    FileArgColon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundSourceLocationArgsSyntaxBuilder &
ParsedPoundSourceLocationArgsSyntaxBuilder::useFileName(ParsedTokenSyntax FileName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::FileName)] =
    FileName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundSourceLocationArgsSyntaxBuilder &
ParsedPoundSourceLocationArgsSyntaxBuilder::useComma(ParsedTokenSyntax Comma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::Comma)] =
    Comma.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundSourceLocationArgsSyntaxBuilder &
ParsedPoundSourceLocationArgsSyntaxBuilder::useLineArgLabel(ParsedTokenSyntax LineArgLabel) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::LineArgLabel)] =
    LineArgLabel.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundSourceLocationArgsSyntaxBuilder &
ParsedPoundSourceLocationArgsSyntaxBuilder::useLineArgColon(ParsedTokenSyntax LineArgColon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::LineArgColon)] =
    LineArgColon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundSourceLocationArgsSyntaxBuilder &
ParsedPoundSourceLocationArgsSyntaxBuilder::useLineNumber(ParsedTokenSyntax LineNumber) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::LineNumber)] =
    LineNumber.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPoundSourceLocationArgsSyntax
ParsedPoundSourceLocationArgsSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PoundSourceLocationArgs, Layout);
  return ParsedPoundSourceLocationArgsSyntax(std::move(raw));
}

ParsedPoundSourceLocationArgsSyntax
ParsedPoundSourceLocationArgsSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PoundSourceLocationArgs,
    Layout, SPCtx);
  return ParsedPoundSourceLocationArgsSyntax(std::move(raw));
}

ParsedPoundSourceLocationArgsSyntax
ParsedPoundSourceLocationArgsSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPoundSourceLocationArgsSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::string_literal, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::string_literal, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::comma, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::comma, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[4] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[4] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[5].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[5] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[5] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[6].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[6] = ParsedRawSyntaxNode::makeDeferredMissing(tok::integer_literal, SourceLoc());
    } else {
      Layout[6] = Rec.recordMissingToken(tok::integer_literal, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclModifierSyntaxBuilder &
ParsedDeclModifierSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclModifierSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclModifierSyntaxBuilder &
ParsedDeclModifierSyntaxBuilder::useDetailLeftParen(ParsedTokenSyntax DetailLeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclModifierSyntax::Cursor::DetailLeftParen)] =
    DetailLeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclModifierSyntaxBuilder &
ParsedDeclModifierSyntaxBuilder::useDetail(ParsedTokenSyntax Detail) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclModifierSyntax::Cursor::Detail)] =
    Detail.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclModifierSyntaxBuilder &
ParsedDeclModifierSyntaxBuilder::useDetailRightParen(ParsedTokenSyntax DetailRightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclModifierSyntax::Cursor::DetailRightParen)] =
    DetailRightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDeclModifierSyntax
ParsedDeclModifierSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DeclModifier, Layout);
  return ParsedDeclModifierSyntax(std::move(raw));
}

ParsedDeclModifierSyntax
ParsedDeclModifierSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DeclModifier,
    Layout, SPCtx);
  return ParsedDeclModifierSyntax(std::move(raw));
}

ParsedDeclModifierSyntax
ParsedDeclModifierSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDeclModifierSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::unknown, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::unknown, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInheritedTypeSyntaxBuilder &
ParsedInheritedTypeSyntaxBuilder::useTypeName(ParsedTypeSyntax TypeName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InheritedTypeSyntax::Cursor::TypeName)] =
    TypeName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInheritedTypeSyntaxBuilder &
ParsedInheritedTypeSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InheritedTypeSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedInheritedTypeSyntax
ParsedInheritedTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::InheritedType, Layout);
  return ParsedInheritedTypeSyntax(std::move(raw));
}

ParsedInheritedTypeSyntax
ParsedInheritedTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::InheritedType,
    Layout, SPCtx);
  return ParsedInheritedTypeSyntax(std::move(raw));
}

ParsedInheritedTypeSyntax
ParsedInheritedTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedInheritedTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypeInheritanceClauseSyntaxBuilder &
ParsedTypeInheritanceClauseSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypeInheritanceClauseSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypeInheritanceClauseSyntaxBuilder &
ParsedTypeInheritanceClauseSyntaxBuilder::useInheritedTypeCollection(ParsedInheritedTypeListSyntax InheritedTypeCollection) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(InheritedTypeCollectionMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypeInheritanceClauseSyntax::Cursor::InheritedTypeCollection)] =
    InheritedTypeCollection.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypeInheritanceClauseSyntaxBuilder &
ParsedTypeInheritanceClauseSyntaxBuilder::addInheritedTypeCollectionMember(ParsedInheritedTypeSyntax InheritedType) {
  assert(Layout[cursorIndex(TypeInheritanceClauseSyntax::Cursor::InheritedTypeCollection)].isNull() && "use either 'use' function or 'add', not both");
  InheritedTypeCollectionMembers.push_back(std::move(InheritedType.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTypeInheritanceClauseSyntax
ParsedTypeInheritanceClauseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TypeInheritanceClause, Layout);
  return ParsedTypeInheritanceClauseSyntax(std::move(raw));
}

ParsedTypeInheritanceClauseSyntax
ParsedTypeInheritanceClauseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TypeInheritanceClause,
    Layout, SPCtx);
  return ParsedTypeInheritanceClauseSyntax(std::move(raw));
}

ParsedTypeInheritanceClauseSyntax
ParsedTypeInheritanceClauseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTypeInheritanceClauseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!InheritedTypeCollectionMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::InheritedTypeList,
                          InheritedTypeCollectionMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::InheritedTypeList, InheritedTypeCollectionMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::InheritedTypeList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::InheritedTypeList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClassDeclSyntaxBuilder &
ParsedClassDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClassDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClassDeclSyntaxBuilder &
ParsedClassDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(ClassDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClassDeclSyntaxBuilder &
ParsedClassDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClassDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClassDeclSyntaxBuilder &
ParsedClassDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(ClassDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClassDeclSyntaxBuilder &
ParsedClassDeclSyntaxBuilder::useClassKeyword(ParsedTokenSyntax ClassKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClassDeclSyntax::Cursor::ClassKeyword)] =
    ClassKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClassDeclSyntaxBuilder &
ParsedClassDeclSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClassDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClassDeclSyntaxBuilder &
ParsedClassDeclSyntaxBuilder::useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClassDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClassDeclSyntaxBuilder &
ParsedClassDeclSyntaxBuilder::useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClassDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClassDeclSyntaxBuilder &
ParsedClassDeclSyntaxBuilder::useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClassDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClassDeclSyntaxBuilder &
ParsedClassDeclSyntaxBuilder::useMembers(ParsedMemberDeclBlockSyntax Members) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClassDeclSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedClassDeclSyntax
ParsedClassDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ClassDecl, Layout);
  return ParsedClassDeclSyntax(std::move(raw));
}

ParsedClassDeclSyntax
ParsedClassDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ClassDecl,
    Layout, SPCtx);
  return ParsedClassDeclSyntax(std::move(raw));
}

ParsedClassDeclSyntax
ParsedClassDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedClassDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_class, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_class, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[7].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStructDeclSyntaxBuilder &
ParsedStructDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StructDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStructDeclSyntaxBuilder &
ParsedStructDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(StructDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStructDeclSyntaxBuilder &
ParsedStructDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StructDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStructDeclSyntaxBuilder &
ParsedStructDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(StructDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStructDeclSyntaxBuilder &
ParsedStructDeclSyntaxBuilder::useStructKeyword(ParsedTokenSyntax StructKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StructDeclSyntax::Cursor::StructKeyword)] =
    StructKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStructDeclSyntaxBuilder &
ParsedStructDeclSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StructDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStructDeclSyntaxBuilder &
ParsedStructDeclSyntaxBuilder::useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StructDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStructDeclSyntaxBuilder &
ParsedStructDeclSyntaxBuilder::useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StructDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStructDeclSyntaxBuilder &
ParsedStructDeclSyntaxBuilder::useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StructDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedStructDeclSyntaxBuilder &
ParsedStructDeclSyntaxBuilder::useMembers(ParsedMemberDeclBlockSyntax Members) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(StructDeclSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedStructDeclSyntax
ParsedStructDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::StructDecl, Layout);
  return ParsedStructDeclSyntax(std::move(raw));
}

ParsedStructDeclSyntax
ParsedStructDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::StructDecl,
    Layout, SPCtx);
  return ParsedStructDeclSyntax(std::move(raw));
}

ParsedStructDeclSyntax
ParsedStructDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedStructDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_struct, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_struct, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[7].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedProtocolDeclSyntaxBuilder &
ParsedProtocolDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedProtocolDeclSyntaxBuilder &
ParsedProtocolDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedProtocolDeclSyntaxBuilder &
ParsedProtocolDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedProtocolDeclSyntaxBuilder &
ParsedProtocolDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedProtocolDeclSyntaxBuilder &
ParsedProtocolDeclSyntaxBuilder::useProtocolKeyword(ParsedTokenSyntax ProtocolKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::ProtocolKeyword)] =
    ProtocolKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedProtocolDeclSyntaxBuilder &
ParsedProtocolDeclSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedProtocolDeclSyntaxBuilder &
ParsedProtocolDeclSyntaxBuilder::useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedProtocolDeclSyntaxBuilder &
ParsedProtocolDeclSyntaxBuilder::useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedProtocolDeclSyntaxBuilder &
ParsedProtocolDeclSyntaxBuilder::useMembers(ParsedMemberDeclBlockSyntax Members) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedProtocolDeclSyntax
ParsedProtocolDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ProtocolDecl, Layout);
  return ParsedProtocolDeclSyntax(std::move(raw));
}

ParsedProtocolDeclSyntax
ParsedProtocolDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ProtocolDecl,
    Layout, SPCtx);
  return ParsedProtocolDeclSyntax(std::move(raw));
}

ParsedProtocolDeclSyntax
ParsedProtocolDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedProtocolDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_protocol, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_protocol, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[6].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExtensionDeclSyntaxBuilder &
ParsedExtensionDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExtensionDeclSyntaxBuilder &
ParsedExtensionDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(ExtensionDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExtensionDeclSyntaxBuilder &
ParsedExtensionDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExtensionDeclSyntaxBuilder &
ParsedExtensionDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(ExtensionDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExtensionDeclSyntaxBuilder &
ParsedExtensionDeclSyntaxBuilder::useExtensionKeyword(ParsedTokenSyntax ExtensionKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::ExtensionKeyword)] =
    ExtensionKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExtensionDeclSyntaxBuilder &
ParsedExtensionDeclSyntaxBuilder::useExtendedType(ParsedTypeSyntax ExtendedType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::ExtendedType)] =
    ExtendedType.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExtensionDeclSyntaxBuilder &
ParsedExtensionDeclSyntaxBuilder::useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExtensionDeclSyntaxBuilder &
ParsedExtensionDeclSyntaxBuilder::useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExtensionDeclSyntaxBuilder &
ParsedExtensionDeclSyntaxBuilder::useMembers(ParsedMemberDeclBlockSyntax Members) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedExtensionDeclSyntax
ParsedExtensionDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ExtensionDecl, Layout);
  return ParsedExtensionDeclSyntax(std::move(raw));
}

ParsedExtensionDeclSyntax
ParsedExtensionDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ExtensionDecl,
    Layout, SPCtx);
  return ParsedExtensionDeclSyntax(std::move(raw));
}

ParsedExtensionDeclSyntax
ParsedExtensionDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedExtensionDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_extension, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_extension, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[6].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberDeclBlockSyntaxBuilder &
ParsedMemberDeclBlockSyntaxBuilder::useLeftBrace(ParsedTokenSyntax LeftBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberDeclBlockSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberDeclBlockSyntaxBuilder &
ParsedMemberDeclBlockSyntaxBuilder::useMembers(ParsedMemberDeclListSyntax Members) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(MembersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberDeclBlockSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberDeclBlockSyntaxBuilder &
ParsedMemberDeclBlockSyntaxBuilder::addMembersMember(ParsedMemberDeclListItemSyntax MemberDeclListItem) {
  assert(Layout[cursorIndex(MemberDeclBlockSyntax::Cursor::Members)].isNull() && "use either 'use' function or 'add', not both");
  MembersMembers.push_back(std::move(MemberDeclListItem.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberDeclBlockSyntaxBuilder &
ParsedMemberDeclBlockSyntaxBuilder::useRightBrace(ParsedTokenSyntax RightBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberDeclBlockSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedMemberDeclBlockSyntax
ParsedMemberDeclBlockSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::MemberDeclBlock, Layout);
  return ParsedMemberDeclBlockSyntax(std::move(raw));
}

ParsedMemberDeclBlockSyntax
ParsedMemberDeclBlockSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::MemberDeclBlock,
    Layout, SPCtx);
  return ParsedMemberDeclBlockSyntax(std::move(raw));
}

ParsedMemberDeclBlockSyntax
ParsedMemberDeclBlockSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedMemberDeclBlockSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_brace, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!MembersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::MemberDeclList,
                          MembersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::MemberDeclList, MembersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::MemberDeclList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::MemberDeclList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_brace, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberDeclListItemSyntaxBuilder &
ParsedMemberDeclListItemSyntaxBuilder::useDecl(ParsedDeclSyntax Decl) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberDeclListItemSyntax::Cursor::Decl)] =
    Decl.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberDeclListItemSyntaxBuilder &
ParsedMemberDeclListItemSyntaxBuilder::useSemicolon(ParsedTokenSyntax Semicolon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberDeclListItemSyntax::Cursor::Semicolon)] =
    Semicolon.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedMemberDeclListItemSyntax
ParsedMemberDeclListItemSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::MemberDeclListItem, Layout);
  return ParsedMemberDeclListItemSyntax(std::move(raw));
}

ParsedMemberDeclListItemSyntax
ParsedMemberDeclListItemSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::MemberDeclListItem,
    Layout, SPCtx);
  return ParsedMemberDeclListItemSyntax(std::move(raw));
}

ParsedMemberDeclListItemSyntax
ParsedMemberDeclListItemSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedMemberDeclListItemSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSourceFileSyntaxBuilder &
ParsedSourceFileSyntaxBuilder::useStatements(ParsedCodeBlockItemListSyntax Statements) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(StatementsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SourceFileSyntax::Cursor::Statements)] =
    Statements.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSourceFileSyntaxBuilder &
ParsedSourceFileSyntaxBuilder::addStatementsMember(ParsedCodeBlockItemSyntax CodeBlockItem) {
  assert(Layout[cursorIndex(SourceFileSyntax::Cursor::Statements)].isNull() && "use either 'use' function or 'add', not both");
  StatementsMembers.push_back(std::move(CodeBlockItem.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSourceFileSyntaxBuilder &
ParsedSourceFileSyntaxBuilder::useEOFToken(ParsedTokenSyntax EOFToken) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SourceFileSyntax::Cursor::EOFToken)] =
    EOFToken.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSourceFileSyntax
ParsedSourceFileSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SourceFile, Layout);
  return ParsedSourceFileSyntax(std::move(raw));
}

ParsedSourceFileSyntax
ParsedSourceFileSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SourceFile,
    Layout, SPCtx);
  return ParsedSourceFileSyntax(std::move(raw));
}

ParsedSourceFileSyntax
ParsedSourceFileSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSourceFileSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!StatementsMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CodeBlockItemList,
                          StatementsMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::CodeBlockItemList, StatementsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CodeBlockItemList, {}, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::CodeBlockItemList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::unknown, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::unknown, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerClauseSyntaxBuilder &
ParsedInitializerClauseSyntaxBuilder::useEqual(ParsedTokenSyntax Equal) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InitializerClauseSyntax::Cursor::Equal)] =
    Equal.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerClauseSyntaxBuilder &
ParsedInitializerClauseSyntaxBuilder::useValue(ParsedExprSyntax Value) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InitializerClauseSyntax::Cursor::Value)] =
    Value.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedInitializerClauseSyntax
ParsedInitializerClauseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::InitializerClause, Layout);
  return ParsedInitializerClauseSyntax(std::move(raw));
}

ParsedInitializerClauseSyntax
ParsedInitializerClauseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::InitializerClause,
    Layout, SPCtx);
  return ParsedInitializerClauseSyntax(std::move(raw));
}

ParsedInitializerClauseSyntax
ParsedInitializerClauseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedInitializerClauseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::equal, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::equal, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionParameterSyntaxBuilder &
ParsedFunctionParameterSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionParameterSyntaxBuilder &
ParsedFunctionParameterSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(FunctionParameterSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionParameterSyntaxBuilder &
ParsedFunctionParameterSyntaxBuilder::useFirstName(ParsedTokenSyntax FirstName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::FirstName)] =
    FirstName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionParameterSyntaxBuilder &
ParsedFunctionParameterSyntaxBuilder::useSecondName(ParsedTokenSyntax SecondName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::SecondName)] =
    SecondName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionParameterSyntaxBuilder &
ParsedFunctionParameterSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionParameterSyntaxBuilder &
ParsedFunctionParameterSyntaxBuilder::useType(ParsedTypeSyntax Type) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionParameterSyntaxBuilder &
ParsedFunctionParameterSyntaxBuilder::useEllipsis(ParsedTokenSyntax Ellipsis) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::Ellipsis)] =
    Ellipsis.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionParameterSyntaxBuilder &
ParsedFunctionParameterSyntaxBuilder::useDefaultArgument(ParsedInitializerClauseSyntax DefaultArgument) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::DefaultArgument)] =
    DefaultArgument.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionParameterSyntaxBuilder &
ParsedFunctionParameterSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedFunctionParameterSyntax
ParsedFunctionParameterSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::FunctionParameter, Layout);
  return ParsedFunctionParameterSyntax(std::move(raw));
}

ParsedFunctionParameterSyntax
ParsedFunctionParameterSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionParameter,
    Layout, SPCtx);
  return ParsedFunctionParameterSyntax(std::move(raw));
}

ParsedFunctionParameterSyntax
ParsedFunctionParameterSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedFunctionParameterSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!AttributesMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          AttributesMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, AttributesMembers);
    }
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionDeclSyntaxBuilder &
ParsedFunctionDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionDeclSyntaxBuilder &
ParsedFunctionDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(FunctionDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionDeclSyntaxBuilder &
ParsedFunctionDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionDeclSyntaxBuilder &
ParsedFunctionDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(FunctionDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionDeclSyntaxBuilder &
ParsedFunctionDeclSyntaxBuilder::useFuncKeyword(ParsedTokenSyntax FuncKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::FuncKeyword)] =
    FuncKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionDeclSyntaxBuilder &
ParsedFunctionDeclSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionDeclSyntaxBuilder &
ParsedFunctionDeclSyntaxBuilder::useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionDeclSyntaxBuilder &
ParsedFunctionDeclSyntaxBuilder::useSignature(ParsedFunctionSignatureSyntax Signature) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::Signature)] =
    Signature.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionDeclSyntaxBuilder &
ParsedFunctionDeclSyntaxBuilder::useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionDeclSyntaxBuilder &
ParsedFunctionDeclSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedFunctionDeclSyntax
ParsedFunctionDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::FunctionDecl, Layout);
  return ParsedFunctionDeclSyntax(std::move(raw));
}

ParsedFunctionDeclSyntax
ParsedFunctionDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionDecl,
    Layout, SPCtx);
  return ParsedFunctionDeclSyntax(std::move(raw));
}

ParsedFunctionDeclSyntax
ParsedFunctionDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedFunctionDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_func, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_func, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[5].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerDeclSyntaxBuilder &
ParsedInitializerDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerDeclSyntaxBuilder &
ParsedInitializerDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(InitializerDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerDeclSyntaxBuilder &
ParsedInitializerDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerDeclSyntaxBuilder &
ParsedInitializerDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(InitializerDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerDeclSyntaxBuilder &
ParsedInitializerDeclSyntaxBuilder::useInitKeyword(ParsedTokenSyntax InitKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::InitKeyword)] =
    InitKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerDeclSyntaxBuilder &
ParsedInitializerDeclSyntaxBuilder::useOptionalMark(ParsedTokenSyntax OptionalMark) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::OptionalMark)] =
    OptionalMark.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerDeclSyntaxBuilder &
ParsedInitializerDeclSyntaxBuilder::useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerDeclSyntaxBuilder &
ParsedInitializerDeclSyntaxBuilder::useParameters(ParsedParameterClauseSyntax Parameters) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::Parameters)] =
    Parameters.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerDeclSyntaxBuilder &
ParsedInitializerDeclSyntaxBuilder::useThrowsOrRethrowsKeyword(ParsedTokenSyntax ThrowsOrRethrowsKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::ThrowsOrRethrowsKeyword)] =
    ThrowsOrRethrowsKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerDeclSyntaxBuilder &
ParsedInitializerDeclSyntaxBuilder::useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedInitializerDeclSyntaxBuilder &
ParsedInitializerDeclSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedInitializerDeclSyntax
ParsedInitializerDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::InitializerDecl, Layout);
  return ParsedInitializerDeclSyntax(std::move(raw));
}

ParsedInitializerDeclSyntax
ParsedInitializerDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::InitializerDecl,
    Layout, SPCtx);
  return ParsedInitializerDeclSyntax(std::move(raw));
}

ParsedInitializerDeclSyntax
ParsedInitializerDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedInitializerDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_init, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_init, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[5].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeinitializerDeclSyntaxBuilder &
ParsedDeinitializerDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeinitializerDeclSyntaxBuilder &
ParsedDeinitializerDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeinitializerDeclSyntaxBuilder &
ParsedDeinitializerDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeinitializerDeclSyntaxBuilder &
ParsedDeinitializerDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeinitializerDeclSyntaxBuilder &
ParsedDeinitializerDeclSyntaxBuilder::useDeinitKeyword(ParsedTokenSyntax DeinitKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::DeinitKeyword)] =
    DeinitKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeinitializerDeclSyntaxBuilder &
ParsedDeinitializerDeclSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDeinitializerDeclSyntax
ParsedDeinitializerDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DeinitializerDecl, Layout);
  return ParsedDeinitializerDeclSyntax(std::move(raw));
}

ParsedDeinitializerDeclSyntax
ParsedDeinitializerDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DeinitializerDecl,
    Layout, SPCtx);
  return ParsedDeinitializerDeclSyntax(std::move(raw));
}

ParsedDeinitializerDeclSyntax
ParsedDeinitializerDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDeinitializerDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_deinit, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_deinit, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptDeclSyntaxBuilder &
ParsedSubscriptDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptDeclSyntaxBuilder &
ParsedSubscriptDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptDeclSyntaxBuilder &
ParsedSubscriptDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptDeclSyntaxBuilder &
ParsedSubscriptDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptDeclSyntaxBuilder &
ParsedSubscriptDeclSyntaxBuilder::useSubscriptKeyword(ParsedTokenSyntax SubscriptKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::SubscriptKeyword)] =
    SubscriptKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptDeclSyntaxBuilder &
ParsedSubscriptDeclSyntaxBuilder::useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptDeclSyntaxBuilder &
ParsedSubscriptDeclSyntaxBuilder::useIndices(ParsedParameterClauseSyntax Indices) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Indices)] =
    Indices.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptDeclSyntaxBuilder &
ParsedSubscriptDeclSyntaxBuilder::useResult(ParsedReturnClauseSyntax Result) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Result)] =
    Result.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptDeclSyntaxBuilder &
ParsedSubscriptDeclSyntaxBuilder::useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSubscriptDeclSyntaxBuilder &
ParsedSubscriptDeclSyntaxBuilder::useAccessor(ParsedSyntax Accessor) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Accessor)] =
    Accessor.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSubscriptDeclSyntax
ParsedSubscriptDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SubscriptDecl, Layout);
  return ParsedSubscriptDeclSyntax(std::move(raw));
}

ParsedSubscriptDeclSyntax
ParsedSubscriptDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SubscriptDecl,
    Layout, SPCtx);
  return ParsedSubscriptDeclSyntax(std::move(raw));
}

ParsedSubscriptDeclSyntax
ParsedSubscriptDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSubscriptDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_subscript, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_subscript, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[5].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessLevelModifierSyntaxBuilder &
ParsedAccessLevelModifierSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessLevelModifierSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessLevelModifierSyntaxBuilder &
ParsedAccessLevelModifierSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessLevelModifierSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessLevelModifierSyntaxBuilder &
ParsedAccessLevelModifierSyntaxBuilder::useModifier(ParsedTokenSyntax Modifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessLevelModifierSyntax::Cursor::Modifier)] =
    Modifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessLevelModifierSyntaxBuilder &
ParsedAccessLevelModifierSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessLevelModifierSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAccessLevelModifierSyntax
ParsedAccessLevelModifierSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AccessLevelModifier, Layout);
  return ParsedAccessLevelModifierSyntax(std::move(raw));
}

ParsedAccessLevelModifierSyntax
ParsedAccessLevelModifierSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AccessLevelModifier,
    Layout, SPCtx);
  return ParsedAccessLevelModifierSyntax(std::move(raw));
}

ParsedAccessLevelModifierSyntax
ParsedAccessLevelModifierSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAccessLevelModifierSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessPathComponentSyntaxBuilder &
ParsedAccessPathComponentSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessPathComponentSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessPathComponentSyntaxBuilder &
ParsedAccessPathComponentSyntaxBuilder::useTrailingDot(ParsedTokenSyntax TrailingDot) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessPathComponentSyntax::Cursor::TrailingDot)] =
    TrailingDot.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAccessPathComponentSyntax
ParsedAccessPathComponentSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AccessPathComponent, Layout);
  return ParsedAccessPathComponentSyntax(std::move(raw));
}

ParsedAccessPathComponentSyntax
ParsedAccessPathComponentSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AccessPathComponent,
    Layout, SPCtx);
  return ParsedAccessPathComponentSyntax(std::move(raw));
}

ParsedAccessPathComponentSyntax
ParsedAccessPathComponentSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAccessPathComponentSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImportDeclSyntaxBuilder &
ParsedImportDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ImportDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImportDeclSyntaxBuilder &
ParsedImportDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(ImportDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImportDeclSyntaxBuilder &
ParsedImportDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ImportDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImportDeclSyntaxBuilder &
ParsedImportDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(ImportDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImportDeclSyntaxBuilder &
ParsedImportDeclSyntaxBuilder::useImportTok(ParsedTokenSyntax ImportTok) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ImportDeclSyntax::Cursor::ImportTok)] =
    ImportTok.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImportDeclSyntaxBuilder &
ParsedImportDeclSyntaxBuilder::useImportKind(ParsedTokenSyntax ImportKind) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ImportDeclSyntax::Cursor::ImportKind)] =
    ImportKind.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImportDeclSyntaxBuilder &
ParsedImportDeclSyntaxBuilder::usePath(ParsedAccessPathSyntax Path) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(PathMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ImportDeclSyntax::Cursor::Path)] =
    Path.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImportDeclSyntaxBuilder &
ParsedImportDeclSyntaxBuilder::addPathMember(ParsedAccessPathComponentSyntax AccessPathComponent) {
  assert(Layout[cursorIndex(ImportDeclSyntax::Cursor::Path)].isNull() && "use either 'use' function or 'add', not both");
  PathMembers.push_back(std::move(AccessPathComponent.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedImportDeclSyntax
ParsedImportDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ImportDecl, Layout);
  return ParsedImportDeclSyntax(std::move(raw));
}

ParsedImportDeclSyntax
ParsedImportDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ImportDecl,
    Layout, SPCtx);
  return ParsedImportDeclSyntax(std::move(raw));
}

ParsedImportDeclSyntax
ParsedImportDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedImportDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!PathMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          PathMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, PathMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!PathMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          PathMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, PathMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_import, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_import, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!PathMembers.empty()) {
    if (deferred) {
      Layout[4] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AccessPath,
                          PathMembers, SPCtx);
    } else {
      Layout[4] = Rec.recordRawSyntax(SyntaxKind::AccessPath, PathMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[4] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AccessPath, {}, SPCtx);
    } else {
      Layout[4] = Rec.recordRawSyntax(SyntaxKind::AccessPath, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorParameterSyntaxBuilder &
ParsedAccessorParameterSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessorParameterSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorParameterSyntaxBuilder &
ParsedAccessorParameterSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessorParameterSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorParameterSyntaxBuilder &
ParsedAccessorParameterSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessorParameterSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAccessorParameterSyntax
ParsedAccessorParameterSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AccessorParameter, Layout);
  return ParsedAccessorParameterSyntax(std::move(raw));
}

ParsedAccessorParameterSyntax
ParsedAccessorParameterSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AccessorParameter,
    Layout, SPCtx);
  return ParsedAccessorParameterSyntax(std::move(raw));
}

ParsedAccessorParameterSyntax
ParsedAccessorParameterSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAccessorParameterSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorDeclSyntaxBuilder &
ParsedAccessorDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessorDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorDeclSyntaxBuilder &
ParsedAccessorDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(AccessorDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorDeclSyntaxBuilder &
ParsedAccessorDeclSyntaxBuilder::useModifier(ParsedDeclModifierSyntax Modifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessorDeclSyntax::Cursor::Modifier)] =
    Modifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorDeclSyntaxBuilder &
ParsedAccessorDeclSyntaxBuilder::useAccessorKind(ParsedTokenSyntax AccessorKind) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessorDeclSyntax::Cursor::AccessorKind)] =
    AccessorKind.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorDeclSyntaxBuilder &
ParsedAccessorDeclSyntaxBuilder::useParameter(ParsedAccessorParameterSyntax Parameter) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessorDeclSyntax::Cursor::Parameter)] =
    Parameter.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorDeclSyntaxBuilder &
ParsedAccessorDeclSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessorDeclSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAccessorDeclSyntax
ParsedAccessorDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AccessorDecl, Layout);
  return ParsedAccessorDeclSyntax(std::move(raw));
}

ParsedAccessorDeclSyntax
ParsedAccessorDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AccessorDecl,
    Layout, SPCtx);
  return ParsedAccessorDeclSyntax(std::move(raw));
}

ParsedAccessorDeclSyntax
ParsedAccessorDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAccessorDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!AttributesMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          AttributesMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, AttributesMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::unknown, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::unknown, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorBlockSyntaxBuilder &
ParsedAccessorBlockSyntaxBuilder::useLeftBrace(ParsedTokenSyntax LeftBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessorBlockSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorBlockSyntaxBuilder &
ParsedAccessorBlockSyntaxBuilder::useAccessors(ParsedAccessorListSyntax Accessors) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AccessorsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessorBlockSyntax::Cursor::Accessors)] =
    Accessors.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorBlockSyntaxBuilder &
ParsedAccessorBlockSyntaxBuilder::addAccessorsMember(ParsedAccessorDeclSyntax AccessorDecl) {
  assert(Layout[cursorIndex(AccessorBlockSyntax::Cursor::Accessors)].isNull() && "use either 'use' function or 'add', not both");
  AccessorsMembers.push_back(std::move(AccessorDecl.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAccessorBlockSyntaxBuilder &
ParsedAccessorBlockSyntaxBuilder::useRightBrace(ParsedTokenSyntax RightBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AccessorBlockSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAccessorBlockSyntax
ParsedAccessorBlockSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AccessorBlock, Layout);
  return ParsedAccessorBlockSyntax(std::move(raw));
}

ParsedAccessorBlockSyntax
ParsedAccessorBlockSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AccessorBlock,
    Layout, SPCtx);
  return ParsedAccessorBlockSyntax(std::move(raw));
}

ParsedAccessorBlockSyntax
ParsedAccessorBlockSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAccessorBlockSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_brace, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!AccessorsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AccessorList,
                          AccessorsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::AccessorList, AccessorsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AccessorList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::AccessorList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_brace, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPatternBindingSyntaxBuilder &
ParsedPatternBindingSyntaxBuilder::usePattern(ParsedPatternSyntax Pattern) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PatternBindingSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPatternBindingSyntaxBuilder &
ParsedPatternBindingSyntaxBuilder::useTypeAnnotation(ParsedTypeAnnotationSyntax TypeAnnotation) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PatternBindingSyntax::Cursor::TypeAnnotation)] =
    TypeAnnotation.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPatternBindingSyntaxBuilder &
ParsedPatternBindingSyntaxBuilder::useInitializer(ParsedInitializerClauseSyntax Initializer) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PatternBindingSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPatternBindingSyntaxBuilder &
ParsedPatternBindingSyntaxBuilder::useAccessor(ParsedSyntax Accessor) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PatternBindingSyntax::Cursor::Accessor)] =
    Accessor.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPatternBindingSyntaxBuilder &
ParsedPatternBindingSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PatternBindingSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPatternBindingSyntax
ParsedPatternBindingSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PatternBinding, Layout);
  return ParsedPatternBindingSyntax(std::move(raw));
}

ParsedPatternBindingSyntax
ParsedPatternBindingSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PatternBinding,
    Layout, SPCtx);
  return ParsedPatternBindingSyntax(std::move(raw));
}

ParsedPatternBindingSyntax
ParsedPatternBindingSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPatternBindingSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedVariableDeclSyntaxBuilder &
ParsedVariableDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(VariableDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedVariableDeclSyntaxBuilder &
ParsedVariableDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(VariableDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedVariableDeclSyntaxBuilder &
ParsedVariableDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(VariableDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedVariableDeclSyntaxBuilder &
ParsedVariableDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(VariableDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedVariableDeclSyntaxBuilder &
ParsedVariableDeclSyntaxBuilder::useLetOrVarKeyword(ParsedTokenSyntax LetOrVarKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(VariableDeclSyntax::Cursor::LetOrVarKeyword)] =
    LetOrVarKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedVariableDeclSyntaxBuilder &
ParsedVariableDeclSyntaxBuilder::useBindings(ParsedPatternBindingListSyntax Bindings) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(BindingsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(VariableDeclSyntax::Cursor::Bindings)] =
    Bindings.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedVariableDeclSyntaxBuilder &
ParsedVariableDeclSyntaxBuilder::addBindingsMember(ParsedPatternBindingSyntax PatternBinding) {
  assert(Layout[cursorIndex(VariableDeclSyntax::Cursor::Bindings)].isNull() && "use either 'use' function or 'add', not both");
  BindingsMembers.push_back(std::move(PatternBinding.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedVariableDeclSyntax
ParsedVariableDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::VariableDecl, Layout);
  return ParsedVariableDeclSyntax(std::move(raw));
}

ParsedVariableDeclSyntax
ParsedVariableDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::VariableDecl,
    Layout, SPCtx);
  return ParsedVariableDeclSyntax(std::move(raw));
}

ParsedVariableDeclSyntax
ParsedVariableDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedVariableDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!BindingsMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          BindingsMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, BindingsMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!BindingsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          BindingsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, BindingsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_let, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_let, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!BindingsMembers.empty()) {
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PatternBindingList,
                          BindingsMembers, SPCtx);
    } else {
      Layout[3] = Rec.recordRawSyntax(SyntaxKind::PatternBindingList, BindingsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PatternBindingList, {}, SPCtx);
    } else {
      Layout[3] = Rec.recordRawSyntax(SyntaxKind::PatternBindingList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCaseElementSyntaxBuilder &
ParsedEnumCaseElementSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCaseElementSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCaseElementSyntaxBuilder &
ParsedEnumCaseElementSyntaxBuilder::useAssociatedValue(ParsedParameterClauseSyntax AssociatedValue) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCaseElementSyntax::Cursor::AssociatedValue)] =
    AssociatedValue.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCaseElementSyntaxBuilder &
ParsedEnumCaseElementSyntaxBuilder::useRawValue(ParsedInitializerClauseSyntax RawValue) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCaseElementSyntax::Cursor::RawValue)] =
    RawValue.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCaseElementSyntaxBuilder &
ParsedEnumCaseElementSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCaseElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedEnumCaseElementSyntax
ParsedEnumCaseElementSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::EnumCaseElement, Layout);
  return ParsedEnumCaseElementSyntax(std::move(raw));
}

ParsedEnumCaseElementSyntax
ParsedEnumCaseElementSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::EnumCaseElement,
    Layout, SPCtx);
  return ParsedEnumCaseElementSyntax(std::move(raw));
}

ParsedEnumCaseElementSyntax
ParsedEnumCaseElementSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedEnumCaseElementSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCaseDeclSyntaxBuilder &
ParsedEnumCaseDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCaseDeclSyntaxBuilder &
ParsedEnumCaseDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCaseDeclSyntaxBuilder &
ParsedEnumCaseDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCaseDeclSyntaxBuilder &
ParsedEnumCaseDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCaseDeclSyntaxBuilder &
ParsedEnumCaseDeclSyntaxBuilder::useCaseKeyword(ParsedTokenSyntax CaseKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::CaseKeyword)] =
    CaseKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCaseDeclSyntaxBuilder &
ParsedEnumCaseDeclSyntaxBuilder::useElements(ParsedEnumCaseElementListSyntax Elements) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ElementsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCaseDeclSyntaxBuilder &
ParsedEnumCaseDeclSyntaxBuilder::addElementsMember(ParsedEnumCaseElementSyntax EnumCaseElement) {
  assert(Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Elements)].isNull() && "use either 'use' function or 'add', not both");
  ElementsMembers.push_back(std::move(EnumCaseElement.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedEnumCaseDeclSyntax
ParsedEnumCaseDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::EnumCaseDecl, Layout);
  return ParsedEnumCaseDeclSyntax(std::move(raw));
}

ParsedEnumCaseDeclSyntax
ParsedEnumCaseDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::EnumCaseDecl,
    Layout, SPCtx);
  return ParsedEnumCaseDeclSyntax(std::move(raw));
}

ParsedEnumCaseDeclSyntax
ParsedEnumCaseDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedEnumCaseDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ElementsMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ElementsMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ElementsMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ElementsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ElementsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ElementsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_case, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_case, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ElementsMembers.empty()) {
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::EnumCaseElementList,
                          ElementsMembers, SPCtx);
    } else {
      Layout[3] = Rec.recordRawSyntax(SyntaxKind::EnumCaseElementList, ElementsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::EnumCaseElementList, {}, SPCtx);
    } else {
      Layout[3] = Rec.recordRawSyntax(SyntaxKind::EnumCaseElementList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumDeclSyntaxBuilder &
ParsedEnumDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumDeclSyntaxBuilder &
ParsedEnumDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(EnumDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumDeclSyntaxBuilder &
ParsedEnumDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumDeclSyntaxBuilder &
ParsedEnumDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(EnumDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumDeclSyntaxBuilder &
ParsedEnumDeclSyntaxBuilder::useEnumKeyword(ParsedTokenSyntax EnumKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumDeclSyntax::Cursor::EnumKeyword)] =
    EnumKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumDeclSyntaxBuilder &
ParsedEnumDeclSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumDeclSyntaxBuilder &
ParsedEnumDeclSyntaxBuilder::useGenericParameters(ParsedGenericParameterClauseSyntax GenericParameters) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumDeclSyntax::Cursor::GenericParameters)] =
    GenericParameters.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumDeclSyntaxBuilder &
ParsedEnumDeclSyntaxBuilder::useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumDeclSyntaxBuilder &
ParsedEnumDeclSyntaxBuilder::useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumDeclSyntaxBuilder &
ParsedEnumDeclSyntaxBuilder::useMembers(ParsedMemberDeclBlockSyntax Members) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumDeclSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedEnumDeclSyntax
ParsedEnumDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::EnumDecl, Layout);
  return ParsedEnumDeclSyntax(std::move(raw));
}

ParsedEnumDeclSyntax
ParsedEnumDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::EnumDecl,
    Layout, SPCtx);
  return ParsedEnumDeclSyntax(std::move(raw));
}

ParsedEnumDeclSyntax
ParsedEnumDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedEnumDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_enum, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_enum, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[7].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOperatorDeclSyntaxBuilder &
ParsedOperatorDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OperatorDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOperatorDeclSyntaxBuilder &
ParsedOperatorDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(OperatorDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOperatorDeclSyntaxBuilder &
ParsedOperatorDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OperatorDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOperatorDeclSyntaxBuilder &
ParsedOperatorDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(OperatorDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOperatorDeclSyntaxBuilder &
ParsedOperatorDeclSyntaxBuilder::useOperatorKeyword(ParsedTokenSyntax OperatorKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OperatorDeclSyntax::Cursor::OperatorKeyword)] =
    OperatorKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOperatorDeclSyntaxBuilder &
ParsedOperatorDeclSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OperatorDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOperatorDeclSyntaxBuilder &
ParsedOperatorDeclSyntaxBuilder::useOperatorPrecedenceAndTypes(ParsedOperatorPrecedenceAndTypesSyntax OperatorPrecedenceAndTypes) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OperatorDeclSyntax::Cursor::OperatorPrecedenceAndTypes)] =
    OperatorPrecedenceAndTypes.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedOperatorDeclSyntax
ParsedOperatorDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::OperatorDecl, Layout);
  return ParsedOperatorDeclSyntax(std::move(raw));
}

ParsedOperatorDeclSyntax
ParsedOperatorDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::OperatorDecl,
    Layout, SPCtx);
  return ParsedOperatorDeclSyntax(std::move(raw));
}

ParsedOperatorDeclSyntax
ParsedOperatorDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedOperatorDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, ModifiersMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ModifiersMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          ModifiersMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, ModifiersMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_operator, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_operator, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::oper_binary_unspaced, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::oper_binary_unspaced, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOperatorPrecedenceAndTypesSyntaxBuilder &
ParsedOperatorPrecedenceAndTypesSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OperatorPrecedenceAndTypesSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOperatorPrecedenceAndTypesSyntaxBuilder &
ParsedOperatorPrecedenceAndTypesSyntaxBuilder::usePrecedenceGroupAndDesignatedTypes(ParsedIdentifierListSyntax PrecedenceGroupAndDesignatedTypes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(PrecedenceGroupAndDesignatedTypesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OperatorPrecedenceAndTypesSyntax::Cursor::PrecedenceGroupAndDesignatedTypes)] =
    PrecedenceGroupAndDesignatedTypes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOperatorPrecedenceAndTypesSyntaxBuilder &
ParsedOperatorPrecedenceAndTypesSyntaxBuilder::addPrecedenceGroupAndDesignatedTypesMember(ParsedTokenSyntax IdentifierToken) {
  assert(Layout[cursorIndex(OperatorPrecedenceAndTypesSyntax::Cursor::PrecedenceGroupAndDesignatedTypes)].isNull() && "use either 'use' function or 'add', not both");
  PrecedenceGroupAndDesignatedTypesMembers.push_back(std::move(IdentifierToken.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedOperatorPrecedenceAndTypesSyntax
ParsedOperatorPrecedenceAndTypesSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::OperatorPrecedenceAndTypes, Layout);
  return ParsedOperatorPrecedenceAndTypesSyntax(std::move(raw));
}

ParsedOperatorPrecedenceAndTypesSyntax
ParsedOperatorPrecedenceAndTypesSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::OperatorPrecedenceAndTypes,
    Layout, SPCtx);
  return ParsedOperatorPrecedenceAndTypesSyntax(std::move(raw));
}

ParsedOperatorPrecedenceAndTypesSyntax
ParsedOperatorPrecedenceAndTypesSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedOperatorPrecedenceAndTypesSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!PrecedenceGroupAndDesignatedTypesMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IdentifierList,
                          PrecedenceGroupAndDesignatedTypesMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::IdentifierList, PrecedenceGroupAndDesignatedTypesMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IdentifierList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::IdentifierList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupDeclSyntaxBuilder &
ParsedPrecedenceGroupDeclSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupDeclSyntaxBuilder &
ParsedPrecedenceGroupDeclSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupDeclSyntaxBuilder &
ParsedPrecedenceGroupDeclSyntaxBuilder::useModifiers(ParsedModifierListSyntax Modifiers) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ModifiersMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupDeclSyntaxBuilder &
ParsedPrecedenceGroupDeclSyntaxBuilder::addModifiersMember(ParsedDeclModifierSyntax Modifier) {
  assert(Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::Modifiers)].isNull() && "use either 'use' function or 'add', not both");
  ModifiersMembers.push_back(std::move(Modifier.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupDeclSyntaxBuilder &
ParsedPrecedenceGroupDeclSyntaxBuilder::usePrecedencegroupKeyword(ParsedTokenSyntax PrecedencegroupKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::PrecedencegroupKeyword)] =
    PrecedencegroupKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupDeclSyntaxBuilder &
ParsedPrecedenceGroupDeclSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupDeclSyntaxBuilder &
ParsedPrecedenceGroupDeclSyntaxBuilder::useLeftBrace(ParsedTokenSyntax LeftBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupDeclSyntaxBuilder &
ParsedPrecedenceGroupDeclSyntaxBuilder::useGroupAttributes(ParsedPrecedenceGroupAttributeListSyntax GroupAttributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(GroupAttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::GroupAttributes)] =
    GroupAttributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupDeclSyntaxBuilder &
ParsedPrecedenceGroupDeclSyntaxBuilder::addGroupAttributesMember(ParsedSyntax PrecedenceGroupAttribute) {
  assert(Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::GroupAttributes)].isNull() && "use either 'use' function or 'add', not both");
  GroupAttributesMembers.push_back(std::move(PrecedenceGroupAttribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupDeclSyntaxBuilder &
ParsedPrecedenceGroupDeclSyntaxBuilder::useRightBrace(ParsedTokenSyntax RightBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPrecedenceGroupDeclSyntax
ParsedPrecedenceGroupDeclSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PrecedenceGroupDecl, Layout);
  return ParsedPrecedenceGroupDeclSyntax(std::move(raw));
}

ParsedPrecedenceGroupDeclSyntax
ParsedPrecedenceGroupDeclSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PrecedenceGroupDecl,
    Layout, SPCtx);
  return ParsedPrecedenceGroupDeclSyntax(std::move(raw));
}

ParsedPrecedenceGroupDeclSyntax
ParsedPrecedenceGroupDeclSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPrecedenceGroupDeclSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!GroupAttributesMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          GroupAttributesMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, GroupAttributesMembers);
    }
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!GroupAttributesMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ModifierList,
                          GroupAttributesMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ModifierList, GroupAttributesMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_precedencegroup, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_precedencegroup, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[4] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_brace, SourceLoc());
    } else {
      Layout[4] = Rec.recordMissingToken(tok::l_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!GroupAttributesMembers.empty()) {
    if (deferred) {
      Layout[5] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PrecedenceGroupAttributeList,
                          GroupAttributesMembers, SPCtx);
    } else {
      Layout[5] = Rec.recordRawSyntax(SyntaxKind::PrecedenceGroupAttributeList, GroupAttributesMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[5].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[5] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PrecedenceGroupAttributeList, {}, SPCtx);
    } else {
      Layout[5] = Rec.recordRawSyntax(SyntaxKind::PrecedenceGroupAttributeList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[6].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[6] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_brace, SourceLoc());
    } else {
      Layout[6] = Rec.recordMissingToken(tok::r_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupRelationSyntaxBuilder &
ParsedPrecedenceGroupRelationSyntaxBuilder::useHigherThanOrLowerThan(ParsedTokenSyntax HigherThanOrLowerThan) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupRelationSyntax::Cursor::HigherThanOrLowerThan)] =
    HigherThanOrLowerThan.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupRelationSyntaxBuilder &
ParsedPrecedenceGroupRelationSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupRelationSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupRelationSyntaxBuilder &
ParsedPrecedenceGroupRelationSyntaxBuilder::useOtherNames(ParsedPrecedenceGroupNameListSyntax OtherNames) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(OtherNamesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupRelationSyntax::Cursor::OtherNames)] =
    OtherNames.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupRelationSyntaxBuilder &
ParsedPrecedenceGroupRelationSyntaxBuilder::addOtherNamesMember(ParsedPrecedenceGroupNameElementSyntax PrecedenceGroupNameElement) {
  assert(Layout[cursorIndex(PrecedenceGroupRelationSyntax::Cursor::OtherNames)].isNull() && "use either 'use' function or 'add', not both");
  OtherNamesMembers.push_back(std::move(PrecedenceGroupNameElement.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPrecedenceGroupRelationSyntax
ParsedPrecedenceGroupRelationSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PrecedenceGroupRelation, Layout);
  return ParsedPrecedenceGroupRelationSyntax(std::move(raw));
}

ParsedPrecedenceGroupRelationSyntax
ParsedPrecedenceGroupRelationSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PrecedenceGroupRelation,
    Layout, SPCtx);
  return ParsedPrecedenceGroupRelationSyntax(std::move(raw));
}

ParsedPrecedenceGroupRelationSyntax
ParsedPrecedenceGroupRelationSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPrecedenceGroupRelationSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!OtherNamesMembers.empty()) {
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PrecedenceGroupNameList,
                          OtherNamesMembers, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::PrecedenceGroupNameList, OtherNamesMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PrecedenceGroupNameList, {}, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::PrecedenceGroupNameList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupNameElementSyntaxBuilder &
ParsedPrecedenceGroupNameElementSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupNameElementSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupNameElementSyntaxBuilder &
ParsedPrecedenceGroupNameElementSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupNameElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPrecedenceGroupNameElementSyntax
ParsedPrecedenceGroupNameElementSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PrecedenceGroupNameElement, Layout);
  return ParsedPrecedenceGroupNameElementSyntax(std::move(raw));
}

ParsedPrecedenceGroupNameElementSyntax
ParsedPrecedenceGroupNameElementSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PrecedenceGroupNameElement,
    Layout, SPCtx);
  return ParsedPrecedenceGroupNameElementSyntax(std::move(raw));
}

ParsedPrecedenceGroupNameElementSyntax
ParsedPrecedenceGroupNameElementSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPrecedenceGroupNameElementSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupAssignmentSyntaxBuilder &
ParsedPrecedenceGroupAssignmentSyntaxBuilder::useAssignmentKeyword(ParsedTokenSyntax AssignmentKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupAssignmentSyntax::Cursor::AssignmentKeyword)] =
    AssignmentKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupAssignmentSyntaxBuilder &
ParsedPrecedenceGroupAssignmentSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupAssignmentSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupAssignmentSyntaxBuilder &
ParsedPrecedenceGroupAssignmentSyntaxBuilder::useFlag(ParsedTokenSyntax Flag) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupAssignmentSyntax::Cursor::Flag)] =
    Flag.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPrecedenceGroupAssignmentSyntax
ParsedPrecedenceGroupAssignmentSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PrecedenceGroupAssignment, Layout);
  return ParsedPrecedenceGroupAssignmentSyntax(std::move(raw));
}

ParsedPrecedenceGroupAssignmentSyntax
ParsedPrecedenceGroupAssignmentSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PrecedenceGroupAssignment,
    Layout, SPCtx);
  return ParsedPrecedenceGroupAssignmentSyntax(std::move(raw));
}

ParsedPrecedenceGroupAssignmentSyntax
ParsedPrecedenceGroupAssignmentSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPrecedenceGroupAssignmentSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_true, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_true, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupAssociativitySyntaxBuilder &
ParsedPrecedenceGroupAssociativitySyntaxBuilder::useAssociativityKeyword(ParsedTokenSyntax AssociativityKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupAssociativitySyntax::Cursor::AssociativityKeyword)] =
    AssociativityKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupAssociativitySyntaxBuilder &
ParsedPrecedenceGroupAssociativitySyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupAssociativitySyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPrecedenceGroupAssociativitySyntaxBuilder &
ParsedPrecedenceGroupAssociativitySyntaxBuilder::useValue(ParsedTokenSyntax Value) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PrecedenceGroupAssociativitySyntax::Cursor::Value)] =
    Value.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPrecedenceGroupAssociativitySyntax
ParsedPrecedenceGroupAssociativitySyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PrecedenceGroupAssociativity, Layout);
  return ParsedPrecedenceGroupAssociativitySyntax(std::move(raw));
}

ParsedPrecedenceGroupAssociativitySyntax
ParsedPrecedenceGroupAssociativitySyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PrecedenceGroupAssociativity,
    Layout, SPCtx);
  return ParsedPrecedenceGroupAssociativitySyntax(std::move(raw));
}

ParsedPrecedenceGroupAssociativitySyntax
ParsedPrecedenceGroupAssociativitySyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPrecedenceGroupAssociativitySyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCustomAttributeSyntaxBuilder &
ParsedCustomAttributeSyntaxBuilder::useAtSignToken(ParsedTokenSyntax AtSignToken) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CustomAttributeSyntax::Cursor::AtSignToken)] =
    AtSignToken.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCustomAttributeSyntaxBuilder &
ParsedCustomAttributeSyntaxBuilder::useAttributeName(ParsedTypeSyntax AttributeName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CustomAttributeSyntax::Cursor::AttributeName)] =
    AttributeName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCustomAttributeSyntaxBuilder &
ParsedCustomAttributeSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CustomAttributeSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCustomAttributeSyntaxBuilder &
ParsedCustomAttributeSyntaxBuilder::useArgumentList(ParsedFunctionCallArgumentListSyntax ArgumentList) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ArgumentListMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CustomAttributeSyntax::Cursor::ArgumentList)] =
    ArgumentList.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCustomAttributeSyntaxBuilder &
ParsedCustomAttributeSyntaxBuilder::addArgumentListMember(ParsedFunctionCallArgumentSyntax FunctionCallArgument) {
  assert(Layout[cursorIndex(CustomAttributeSyntax::Cursor::ArgumentList)].isNull() && "use either 'use' function or 'add', not both");
  ArgumentListMembers.push_back(std::move(FunctionCallArgument.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCustomAttributeSyntaxBuilder &
ParsedCustomAttributeSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CustomAttributeSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedCustomAttributeSyntax
ParsedCustomAttributeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::CustomAttribute, Layout);
  return ParsedCustomAttributeSyntax(std::move(raw));
}

ParsedCustomAttributeSyntax
ParsedCustomAttributeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CustomAttribute,
    Layout, SPCtx);
  return ParsedCustomAttributeSyntax(std::move(raw));
}

ParsedCustomAttributeSyntax
ParsedCustomAttributeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedCustomAttributeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::at_sign, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::at_sign, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ArgumentListMembers.empty()) {
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionCallArgumentList,
                          ArgumentListMembers, SPCtx);
    } else {
      Layout[3] = Rec.recordRawSyntax(SyntaxKind::FunctionCallArgumentList, ArgumentListMembers);
    }
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAttributeSyntaxBuilder &
ParsedAttributeSyntaxBuilder::useAtSignToken(ParsedTokenSyntax AtSignToken) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AttributeSyntax::Cursor::AtSignToken)] =
    AtSignToken.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAttributeSyntaxBuilder &
ParsedAttributeSyntaxBuilder::useAttributeName(ParsedTokenSyntax AttributeName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AttributeSyntax::Cursor::AttributeName)] =
    AttributeName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAttributeSyntaxBuilder &
ParsedAttributeSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AttributeSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAttributeSyntaxBuilder &
ParsedAttributeSyntaxBuilder::useArgument(ParsedSyntax Argument) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AttributeSyntax::Cursor::Argument)] =
    Argument.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAttributeSyntaxBuilder &
ParsedAttributeSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AttributeSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAttributeSyntaxBuilder &
ParsedAttributeSyntaxBuilder::useTokenList(ParsedTokenListSyntax TokenList) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(TokenListMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AttributeSyntax::Cursor::TokenList)] =
    TokenList.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAttributeSyntaxBuilder &
ParsedAttributeSyntaxBuilder::addTokenListMember(ParsedTokenSyntax Token) {
  assert(Layout[cursorIndex(AttributeSyntax::Cursor::TokenList)].isNull() && "use either 'use' function or 'add', not both");
  TokenListMembers.push_back(std::move(Token.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAttributeSyntax
ParsedAttributeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::Attribute, Layout);
  return ParsedAttributeSyntax(std::move(raw));
}

ParsedAttributeSyntax
ParsedAttributeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::Attribute,
    Layout, SPCtx);
  return ParsedAttributeSyntax(std::move(raw));
}

ParsedAttributeSyntax
ParsedAttributeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAttributeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::at_sign, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::at_sign, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::unknown, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::unknown, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!TokenListMembers.empty()) {
    if (deferred) {
      Layout[5] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TokenList,
                          TokenListMembers, SPCtx);
    } else {
      Layout[5] = Rec.recordRawSyntax(SyntaxKind::TokenList, TokenListMembers);
    }
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedLabeledSpecializeEntrySyntaxBuilder &
ParsedLabeledSpecializeEntrySyntaxBuilder::useLabel(ParsedTokenSyntax Label) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(LabeledSpecializeEntrySyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedLabeledSpecializeEntrySyntaxBuilder &
ParsedLabeledSpecializeEntrySyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(LabeledSpecializeEntrySyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedLabeledSpecializeEntrySyntaxBuilder &
ParsedLabeledSpecializeEntrySyntaxBuilder::useValue(ParsedTokenSyntax Value) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(LabeledSpecializeEntrySyntax::Cursor::Value)] =
    Value.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedLabeledSpecializeEntrySyntaxBuilder &
ParsedLabeledSpecializeEntrySyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(LabeledSpecializeEntrySyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedLabeledSpecializeEntrySyntax
ParsedLabeledSpecializeEntrySyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::LabeledSpecializeEntry, Layout);
  return ParsedLabeledSpecializeEntrySyntax(std::move(raw));
}

ParsedLabeledSpecializeEntrySyntax
ParsedLabeledSpecializeEntrySyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::LabeledSpecializeEntry,
    Layout, SPCtx);
  return ParsedLabeledSpecializeEntrySyntax(std::move(raw));
}

ParsedLabeledSpecializeEntrySyntax
ParsedLabeledSpecializeEntrySyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedLabeledSpecializeEntrySyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::unknown, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::unknown, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedNamedAttributeStringArgumentSyntaxBuilder &
ParsedNamedAttributeStringArgumentSyntaxBuilder::useNameTok(ParsedTokenSyntax NameTok) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(NamedAttributeStringArgumentSyntax::Cursor::NameTok)] =
    NameTok.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedNamedAttributeStringArgumentSyntaxBuilder &
ParsedNamedAttributeStringArgumentSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(NamedAttributeStringArgumentSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedNamedAttributeStringArgumentSyntaxBuilder &
ParsedNamedAttributeStringArgumentSyntaxBuilder::useStringOrDeclname(ParsedSyntax StringOrDeclname) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(NamedAttributeStringArgumentSyntax::Cursor::StringOrDeclname)] =
    StringOrDeclname.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedNamedAttributeStringArgumentSyntax
ParsedNamedAttributeStringArgumentSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::NamedAttributeStringArgument, Layout);
  return ParsedNamedAttributeStringArgumentSyntax(std::move(raw));
}

ParsedNamedAttributeStringArgumentSyntax
ParsedNamedAttributeStringArgumentSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::NamedAttributeStringArgument,
    Layout, SPCtx);
  return ParsedNamedAttributeStringArgumentSyntax(std::move(raw));
}

ParsedNamedAttributeStringArgumentSyntax
ParsedNamedAttributeStringArgumentSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedNamedAttributeStringArgumentSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::unknown, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::unknown, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclNameSyntaxBuilder &
ParsedDeclNameSyntaxBuilder::useDeclBaseName(ParsedSyntax DeclBaseName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclNameSyntax::Cursor::DeclBaseName)] =
    DeclBaseName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclNameSyntaxBuilder &
ParsedDeclNameSyntaxBuilder::useDeclNameArguments(ParsedDeclNameArgumentsSyntax DeclNameArguments) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclNameSyntax::Cursor::DeclNameArguments)] =
    DeclNameArguments.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDeclNameSyntax
ParsedDeclNameSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DeclName, Layout);
  return ParsedDeclNameSyntax(std::move(raw));
}

ParsedDeclNameSyntax
ParsedDeclNameSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DeclName,
    Layout, SPCtx);
  return ParsedDeclNameSyntax(std::move(raw));
}

ParsedDeclNameSyntax
ParsedDeclNameSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDeclNameSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImplementsAttributeArgumentsSyntaxBuilder &
ParsedImplementsAttributeArgumentsSyntaxBuilder::useType(ParsedSimpleTypeIdentifierSyntax Type) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ImplementsAttributeArgumentsSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImplementsAttributeArgumentsSyntaxBuilder &
ParsedImplementsAttributeArgumentsSyntaxBuilder::useComma(ParsedTokenSyntax Comma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ImplementsAttributeArgumentsSyntax::Cursor::Comma)] =
    Comma.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImplementsAttributeArgumentsSyntaxBuilder &
ParsedImplementsAttributeArgumentsSyntaxBuilder::useDeclBaseName(ParsedSyntax DeclBaseName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ImplementsAttributeArgumentsSyntax::Cursor::DeclBaseName)] =
    DeclBaseName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImplementsAttributeArgumentsSyntaxBuilder &
ParsedImplementsAttributeArgumentsSyntaxBuilder::useDeclNameArguments(ParsedDeclNameArgumentsSyntax DeclNameArguments) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ImplementsAttributeArgumentsSyntax::Cursor::DeclNameArguments)] =
    DeclNameArguments.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedImplementsAttributeArgumentsSyntax
ParsedImplementsAttributeArgumentsSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ImplementsAttributeArguments, Layout);
  return ParsedImplementsAttributeArgumentsSyntax(std::move(raw));
}

ParsedImplementsAttributeArgumentsSyntax
ParsedImplementsAttributeArgumentsSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ImplementsAttributeArguments,
    Layout, SPCtx);
  return ParsedImplementsAttributeArgumentsSyntax(std::move(raw));
}

ParsedImplementsAttributeArgumentsSyntax
ParsedImplementsAttributeArgumentsSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedImplementsAttributeArgumentsSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::comma, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::comma, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjCSelectorPieceSyntaxBuilder &
ParsedObjCSelectorPieceSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjCSelectorPieceSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedObjCSelectorPieceSyntaxBuilder &
ParsedObjCSelectorPieceSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ObjCSelectorPieceSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedObjCSelectorPieceSyntax
ParsedObjCSelectorPieceSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ObjCSelectorPiece, Layout);
  return ParsedObjCSelectorPieceSyntax(std::move(raw));
}

ParsedObjCSelectorPieceSyntax
ParsedObjCSelectorPieceSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ObjCSelectorPiece,
    Layout, SPCtx);
  return ParsedObjCSelectorPieceSyntax(std::move(raw));
}

ParsedObjCSelectorPieceSyntax
ParsedObjCSelectorPieceSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedObjCSelectorPieceSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedContinueStmtSyntaxBuilder &
ParsedContinueStmtSyntaxBuilder::useContinueKeyword(ParsedTokenSyntax ContinueKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ContinueStmtSyntax::Cursor::ContinueKeyword)] =
    ContinueKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedContinueStmtSyntaxBuilder &
ParsedContinueStmtSyntaxBuilder::useLabel(ParsedTokenSyntax Label) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ContinueStmtSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedContinueStmtSyntax
ParsedContinueStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ContinueStmt, Layout);
  return ParsedContinueStmtSyntax(std::move(raw));
}

ParsedContinueStmtSyntax
ParsedContinueStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ContinueStmt,
    Layout, SPCtx);
  return ParsedContinueStmtSyntax(std::move(raw));
}

ParsedContinueStmtSyntax
ParsedContinueStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedContinueStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_continue, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_continue, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedWhileStmtSyntaxBuilder &
ParsedWhileStmtSyntaxBuilder::useLabelName(ParsedTokenSyntax LabelName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(WhileStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedWhileStmtSyntaxBuilder &
ParsedWhileStmtSyntaxBuilder::useLabelColon(ParsedTokenSyntax LabelColon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(WhileStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedWhileStmtSyntaxBuilder &
ParsedWhileStmtSyntaxBuilder::useWhileKeyword(ParsedTokenSyntax WhileKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(WhileStmtSyntax::Cursor::WhileKeyword)] =
    WhileKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedWhileStmtSyntaxBuilder &
ParsedWhileStmtSyntaxBuilder::useConditions(ParsedConditionElementListSyntax Conditions) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ConditionsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(WhileStmtSyntax::Cursor::Conditions)] =
    Conditions.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedWhileStmtSyntaxBuilder &
ParsedWhileStmtSyntaxBuilder::addConditionsMember(ParsedConditionElementSyntax ConditionElement) {
  assert(Layout[cursorIndex(WhileStmtSyntax::Cursor::Conditions)].isNull() && "use either 'use' function or 'add', not both");
  ConditionsMembers.push_back(std::move(ConditionElement.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedWhileStmtSyntaxBuilder &
ParsedWhileStmtSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(WhileStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedWhileStmtSyntax
ParsedWhileStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::WhileStmt, Layout);
  return ParsedWhileStmtSyntax(std::move(raw));
}

ParsedWhileStmtSyntax
ParsedWhileStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::WhileStmt,
    Layout, SPCtx);
  return ParsedWhileStmtSyntax(std::move(raw));
}

ParsedWhileStmtSyntax
ParsedWhileStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedWhileStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_while, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_while, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ConditionsMembers.empty()) {
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ConditionElementList,
                          ConditionsMembers, SPCtx);
    } else {
      Layout[3] = Rec.recordRawSyntax(SyntaxKind::ConditionElementList, ConditionsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ConditionElementList, {}, SPCtx);
    } else {
      Layout[3] = Rec.recordRawSyntax(SyntaxKind::ConditionElementList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeferStmtSyntaxBuilder &
ParsedDeferStmtSyntaxBuilder::useDeferKeyword(ParsedTokenSyntax DeferKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeferStmtSyntax::Cursor::DeferKeyword)] =
    DeferKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeferStmtSyntaxBuilder &
ParsedDeferStmtSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeferStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDeferStmtSyntax
ParsedDeferStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DeferStmt, Layout);
  return ParsedDeferStmtSyntax(std::move(raw));
}

ParsedDeferStmtSyntax
ParsedDeferStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DeferStmt,
    Layout, SPCtx);
  return ParsedDeferStmtSyntax(std::move(raw));
}

ParsedDeferStmtSyntax
ParsedDeferStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDeferStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_defer, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_defer, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExpressionStmtSyntaxBuilder &
ParsedExpressionStmtSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExpressionStmtSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedExpressionStmtSyntax
ParsedExpressionStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ExpressionStmt, Layout);
  return ParsedExpressionStmtSyntax(std::move(raw));
}

ParsedExpressionStmtSyntax
ParsedExpressionStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ExpressionStmt,
    Layout, SPCtx);
  return ParsedExpressionStmtSyntax(std::move(raw));
}

ParsedExpressionStmtSyntax
ParsedExpressionStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedExpressionStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedRepeatWhileStmtSyntaxBuilder &
ParsedRepeatWhileStmtSyntaxBuilder::useLabelName(ParsedTokenSyntax LabelName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedRepeatWhileStmtSyntaxBuilder &
ParsedRepeatWhileStmtSyntaxBuilder::useLabelColon(ParsedTokenSyntax LabelColon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedRepeatWhileStmtSyntaxBuilder &
ParsedRepeatWhileStmtSyntaxBuilder::useRepeatKeyword(ParsedTokenSyntax RepeatKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::RepeatKeyword)] =
    RepeatKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedRepeatWhileStmtSyntaxBuilder &
ParsedRepeatWhileStmtSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedRepeatWhileStmtSyntaxBuilder &
ParsedRepeatWhileStmtSyntaxBuilder::useWhileKeyword(ParsedTokenSyntax WhileKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::WhileKeyword)] =
    WhileKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedRepeatWhileStmtSyntaxBuilder &
ParsedRepeatWhileStmtSyntaxBuilder::useCondition(ParsedExprSyntax Condition) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::Condition)] =
    Condition.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedRepeatWhileStmtSyntax
ParsedRepeatWhileStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::RepeatWhileStmt, Layout);
  return ParsedRepeatWhileStmtSyntax(std::move(raw));
}

ParsedRepeatWhileStmtSyntax
ParsedRepeatWhileStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::RepeatWhileStmt,
    Layout, SPCtx);
  return ParsedRepeatWhileStmtSyntax(std::move(raw));
}

ParsedRepeatWhileStmtSyntax
ParsedRepeatWhileStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedRepeatWhileStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_repeat, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_repeat, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[4] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_while, SourceLoc());
    } else {
      Layout[4] = Rec.recordMissingToken(tok::kw_while, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[5].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGuardStmtSyntaxBuilder &
ParsedGuardStmtSyntaxBuilder::useGuardKeyword(ParsedTokenSyntax GuardKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GuardStmtSyntax::Cursor::GuardKeyword)] =
    GuardKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGuardStmtSyntaxBuilder &
ParsedGuardStmtSyntaxBuilder::useConditions(ParsedConditionElementListSyntax Conditions) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ConditionsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GuardStmtSyntax::Cursor::Conditions)] =
    Conditions.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGuardStmtSyntaxBuilder &
ParsedGuardStmtSyntaxBuilder::addConditionsMember(ParsedConditionElementSyntax ConditionElement) {
  assert(Layout[cursorIndex(GuardStmtSyntax::Cursor::Conditions)].isNull() && "use either 'use' function or 'add', not both");
  ConditionsMembers.push_back(std::move(ConditionElement.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGuardStmtSyntaxBuilder &
ParsedGuardStmtSyntaxBuilder::useElseKeyword(ParsedTokenSyntax ElseKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GuardStmtSyntax::Cursor::ElseKeyword)] =
    ElseKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGuardStmtSyntaxBuilder &
ParsedGuardStmtSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GuardStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedGuardStmtSyntax
ParsedGuardStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::GuardStmt, Layout);
  return ParsedGuardStmtSyntax(std::move(raw));
}

ParsedGuardStmtSyntax
ParsedGuardStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GuardStmt,
    Layout, SPCtx);
  return ParsedGuardStmtSyntax(std::move(raw));
}

ParsedGuardStmtSyntax
ParsedGuardStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedGuardStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_guard, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_guard, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ConditionsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ConditionElementList,
                          ConditionsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ConditionElementList, ConditionsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ConditionElementList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ConditionElementList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_else, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_else, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedWhereClauseSyntaxBuilder &
ParsedWhereClauseSyntaxBuilder::useWhereKeyword(ParsedTokenSyntax WhereKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(WhereClauseSyntax::Cursor::WhereKeyword)] =
    WhereKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedWhereClauseSyntaxBuilder &
ParsedWhereClauseSyntaxBuilder::useGuardResult(ParsedExprSyntax GuardResult) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(WhereClauseSyntax::Cursor::GuardResult)] =
    GuardResult.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedWhereClauseSyntax
ParsedWhereClauseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::WhereClause, Layout);
  return ParsedWhereClauseSyntax(std::move(raw));
}

ParsedWhereClauseSyntax
ParsedWhereClauseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::WhereClause,
    Layout, SPCtx);
  return ParsedWhereClauseSyntax(std::move(raw));
}

ParsedWhereClauseSyntax
ParsedWhereClauseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedWhereClauseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_where, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_where, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForInStmtSyntaxBuilder &
ParsedForInStmtSyntaxBuilder::useLabelName(ParsedTokenSyntax LabelName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForInStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForInStmtSyntaxBuilder &
ParsedForInStmtSyntaxBuilder::useLabelColon(ParsedTokenSyntax LabelColon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForInStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForInStmtSyntaxBuilder &
ParsedForInStmtSyntaxBuilder::useForKeyword(ParsedTokenSyntax ForKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForInStmtSyntax::Cursor::ForKeyword)] =
    ForKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForInStmtSyntaxBuilder &
ParsedForInStmtSyntaxBuilder::useCaseKeyword(ParsedTokenSyntax CaseKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForInStmtSyntax::Cursor::CaseKeyword)] =
    CaseKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForInStmtSyntaxBuilder &
ParsedForInStmtSyntaxBuilder::usePattern(ParsedPatternSyntax Pattern) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForInStmtSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForInStmtSyntaxBuilder &
ParsedForInStmtSyntaxBuilder::useTypeAnnotation(ParsedTypeAnnotationSyntax TypeAnnotation) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForInStmtSyntax::Cursor::TypeAnnotation)] =
    TypeAnnotation.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForInStmtSyntaxBuilder &
ParsedForInStmtSyntaxBuilder::useInKeyword(ParsedTokenSyntax InKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForInStmtSyntax::Cursor::InKeyword)] =
    InKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForInStmtSyntaxBuilder &
ParsedForInStmtSyntaxBuilder::useSequenceExpr(ParsedExprSyntax SequenceExpr) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForInStmtSyntax::Cursor::SequenceExpr)] =
    SequenceExpr.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForInStmtSyntaxBuilder &
ParsedForInStmtSyntaxBuilder::useWhereClause(ParsedWhereClauseSyntax WhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForInStmtSyntax::Cursor::WhereClause)] =
    WhereClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedForInStmtSyntaxBuilder &
ParsedForInStmtSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ForInStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedForInStmtSyntax
ParsedForInStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ForInStmt, Layout);
  return ParsedForInStmtSyntax(std::move(raw));
}

ParsedForInStmtSyntax
ParsedForInStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ForInStmt,
    Layout, SPCtx);
  return ParsedForInStmtSyntax(std::move(raw));
}

ParsedForInStmtSyntax
ParsedForInStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedForInStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_for, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_for, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[6].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[6] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_in, SourceLoc());
    } else {
      Layout[6] = Rec.recordMissingToken(tok::kw_in, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[7].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[9].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchStmtSyntaxBuilder &
ParsedSwitchStmtSyntaxBuilder::useLabelName(ParsedTokenSyntax LabelName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchStmtSyntaxBuilder &
ParsedSwitchStmtSyntaxBuilder::useLabelColon(ParsedTokenSyntax LabelColon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchStmtSyntaxBuilder &
ParsedSwitchStmtSyntaxBuilder::useSwitchKeyword(ParsedTokenSyntax SwitchKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::SwitchKeyword)] =
    SwitchKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchStmtSyntaxBuilder &
ParsedSwitchStmtSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchStmtSyntaxBuilder &
ParsedSwitchStmtSyntaxBuilder::useLeftBrace(ParsedTokenSyntax LeftBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchStmtSyntaxBuilder &
ParsedSwitchStmtSyntaxBuilder::useCases(ParsedSwitchCaseListSyntax Cases) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(CasesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::Cases)] =
    Cases.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchStmtSyntaxBuilder &
ParsedSwitchStmtSyntaxBuilder::addCasesMember(ParsedSyntax SwitchCase) {
  assert(Layout[cursorIndex(SwitchStmtSyntax::Cursor::Cases)].isNull() && "use either 'use' function or 'add', not both");
  CasesMembers.push_back(std::move(SwitchCase.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchStmtSyntaxBuilder &
ParsedSwitchStmtSyntaxBuilder::useRightBrace(ParsedTokenSyntax RightBrace) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSwitchStmtSyntax
ParsedSwitchStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SwitchStmt, Layout);
  return ParsedSwitchStmtSyntax(std::move(raw));
}

ParsedSwitchStmtSyntax
ParsedSwitchStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SwitchStmt,
    Layout, SPCtx);
  return ParsedSwitchStmtSyntax(std::move(raw));
}

ParsedSwitchStmtSyntax
ParsedSwitchStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSwitchStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_switch, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_switch, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[4] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_brace, SourceLoc());
    } else {
      Layout[4] = Rec.recordMissingToken(tok::l_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!CasesMembers.empty()) {
    if (deferred) {
      Layout[5] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SwitchCaseList,
                          CasesMembers, SPCtx);
    } else {
      Layout[5] = Rec.recordRawSyntax(SyntaxKind::SwitchCaseList, CasesMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[5].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[5] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SwitchCaseList, {}, SPCtx);
    } else {
      Layout[5] = Rec.recordRawSyntax(SyntaxKind::SwitchCaseList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[6].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[6] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_brace, SourceLoc());
    } else {
      Layout[6] = Rec.recordMissingToken(tok::r_brace, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDoStmtSyntaxBuilder &
ParsedDoStmtSyntaxBuilder::useLabelName(ParsedTokenSyntax LabelName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DoStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDoStmtSyntaxBuilder &
ParsedDoStmtSyntaxBuilder::useLabelColon(ParsedTokenSyntax LabelColon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DoStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDoStmtSyntaxBuilder &
ParsedDoStmtSyntaxBuilder::useDoKeyword(ParsedTokenSyntax DoKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DoStmtSyntax::Cursor::DoKeyword)] =
    DoKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDoStmtSyntaxBuilder &
ParsedDoStmtSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DoStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDoStmtSyntaxBuilder &
ParsedDoStmtSyntaxBuilder::useCatchClauses(ParsedCatchClauseListSyntax CatchClauses) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(CatchClausesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DoStmtSyntax::Cursor::CatchClauses)] =
    CatchClauses.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDoStmtSyntaxBuilder &
ParsedDoStmtSyntaxBuilder::addCatchClausesMember(ParsedCatchClauseSyntax CatchClause) {
  assert(Layout[cursorIndex(DoStmtSyntax::Cursor::CatchClauses)].isNull() && "use either 'use' function or 'add', not both");
  CatchClausesMembers.push_back(std::move(CatchClause.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDoStmtSyntax
ParsedDoStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DoStmt, Layout);
  return ParsedDoStmtSyntax(std::move(raw));
}

ParsedDoStmtSyntax
ParsedDoStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DoStmt,
    Layout, SPCtx);
  return ParsedDoStmtSyntax(std::move(raw));
}

ParsedDoStmtSyntax
ParsedDoStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDoStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_do, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_do, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!CatchClausesMembers.empty()) {
    if (deferred) {
      Layout[4] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CatchClauseList,
                          CatchClausesMembers, SPCtx);
    } else {
      Layout[4] = Rec.recordRawSyntax(SyntaxKind::CatchClauseList, CatchClausesMembers);
    }
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedReturnStmtSyntaxBuilder &
ParsedReturnStmtSyntaxBuilder::useReturnKeyword(ParsedTokenSyntax ReturnKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ReturnStmtSyntax::Cursor::ReturnKeyword)] =
    ReturnKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedReturnStmtSyntaxBuilder &
ParsedReturnStmtSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ReturnStmtSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedReturnStmtSyntax
ParsedReturnStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ReturnStmt, Layout);
  return ParsedReturnStmtSyntax(std::move(raw));
}

ParsedReturnStmtSyntax
ParsedReturnStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ReturnStmt,
    Layout, SPCtx);
  return ParsedReturnStmtSyntax(std::move(raw));
}

ParsedReturnStmtSyntax
ParsedReturnStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedReturnStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_return, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_return, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedYieldStmtSyntaxBuilder &
ParsedYieldStmtSyntaxBuilder::useYieldKeyword(ParsedTokenSyntax YieldKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(YieldStmtSyntax::Cursor::YieldKeyword)] =
    YieldKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedYieldStmtSyntaxBuilder &
ParsedYieldStmtSyntaxBuilder::useYields(ParsedSyntax Yields) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(YieldStmtSyntax::Cursor::Yields)] =
    Yields.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedYieldStmtSyntax
ParsedYieldStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::YieldStmt, Layout);
  return ParsedYieldStmtSyntax(std::move(raw));
}

ParsedYieldStmtSyntax
ParsedYieldStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::YieldStmt,
    Layout, SPCtx);
  return ParsedYieldStmtSyntax(std::move(raw));
}

ParsedYieldStmtSyntax
ParsedYieldStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedYieldStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_yield, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_yield, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedYieldListSyntaxBuilder &
ParsedYieldListSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(YieldListSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedYieldListSyntaxBuilder &
ParsedYieldListSyntaxBuilder::useElementList(ParsedExprListSyntax ElementList) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ElementListMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(YieldListSyntax::Cursor::ElementList)] =
    ElementList.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedYieldListSyntaxBuilder &
ParsedYieldListSyntaxBuilder::addElementListMember(ParsedExprSyntax Expression) {
  assert(Layout[cursorIndex(YieldListSyntax::Cursor::ElementList)].isNull() && "use either 'use' function or 'add', not both");
  ElementListMembers.push_back(std::move(Expression.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedYieldListSyntaxBuilder &
ParsedYieldListSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(YieldListSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedYieldListSyntaxBuilder &
ParsedYieldListSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(YieldListSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedYieldListSyntax
ParsedYieldListSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::YieldList, Layout);
  return ParsedYieldListSyntax(std::move(raw));
}

ParsedYieldListSyntax
ParsedYieldListSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::YieldList,
    Layout, SPCtx);
  return ParsedYieldListSyntax(std::move(raw));
}

ParsedYieldListSyntax
ParsedYieldListSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedYieldListSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ElementListMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ExprList,
                          ElementListMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ExprList, ElementListMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ExprList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::ExprList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFallthroughStmtSyntaxBuilder &
ParsedFallthroughStmtSyntaxBuilder::useFallthroughKeyword(ParsedTokenSyntax FallthroughKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FallthroughStmtSyntax::Cursor::FallthroughKeyword)] =
    FallthroughKeyword.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedFallthroughStmtSyntax
ParsedFallthroughStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::FallthroughStmt, Layout);
  return ParsedFallthroughStmtSyntax(std::move(raw));
}

ParsedFallthroughStmtSyntax
ParsedFallthroughStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FallthroughStmt,
    Layout, SPCtx);
  return ParsedFallthroughStmtSyntax(std::move(raw));
}

ParsedFallthroughStmtSyntax
ParsedFallthroughStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedFallthroughStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_fallthrough, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_fallthrough, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedBreakStmtSyntaxBuilder &
ParsedBreakStmtSyntaxBuilder::useBreakKeyword(ParsedTokenSyntax BreakKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(BreakStmtSyntax::Cursor::BreakKeyword)] =
    BreakKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedBreakStmtSyntaxBuilder &
ParsedBreakStmtSyntaxBuilder::useLabel(ParsedTokenSyntax Label) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(BreakStmtSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedBreakStmtSyntax
ParsedBreakStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::BreakStmt, Layout);
  return ParsedBreakStmtSyntax(std::move(raw));
}

ParsedBreakStmtSyntax
ParsedBreakStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::BreakStmt,
    Layout, SPCtx);
  return ParsedBreakStmtSyntax(std::move(raw));
}

ParsedBreakStmtSyntax
ParsedBreakStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedBreakStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_break, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_break, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedConditionElementSyntaxBuilder &
ParsedConditionElementSyntaxBuilder::useCondition(ParsedSyntax Condition) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ConditionElementSyntax::Cursor::Condition)] =
    Condition.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedConditionElementSyntaxBuilder &
ParsedConditionElementSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ConditionElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedConditionElementSyntax
ParsedConditionElementSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ConditionElement, Layout);
  return ParsedConditionElementSyntax(std::move(raw));
}

ParsedConditionElementSyntax
ParsedConditionElementSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ConditionElement,
    Layout, SPCtx);
  return ParsedConditionElementSyntax(std::move(raw));
}

ParsedConditionElementSyntax
ParsedConditionElementSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedConditionElementSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityConditionSyntaxBuilder &
ParsedAvailabilityConditionSyntaxBuilder::usePoundAvailableKeyword(ParsedTokenSyntax PoundAvailableKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AvailabilityConditionSyntax::Cursor::PoundAvailableKeyword)] =
    PoundAvailableKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityConditionSyntaxBuilder &
ParsedAvailabilityConditionSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AvailabilityConditionSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityConditionSyntaxBuilder &
ParsedAvailabilityConditionSyntaxBuilder::useAvailabilitySpec(ParsedAvailabilitySpecListSyntax AvailabilitySpec) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AvailabilitySpecMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AvailabilityConditionSyntax::Cursor::AvailabilitySpec)] =
    AvailabilitySpec.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityConditionSyntaxBuilder &
ParsedAvailabilityConditionSyntaxBuilder::addAvailabilitySpecMember(ParsedAvailabilityArgumentSyntax AvailabilityArgument) {
  assert(Layout[cursorIndex(AvailabilityConditionSyntax::Cursor::AvailabilitySpec)].isNull() && "use either 'use' function or 'add', not both");
  AvailabilitySpecMembers.push_back(std::move(AvailabilityArgument.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityConditionSyntaxBuilder &
ParsedAvailabilityConditionSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AvailabilityConditionSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAvailabilityConditionSyntax
ParsedAvailabilityConditionSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AvailabilityCondition, Layout);
  return ParsedAvailabilityConditionSyntax(std::move(raw));
}

ParsedAvailabilityConditionSyntax
ParsedAvailabilityConditionSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AvailabilityCondition,
    Layout, SPCtx);
  return ParsedAvailabilityConditionSyntax(std::move(raw));
}

ParsedAvailabilityConditionSyntax
ParsedAvailabilityConditionSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAvailabilityConditionSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_available, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_available, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!AvailabilitySpecMembers.empty()) {
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AvailabilitySpecList,
                          AvailabilitySpecMembers, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::AvailabilitySpecList, AvailabilitySpecMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AvailabilitySpecList, {}, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::AvailabilitySpecList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[3] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMatchingPatternConditionSyntaxBuilder &
ParsedMatchingPatternConditionSyntaxBuilder::useCaseKeyword(ParsedTokenSyntax CaseKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MatchingPatternConditionSyntax::Cursor::CaseKeyword)] =
    CaseKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMatchingPatternConditionSyntaxBuilder &
ParsedMatchingPatternConditionSyntaxBuilder::usePattern(ParsedPatternSyntax Pattern) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MatchingPatternConditionSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMatchingPatternConditionSyntaxBuilder &
ParsedMatchingPatternConditionSyntaxBuilder::useTypeAnnotation(ParsedTypeAnnotationSyntax TypeAnnotation) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MatchingPatternConditionSyntax::Cursor::TypeAnnotation)] =
    TypeAnnotation.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMatchingPatternConditionSyntaxBuilder &
ParsedMatchingPatternConditionSyntaxBuilder::useInitializer(ParsedInitializerClauseSyntax Initializer) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MatchingPatternConditionSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedMatchingPatternConditionSyntax
ParsedMatchingPatternConditionSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::MatchingPatternCondition, Layout);
  return ParsedMatchingPatternConditionSyntax(std::move(raw));
}

ParsedMatchingPatternConditionSyntax
ParsedMatchingPatternConditionSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::MatchingPatternCondition,
    Layout, SPCtx);
  return ParsedMatchingPatternConditionSyntax(std::move(raw));
}

ParsedMatchingPatternConditionSyntax
ParsedMatchingPatternConditionSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedMatchingPatternConditionSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_case, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_case, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOptionalBindingConditionSyntaxBuilder &
ParsedOptionalBindingConditionSyntaxBuilder::useLetOrVarKeyword(ParsedTokenSyntax LetOrVarKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OptionalBindingConditionSyntax::Cursor::LetOrVarKeyword)] =
    LetOrVarKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOptionalBindingConditionSyntaxBuilder &
ParsedOptionalBindingConditionSyntaxBuilder::usePattern(ParsedPatternSyntax Pattern) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OptionalBindingConditionSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOptionalBindingConditionSyntaxBuilder &
ParsedOptionalBindingConditionSyntaxBuilder::useTypeAnnotation(ParsedTypeAnnotationSyntax TypeAnnotation) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OptionalBindingConditionSyntax::Cursor::TypeAnnotation)] =
    TypeAnnotation.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOptionalBindingConditionSyntaxBuilder &
ParsedOptionalBindingConditionSyntaxBuilder::useInitializer(ParsedInitializerClauseSyntax Initializer) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OptionalBindingConditionSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedOptionalBindingConditionSyntax
ParsedOptionalBindingConditionSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::OptionalBindingCondition, Layout);
  return ParsedOptionalBindingConditionSyntax(std::move(raw));
}

ParsedOptionalBindingConditionSyntax
ParsedOptionalBindingConditionSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::OptionalBindingCondition,
    Layout, SPCtx);
  return ParsedOptionalBindingConditionSyntax(std::move(raw));
}

ParsedOptionalBindingConditionSyntax
ParsedOptionalBindingConditionSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedOptionalBindingConditionSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_let, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_let, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDeclarationStmtSyntaxBuilder &
ParsedDeclarationStmtSyntaxBuilder::useDeclaration(ParsedDeclSyntax Declaration) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DeclarationStmtSyntax::Cursor::Declaration)] =
    Declaration.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDeclarationStmtSyntax
ParsedDeclarationStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DeclarationStmt, Layout);
  return ParsedDeclarationStmtSyntax(std::move(raw));
}

ParsedDeclarationStmtSyntax
ParsedDeclarationStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DeclarationStmt,
    Layout, SPCtx);
  return ParsedDeclarationStmtSyntax(std::move(raw));
}

ParsedDeclarationStmtSyntax
ParsedDeclarationStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDeclarationStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedThrowStmtSyntaxBuilder &
ParsedThrowStmtSyntaxBuilder::useThrowKeyword(ParsedTokenSyntax ThrowKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ThrowStmtSyntax::Cursor::ThrowKeyword)] =
    ThrowKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedThrowStmtSyntaxBuilder &
ParsedThrowStmtSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ThrowStmtSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedThrowStmtSyntax
ParsedThrowStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ThrowStmt, Layout);
  return ParsedThrowStmtSyntax(std::move(raw));
}

ParsedThrowStmtSyntax
ParsedThrowStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ThrowStmt,
    Layout, SPCtx);
  return ParsedThrowStmtSyntax(std::move(raw));
}

ParsedThrowStmtSyntax
ParsedThrowStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedThrowStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_throw, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_throw, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfStmtSyntaxBuilder &
ParsedIfStmtSyntaxBuilder::useLabelName(ParsedTokenSyntax LabelName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfStmtSyntaxBuilder &
ParsedIfStmtSyntaxBuilder::useLabelColon(ParsedTokenSyntax LabelColon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfStmtSyntaxBuilder &
ParsedIfStmtSyntaxBuilder::useIfKeyword(ParsedTokenSyntax IfKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfStmtSyntax::Cursor::IfKeyword)] =
    IfKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfStmtSyntaxBuilder &
ParsedIfStmtSyntaxBuilder::useConditions(ParsedConditionElementListSyntax Conditions) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ConditionsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfStmtSyntax::Cursor::Conditions)] =
    Conditions.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfStmtSyntaxBuilder &
ParsedIfStmtSyntaxBuilder::addConditionsMember(ParsedConditionElementSyntax ConditionElement) {
  assert(Layout[cursorIndex(IfStmtSyntax::Cursor::Conditions)].isNull() && "use either 'use' function or 'add', not both");
  ConditionsMembers.push_back(std::move(ConditionElement.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfStmtSyntaxBuilder &
ParsedIfStmtSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfStmtSyntaxBuilder &
ParsedIfStmtSyntaxBuilder::useElseKeyword(ParsedTokenSyntax ElseKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfStmtSyntax::Cursor::ElseKeyword)] =
    ElseKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIfStmtSyntaxBuilder &
ParsedIfStmtSyntaxBuilder::useElseBody(ParsedSyntax ElseBody) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IfStmtSyntax::Cursor::ElseBody)] =
    ElseBody.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedIfStmtSyntax
ParsedIfStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::IfStmt, Layout);
  return ParsedIfStmtSyntax(std::move(raw));
}

ParsedIfStmtSyntax
ParsedIfStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IfStmt,
    Layout, SPCtx);
  return ParsedIfStmtSyntax(std::move(raw));
}

ParsedIfStmtSyntax
ParsedIfStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedIfStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_if, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::kw_if, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ConditionsMembers.empty()) {
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ConditionElementList,
                          ConditionsMembers, SPCtx);
    } else {
      Layout[3] = Rec.recordRawSyntax(SyntaxKind::ConditionElementList, ConditionsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[3] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ConditionElementList, {}, SPCtx);
    } else {
      Layout[3] = Rec.recordRawSyntax(SyntaxKind::ConditionElementList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedElseIfContinuationSyntaxBuilder &
ParsedElseIfContinuationSyntaxBuilder::useIfStatement(ParsedIfStmtSyntax IfStatement) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ElseIfContinuationSyntax::Cursor::IfStatement)] =
    IfStatement.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedElseIfContinuationSyntax
ParsedElseIfContinuationSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ElseIfContinuation, Layout);
  return ParsedElseIfContinuationSyntax(std::move(raw));
}

ParsedElseIfContinuationSyntax
ParsedElseIfContinuationSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ElseIfContinuation,
    Layout, SPCtx);
  return ParsedElseIfContinuationSyntax(std::move(raw));
}

ParsedElseIfContinuationSyntax
ParsedElseIfContinuationSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedElseIfContinuationSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedElseBlockSyntaxBuilder &
ParsedElseBlockSyntaxBuilder::useElseKeyword(ParsedTokenSyntax ElseKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ElseBlockSyntax::Cursor::ElseKeyword)] =
    ElseKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedElseBlockSyntaxBuilder &
ParsedElseBlockSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ElseBlockSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedElseBlockSyntax
ParsedElseBlockSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ElseBlock, Layout);
  return ParsedElseBlockSyntax(std::move(raw));
}

ParsedElseBlockSyntax
ParsedElseBlockSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ElseBlock,
    Layout, SPCtx);
  return ParsedElseBlockSyntax(std::move(raw));
}

ParsedElseBlockSyntax
ParsedElseBlockSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedElseBlockSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_else, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_else, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchCaseSyntaxBuilder &
ParsedSwitchCaseSyntaxBuilder::useUnknownAttr(ParsedAttributeSyntax UnknownAttr) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchCaseSyntax::Cursor::UnknownAttr)] =
    UnknownAttr.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchCaseSyntaxBuilder &
ParsedSwitchCaseSyntaxBuilder::useLabel(ParsedSyntax Label) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchCaseSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchCaseSyntaxBuilder &
ParsedSwitchCaseSyntaxBuilder::useStatements(ParsedCodeBlockItemListSyntax Statements) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(StatementsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchCaseSyntax::Cursor::Statements)] =
    Statements.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchCaseSyntaxBuilder &
ParsedSwitchCaseSyntaxBuilder::addStatementsMember(ParsedCodeBlockItemSyntax CodeBlockItem) {
  assert(Layout[cursorIndex(SwitchCaseSyntax::Cursor::Statements)].isNull() && "use either 'use' function or 'add', not both");
  StatementsMembers.push_back(std::move(CodeBlockItem.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSwitchCaseSyntax
ParsedSwitchCaseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SwitchCase, Layout);
  return ParsedSwitchCaseSyntax(std::move(raw));
}

ParsedSwitchCaseSyntax
ParsedSwitchCaseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SwitchCase,
    Layout, SPCtx);
  return ParsedSwitchCaseSyntax(std::move(raw));
}

ParsedSwitchCaseSyntax
ParsedSwitchCaseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSwitchCaseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!StatementsMembers.empty()) {
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CodeBlockItemList,
                          StatementsMembers, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::CodeBlockItemList, StatementsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CodeBlockItemList, {}, SPCtx);
    } else {
      Layout[2] = Rec.recordRawSyntax(SyntaxKind::CodeBlockItemList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchDefaultLabelSyntaxBuilder &
ParsedSwitchDefaultLabelSyntaxBuilder::useDefaultKeyword(ParsedTokenSyntax DefaultKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchDefaultLabelSyntax::Cursor::DefaultKeyword)] =
    DefaultKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchDefaultLabelSyntaxBuilder &
ParsedSwitchDefaultLabelSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchDefaultLabelSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSwitchDefaultLabelSyntax
ParsedSwitchDefaultLabelSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SwitchDefaultLabel, Layout);
  return ParsedSwitchDefaultLabelSyntax(std::move(raw));
}

ParsedSwitchDefaultLabelSyntax
ParsedSwitchDefaultLabelSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SwitchDefaultLabel,
    Layout, SPCtx);
  return ParsedSwitchDefaultLabelSyntax(std::move(raw));
}

ParsedSwitchDefaultLabelSyntax
ParsedSwitchDefaultLabelSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSwitchDefaultLabelSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_default, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_default, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCaseItemSyntaxBuilder &
ParsedCaseItemSyntaxBuilder::usePattern(ParsedPatternSyntax Pattern) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CaseItemSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCaseItemSyntaxBuilder &
ParsedCaseItemSyntaxBuilder::useWhereClause(ParsedWhereClauseSyntax WhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CaseItemSyntax::Cursor::WhereClause)] =
    WhereClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCaseItemSyntaxBuilder &
ParsedCaseItemSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CaseItemSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedCaseItemSyntax
ParsedCaseItemSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::CaseItem, Layout);
  return ParsedCaseItemSyntax(std::move(raw));
}

ParsedCaseItemSyntax
ParsedCaseItemSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CaseItem,
    Layout, SPCtx);
  return ParsedCaseItemSyntax(std::move(raw));
}

ParsedCaseItemSyntax
ParsedCaseItemSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedCaseItemSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchCaseLabelSyntaxBuilder &
ParsedSwitchCaseLabelSyntaxBuilder::useCaseKeyword(ParsedTokenSyntax CaseKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchCaseLabelSyntax::Cursor::CaseKeyword)] =
    CaseKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchCaseLabelSyntaxBuilder &
ParsedSwitchCaseLabelSyntaxBuilder::useCaseItems(ParsedCaseItemListSyntax CaseItems) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(CaseItemsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchCaseLabelSyntax::Cursor::CaseItems)] =
    CaseItems.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchCaseLabelSyntaxBuilder &
ParsedSwitchCaseLabelSyntaxBuilder::addCaseItemsMember(ParsedCaseItemSyntax CaseItem) {
  assert(Layout[cursorIndex(SwitchCaseLabelSyntax::Cursor::CaseItems)].isNull() && "use either 'use' function or 'add', not both");
  CaseItemsMembers.push_back(std::move(CaseItem.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSwitchCaseLabelSyntaxBuilder &
ParsedSwitchCaseLabelSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SwitchCaseLabelSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSwitchCaseLabelSyntax
ParsedSwitchCaseLabelSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SwitchCaseLabel, Layout);
  return ParsedSwitchCaseLabelSyntax(std::move(raw));
}

ParsedSwitchCaseLabelSyntax
ParsedSwitchCaseLabelSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SwitchCaseLabel,
    Layout, SPCtx);
  return ParsedSwitchCaseLabelSyntax(std::move(raw));
}

ParsedSwitchCaseLabelSyntax
ParsedSwitchCaseLabelSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSwitchCaseLabelSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_case, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_case, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!CaseItemsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CaseItemList,
                          CaseItemsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::CaseItemList, CaseItemsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CaseItemList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::CaseItemList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCatchClauseSyntaxBuilder &
ParsedCatchClauseSyntaxBuilder::useCatchKeyword(ParsedTokenSyntax CatchKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CatchClauseSyntax::Cursor::CatchKeyword)] =
    CatchKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCatchClauseSyntaxBuilder &
ParsedCatchClauseSyntaxBuilder::usePattern(ParsedPatternSyntax Pattern) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CatchClauseSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCatchClauseSyntaxBuilder &
ParsedCatchClauseSyntaxBuilder::useWhereClause(ParsedWhereClauseSyntax WhereClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CatchClauseSyntax::Cursor::WhereClause)] =
    WhereClause.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCatchClauseSyntaxBuilder &
ParsedCatchClauseSyntaxBuilder::useBody(ParsedCodeBlockSyntax Body) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CatchClauseSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedCatchClauseSyntax
ParsedCatchClauseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::CatchClause, Layout);
  return ParsedCatchClauseSyntax(std::move(raw));
}

ParsedCatchClauseSyntax
ParsedCatchClauseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CatchClause,
    Layout, SPCtx);
  return ParsedCatchClauseSyntax(std::move(raw));
}

ParsedCatchClauseSyntax
ParsedCatchClauseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedCatchClauseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_catch, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_catch, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundAssertStmtSyntaxBuilder &
ParsedPoundAssertStmtSyntaxBuilder::usePoundAssert(ParsedTokenSyntax PoundAssert) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::PoundAssert)] =
    PoundAssert.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundAssertStmtSyntaxBuilder &
ParsedPoundAssertStmtSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundAssertStmtSyntaxBuilder &
ParsedPoundAssertStmtSyntaxBuilder::useCondition(ParsedExprSyntax Condition) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::Condition)] =
    Condition.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundAssertStmtSyntaxBuilder &
ParsedPoundAssertStmtSyntaxBuilder::useComma(ParsedTokenSyntax Comma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::Comma)] =
    Comma.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundAssertStmtSyntaxBuilder &
ParsedPoundAssertStmtSyntaxBuilder::useMessage(ParsedTokenSyntax Message) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::Message)] =
    Message.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedPoundAssertStmtSyntaxBuilder &
ParsedPoundAssertStmtSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedPoundAssertStmtSyntax
ParsedPoundAssertStmtSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::PoundAssertStmt, Layout);
  return ParsedPoundAssertStmtSyntax(std::move(raw));
}

ParsedPoundAssertStmtSyntax
ParsedPoundAssertStmtSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::PoundAssertStmt,
    Layout, SPCtx);
  return ParsedPoundAssertStmtSyntax(std::move(raw));
}

ParsedPoundAssertStmtSyntax
ParsedPoundAssertStmtSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedPoundAssertStmtSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::pound_assert, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::pound_assert, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[5].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[5] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[5] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericWhereClauseSyntaxBuilder &
ParsedGenericWhereClauseSyntaxBuilder::useWhereKeyword(ParsedTokenSyntax WhereKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericWhereClauseSyntax::Cursor::WhereKeyword)] =
    WhereKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericWhereClauseSyntaxBuilder &
ParsedGenericWhereClauseSyntaxBuilder::useRequirementList(ParsedGenericRequirementListSyntax RequirementList) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(RequirementListMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericWhereClauseSyntax::Cursor::RequirementList)] =
    RequirementList.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericWhereClauseSyntaxBuilder &
ParsedGenericWhereClauseSyntaxBuilder::addRequirementListMember(ParsedSyntax GenericRequirement) {
  assert(Layout[cursorIndex(GenericWhereClauseSyntax::Cursor::RequirementList)].isNull() && "use either 'use' function or 'add', not both");
  RequirementListMembers.push_back(std::move(GenericRequirement.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedGenericWhereClauseSyntax
ParsedGenericWhereClauseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::GenericWhereClause, Layout);
  return ParsedGenericWhereClauseSyntax(std::move(raw));
}

ParsedGenericWhereClauseSyntax
ParsedGenericWhereClauseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GenericWhereClause,
    Layout, SPCtx);
  return ParsedGenericWhereClauseSyntax(std::move(raw));
}

ParsedGenericWhereClauseSyntax
ParsedGenericWhereClauseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedGenericWhereClauseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_where, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_where, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!RequirementListMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GenericRequirementList,
                          RequirementListMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::GenericRequirementList, RequirementListMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GenericRequirementList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::GenericRequirementList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSameTypeRequirementSyntaxBuilder &
ParsedSameTypeRequirementSyntaxBuilder::useLeftTypeIdentifier(ParsedTypeSyntax LeftTypeIdentifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SameTypeRequirementSyntax::Cursor::LeftTypeIdentifier)] =
    LeftTypeIdentifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSameTypeRequirementSyntaxBuilder &
ParsedSameTypeRequirementSyntaxBuilder::useEqualityToken(ParsedTokenSyntax EqualityToken) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SameTypeRequirementSyntax::Cursor::EqualityToken)] =
    EqualityToken.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSameTypeRequirementSyntaxBuilder &
ParsedSameTypeRequirementSyntaxBuilder::useRightTypeIdentifier(ParsedTypeSyntax RightTypeIdentifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SameTypeRequirementSyntax::Cursor::RightTypeIdentifier)] =
    RightTypeIdentifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSameTypeRequirementSyntaxBuilder &
ParsedSameTypeRequirementSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SameTypeRequirementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSameTypeRequirementSyntax
ParsedSameTypeRequirementSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SameTypeRequirement, Layout);
  return ParsedSameTypeRequirementSyntax(std::move(raw));
}

ParsedSameTypeRequirementSyntax
ParsedSameTypeRequirementSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SameTypeRequirement,
    Layout, SPCtx);
  return ParsedSameTypeRequirementSyntax(std::move(raw));
}

ParsedSameTypeRequirementSyntax
ParsedSameTypeRequirementSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSameTypeRequirementSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::oper_binary_spaced, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::oper_binary_spaced, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericParameterSyntaxBuilder &
ParsedGenericParameterSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericParameterSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericParameterSyntaxBuilder &
ParsedGenericParameterSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(GenericParameterSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericParameterSyntaxBuilder &
ParsedGenericParameterSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericParameterSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericParameterSyntaxBuilder &
ParsedGenericParameterSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericParameterSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericParameterSyntaxBuilder &
ParsedGenericParameterSyntaxBuilder::useInheritedType(ParsedTypeSyntax InheritedType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericParameterSyntax::Cursor::InheritedType)] =
    InheritedType.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericParameterSyntaxBuilder &
ParsedGenericParameterSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericParameterSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedGenericParameterSyntax
ParsedGenericParameterSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::GenericParameter, Layout);
  return ParsedGenericParameterSyntax(std::move(raw));
}

ParsedGenericParameterSyntax
ParsedGenericParameterSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GenericParameter,
    Layout, SPCtx);
  return ParsedGenericParameterSyntax(std::move(raw));
}

ParsedGenericParameterSyntax
ParsedGenericParameterSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedGenericParameterSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!AttributesMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          AttributesMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::AttributeList, AttributesMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericParameterClauseSyntaxBuilder &
ParsedGenericParameterClauseSyntaxBuilder::useLeftAngleBracket(ParsedTokenSyntax LeftAngleBracket) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericParameterClauseSyntax::Cursor::LeftAngleBracket)] =
    LeftAngleBracket.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericParameterClauseSyntaxBuilder &
ParsedGenericParameterClauseSyntaxBuilder::useGenericParameterList(ParsedGenericParameterListSyntax GenericParameterList) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(GenericParameterListMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericParameterClauseSyntax::Cursor::GenericParameterList)] =
    GenericParameterList.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericParameterClauseSyntaxBuilder &
ParsedGenericParameterClauseSyntaxBuilder::addGenericParameterListMember(ParsedGenericParameterSyntax GenericParameter) {
  assert(Layout[cursorIndex(GenericParameterClauseSyntax::Cursor::GenericParameterList)].isNull() && "use either 'use' function or 'add', not both");
  GenericParameterListMembers.push_back(std::move(GenericParameter.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericParameterClauseSyntaxBuilder &
ParsedGenericParameterClauseSyntaxBuilder::useRightAngleBracket(ParsedTokenSyntax RightAngleBracket) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericParameterClauseSyntax::Cursor::RightAngleBracket)] =
    RightAngleBracket.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedGenericParameterClauseSyntax
ParsedGenericParameterClauseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::GenericParameterClause, Layout);
  return ParsedGenericParameterClauseSyntax(std::move(raw));
}

ParsedGenericParameterClauseSyntax
ParsedGenericParameterClauseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GenericParameterClause,
    Layout, SPCtx);
  return ParsedGenericParameterClauseSyntax(std::move(raw));
}

ParsedGenericParameterClauseSyntax
ParsedGenericParameterClauseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedGenericParameterClauseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_angle, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_angle, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!GenericParameterListMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GenericParameterList,
                          GenericParameterListMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::GenericParameterList, GenericParameterListMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GenericParameterList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::GenericParameterList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_angle, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_angle, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedConformanceRequirementSyntaxBuilder &
ParsedConformanceRequirementSyntaxBuilder::useLeftTypeIdentifier(ParsedTypeSyntax LeftTypeIdentifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ConformanceRequirementSyntax::Cursor::LeftTypeIdentifier)] =
    LeftTypeIdentifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedConformanceRequirementSyntaxBuilder &
ParsedConformanceRequirementSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ConformanceRequirementSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedConformanceRequirementSyntaxBuilder &
ParsedConformanceRequirementSyntaxBuilder::useRightTypeIdentifier(ParsedTypeSyntax RightTypeIdentifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ConformanceRequirementSyntax::Cursor::RightTypeIdentifier)] =
    RightTypeIdentifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedConformanceRequirementSyntaxBuilder &
ParsedConformanceRequirementSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ConformanceRequirementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedConformanceRequirementSyntax
ParsedConformanceRequirementSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ConformanceRequirement, Layout);
  return ParsedConformanceRequirementSyntax(std::move(raw));
}

ParsedConformanceRequirementSyntax
ParsedConformanceRequirementSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ConformanceRequirement,
    Layout, SPCtx);
  return ParsedConformanceRequirementSyntax(std::move(raw));
}

ParsedConformanceRequirementSyntax
ParsedConformanceRequirementSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedConformanceRequirementSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSimpleTypeIdentifierSyntaxBuilder &
ParsedSimpleTypeIdentifierSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SimpleTypeIdentifierSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSimpleTypeIdentifierSyntaxBuilder &
ParsedSimpleTypeIdentifierSyntaxBuilder::useGenericArgumentClause(ParsedGenericArgumentClauseSyntax GenericArgumentClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SimpleTypeIdentifierSyntax::Cursor::GenericArgumentClause)] =
    GenericArgumentClause.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSimpleTypeIdentifierSyntax
ParsedSimpleTypeIdentifierSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SimpleTypeIdentifier, Layout);
  return ParsedSimpleTypeIdentifierSyntax(std::move(raw));
}

ParsedSimpleTypeIdentifierSyntax
ParsedSimpleTypeIdentifierSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SimpleTypeIdentifier,
    Layout, SPCtx);
  return ParsedSimpleTypeIdentifierSyntax(std::move(raw));
}

ParsedSimpleTypeIdentifierSyntax
ParsedSimpleTypeIdentifierSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSimpleTypeIdentifierSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberTypeIdentifierSyntaxBuilder &
ParsedMemberTypeIdentifierSyntaxBuilder::useBaseType(ParsedTypeSyntax BaseType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberTypeIdentifierSyntax::Cursor::BaseType)] =
    BaseType.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberTypeIdentifierSyntaxBuilder &
ParsedMemberTypeIdentifierSyntaxBuilder::usePeriod(ParsedTokenSyntax Period) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberTypeIdentifierSyntax::Cursor::Period)] =
    Period.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberTypeIdentifierSyntaxBuilder &
ParsedMemberTypeIdentifierSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberTypeIdentifierSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMemberTypeIdentifierSyntaxBuilder &
ParsedMemberTypeIdentifierSyntaxBuilder::useGenericArgumentClause(ParsedGenericArgumentClauseSyntax GenericArgumentClause) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MemberTypeIdentifierSyntax::Cursor::GenericArgumentClause)] =
    GenericArgumentClause.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedMemberTypeIdentifierSyntax
ParsedMemberTypeIdentifierSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::MemberTypeIdentifier, Layout);
  return ParsedMemberTypeIdentifierSyntax(std::move(raw));
}

ParsedMemberTypeIdentifierSyntax
ParsedMemberTypeIdentifierSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::MemberTypeIdentifier,
    Layout, SPCtx);
  return ParsedMemberTypeIdentifierSyntax(std::move(raw));
}

ParsedMemberTypeIdentifierSyntax
ParsedMemberTypeIdentifierSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedMemberTypeIdentifierSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::period, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::period, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedClassRestrictionTypeSyntaxBuilder &
ParsedClassRestrictionTypeSyntaxBuilder::useClassKeyword(ParsedTokenSyntax ClassKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ClassRestrictionTypeSyntax::Cursor::ClassKeyword)] =
    ClassKeyword.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedClassRestrictionTypeSyntax
ParsedClassRestrictionTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ClassRestrictionType, Layout);
  return ParsedClassRestrictionTypeSyntax(std::move(raw));
}

ParsedClassRestrictionTypeSyntax
ParsedClassRestrictionTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ClassRestrictionType,
    Layout, SPCtx);
  return ParsedClassRestrictionTypeSyntax(std::move(raw));
}

ParsedClassRestrictionTypeSyntax
ParsedClassRestrictionTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedClassRestrictionTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_class, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_class, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedArrayTypeSyntaxBuilder &
ParsedArrayTypeSyntaxBuilder::useLeftSquareBracket(ParsedTokenSyntax LeftSquareBracket) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ArrayTypeSyntax::Cursor::LeftSquareBracket)] =
    LeftSquareBracket.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedArrayTypeSyntaxBuilder &
ParsedArrayTypeSyntaxBuilder::useElementType(ParsedTypeSyntax ElementType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ArrayTypeSyntax::Cursor::ElementType)] =
    ElementType.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedArrayTypeSyntaxBuilder &
ParsedArrayTypeSyntaxBuilder::useRightSquareBracket(ParsedTokenSyntax RightSquareBracket) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ArrayTypeSyntax::Cursor::RightSquareBracket)] =
    RightSquareBracket.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedArrayTypeSyntax
ParsedArrayTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ArrayType, Layout);
  return ParsedArrayTypeSyntax(std::move(raw));
}

ParsedArrayTypeSyntax
ParsedArrayTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ArrayType,
    Layout, SPCtx);
  return ParsedArrayTypeSyntax(std::move(raw));
}

ParsedArrayTypeSyntax
ParsedArrayTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedArrayTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_square, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_square, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryTypeSyntaxBuilder &
ParsedDictionaryTypeSyntaxBuilder::useLeftSquareBracket(ParsedTokenSyntax LeftSquareBracket) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryTypeSyntax::Cursor::LeftSquareBracket)] =
    LeftSquareBracket.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryTypeSyntaxBuilder &
ParsedDictionaryTypeSyntaxBuilder::useKeyType(ParsedTypeSyntax KeyType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryTypeSyntax::Cursor::KeyType)] =
    KeyType.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryTypeSyntaxBuilder &
ParsedDictionaryTypeSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryTypeSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryTypeSyntaxBuilder &
ParsedDictionaryTypeSyntaxBuilder::useValueType(ParsedTypeSyntax ValueType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryTypeSyntax::Cursor::ValueType)] =
    ValueType.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedDictionaryTypeSyntaxBuilder &
ParsedDictionaryTypeSyntaxBuilder::useRightSquareBracket(ParsedTokenSyntax RightSquareBracket) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(DictionaryTypeSyntax::Cursor::RightSquareBracket)] =
    RightSquareBracket.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedDictionaryTypeSyntax
ParsedDictionaryTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::DictionaryType, Layout);
  return ParsedDictionaryTypeSyntax(std::move(raw));
}

ParsedDictionaryTypeSyntax
ParsedDictionaryTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::DictionaryType,
    Layout, SPCtx);
  return ParsedDictionaryTypeSyntax(std::move(raw));
}

ParsedDictionaryTypeSyntax
ParsedDictionaryTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedDictionaryTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_square, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[3].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[4] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_square, SourceLoc());
    } else {
      Layout[4] = Rec.recordMissingToken(tok::r_square, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMetatypeTypeSyntaxBuilder &
ParsedMetatypeTypeSyntaxBuilder::useBaseType(ParsedTypeSyntax BaseType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MetatypeTypeSyntax::Cursor::BaseType)] =
    BaseType.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMetatypeTypeSyntaxBuilder &
ParsedMetatypeTypeSyntaxBuilder::usePeriod(ParsedTokenSyntax Period) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MetatypeTypeSyntax::Cursor::Period)] =
    Period.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedMetatypeTypeSyntaxBuilder &
ParsedMetatypeTypeSyntaxBuilder::useTypeOrProtocol(ParsedTokenSyntax TypeOrProtocol) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(MetatypeTypeSyntax::Cursor::TypeOrProtocol)] =
    TypeOrProtocol.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedMetatypeTypeSyntax
ParsedMetatypeTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::MetatypeType, Layout);
  return ParsedMetatypeTypeSyntax(std::move(raw));
}

ParsedMetatypeTypeSyntax
ParsedMetatypeTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::MetatypeType,
    Layout, SPCtx);
  return ParsedMetatypeTypeSyntax(std::move(raw));
}

ParsedMetatypeTypeSyntax
ParsedMetatypeTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedMetatypeTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::period, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::period, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOptionalTypeSyntaxBuilder &
ParsedOptionalTypeSyntaxBuilder::useWrappedType(ParsedTypeSyntax WrappedType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OptionalTypeSyntax::Cursor::WrappedType)] =
    WrappedType.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOptionalTypeSyntaxBuilder &
ParsedOptionalTypeSyntaxBuilder::useQuestionMark(ParsedTokenSyntax QuestionMark) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OptionalTypeSyntax::Cursor::QuestionMark)] =
    QuestionMark.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedOptionalTypeSyntax
ParsedOptionalTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::OptionalType, Layout);
  return ParsedOptionalTypeSyntax(std::move(raw));
}

ParsedOptionalTypeSyntax
ParsedOptionalTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::OptionalType,
    Layout, SPCtx);
  return ParsedOptionalTypeSyntax(std::move(raw));
}

ParsedOptionalTypeSyntax
ParsedOptionalTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedOptionalTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::question_postfix, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::question_postfix, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSomeTypeSyntaxBuilder &
ParsedSomeTypeSyntaxBuilder::useSomeSpecifier(ParsedTokenSyntax SomeSpecifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SomeTypeSyntax::Cursor::SomeSpecifier)] =
    SomeSpecifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedSomeTypeSyntaxBuilder &
ParsedSomeTypeSyntaxBuilder::useBaseType(ParsedTypeSyntax BaseType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(SomeTypeSyntax::Cursor::BaseType)] =
    BaseType.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedSomeTypeSyntax
ParsedSomeTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::SomeType, Layout);
  return ParsedSomeTypeSyntax(std::move(raw));
}

ParsedSomeTypeSyntax
ParsedSomeTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::SomeType,
    Layout, SPCtx);
  return ParsedSomeTypeSyntax(std::move(raw));
}

ParsedSomeTypeSyntax
ParsedSomeTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedSomeTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder &
ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder::useWrappedType(ParsedTypeSyntax WrappedType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ImplicitlyUnwrappedOptionalTypeSyntax::Cursor::WrappedType)] =
    WrappedType.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder &
ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder::useExclamationMark(ParsedTokenSyntax ExclamationMark) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ImplicitlyUnwrappedOptionalTypeSyntax::Cursor::ExclamationMark)] =
    ExclamationMark.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedImplicitlyUnwrappedOptionalTypeSyntax
ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ImplicitlyUnwrappedOptionalType, Layout);
  return ParsedImplicitlyUnwrappedOptionalTypeSyntax(std::move(raw));
}

ParsedImplicitlyUnwrappedOptionalTypeSyntax
ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ImplicitlyUnwrappedOptionalType,
    Layout, SPCtx);
  return ParsedImplicitlyUnwrappedOptionalTypeSyntax(std::move(raw));
}

ParsedImplicitlyUnwrappedOptionalTypeSyntax
ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::exclaim_postfix, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::exclaim_postfix, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCompositionTypeElementSyntaxBuilder &
ParsedCompositionTypeElementSyntaxBuilder::useType(ParsedTypeSyntax Type) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CompositionTypeElementSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCompositionTypeElementSyntaxBuilder &
ParsedCompositionTypeElementSyntaxBuilder::useAmpersand(ParsedTokenSyntax Ampersand) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CompositionTypeElementSyntax::Cursor::Ampersand)] =
    Ampersand.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedCompositionTypeElementSyntax
ParsedCompositionTypeElementSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::CompositionTypeElement, Layout);
  return ParsedCompositionTypeElementSyntax(std::move(raw));
}

ParsedCompositionTypeElementSyntax
ParsedCompositionTypeElementSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CompositionTypeElement,
    Layout, SPCtx);
  return ParsedCompositionTypeElementSyntax(std::move(raw));
}

ParsedCompositionTypeElementSyntax
ParsedCompositionTypeElementSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedCompositionTypeElementSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCompositionTypeSyntaxBuilder &
ParsedCompositionTypeSyntaxBuilder::useElements(ParsedCompositionTypeElementListSyntax Elements) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ElementsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(CompositionTypeSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedCompositionTypeSyntaxBuilder &
ParsedCompositionTypeSyntaxBuilder::addElementsMember(ParsedCompositionTypeElementSyntax CompositionTypeElement) {
  assert(Layout[cursorIndex(CompositionTypeSyntax::Cursor::Elements)].isNull() && "use either 'use' function or 'add', not both");
  ElementsMembers.push_back(std::move(CompositionTypeElement.getRaw()));
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedCompositionTypeSyntax
ParsedCompositionTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::CompositionType, Layout);
  return ParsedCompositionTypeSyntax(std::move(raw));
}

ParsedCompositionTypeSyntax
ParsedCompositionTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CompositionType,
    Layout, SPCtx);
  return ParsedCompositionTypeSyntax(std::move(raw));
}

ParsedCompositionTypeSyntax
ParsedCompositionTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedCompositionTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ElementsMembers.empty()) {
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CompositionTypeElementList,
                          ElementsMembers, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::CompositionTypeElementList, ElementsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::CompositionTypeElementList, {}, SPCtx);
    } else {
      Layout[0] = Rec.recordRawSyntax(SyntaxKind::CompositionTypeElementList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeElementSyntaxBuilder &
ParsedTupleTypeElementSyntaxBuilder::useInOut(ParsedTokenSyntax InOut) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::InOut)] =
    InOut.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeElementSyntaxBuilder &
ParsedTupleTypeElementSyntaxBuilder::useName(ParsedTokenSyntax Name) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeElementSyntaxBuilder &
ParsedTupleTypeElementSyntaxBuilder::useSecondName(ParsedTokenSyntax SecondName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::SecondName)] =
    SecondName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeElementSyntaxBuilder &
ParsedTupleTypeElementSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeElementSyntaxBuilder &
ParsedTupleTypeElementSyntaxBuilder::useType(ParsedTypeSyntax Type) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeElementSyntaxBuilder &
ParsedTupleTypeElementSyntaxBuilder::useEllipsis(ParsedTokenSyntax Ellipsis) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::Ellipsis)] =
    Ellipsis.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeElementSyntaxBuilder &
ParsedTupleTypeElementSyntaxBuilder::useInitializer(ParsedInitializerClauseSyntax Initializer) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeElementSyntaxBuilder &
ParsedTupleTypeElementSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTupleTypeElementSyntax
ParsedTupleTypeElementSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TupleTypeElement, Layout);
  return ParsedTupleTypeElementSyntax(std::move(raw));
}

ParsedTupleTypeElementSyntax
ParsedTupleTypeElementSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TupleTypeElement,
    Layout, SPCtx);
  return ParsedTupleTypeElementSyntax(std::move(raw));
}

ParsedTupleTypeElementSyntax
ParsedTupleTypeElementSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTupleTypeElementSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeSyntaxBuilder &
ParsedTupleTypeSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleTypeSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeSyntaxBuilder &
ParsedTupleTypeSyntaxBuilder::useElements(ParsedTupleTypeElementListSyntax Elements) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ElementsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleTypeSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeSyntaxBuilder &
ParsedTupleTypeSyntaxBuilder::addElementsMember(ParsedTupleTypeElementSyntax TupleTypeElement) {
  assert(Layout[cursorIndex(TupleTypeSyntax::Cursor::Elements)].isNull() && "use either 'use' function or 'add', not both");
  ElementsMembers.push_back(std::move(TupleTypeElement.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTupleTypeSyntaxBuilder &
ParsedTupleTypeSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TupleTypeSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTupleTypeSyntax
ParsedTupleTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TupleType, Layout);
  return ParsedTupleTypeSyntax(std::move(raw));
}

ParsedTupleTypeSyntax
ParsedTupleTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TupleType,
    Layout, SPCtx);
  return ParsedTupleTypeSyntax(std::move(raw));
}

ParsedTupleTypeSyntax
ParsedTupleTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTupleTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ElementsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TupleTypeElementList,
                          ElementsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::TupleTypeElementList, ElementsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TupleTypeElementList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::TupleTypeElementList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionTypeSyntaxBuilder &
ParsedFunctionTypeSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionTypeSyntaxBuilder &
ParsedFunctionTypeSyntaxBuilder::useArguments(ParsedTupleTypeElementListSyntax Arguments) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ArgumentsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::Arguments)] =
    Arguments.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionTypeSyntaxBuilder &
ParsedFunctionTypeSyntaxBuilder::addArgumentsMember(ParsedTupleTypeElementSyntax TupleTypeElement) {
  assert(Layout[cursorIndex(FunctionTypeSyntax::Cursor::Arguments)].isNull() && "use either 'use' function or 'add', not both");
  ArgumentsMembers.push_back(std::move(TupleTypeElement.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionTypeSyntaxBuilder &
ParsedFunctionTypeSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionTypeSyntaxBuilder &
ParsedFunctionTypeSyntaxBuilder::useThrowsOrRethrowsKeyword(ParsedTokenSyntax ThrowsOrRethrowsKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::ThrowsOrRethrowsKeyword)] =
    ThrowsOrRethrowsKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionTypeSyntaxBuilder &
ParsedFunctionTypeSyntaxBuilder::useArrow(ParsedTokenSyntax Arrow) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::Arrow)] =
    Arrow.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedFunctionTypeSyntaxBuilder &
ParsedFunctionTypeSyntaxBuilder::useReturnType(ParsedTypeSyntax ReturnType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::ReturnType)] =
    ReturnType.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedFunctionTypeSyntax
ParsedFunctionTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::FunctionType, Layout);
  return ParsedFunctionTypeSyntax(std::move(raw));
}

ParsedFunctionTypeSyntax
ParsedFunctionTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::FunctionType,
    Layout, SPCtx);
  return ParsedFunctionTypeSyntax(std::move(raw));
}

ParsedFunctionTypeSyntax
ParsedFunctionTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedFunctionTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ArgumentsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TupleTypeElementList,
                          ArgumentsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::TupleTypeElementList, ArgumentsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TupleTypeElementList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::TupleTypeElementList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[4].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[4] = ParsedRawSyntaxNode::makeDeferredMissing(tok::arrow, SourceLoc());
    } else {
      Layout[4] = Rec.recordMissingToken(tok::arrow, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[5].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAttributedTypeSyntaxBuilder &
ParsedAttributedTypeSyntaxBuilder::useSpecifier(ParsedTokenSyntax Specifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AttributedTypeSyntax::Cursor::Specifier)] =
    Specifier.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAttributedTypeSyntaxBuilder &
ParsedAttributedTypeSyntaxBuilder::useAttributes(ParsedAttributeListSyntax Attributes) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(AttributesMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AttributedTypeSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAttributedTypeSyntaxBuilder &
ParsedAttributedTypeSyntaxBuilder::addAttributesMember(ParsedSyntax Attribute) {
  assert(Layout[cursorIndex(AttributedTypeSyntax::Cursor::Attributes)].isNull() && "use either 'use' function or 'add', not both");
  AttributesMembers.push_back(std::move(Attribute.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAttributedTypeSyntaxBuilder &
ParsedAttributedTypeSyntaxBuilder::useBaseType(ParsedTypeSyntax BaseType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AttributedTypeSyntax::Cursor::BaseType)] =
    BaseType.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAttributedTypeSyntax
ParsedAttributedTypeSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AttributedType, Layout);
  return ParsedAttributedTypeSyntax(std::move(raw));
}

ParsedAttributedTypeSyntax
ParsedAttributedTypeSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributedType,
    Layout, SPCtx);
  return ParsedAttributedTypeSyntax(std::move(raw));
}

ParsedAttributedTypeSyntax
ParsedAttributedTypeSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAttributedTypeSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!AttributesMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AttributeList,
                          AttributesMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::AttributeList, AttributesMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericArgumentSyntaxBuilder &
ParsedGenericArgumentSyntaxBuilder::useArgumentType(ParsedTypeSyntax ArgumentType) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericArgumentSyntax::Cursor::ArgumentType)] =
    ArgumentType.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericArgumentSyntaxBuilder &
ParsedGenericArgumentSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericArgumentSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedGenericArgumentSyntax
ParsedGenericArgumentSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::GenericArgument, Layout);
  return ParsedGenericArgumentSyntax(std::move(raw));
}

ParsedGenericArgumentSyntax
ParsedGenericArgumentSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GenericArgument,
    Layout, SPCtx);
  return ParsedGenericArgumentSyntax(std::move(raw));
}

ParsedGenericArgumentSyntax
ParsedGenericArgumentSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedGenericArgumentSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericArgumentClauseSyntaxBuilder &
ParsedGenericArgumentClauseSyntaxBuilder::useLeftAngleBracket(ParsedTokenSyntax LeftAngleBracket) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericArgumentClauseSyntax::Cursor::LeftAngleBracket)] =
    LeftAngleBracket.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericArgumentClauseSyntaxBuilder &
ParsedGenericArgumentClauseSyntaxBuilder::useArguments(ParsedGenericArgumentListSyntax Arguments) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ArgumentsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericArgumentClauseSyntax::Cursor::Arguments)] =
    Arguments.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericArgumentClauseSyntaxBuilder &
ParsedGenericArgumentClauseSyntaxBuilder::addArgumentsMember(ParsedGenericArgumentSyntax GenericArgument) {
  assert(Layout[cursorIndex(GenericArgumentClauseSyntax::Cursor::Arguments)].isNull() && "use either 'use' function or 'add', not both");
  ArgumentsMembers.push_back(std::move(GenericArgument.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedGenericArgumentClauseSyntaxBuilder &
ParsedGenericArgumentClauseSyntaxBuilder::useRightAngleBracket(ParsedTokenSyntax RightAngleBracket) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(GenericArgumentClauseSyntax::Cursor::RightAngleBracket)] =
    RightAngleBracket.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedGenericArgumentClauseSyntax
ParsedGenericArgumentClauseSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::GenericArgumentClause, Layout);
  return ParsedGenericArgumentClauseSyntax(std::move(raw));
}

ParsedGenericArgumentClauseSyntax
ParsedGenericArgumentClauseSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GenericArgumentClause,
    Layout, SPCtx);
  return ParsedGenericArgumentClauseSyntax(std::move(raw));
}

ParsedGenericArgumentClauseSyntax
ParsedGenericArgumentClauseSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedGenericArgumentClauseSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_angle, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_angle, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ArgumentsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GenericArgumentList,
                          ArgumentsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::GenericArgumentList, ArgumentsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::GenericArgumentList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::GenericArgumentList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_angle, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_angle, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypeAnnotationSyntaxBuilder &
ParsedTypeAnnotationSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypeAnnotationSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTypeAnnotationSyntaxBuilder &
ParsedTypeAnnotationSyntaxBuilder::useType(ParsedTypeSyntax Type) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TypeAnnotationSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTypeAnnotationSyntax
ParsedTypeAnnotationSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TypeAnnotation, Layout);
  return ParsedTypeAnnotationSyntax(std::move(raw));
}

ParsedTypeAnnotationSyntax
ParsedTypeAnnotationSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TypeAnnotation,
    Layout, SPCtx);
  return ParsedTypeAnnotationSyntax(std::move(raw));
}

ParsedTypeAnnotationSyntax
ParsedTypeAnnotationSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTypeAnnotationSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCasePatternSyntaxBuilder &
ParsedEnumCasePatternSyntaxBuilder::useType(ParsedTypeSyntax Type) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCasePatternSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCasePatternSyntaxBuilder &
ParsedEnumCasePatternSyntaxBuilder::usePeriod(ParsedTokenSyntax Period) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCasePatternSyntax::Cursor::Period)] =
    Period.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCasePatternSyntaxBuilder &
ParsedEnumCasePatternSyntaxBuilder::useCaseName(ParsedTokenSyntax CaseName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCasePatternSyntax::Cursor::CaseName)] =
    CaseName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedEnumCasePatternSyntaxBuilder &
ParsedEnumCasePatternSyntaxBuilder::useAssociatedTuple(ParsedTuplePatternSyntax AssociatedTuple) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(EnumCasePatternSyntax::Cursor::AssociatedTuple)] =
    AssociatedTuple.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedEnumCasePatternSyntax
ParsedEnumCasePatternSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::EnumCasePattern, Layout);
  return ParsedEnumCasePatternSyntax(std::move(raw));
}

ParsedEnumCasePatternSyntax
ParsedEnumCasePatternSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::EnumCasePattern,
    Layout, SPCtx);
  return ParsedEnumCasePatternSyntax(std::move(raw));
}

ParsedEnumCasePatternSyntax
ParsedEnumCasePatternSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedEnumCasePatternSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::period, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::period, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIsTypePatternSyntaxBuilder &
ParsedIsTypePatternSyntaxBuilder::useIsKeyword(ParsedTokenSyntax IsKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IsTypePatternSyntax::Cursor::IsKeyword)] =
    IsKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIsTypePatternSyntaxBuilder &
ParsedIsTypePatternSyntaxBuilder::useType(ParsedTypeSyntax Type) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IsTypePatternSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedIsTypePatternSyntax
ParsedIsTypePatternSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::IsTypePattern, Layout);
  return ParsedIsTypePatternSyntax(std::move(raw));
}

ParsedIsTypePatternSyntax
ParsedIsTypePatternSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IsTypePattern,
    Layout, SPCtx);
  return ParsedIsTypePatternSyntax(std::move(raw));
}

ParsedIsTypePatternSyntax
ParsedIsTypePatternSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedIsTypePatternSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_is, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_is, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOptionalPatternSyntaxBuilder &
ParsedOptionalPatternSyntaxBuilder::useSubPattern(ParsedPatternSyntax SubPattern) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OptionalPatternSyntax::Cursor::SubPattern)] =
    SubPattern.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedOptionalPatternSyntaxBuilder &
ParsedOptionalPatternSyntaxBuilder::useQuestionMark(ParsedTokenSyntax QuestionMark) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(OptionalPatternSyntax::Cursor::QuestionMark)] =
    QuestionMark.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedOptionalPatternSyntax
ParsedOptionalPatternSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::OptionalPattern, Layout);
  return ParsedOptionalPatternSyntax(std::move(raw));
}

ParsedOptionalPatternSyntax
ParsedOptionalPatternSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::OptionalPattern,
    Layout, SPCtx);
  return ParsedOptionalPatternSyntax(std::move(raw));
}

ParsedOptionalPatternSyntax
ParsedOptionalPatternSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedOptionalPatternSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::question_postfix, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::question_postfix, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedIdentifierPatternSyntaxBuilder &
ParsedIdentifierPatternSyntaxBuilder::useIdentifier(ParsedTokenSyntax Identifier) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(IdentifierPatternSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedIdentifierPatternSyntax
ParsedIdentifierPatternSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::IdentifierPattern, Layout);
  return ParsedIdentifierPatternSyntax(std::move(raw));
}

ParsedIdentifierPatternSyntax
ParsedIdentifierPatternSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::IdentifierPattern,
    Layout, SPCtx);
  return ParsedIdentifierPatternSyntax(std::move(raw));
}

ParsedIdentifierPatternSyntax
ParsedIdentifierPatternSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedIdentifierPatternSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_self, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_self, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAsTypePatternSyntaxBuilder &
ParsedAsTypePatternSyntaxBuilder::usePattern(ParsedPatternSyntax Pattern) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AsTypePatternSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAsTypePatternSyntaxBuilder &
ParsedAsTypePatternSyntaxBuilder::useAsKeyword(ParsedTokenSyntax AsKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AsTypePatternSyntax::Cursor::AsKeyword)] =
    AsKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAsTypePatternSyntaxBuilder &
ParsedAsTypePatternSyntaxBuilder::useType(ParsedTypeSyntax Type) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AsTypePatternSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAsTypePatternSyntax
ParsedAsTypePatternSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AsTypePattern, Layout);
  return ParsedAsTypePatternSyntax(std::move(raw));
}

ParsedAsTypePatternSyntax
ParsedAsTypePatternSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AsTypePattern,
    Layout, SPCtx);
  return ParsedAsTypePatternSyntax(std::move(raw));
}

ParsedAsTypePatternSyntax
ParsedAsTypePatternSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAsTypePatternSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_as, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::kw_as, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTuplePatternSyntaxBuilder &
ParsedTuplePatternSyntaxBuilder::useLeftParen(ParsedTokenSyntax LeftParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TuplePatternSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTuplePatternSyntaxBuilder &
ParsedTuplePatternSyntaxBuilder::useElements(ParsedTuplePatternElementListSyntax Elements) {
#line 43 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  assert(ElementsMembers.empty() && "use either 'use' function or 'add', not both");
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TuplePatternSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTuplePatternSyntaxBuilder &
ParsedTuplePatternSyntaxBuilder::addElementsMember(ParsedTuplePatternElementSyntax TuplePatternElement) {
  assert(Layout[cursorIndex(TuplePatternSyntax::Cursor::Elements)].isNull() && "use either 'use' function or 'add', not both");
  ElementsMembers.push_back(std::move(TuplePatternElement.getRaw()));
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTuplePatternSyntaxBuilder &
ParsedTuplePatternSyntaxBuilder::useRightParen(ParsedTokenSyntax RightParen) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TuplePatternSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTuplePatternSyntax
ParsedTuplePatternSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TuplePattern, Layout);
  return ParsedTuplePatternSyntax(std::move(raw));
}

ParsedTuplePatternSyntax
ParsedTuplePatternSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TuplePattern,
    Layout, SPCtx);
  return ParsedTuplePatternSyntax(std::move(raw));
}

ParsedTuplePatternSyntax
ParsedTuplePatternSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTuplePatternSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::l_paren, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::l_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 92 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (!ElementsMembers.empty()) {
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TuplePatternElementList,
                          ElementsMembers, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::TuplePatternElementList, ElementsMembers);
    }
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 112 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TuplePatternElementList, {}, SPCtx);
    } else {
      Layout[1] = Rec.recordRawSyntax(SyntaxKind::TuplePatternElementList, {});
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[2] = ParsedRawSyntaxNode::makeDeferredMissing(tok::r_paren, SourceLoc());
    } else {
      Layout[2] = Rec.recordMissingToken(tok::r_paren, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedWildcardPatternSyntaxBuilder &
ParsedWildcardPatternSyntaxBuilder::useWildcard(ParsedTokenSyntax Wildcard) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(WildcardPatternSyntax::Cursor::Wildcard)] =
    Wildcard.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedWildcardPatternSyntaxBuilder &
ParsedWildcardPatternSyntaxBuilder::useTypeAnnotation(ParsedTypeAnnotationSyntax TypeAnnotation) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(WildcardPatternSyntax::Cursor::TypeAnnotation)] =
    TypeAnnotation.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedWildcardPatternSyntax
ParsedWildcardPatternSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::WildcardPattern, Layout);
  return ParsedWildcardPatternSyntax(std::move(raw));
}

ParsedWildcardPatternSyntax
ParsedWildcardPatternSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::WildcardPattern,
    Layout, SPCtx);
  return ParsedWildcardPatternSyntax(std::move(raw));
}

ParsedWildcardPatternSyntax
ParsedWildcardPatternSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedWildcardPatternSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw__, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw__, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTuplePatternElementSyntaxBuilder &
ParsedTuplePatternElementSyntaxBuilder::useLabelName(ParsedTokenSyntax LabelName) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TuplePatternElementSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTuplePatternElementSyntaxBuilder &
ParsedTuplePatternElementSyntaxBuilder::useLabelColon(ParsedTokenSyntax LabelColon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TuplePatternElementSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTuplePatternElementSyntaxBuilder &
ParsedTuplePatternElementSyntaxBuilder::usePattern(ParsedPatternSyntax Pattern) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TuplePatternElementSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedTuplePatternElementSyntaxBuilder &
ParsedTuplePatternElementSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(TuplePatternElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedTuplePatternElementSyntax
ParsedTuplePatternElementSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::TuplePatternElement, Layout);
  return ParsedTuplePatternElementSyntax(std::move(raw));
}

ParsedTuplePatternElementSyntax
ParsedTuplePatternElementSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::TuplePatternElement,
    Layout, SPCtx);
  return ParsedTuplePatternElementSyntax(std::move(raw));
}

ParsedTuplePatternElementSyntax
ParsedTuplePatternElementSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedTuplePatternElementSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedExpressionPatternSyntaxBuilder &
ParsedExpressionPatternSyntaxBuilder::useExpression(ParsedExprSyntax Expression) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ExpressionPatternSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedExpressionPatternSyntax
ParsedExpressionPatternSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ExpressionPattern, Layout);
  return ParsedExpressionPatternSyntax(std::move(raw));
}

ParsedExpressionPatternSyntax
ParsedExpressionPatternSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ExpressionPattern,
    Layout, SPCtx);
  return ParsedExpressionPatternSyntax(std::move(raw));
}

ParsedExpressionPatternSyntax
ParsedExpressionPatternSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedExpressionPatternSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedValueBindingPatternSyntaxBuilder &
ParsedValueBindingPatternSyntaxBuilder::useLetOrVarKeyword(ParsedTokenSyntax LetOrVarKeyword) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ValueBindingPatternSyntax::Cursor::LetOrVarKeyword)] =
    LetOrVarKeyword.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedValueBindingPatternSyntaxBuilder &
ParsedValueBindingPatternSyntaxBuilder::useValuePattern(ParsedPatternSyntax ValuePattern) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(ValueBindingPatternSyntax::Cursor::ValuePattern)] =
    ValuePattern.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedValueBindingPatternSyntax
ParsedValueBindingPatternSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::ValueBindingPattern, Layout);
  return ParsedValueBindingPatternSyntax(std::move(raw));
}

ParsedValueBindingPatternSyntax
ParsedValueBindingPatternSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::ValueBindingPattern,
    Layout, SPCtx);
  return ParsedValueBindingPatternSyntax(std::move(raw));
}

ParsedValueBindingPatternSyntax
ParsedValueBindingPatternSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedValueBindingPatternSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::kw_let, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::kw_let, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityArgumentSyntaxBuilder &
ParsedAvailabilityArgumentSyntaxBuilder::useEntry(ParsedSyntax Entry) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AvailabilityArgumentSyntax::Cursor::Entry)] =
    Entry.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityArgumentSyntaxBuilder &
ParsedAvailabilityArgumentSyntaxBuilder::useTrailingComma(ParsedTokenSyntax TrailingComma) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AvailabilityArgumentSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAvailabilityArgumentSyntax
ParsedAvailabilityArgumentSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AvailabilityArgument, Layout);
  return ParsedAvailabilityArgumentSyntax(std::move(raw));
}

ParsedAvailabilityArgumentSyntax
ParsedAvailabilityArgumentSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AvailabilityArgument,
    Layout, SPCtx);
  return ParsedAvailabilityArgumentSyntax(std::move(raw));
}

ParsedAvailabilityArgumentSyntax
ParsedAvailabilityArgumentSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAvailabilityArgumentSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityLabeledArgumentSyntaxBuilder &
ParsedAvailabilityLabeledArgumentSyntaxBuilder::useLabel(ParsedTokenSyntax Label) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AvailabilityLabeledArgumentSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityLabeledArgumentSyntaxBuilder &
ParsedAvailabilityLabeledArgumentSyntaxBuilder::useColon(ParsedTokenSyntax Colon) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AvailabilityLabeledArgumentSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityLabeledArgumentSyntaxBuilder &
ParsedAvailabilityLabeledArgumentSyntaxBuilder::useValue(ParsedSyntax Value) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AvailabilityLabeledArgumentSyntax::Cursor::Value)] =
    Value.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAvailabilityLabeledArgumentSyntax
ParsedAvailabilityLabeledArgumentSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AvailabilityLabeledArgument, Layout);
  return ParsedAvailabilityLabeledArgumentSyntax(std::move(raw));
}

ParsedAvailabilityLabeledArgumentSyntax
ParsedAvailabilityLabeledArgumentSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AvailabilityLabeledArgument,
    Layout, SPCtx);
  return ParsedAvailabilityLabeledArgumentSyntax(std::move(raw));
}

ParsedAvailabilityLabeledArgumentSyntax
ParsedAvailabilityLabeledArgumentSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAvailabilityLabeledArgumentSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[1] = ParsedRawSyntaxNode::makeDeferredMissing(tok::colon, SourceLoc());
    } else {
      Layout[1] = Rec.recordMissingToken(tok::colon, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[2].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityVersionRestrictionSyntaxBuilder &
ParsedAvailabilityVersionRestrictionSyntaxBuilder::usePlatform(ParsedTokenSyntax Platform) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AvailabilityVersionRestrictionSyntax::Cursor::Platform)] =
    Platform.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedAvailabilityVersionRestrictionSyntaxBuilder &
ParsedAvailabilityVersionRestrictionSyntaxBuilder::useVersion(ParsedVersionTupleSyntax Version) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(AvailabilityVersionRestrictionSyntax::Cursor::Version)] =
    Version.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedAvailabilityVersionRestrictionSyntax
ParsedAvailabilityVersionRestrictionSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::AvailabilityVersionRestriction, Layout);
  return ParsedAvailabilityVersionRestrictionSyntax(std::move(raw));
}

ParsedAvailabilityVersionRestrictionSyntax
ParsedAvailabilityVersionRestrictionSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::AvailabilityVersionRestriction,
    Layout, SPCtx);
  return ParsedAvailabilityVersionRestrictionSyntax(std::move(raw));
}

ParsedAvailabilityVersionRestrictionSyntax
ParsedAvailabilityVersionRestrictionSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedAvailabilityVersionRestrictionSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 106 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    if (deferred) {
      Layout[0] = ParsedRawSyntaxNode::makeDeferredMissing(tok::identifier, SourceLoc());
    } else {
      Layout[0] = Rec.recordMissingToken(tok::identifier, SourceLoc());
    }
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[1].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedVersionTupleSyntaxBuilder &
ParsedVersionTupleSyntaxBuilder::useMajorMinor(ParsedSyntax MajorMinor) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(VersionTupleSyntax::Cursor::MajorMinor)] =
    MajorMinor.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedVersionTupleSyntaxBuilder &
ParsedVersionTupleSyntaxBuilder::usePatchPeriod(ParsedTokenSyntax PatchPeriod) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(VersionTupleSyntax::Cursor::PatchPeriod)] =
    PatchPeriod.getRaw();
  return *this;
}
#line 40 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
ParsedVersionTupleSyntaxBuilder &
ParsedVersionTupleSyntaxBuilder::usePatchVersion(ParsedTokenSyntax PatchVersion) {
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  Layout[cursorIndex(VersionTupleSyntax::Cursor::PatchVersion)] =
    PatchVersion.getRaw();
  return *this;
}
#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"

ParsedVersionTupleSyntax
ParsedVersionTupleSyntaxBuilder::record() {
  finishLayout(/*deferred=*/false);
  auto &Rec = SPCtx.getRecorder();
  auto raw = Rec.recordRawSyntax(SyntaxKind::VersionTuple, Layout);
  return ParsedVersionTupleSyntax(std::move(raw));
}

ParsedVersionTupleSyntax
ParsedVersionTupleSyntaxBuilder::makeDeferred() {
  finishLayout(/*deferred=*/true);
  auto raw = ParsedRawSyntaxNode::makeDeferred(SyntaxKind::VersionTuple,
    Layout, SPCtx);
  return ParsedVersionTupleSyntax(std::move(raw));
}

ParsedVersionTupleSyntax
ParsedVersionTupleSyntaxBuilder::build() {
  if (SPCtx.isBacktracking())
    return makeDeferred();
  return record();
}

void ParsedVersionTupleSyntaxBuilder::finishLayout(bool deferred) {
  auto &Rec = SPCtx.getRecorder();
  (void)Rec;
#line 102 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  if (Layout[0].isNull()) {
#line 118 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
    llvm_unreachable("need missing non-token nodes ?");
#line 120 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
  }
#line 124 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxBuilders.cpp.gyb"
}

