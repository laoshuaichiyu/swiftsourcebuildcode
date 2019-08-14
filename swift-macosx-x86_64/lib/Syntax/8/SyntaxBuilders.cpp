#line 1 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"

#line 8 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
//// Automatically Generated From SyntaxBuilders.cpp.gyb.
//// Do Not Edit Directly!
//===------------ SyntaxBuilders.cpp - Syntax Builder definitions ---------===//
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


#include "swift/Syntax/SyntaxBuilders.h"

using namespace swift;
using namespace swift::syntax;

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CodeBlockItemSyntaxBuilder &
CodeBlockItemSyntaxBuilder::useItem(Syntax Item) {
  Layout[cursorIndex(CodeBlockItemSyntax::Cursor::Item)] =
    Item.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CodeBlockItemSyntaxBuilder &
CodeBlockItemSyntaxBuilder::useSemicolon(TokenSyntax Semicolon) {
  Layout[cursorIndex(CodeBlockItemSyntax::Cursor::Semicolon)] =
    Semicolon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CodeBlockItemSyntaxBuilder &
CodeBlockItemSyntaxBuilder::useErrorTokens(Syntax ErrorTokens) {
  Layout[cursorIndex(CodeBlockItemSyntax::Cursor::ErrorTokens)] =
    ErrorTokens.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CodeBlockItemSyntax
CodeBlockItemSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Decl);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::CodeBlockItem, 
    Layout, SourcePresence::Present, Arena);
  return make<CodeBlockItemSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CodeBlockSyntaxBuilder &
CodeBlockSyntaxBuilder::useLeftBrace(TokenSyntax LeftBrace) {
  Layout[cursorIndex(CodeBlockSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CodeBlockSyntaxBuilder &
CodeBlockSyntaxBuilder::useStatements(CodeBlockItemListSyntax Statements) {
  Layout[cursorIndex(CodeBlockSyntax::Cursor::Statements)] =
    Statements.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CodeBlockSyntaxBuilder &
CodeBlockSyntaxBuilder::addStatement(CodeBlockItemSyntax Statement) {
  auto &raw = Layout[cursorIndex(CodeBlockSyntax::Cursor::Statements)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::CodeBlockItemList,
                          {Statement.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Statement.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CodeBlockSyntaxBuilder &
CodeBlockSyntaxBuilder::useRightBrace(TokenSyntax RightBrace) {
  Layout[cursorIndex(CodeBlockSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CodeBlockSyntax
CodeBlockSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::CodeBlockItemList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::CodeBlock, 
    Layout, SourcePresence::Present, Arena);
  return make<CodeBlockSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InOutExprSyntaxBuilder &
InOutExprSyntaxBuilder::useAmpersand(TokenSyntax Ampersand) {
  Layout[cursorIndex(InOutExprSyntax::Cursor::Ampersand)] =
    Ampersand.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InOutExprSyntaxBuilder &
InOutExprSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(InOutExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InOutExprSyntax
InOutExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::amp_prefix, OwnedString::makeUnowned("&"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::InOutExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<InOutExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundColumnExprSyntaxBuilder &
PoundColumnExprSyntaxBuilder::usePoundColumn(TokenSyntax PoundColumn) {
  Layout[cursorIndex(PoundColumnExprSyntax::Cursor::PoundColumn)] =
    PoundColumn.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundColumnExprSyntax
PoundColumnExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_column, OwnedString::makeUnowned("#column"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PoundColumnExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<PoundColumnExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TryExprSyntaxBuilder &
TryExprSyntaxBuilder::useTryKeyword(TokenSyntax TryKeyword) {
  Layout[cursorIndex(TryExprSyntax::Cursor::TryKeyword)] =
    TryKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TryExprSyntaxBuilder &
TryExprSyntaxBuilder::useQuestionOrExclamationMark(TokenSyntax QuestionOrExclamationMark) {
  Layout[cursorIndex(TryExprSyntax::Cursor::QuestionOrExclamationMark)] =
    QuestionOrExclamationMark.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TryExprSyntaxBuilder &
TryExprSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(TryExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TryExprSyntax
TryExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_try, OwnedString::makeUnowned("try"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TryExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<TryExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclNameArgumentSyntaxBuilder &
DeclNameArgumentSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(DeclNameArgumentSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclNameArgumentSyntaxBuilder &
DeclNameArgumentSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(DeclNameArgumentSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclNameArgumentSyntax
DeclNameArgumentSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DeclNameArgument, 
    Layout, SourcePresence::Present, Arena);
  return make<DeclNameArgumentSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclNameArgumentsSyntaxBuilder &
DeclNameArgumentsSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(DeclNameArgumentsSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclNameArgumentsSyntaxBuilder &
DeclNameArgumentsSyntaxBuilder::useArguments(DeclNameArgumentListSyntax Arguments) {
  Layout[cursorIndex(DeclNameArgumentsSyntax::Cursor::Arguments)] =
    Arguments.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclNameArgumentsSyntaxBuilder &
DeclNameArgumentsSyntaxBuilder::addArgument(DeclNameArgumentSyntax Argument) {
  auto &raw = Layout[cursorIndex(DeclNameArgumentsSyntax::Cursor::Arguments)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::DeclNameArgumentList,
                          {Argument.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Argument.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclNameArgumentsSyntaxBuilder &
DeclNameArgumentsSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(DeclNameArgumentsSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclNameArgumentsSyntax
DeclNameArgumentsSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::DeclNameArgumentList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DeclNameArguments, 
    Layout, SourcePresence::Present, Arena);
  return make<DeclNameArgumentsSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IdentifierExprSyntaxBuilder &
IdentifierExprSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(IdentifierExprSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IdentifierExprSyntaxBuilder &
IdentifierExprSyntaxBuilder::useDeclNameArguments(DeclNameArgumentsSyntax DeclNameArguments) {
  Layout[cursorIndex(IdentifierExprSyntax::Cursor::DeclNameArguments)] =
    DeclNameArguments.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IdentifierExprSyntax
IdentifierExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::IdentifierExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<IdentifierExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SuperRefExprSyntaxBuilder &
SuperRefExprSyntaxBuilder::useSuperKeyword(TokenSyntax SuperKeyword) {
  Layout[cursorIndex(SuperRefExprSyntax::Cursor::SuperKeyword)] =
    SuperKeyword.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SuperRefExprSyntax
SuperRefExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_super, OwnedString::makeUnowned("super"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SuperRefExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<SuperRefExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
NilLiteralExprSyntaxBuilder &
NilLiteralExprSyntaxBuilder::useNilKeyword(TokenSyntax NilKeyword) {
  Layout[cursorIndex(NilLiteralExprSyntax::Cursor::NilKeyword)] =
    NilKeyword.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
NilLiteralExprSyntax
NilLiteralExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_nil, OwnedString::makeUnowned("nil"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::NilLiteralExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<NilLiteralExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DiscardAssignmentExprSyntaxBuilder &
DiscardAssignmentExprSyntaxBuilder::useWildcard(TokenSyntax Wildcard) {
  Layout[cursorIndex(DiscardAssignmentExprSyntax::Cursor::Wildcard)] =
    Wildcard.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DiscardAssignmentExprSyntax
DiscardAssignmentExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw__, OwnedString::makeUnowned("_"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DiscardAssignmentExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<DiscardAssignmentExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssignmentExprSyntaxBuilder &
AssignmentExprSyntaxBuilder::useAssignToken(TokenSyntax AssignToken) {
  Layout[cursorIndex(AssignmentExprSyntax::Cursor::AssignToken)] =
    AssignToken.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssignmentExprSyntax
AssignmentExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::equal, OwnedString::makeUnowned("="));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AssignmentExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<AssignmentExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SequenceExprSyntaxBuilder &
SequenceExprSyntaxBuilder::useElements(ExprListSyntax Elements) {
  Layout[cursorIndex(SequenceExprSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SequenceExprSyntaxBuilder &
SequenceExprSyntaxBuilder::addElement(ExprSyntax Element) {
  auto &raw = Layout[cursorIndex(SequenceExprSyntax::Cursor::Elements)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ExprList,
                          {Element.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Element.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SequenceExprSyntax
SequenceExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::ExprList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SequenceExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<SequenceExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundLineExprSyntaxBuilder &
PoundLineExprSyntaxBuilder::usePoundLine(TokenSyntax PoundLine) {
  Layout[cursorIndex(PoundLineExprSyntax::Cursor::PoundLine)] =
    PoundLine.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundLineExprSyntax
PoundLineExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_line, OwnedString::makeUnowned("#line"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PoundLineExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<PoundLineExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundFileExprSyntaxBuilder &
PoundFileExprSyntaxBuilder::usePoundFile(TokenSyntax PoundFile) {
  Layout[cursorIndex(PoundFileExprSyntax::Cursor::PoundFile)] =
    PoundFile.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundFileExprSyntax
PoundFileExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_file, OwnedString::makeUnowned("#file"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PoundFileExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<PoundFileExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundFunctionExprSyntaxBuilder &
PoundFunctionExprSyntaxBuilder::usePoundFunction(TokenSyntax PoundFunction) {
  Layout[cursorIndex(PoundFunctionExprSyntax::Cursor::PoundFunction)] =
    PoundFunction.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundFunctionExprSyntax
PoundFunctionExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_function, OwnedString::makeUnowned("#function"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PoundFunctionExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<PoundFunctionExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundDsohandleExprSyntaxBuilder &
PoundDsohandleExprSyntaxBuilder::usePoundDsohandle(TokenSyntax PoundDsohandle) {
  Layout[cursorIndex(PoundDsohandleExprSyntax::Cursor::PoundDsohandle)] =
    PoundDsohandle.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundDsohandleExprSyntax
PoundDsohandleExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_dsohandle, OwnedString::makeUnowned("#dsohandle"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PoundDsohandleExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<PoundDsohandleExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SymbolicReferenceExprSyntaxBuilder &
SymbolicReferenceExprSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(SymbolicReferenceExprSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SymbolicReferenceExprSyntaxBuilder &
SymbolicReferenceExprSyntaxBuilder::useGenericArgumentClause(GenericArgumentClauseSyntax GenericArgumentClause) {
  Layout[cursorIndex(SymbolicReferenceExprSyntax::Cursor::GenericArgumentClause)] =
    GenericArgumentClause.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SymbolicReferenceExprSyntax
SymbolicReferenceExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SymbolicReferenceExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<SymbolicReferenceExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrefixOperatorExprSyntaxBuilder &
PrefixOperatorExprSyntaxBuilder::useOperatorToken(TokenSyntax OperatorToken) {
  Layout[cursorIndex(PrefixOperatorExprSyntax::Cursor::OperatorToken)] =
    OperatorToken.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrefixOperatorExprSyntaxBuilder &
PrefixOperatorExprSyntaxBuilder::usePostfixExpression(ExprSyntax PostfixExpression) {
  Layout[cursorIndex(PrefixOperatorExprSyntax::Cursor::PostfixExpression)] =
    PostfixExpression.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrefixOperatorExprSyntax
PrefixOperatorExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PrefixOperatorExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<PrefixOperatorExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
BinaryOperatorExprSyntaxBuilder &
BinaryOperatorExprSyntaxBuilder::useOperatorToken(TokenSyntax OperatorToken) {
  Layout[cursorIndex(BinaryOperatorExprSyntax::Cursor::OperatorToken)] =
    OperatorToken.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
BinaryOperatorExprSyntax
BinaryOperatorExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::BinaryOperatorExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<BinaryOperatorExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrowExprSyntaxBuilder &
ArrowExprSyntaxBuilder::useThrowsToken(TokenSyntax ThrowsToken) {
  Layout[cursorIndex(ArrowExprSyntax::Cursor::ThrowsToken)] =
    ThrowsToken.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrowExprSyntaxBuilder &
ArrowExprSyntaxBuilder::useArrowToken(TokenSyntax ArrowToken) {
  Layout[cursorIndex(ArrowExprSyntax::Cursor::ArrowToken)] =
    ArrowToken.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrowExprSyntax
ArrowExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::arrow, OwnedString::makeUnowned("->"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ArrowExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<ArrowExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FloatLiteralExprSyntaxBuilder &
FloatLiteralExprSyntaxBuilder::useFloatingDigits(TokenSyntax FloatingDigits) {
  Layout[cursorIndex(FloatLiteralExprSyntax::Cursor::FloatingDigits)] =
    FloatingDigits.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FloatLiteralExprSyntax
FloatLiteralExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::floating_literal, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::FloatLiteralExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<FloatLiteralExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleExprSyntaxBuilder &
TupleExprSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(TupleExprSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleExprSyntaxBuilder &
TupleExprSyntaxBuilder::useElementList(TupleElementListSyntax ElementList) {
  Layout[cursorIndex(TupleExprSyntax::Cursor::ElementList)] =
    ElementList.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleExprSyntaxBuilder &
TupleExprSyntaxBuilder::addElement(TupleElementSyntax Element) {
  auto &raw = Layout[cursorIndex(TupleExprSyntax::Cursor::ElementList)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::TupleElementList,
                          {Element.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Element.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleExprSyntaxBuilder &
TupleExprSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(TupleExprSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleExprSyntax
TupleExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::TupleElementList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TupleExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<TupleExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayExprSyntaxBuilder &
ArrayExprSyntaxBuilder::useLeftSquare(TokenSyntax LeftSquare) {
  Layout[cursorIndex(ArrayExprSyntax::Cursor::LeftSquare)] =
    LeftSquare.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayExprSyntaxBuilder &
ArrayExprSyntaxBuilder::useElements(ArrayElementListSyntax Elements) {
  Layout[cursorIndex(ArrayExprSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayExprSyntaxBuilder &
ArrayExprSyntaxBuilder::addElement(ArrayElementSyntax Element) {
  auto &raw = Layout[cursorIndex(ArrayExprSyntax::Cursor::Elements)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ArrayElementList,
                          {Element.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Element.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayExprSyntaxBuilder &
ArrayExprSyntaxBuilder::useRightSquare(TokenSyntax RightSquare) {
  Layout[cursorIndex(ArrayExprSyntax::Cursor::RightSquare)] =
    RightSquare.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayExprSyntax
ArrayExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::ArrayElementList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ArrayExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<ArrayExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryExprSyntaxBuilder &
DictionaryExprSyntaxBuilder::useLeftSquare(TokenSyntax LeftSquare) {
  Layout[cursorIndex(DictionaryExprSyntax::Cursor::LeftSquare)] =
    LeftSquare.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryExprSyntaxBuilder &
DictionaryExprSyntaxBuilder::useContent(Syntax Content) {
  Layout[cursorIndex(DictionaryExprSyntax::Cursor::Content)] =
    Content.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryExprSyntaxBuilder &
DictionaryExprSyntaxBuilder::useRightSquare(TokenSyntax RightSquare) {
  Layout[cursorIndex(DictionaryExprSyntax::Cursor::RightSquare)] =
    RightSquare.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryExprSyntax
DictionaryExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DictionaryExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<DictionaryExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallArgumentSyntaxBuilder &
FunctionCallArgumentSyntaxBuilder::useLabel(TokenSyntax Label) {
  Layout[cursorIndex(FunctionCallArgumentSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallArgumentSyntaxBuilder &
FunctionCallArgumentSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(FunctionCallArgumentSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallArgumentSyntaxBuilder &
FunctionCallArgumentSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(FunctionCallArgumentSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallArgumentSyntaxBuilder &
FunctionCallArgumentSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(FunctionCallArgumentSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallArgumentSyntax
FunctionCallArgumentSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::FunctionCallArgument, 
    Layout, SourcePresence::Present, Arena);
  return make<FunctionCallArgumentSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleElementSyntaxBuilder &
TupleElementSyntaxBuilder::useLabel(TokenSyntax Label) {
  Layout[cursorIndex(TupleElementSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleElementSyntaxBuilder &
TupleElementSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(TupleElementSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleElementSyntaxBuilder &
TupleElementSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(TupleElementSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleElementSyntaxBuilder &
TupleElementSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(TupleElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleElementSyntax
TupleElementSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TupleElement, 
    Layout, SourcePresence::Present, Arena);
  return make<TupleElementSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayElementSyntaxBuilder &
ArrayElementSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(ArrayElementSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayElementSyntaxBuilder &
ArrayElementSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(ArrayElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayElementSyntax
ArrayElementSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ArrayElement, 
    Layout, SourcePresence::Present, Arena);
  return make<ArrayElementSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryElementSyntaxBuilder &
DictionaryElementSyntaxBuilder::useKeyExpression(ExprSyntax KeyExpression) {
  Layout[cursorIndex(DictionaryElementSyntax::Cursor::KeyExpression)] =
    KeyExpression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryElementSyntaxBuilder &
DictionaryElementSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(DictionaryElementSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryElementSyntaxBuilder &
DictionaryElementSyntaxBuilder::useValueExpression(ExprSyntax ValueExpression) {
  Layout[cursorIndex(DictionaryElementSyntax::Cursor::ValueExpression)] =
    ValueExpression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryElementSyntaxBuilder &
DictionaryElementSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(DictionaryElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryElementSyntax
DictionaryElementSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DictionaryElement, 
    Layout, SourcePresence::Present, Arena);
  return make<DictionaryElementSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IntegerLiteralExprSyntaxBuilder &
IntegerLiteralExprSyntaxBuilder::useDigits(TokenSyntax Digits) {
  Layout[cursorIndex(IntegerLiteralExprSyntax::Cursor::Digits)] =
    Digits.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IntegerLiteralExprSyntax
IntegerLiteralExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::integer_literal, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::IntegerLiteralExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<IntegerLiteralExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
BooleanLiteralExprSyntaxBuilder &
BooleanLiteralExprSyntaxBuilder::useBooleanLiteral(TokenSyntax BooleanLiteral) {
  Layout[cursorIndex(BooleanLiteralExprSyntax::Cursor::BooleanLiteral)] =
    BooleanLiteral.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
BooleanLiteralExprSyntax
BooleanLiteralExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_true, OwnedString::makeUnowned("true"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::BooleanLiteralExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<BooleanLiteralExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TernaryExprSyntaxBuilder &
TernaryExprSyntaxBuilder::useConditionExpression(ExprSyntax ConditionExpression) {
  Layout[cursorIndex(TernaryExprSyntax::Cursor::ConditionExpression)] =
    ConditionExpression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TernaryExprSyntaxBuilder &
TernaryExprSyntaxBuilder::useQuestionMark(TokenSyntax QuestionMark) {
  Layout[cursorIndex(TernaryExprSyntax::Cursor::QuestionMark)] =
    QuestionMark.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TernaryExprSyntaxBuilder &
TernaryExprSyntaxBuilder::useFirstChoice(ExprSyntax FirstChoice) {
  Layout[cursorIndex(TernaryExprSyntax::Cursor::FirstChoice)] =
    FirstChoice.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TernaryExprSyntaxBuilder &
TernaryExprSyntaxBuilder::useColonMark(TokenSyntax ColonMark) {
  Layout[cursorIndex(TernaryExprSyntax::Cursor::ColonMark)] =
    ColonMark.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TernaryExprSyntaxBuilder &
TernaryExprSyntaxBuilder::useSecondChoice(ExprSyntax SecondChoice) {
  Layout[cursorIndex(TernaryExprSyntax::Cursor::SecondChoice)] =
    SecondChoice.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TernaryExprSyntax
TernaryExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::question_infix, OwnedString::makeUnowned("?"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TernaryExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<TernaryExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberAccessExprSyntaxBuilder &
MemberAccessExprSyntaxBuilder::useBase(ExprSyntax Base) {
  Layout[cursorIndex(MemberAccessExprSyntax::Cursor::Base)] =
    Base.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberAccessExprSyntaxBuilder &
MemberAccessExprSyntaxBuilder::useDot(TokenSyntax Dot) {
  Layout[cursorIndex(MemberAccessExprSyntax::Cursor::Dot)] =
    Dot.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberAccessExprSyntaxBuilder &
MemberAccessExprSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(MemberAccessExprSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberAccessExprSyntaxBuilder &
MemberAccessExprSyntaxBuilder::useDeclNameArguments(DeclNameArgumentsSyntax DeclNameArguments) {
  Layout[cursorIndex(MemberAccessExprSyntax::Cursor::DeclNameArguments)] =
    DeclNameArguments.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberAccessExprSyntax
MemberAccessExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::period, OwnedString::makeUnowned("."));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::MemberAccessExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<MemberAccessExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IsExprSyntaxBuilder &
IsExprSyntaxBuilder::useIsTok(TokenSyntax IsTok) {
  Layout[cursorIndex(IsExprSyntax::Cursor::IsTok)] =
    IsTok.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IsExprSyntaxBuilder &
IsExprSyntaxBuilder::useTypeName(TypeSyntax TypeName) {
  Layout[cursorIndex(IsExprSyntax::Cursor::TypeName)] =
    TypeName.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IsExprSyntax
IsExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_is, OwnedString::makeUnowned("is"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::IsExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<IsExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AsExprSyntaxBuilder &
AsExprSyntaxBuilder::useAsTok(TokenSyntax AsTok) {
  Layout[cursorIndex(AsExprSyntax::Cursor::AsTok)] =
    AsTok.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AsExprSyntaxBuilder &
AsExprSyntaxBuilder::useQuestionOrExclamationMark(TokenSyntax QuestionOrExclamationMark) {
  Layout[cursorIndex(AsExprSyntax::Cursor::QuestionOrExclamationMark)] =
    QuestionOrExclamationMark.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AsExprSyntaxBuilder &
AsExprSyntaxBuilder::useTypeName(TypeSyntax TypeName) {
  Layout[cursorIndex(AsExprSyntax::Cursor::TypeName)] =
    TypeName.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AsExprSyntax
AsExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_as, OwnedString::makeUnowned("as"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AsExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<AsExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeExprSyntaxBuilder &
TypeExprSyntaxBuilder::useType(TypeSyntax Type) {
  Layout[cursorIndex(TypeExprSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeExprSyntax
TypeExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TypeExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<TypeExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureItemSyntaxBuilder &
ClosureCaptureItemSyntaxBuilder::useSpecifier(TokenListSyntax Specifier) {
  Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::Specifier)] =
    Specifier.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureItemSyntaxBuilder &
ClosureCaptureItemSyntaxBuilder::addSpecifierToken(TokenSyntax SpecifierToken) {
  auto &raw = Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::Specifier)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::TokenList,
                          {SpecifierToken.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(SpecifierToken.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureItemSyntaxBuilder &
ClosureCaptureItemSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureItemSyntaxBuilder &
ClosureCaptureItemSyntaxBuilder::useAssignToken(TokenSyntax AssignToken) {
  Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::AssignToken)] =
    AssignToken.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureItemSyntaxBuilder &
ClosureCaptureItemSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureItemSyntaxBuilder &
ClosureCaptureItemSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(ClosureCaptureItemSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureItemSyntax
ClosureCaptureItemSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ClosureCaptureItem, 
    Layout, SourcePresence::Present, Arena);
  return make<ClosureCaptureItemSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureSignatureSyntaxBuilder &
ClosureCaptureSignatureSyntaxBuilder::useLeftSquare(TokenSyntax LeftSquare) {
  Layout[cursorIndex(ClosureCaptureSignatureSyntax::Cursor::LeftSquare)] =
    LeftSquare.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureSignatureSyntaxBuilder &
ClosureCaptureSignatureSyntaxBuilder::useItems(ClosureCaptureItemListSyntax Items) {
  Layout[cursorIndex(ClosureCaptureSignatureSyntax::Cursor::Items)] =
    Items.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureSignatureSyntaxBuilder &
ClosureCaptureSignatureSyntaxBuilder::addItem(ClosureCaptureItemSyntax Item) {
  auto &raw = Layout[cursorIndex(ClosureCaptureSignatureSyntax::Cursor::Items)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ClosureCaptureItemList,
                          {Item.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Item.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureSignatureSyntaxBuilder &
ClosureCaptureSignatureSyntaxBuilder::useRightSquare(TokenSyntax RightSquare) {
  Layout[cursorIndex(ClosureCaptureSignatureSyntax::Cursor::RightSquare)] =
    RightSquare.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureCaptureSignatureSyntax
ClosureCaptureSignatureSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ClosureCaptureSignature, 
    Layout, SourcePresence::Present, Arena);
  return make<ClosureCaptureSignatureSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureParamSyntaxBuilder &
ClosureParamSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(ClosureParamSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureParamSyntaxBuilder &
ClosureParamSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(ClosureParamSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureParamSyntax
ClosureParamSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ClosureParam, 
    Layout, SourcePresence::Present, Arena);
  return make<ClosureParamSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureSignatureSyntaxBuilder &
ClosureSignatureSyntaxBuilder::useCapture(ClosureCaptureSignatureSyntax Capture) {
  Layout[cursorIndex(ClosureSignatureSyntax::Cursor::Capture)] =
    Capture.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureSignatureSyntaxBuilder &
ClosureSignatureSyntaxBuilder::useInput(Syntax Input) {
  Layout[cursorIndex(ClosureSignatureSyntax::Cursor::Input)] =
    Input.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureSignatureSyntaxBuilder &
ClosureSignatureSyntaxBuilder::useThrowsTok(TokenSyntax ThrowsTok) {
  Layout[cursorIndex(ClosureSignatureSyntax::Cursor::ThrowsTok)] =
    ThrowsTok.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureSignatureSyntaxBuilder &
ClosureSignatureSyntaxBuilder::useOutput(ReturnClauseSyntax Output) {
  Layout[cursorIndex(ClosureSignatureSyntax::Cursor::Output)] =
    Output.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureSignatureSyntaxBuilder &
ClosureSignatureSyntaxBuilder::useInTok(TokenSyntax InTok) {
  Layout[cursorIndex(ClosureSignatureSyntax::Cursor::InTok)] =
    InTok.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureSignatureSyntax
ClosureSignatureSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(tok::kw_in, OwnedString::makeUnowned("in"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ClosureSignature, 
    Layout, SourcePresence::Present, Arena);
  return make<ClosureSignatureSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureExprSyntaxBuilder &
ClosureExprSyntaxBuilder::useLeftBrace(TokenSyntax LeftBrace) {
  Layout[cursorIndex(ClosureExprSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureExprSyntaxBuilder &
ClosureExprSyntaxBuilder::useSignature(ClosureSignatureSyntax Signature) {
  Layout[cursorIndex(ClosureExprSyntax::Cursor::Signature)] =
    Signature.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureExprSyntaxBuilder &
ClosureExprSyntaxBuilder::useStatements(CodeBlockItemListSyntax Statements) {
  Layout[cursorIndex(ClosureExprSyntax::Cursor::Statements)] =
    Statements.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureExprSyntaxBuilder &
ClosureExprSyntaxBuilder::addStatement(CodeBlockItemSyntax Statement) {
  auto &raw = Layout[cursorIndex(ClosureExprSyntax::Cursor::Statements)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::CodeBlockItemList,
                          {Statement.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Statement.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureExprSyntaxBuilder &
ClosureExprSyntaxBuilder::useRightBrace(TokenSyntax RightBrace) {
  Layout[cursorIndex(ClosureExprSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClosureExprSyntax
ClosureExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::CodeBlockItemList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ClosureExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<ClosureExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
UnresolvedPatternExprSyntaxBuilder &
UnresolvedPatternExprSyntaxBuilder::usePattern(PatternSyntax Pattern) {
  Layout[cursorIndex(UnresolvedPatternExprSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
UnresolvedPatternExprSyntax
UnresolvedPatternExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Pattern);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::UnresolvedPatternExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<UnresolvedPatternExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallExprSyntaxBuilder &
FunctionCallExprSyntaxBuilder::useCalledExpression(ExprSyntax CalledExpression) {
  Layout[cursorIndex(FunctionCallExprSyntax::Cursor::CalledExpression)] =
    CalledExpression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallExprSyntaxBuilder &
FunctionCallExprSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(FunctionCallExprSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallExprSyntaxBuilder &
FunctionCallExprSyntaxBuilder::useArgumentList(FunctionCallArgumentListSyntax ArgumentList) {
  Layout[cursorIndex(FunctionCallExprSyntax::Cursor::ArgumentList)] =
    ArgumentList.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallExprSyntaxBuilder &
FunctionCallExprSyntaxBuilder::addArgument(FunctionCallArgumentSyntax Argument) {
  auto &raw = Layout[cursorIndex(FunctionCallExprSyntax::Cursor::ArgumentList)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::FunctionCallArgumentList,
                          {Argument.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Argument.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallExprSyntaxBuilder &
FunctionCallExprSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(FunctionCallExprSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallExprSyntaxBuilder &
FunctionCallExprSyntaxBuilder::useTrailingClosure(ClosureExprSyntax TrailingClosure) {
  Layout[cursorIndex(FunctionCallExprSyntax::Cursor::TrailingClosure)] =
    TrailingClosure.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionCallExprSyntax
FunctionCallExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::FunctionCallArgumentList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::FunctionCallExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<FunctionCallExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptExprSyntaxBuilder &
SubscriptExprSyntaxBuilder::useCalledExpression(ExprSyntax CalledExpression) {
  Layout[cursorIndex(SubscriptExprSyntax::Cursor::CalledExpression)] =
    CalledExpression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptExprSyntaxBuilder &
SubscriptExprSyntaxBuilder::useLeftBracket(TokenSyntax LeftBracket) {
  Layout[cursorIndex(SubscriptExprSyntax::Cursor::LeftBracket)] =
    LeftBracket.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptExprSyntaxBuilder &
SubscriptExprSyntaxBuilder::useArgumentList(FunctionCallArgumentListSyntax ArgumentList) {
  Layout[cursorIndex(SubscriptExprSyntax::Cursor::ArgumentList)] =
    ArgumentList.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptExprSyntaxBuilder &
SubscriptExprSyntaxBuilder::addArgument(FunctionCallArgumentSyntax Argument) {
  auto &raw = Layout[cursorIndex(SubscriptExprSyntax::Cursor::ArgumentList)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::FunctionCallArgumentList,
                          {Argument.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Argument.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptExprSyntaxBuilder &
SubscriptExprSyntaxBuilder::useRightBracket(TokenSyntax RightBracket) {
  Layout[cursorIndex(SubscriptExprSyntax::Cursor::RightBracket)] =
    RightBracket.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptExprSyntaxBuilder &
SubscriptExprSyntaxBuilder::useTrailingClosure(ClosureExprSyntax TrailingClosure) {
  Layout[cursorIndex(SubscriptExprSyntax::Cursor::TrailingClosure)] =
    TrailingClosure.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptExprSyntax
SubscriptExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::FunctionCallArgumentList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SubscriptExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<SubscriptExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalChainingExprSyntaxBuilder &
OptionalChainingExprSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(OptionalChainingExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalChainingExprSyntaxBuilder &
OptionalChainingExprSyntaxBuilder::useQuestionMark(TokenSyntax QuestionMark) {
  Layout[cursorIndex(OptionalChainingExprSyntax::Cursor::QuestionMark)] =
    QuestionMark.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalChainingExprSyntax
OptionalChainingExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::question_postfix, OwnedString::makeUnowned("?"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::OptionalChainingExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<OptionalChainingExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForcedValueExprSyntaxBuilder &
ForcedValueExprSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(ForcedValueExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForcedValueExprSyntaxBuilder &
ForcedValueExprSyntaxBuilder::useExclamationMark(TokenSyntax ExclamationMark) {
  Layout[cursorIndex(ForcedValueExprSyntax::Cursor::ExclamationMark)] =
    ExclamationMark.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForcedValueExprSyntax
ForcedValueExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::exclaim_postfix, OwnedString::makeUnowned("!"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ForcedValueExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<ForcedValueExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PostfixUnaryExprSyntaxBuilder &
PostfixUnaryExprSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(PostfixUnaryExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PostfixUnaryExprSyntaxBuilder &
PostfixUnaryExprSyntaxBuilder::useOperatorToken(TokenSyntax OperatorToken) {
  Layout[cursorIndex(PostfixUnaryExprSyntax::Cursor::OperatorToken)] =
    OperatorToken.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PostfixUnaryExprSyntax
PostfixUnaryExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::oper_postfix, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PostfixUnaryExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<PostfixUnaryExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SpecializeExprSyntaxBuilder &
SpecializeExprSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(SpecializeExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SpecializeExprSyntaxBuilder &
SpecializeExprSyntaxBuilder::useGenericArgumentClause(GenericArgumentClauseSyntax GenericArgumentClause) {
  Layout[cursorIndex(SpecializeExprSyntax::Cursor::GenericArgumentClause)] =
    GenericArgumentClause.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SpecializeExprSyntax
SpecializeExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::GenericArgumentClause);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SpecializeExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<SpecializeExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StringSegmentSyntaxBuilder &
StringSegmentSyntaxBuilder::useContent(TokenSyntax Content) {
  Layout[cursorIndex(StringSegmentSyntax::Cursor::Content)] =
    Content.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StringSegmentSyntax
StringSegmentSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::string_segment, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::StringSegment, 
    Layout, SourcePresence::Present, Arena);
  return make<StringSegmentSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExpressionSegmentSyntaxBuilder &
ExpressionSegmentSyntaxBuilder::useBackslash(TokenSyntax Backslash) {
  Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::Backslash)] =
    Backslash.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExpressionSegmentSyntaxBuilder &
ExpressionSegmentSyntaxBuilder::useDelimiter(TokenSyntax Delimiter) {
  Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::Delimiter)] =
    Delimiter.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExpressionSegmentSyntaxBuilder &
ExpressionSegmentSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExpressionSegmentSyntaxBuilder &
ExpressionSegmentSyntaxBuilder::useExpressions(FunctionCallArgumentListSyntax Expressions) {
  Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::Expressions)] =
    Expressions.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExpressionSegmentSyntaxBuilder &
ExpressionSegmentSyntaxBuilder::addExpression(FunctionCallArgumentSyntax Expression) {
  auto &raw = Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::Expressions)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::FunctionCallArgumentList,
                          {Expression.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Expression.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExpressionSegmentSyntaxBuilder &
ExpressionSegmentSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(ExpressionSegmentSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExpressionSegmentSyntax
ExpressionSegmentSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::backslash, OwnedString::makeUnowned("\\"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::FunctionCallArgumentList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(tok::string_interpolation_anchor, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ExpressionSegment, 
    Layout, SourcePresence::Present, Arena);
  return make<ExpressionSegmentSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StringLiteralExprSyntaxBuilder &
StringLiteralExprSyntaxBuilder::useOpenDelimiter(TokenSyntax OpenDelimiter) {
  Layout[cursorIndex(StringLiteralExprSyntax::Cursor::OpenDelimiter)] =
    OpenDelimiter.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StringLiteralExprSyntaxBuilder &
StringLiteralExprSyntaxBuilder::useOpenQuote(TokenSyntax OpenQuote) {
  Layout[cursorIndex(StringLiteralExprSyntax::Cursor::OpenQuote)] =
    OpenQuote.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StringLiteralExprSyntaxBuilder &
StringLiteralExprSyntaxBuilder::useSegments(StringLiteralSegmentsSyntax Segments) {
  Layout[cursorIndex(StringLiteralExprSyntax::Cursor::Segments)] =
    Segments.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StringLiteralExprSyntaxBuilder &
StringLiteralExprSyntaxBuilder::addSegment(Syntax Segment) {
  auto &raw = Layout[cursorIndex(StringLiteralExprSyntax::Cursor::Segments)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::StringLiteralSegments,
                          {Segment.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Segment.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StringLiteralExprSyntaxBuilder &
StringLiteralExprSyntaxBuilder::useCloseQuote(TokenSyntax CloseQuote) {
  Layout[cursorIndex(StringLiteralExprSyntax::Cursor::CloseQuote)] =
    CloseQuote.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StringLiteralExprSyntaxBuilder &
StringLiteralExprSyntaxBuilder::useCloseDelimiter(TokenSyntax CloseDelimiter) {
  Layout[cursorIndex(StringLiteralExprSyntax::Cursor::CloseDelimiter)] =
    CloseDelimiter.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StringLiteralExprSyntax
StringLiteralExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::string_quote, OwnedString::makeUnowned("\""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::StringLiteralSegments);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::string_quote, OwnedString::makeUnowned("\""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::StringLiteralExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<StringLiteralExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
KeyPathExprSyntaxBuilder &
KeyPathExprSyntaxBuilder::useBackslash(TokenSyntax Backslash) {
  Layout[cursorIndex(KeyPathExprSyntax::Cursor::Backslash)] =
    Backslash.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
KeyPathExprSyntaxBuilder &
KeyPathExprSyntaxBuilder::useRootExpr(ExprSyntax RootExpr) {
  Layout[cursorIndex(KeyPathExprSyntax::Cursor::RootExpr)] =
    RootExpr.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
KeyPathExprSyntaxBuilder &
KeyPathExprSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(KeyPathExprSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
KeyPathExprSyntax
KeyPathExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::backslash, OwnedString::makeUnowned("\\"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::KeyPathExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<KeyPathExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
KeyPathBaseExprSyntaxBuilder &
KeyPathBaseExprSyntaxBuilder::usePeriod(TokenSyntax Period) {
  Layout[cursorIndex(KeyPathBaseExprSyntax::Cursor::Period)] =
    Period.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
KeyPathBaseExprSyntax
KeyPathBaseExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::period, OwnedString::makeUnowned("."));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::KeyPathBaseExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<KeyPathBaseExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcNamePieceSyntaxBuilder &
ObjcNamePieceSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(ObjcNamePieceSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcNamePieceSyntaxBuilder &
ObjcNamePieceSyntaxBuilder::useDot(TokenSyntax Dot) {
  Layout[cursorIndex(ObjcNamePieceSyntax::Cursor::Dot)] =
    Dot.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcNamePieceSyntax
ObjcNamePieceSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ObjcNamePiece, 
    Layout, SourcePresence::Present, Arena);
  return make<ObjcNamePieceSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcKeyPathExprSyntaxBuilder &
ObjcKeyPathExprSyntaxBuilder::useKeyPath(TokenSyntax KeyPath) {
  Layout[cursorIndex(ObjcKeyPathExprSyntax::Cursor::KeyPath)] =
    KeyPath.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcKeyPathExprSyntaxBuilder &
ObjcKeyPathExprSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(ObjcKeyPathExprSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcKeyPathExprSyntaxBuilder &
ObjcKeyPathExprSyntaxBuilder::useName(ObjcNameSyntax Name) {
  Layout[cursorIndex(ObjcKeyPathExprSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcKeyPathExprSyntaxBuilder &
ObjcKeyPathExprSyntaxBuilder::addNamePiece(ObjcNamePieceSyntax NamePiece) {
  auto &raw = Layout[cursorIndex(ObjcKeyPathExprSyntax::Cursor::Name)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ObjcName,
                          {NamePiece.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(NamePiece.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcKeyPathExprSyntaxBuilder &
ObjcKeyPathExprSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(ObjcKeyPathExprSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcKeyPathExprSyntax
ObjcKeyPathExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_keyPath, OwnedString::makeUnowned("#keyPath"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::ObjcName);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ObjcKeyPathExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<ObjcKeyPathExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcSelectorExprSyntaxBuilder &
ObjcSelectorExprSyntaxBuilder::usePoundSelector(TokenSyntax PoundSelector) {
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::PoundSelector)] =
    PoundSelector.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcSelectorExprSyntaxBuilder &
ObjcSelectorExprSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcSelectorExprSyntaxBuilder &
ObjcSelectorExprSyntaxBuilder::useKind(TokenSyntax Kind) {
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::Kind)] =
    Kind.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcSelectorExprSyntaxBuilder &
ObjcSelectorExprSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcSelectorExprSyntaxBuilder &
ObjcSelectorExprSyntaxBuilder::useName(ExprSyntax Name) {
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcSelectorExprSyntaxBuilder &
ObjcSelectorExprSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(ObjcSelectorExprSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjcSelectorExprSyntax
ObjcSelectorExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_selector, OwnedString::makeUnowned("#selector"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[5])
    Layout[5] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ObjcSelectorExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<ObjcSelectorExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EditorPlaceholderExprSyntaxBuilder &
EditorPlaceholderExprSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(EditorPlaceholderExprSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EditorPlaceholderExprSyntax
EditorPlaceholderExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::EditorPlaceholderExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<EditorPlaceholderExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjectLiteralExprSyntaxBuilder &
ObjectLiteralExprSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(ObjectLiteralExprSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjectLiteralExprSyntaxBuilder &
ObjectLiteralExprSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(ObjectLiteralExprSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjectLiteralExprSyntaxBuilder &
ObjectLiteralExprSyntaxBuilder::useArguments(FunctionCallArgumentListSyntax Arguments) {
  Layout[cursorIndex(ObjectLiteralExprSyntax::Cursor::Arguments)] =
    Arguments.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjectLiteralExprSyntaxBuilder &
ObjectLiteralExprSyntaxBuilder::addArgument(FunctionCallArgumentSyntax Argument) {
  auto &raw = Layout[cursorIndex(ObjectLiteralExprSyntax::Cursor::Arguments)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::FunctionCallArgumentList,
                          {Argument.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Argument.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjectLiteralExprSyntaxBuilder &
ObjectLiteralExprSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(ObjectLiteralExprSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjectLiteralExprSyntax
ObjectLiteralExprSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_colorLiteral, OwnedString::makeUnowned("#colorLiteral"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::FunctionCallArgumentList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ObjectLiteralExpr, 
    Layout, SourcePresence::Present, Arena);
  return make<ObjectLiteralExprSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeInitializerClauseSyntaxBuilder &
TypeInitializerClauseSyntaxBuilder::useEqual(TokenSyntax Equal) {
  Layout[cursorIndex(TypeInitializerClauseSyntax::Cursor::Equal)] =
    Equal.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeInitializerClauseSyntaxBuilder &
TypeInitializerClauseSyntaxBuilder::useValue(TypeSyntax Value) {
  Layout[cursorIndex(TypeInitializerClauseSyntax::Cursor::Value)] =
    Value.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeInitializerClauseSyntax
TypeInitializerClauseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::equal, OwnedString::makeUnowned("="));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TypeInitializerClause, 
    Layout, SourcePresence::Present, Arena);
  return make<TypeInitializerClauseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypealiasDeclSyntaxBuilder &
TypealiasDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypealiasDeclSyntaxBuilder &
TypealiasDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypealiasDeclSyntaxBuilder &
TypealiasDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypealiasDeclSyntaxBuilder &
TypealiasDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypealiasDeclSyntaxBuilder &
TypealiasDeclSyntaxBuilder::useTypealiasKeyword(TokenSyntax TypealiasKeyword) {
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::TypealiasKeyword)] =
    TypealiasKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypealiasDeclSyntaxBuilder &
TypealiasDeclSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypealiasDeclSyntaxBuilder &
TypealiasDeclSyntaxBuilder::useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause) {
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypealiasDeclSyntaxBuilder &
TypealiasDeclSyntaxBuilder::useInitializer(TypeInitializerClauseSyntax Initializer) {
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypealiasDeclSyntaxBuilder &
TypealiasDeclSyntaxBuilder::useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause) {
  Layout[cursorIndex(TypealiasDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypealiasDeclSyntax
TypealiasDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_typealias, OwnedString::makeUnowned("typealias"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TypealiasDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<TypealiasDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssociatedtypeDeclSyntaxBuilder &
AssociatedtypeDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssociatedtypeDeclSyntaxBuilder &
AssociatedtypeDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssociatedtypeDeclSyntaxBuilder &
AssociatedtypeDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssociatedtypeDeclSyntaxBuilder &
AssociatedtypeDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssociatedtypeDeclSyntaxBuilder &
AssociatedtypeDeclSyntaxBuilder::useAssociatedtypeKeyword(TokenSyntax AssociatedtypeKeyword) {
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::AssociatedtypeKeyword)] =
    AssociatedtypeKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssociatedtypeDeclSyntaxBuilder &
AssociatedtypeDeclSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssociatedtypeDeclSyntaxBuilder &
AssociatedtypeDeclSyntaxBuilder::useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause) {
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssociatedtypeDeclSyntaxBuilder &
AssociatedtypeDeclSyntaxBuilder::useInitializer(TypeInitializerClauseSyntax Initializer) {
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssociatedtypeDeclSyntaxBuilder &
AssociatedtypeDeclSyntaxBuilder::useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause) {
  Layout[cursorIndex(AssociatedtypeDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AssociatedtypeDeclSyntax
AssociatedtypeDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_associatedtype, OwnedString::makeUnowned("associatedtype"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AssociatedtypeDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<AssociatedtypeDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ParameterClauseSyntaxBuilder &
ParameterClauseSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(ParameterClauseSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ParameterClauseSyntaxBuilder &
ParameterClauseSyntaxBuilder::useParameterList(FunctionParameterListSyntax ParameterList) {
  Layout[cursorIndex(ParameterClauseSyntax::Cursor::ParameterList)] =
    ParameterList.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ParameterClauseSyntaxBuilder &
ParameterClauseSyntaxBuilder::addParameter(FunctionParameterSyntax Parameter) {
  auto &raw = Layout[cursorIndex(ParameterClauseSyntax::Cursor::ParameterList)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::FunctionParameterList,
                          {Parameter.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Parameter.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ParameterClauseSyntaxBuilder &
ParameterClauseSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(ParameterClauseSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ParameterClauseSyntax
ParameterClauseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::FunctionParameterList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ParameterClause, 
    Layout, SourcePresence::Present, Arena);
  return make<ParameterClauseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ReturnClauseSyntaxBuilder &
ReturnClauseSyntaxBuilder::useArrow(TokenSyntax Arrow) {
  Layout[cursorIndex(ReturnClauseSyntax::Cursor::Arrow)] =
    Arrow.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ReturnClauseSyntaxBuilder &
ReturnClauseSyntaxBuilder::useReturnType(TypeSyntax ReturnType) {
  Layout[cursorIndex(ReturnClauseSyntax::Cursor::ReturnType)] =
    ReturnType.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ReturnClauseSyntax
ReturnClauseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::arrow, OwnedString::makeUnowned("->"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ReturnClause, 
    Layout, SourcePresence::Present, Arena);
  return make<ReturnClauseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionSignatureSyntaxBuilder &
FunctionSignatureSyntaxBuilder::useInput(ParameterClauseSyntax Input) {
  Layout[cursorIndex(FunctionSignatureSyntax::Cursor::Input)] =
    Input.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionSignatureSyntaxBuilder &
FunctionSignatureSyntaxBuilder::useThrowsOrRethrowsKeyword(TokenSyntax ThrowsOrRethrowsKeyword) {
  Layout[cursorIndex(FunctionSignatureSyntax::Cursor::ThrowsOrRethrowsKeyword)] =
    ThrowsOrRethrowsKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionSignatureSyntaxBuilder &
FunctionSignatureSyntaxBuilder::useOutput(ReturnClauseSyntax Output) {
  Layout[cursorIndex(FunctionSignatureSyntax::Cursor::Output)] =
    Output.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionSignatureSyntax
FunctionSignatureSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::ParameterClause);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::FunctionSignature, 
    Layout, SourcePresence::Present, Arena);
  return make<FunctionSignatureSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfConfigClauseSyntaxBuilder &
IfConfigClauseSyntaxBuilder::usePoundKeyword(TokenSyntax PoundKeyword) {
  Layout[cursorIndex(IfConfigClauseSyntax::Cursor::PoundKeyword)] =
    PoundKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfConfigClauseSyntaxBuilder &
IfConfigClauseSyntaxBuilder::useCondition(ExprSyntax Condition) {
  Layout[cursorIndex(IfConfigClauseSyntax::Cursor::Condition)] =
    Condition.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfConfigClauseSyntaxBuilder &
IfConfigClauseSyntaxBuilder::useElements(Syntax Elements) {
  Layout[cursorIndex(IfConfigClauseSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfConfigClauseSyntax
IfConfigClauseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_if, OwnedString::makeUnowned("#if"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::CodeBlockItemList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::IfConfigClause, 
    Layout, SourcePresence::Present, Arena);
  return make<IfConfigClauseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfConfigDeclSyntaxBuilder &
IfConfigDeclSyntaxBuilder::useClauses(IfConfigClauseListSyntax Clauses) {
  Layout[cursorIndex(IfConfigDeclSyntax::Cursor::Clauses)] =
    Clauses.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfConfigDeclSyntaxBuilder &
IfConfigDeclSyntaxBuilder::addClause(IfConfigClauseSyntax Clause) {
  auto &raw = Layout[cursorIndex(IfConfigDeclSyntax::Cursor::Clauses)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::IfConfigClauseList,
                          {Clause.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Clause.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfConfigDeclSyntaxBuilder &
IfConfigDeclSyntaxBuilder::usePoundEndif(TokenSyntax PoundEndif) {
  Layout[cursorIndex(IfConfigDeclSyntax::Cursor::PoundEndif)] =
    PoundEndif.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfConfigDeclSyntax
IfConfigDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::IfConfigClauseList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::pound_endif, OwnedString::makeUnowned("#endif"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::IfConfigDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<IfConfigDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundErrorDeclSyntaxBuilder &
PoundErrorDeclSyntaxBuilder::usePoundError(TokenSyntax PoundError) {
  Layout[cursorIndex(PoundErrorDeclSyntax::Cursor::PoundError)] =
    PoundError.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundErrorDeclSyntaxBuilder &
PoundErrorDeclSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(PoundErrorDeclSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundErrorDeclSyntaxBuilder &
PoundErrorDeclSyntaxBuilder::useMessage(StringLiteralExprSyntax Message) {
  Layout[cursorIndex(PoundErrorDeclSyntax::Cursor::Message)] =
    Message.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundErrorDeclSyntaxBuilder &
PoundErrorDeclSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(PoundErrorDeclSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundErrorDeclSyntax
PoundErrorDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_error, OwnedString::makeUnowned("#error"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::StringLiteralExpr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PoundErrorDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<PoundErrorDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundWarningDeclSyntaxBuilder &
PoundWarningDeclSyntaxBuilder::usePoundWarning(TokenSyntax PoundWarning) {
  Layout[cursorIndex(PoundWarningDeclSyntax::Cursor::PoundWarning)] =
    PoundWarning.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundWarningDeclSyntaxBuilder &
PoundWarningDeclSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(PoundWarningDeclSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundWarningDeclSyntaxBuilder &
PoundWarningDeclSyntaxBuilder::useMessage(StringLiteralExprSyntax Message) {
  Layout[cursorIndex(PoundWarningDeclSyntax::Cursor::Message)] =
    Message.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundWarningDeclSyntaxBuilder &
PoundWarningDeclSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(PoundWarningDeclSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundWarningDeclSyntax
PoundWarningDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_warning, OwnedString::makeUnowned("#warning"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::StringLiteralExpr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PoundWarningDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<PoundWarningDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationSyntaxBuilder &
PoundSourceLocationSyntaxBuilder::usePoundSourceLocation(TokenSyntax PoundSourceLocation) {
  Layout[cursorIndex(PoundSourceLocationSyntax::Cursor::PoundSourceLocation)] =
    PoundSourceLocation.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationSyntaxBuilder &
PoundSourceLocationSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(PoundSourceLocationSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationSyntaxBuilder &
PoundSourceLocationSyntaxBuilder::useArgs(PoundSourceLocationArgsSyntax Args) {
  Layout[cursorIndex(PoundSourceLocationSyntax::Cursor::Args)] =
    Args.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationSyntaxBuilder &
PoundSourceLocationSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(PoundSourceLocationSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationSyntax
PoundSourceLocationSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_sourceLocation, OwnedString::makeUnowned("#sourceLocation"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PoundSourceLocation, 
    Layout, SourcePresence::Present, Arena);
  return make<PoundSourceLocationSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationArgsSyntaxBuilder &
PoundSourceLocationArgsSyntaxBuilder::useFileArgLabel(TokenSyntax FileArgLabel) {
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::FileArgLabel)] =
    FileArgLabel.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationArgsSyntaxBuilder &
PoundSourceLocationArgsSyntaxBuilder::useFileArgColon(TokenSyntax FileArgColon) {
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::FileArgColon)] =
    FileArgColon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationArgsSyntaxBuilder &
PoundSourceLocationArgsSyntaxBuilder::useFileName(TokenSyntax FileName) {
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::FileName)] =
    FileName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationArgsSyntaxBuilder &
PoundSourceLocationArgsSyntaxBuilder::useComma(TokenSyntax Comma) {
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::Comma)] =
    Comma.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationArgsSyntaxBuilder &
PoundSourceLocationArgsSyntaxBuilder::useLineArgLabel(TokenSyntax LineArgLabel) {
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::LineArgLabel)] =
    LineArgLabel.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationArgsSyntaxBuilder &
PoundSourceLocationArgsSyntaxBuilder::useLineArgColon(TokenSyntax LineArgColon) {
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::LineArgColon)] =
    LineArgColon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationArgsSyntaxBuilder &
PoundSourceLocationArgsSyntaxBuilder::useLineNumber(TokenSyntax LineNumber) {
  Layout[cursorIndex(PoundSourceLocationArgsSyntax::Cursor::LineNumber)] =
    LineNumber.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundSourceLocationArgsSyntax
PoundSourceLocationArgsSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::string_literal, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::comma, OwnedString::makeUnowned(","));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[5])
    Layout[5] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[6])
    Layout[6] = RawSyntax::missing(tok::integer_literal, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PoundSourceLocationArgs, 
    Layout, SourcePresence::Present, Arena);
  return make<PoundSourceLocationArgsSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclModifierSyntaxBuilder &
DeclModifierSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(DeclModifierSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclModifierSyntaxBuilder &
DeclModifierSyntaxBuilder::useDetailLeftParen(TokenSyntax DetailLeftParen) {
  Layout[cursorIndex(DeclModifierSyntax::Cursor::DetailLeftParen)] =
    DetailLeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclModifierSyntaxBuilder &
DeclModifierSyntaxBuilder::useDetail(TokenSyntax Detail) {
  Layout[cursorIndex(DeclModifierSyntax::Cursor::Detail)] =
    Detail.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclModifierSyntaxBuilder &
DeclModifierSyntaxBuilder::useDetailRightParen(TokenSyntax DetailRightParen) {
  Layout[cursorIndex(DeclModifierSyntax::Cursor::DetailRightParen)] =
    DetailRightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclModifierSyntax
DeclModifierSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DeclModifier, 
    Layout, SourcePresence::Present, Arena);
  return make<DeclModifierSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InheritedTypeSyntaxBuilder &
InheritedTypeSyntaxBuilder::useTypeName(TypeSyntax TypeName) {
  Layout[cursorIndex(InheritedTypeSyntax::Cursor::TypeName)] =
    TypeName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InheritedTypeSyntaxBuilder &
InheritedTypeSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(InheritedTypeSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InheritedTypeSyntax
InheritedTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::InheritedType, 
    Layout, SourcePresence::Present, Arena);
  return make<InheritedTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeInheritanceClauseSyntaxBuilder &
TypeInheritanceClauseSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(TypeInheritanceClauseSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeInheritanceClauseSyntaxBuilder &
TypeInheritanceClauseSyntaxBuilder::useInheritedTypeCollection(InheritedTypeListSyntax InheritedTypeCollection) {
  Layout[cursorIndex(TypeInheritanceClauseSyntax::Cursor::InheritedTypeCollection)] =
    InheritedTypeCollection.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeInheritanceClauseSyntaxBuilder &
TypeInheritanceClauseSyntaxBuilder::addInheritedType(InheritedTypeSyntax InheritedType) {
  auto &raw = Layout[cursorIndex(TypeInheritanceClauseSyntax::Cursor::InheritedTypeCollection)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::InheritedTypeList,
                          {InheritedType.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(InheritedType.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeInheritanceClauseSyntax
TypeInheritanceClauseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::InheritedTypeList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TypeInheritanceClause, 
    Layout, SourcePresence::Present, Arena);
  return make<TypeInheritanceClauseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassDeclSyntaxBuilder &
ClassDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(ClassDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassDeclSyntaxBuilder &
ClassDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(ClassDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassDeclSyntaxBuilder &
ClassDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(ClassDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassDeclSyntaxBuilder &
ClassDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(ClassDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassDeclSyntaxBuilder &
ClassDeclSyntaxBuilder::useClassKeyword(TokenSyntax ClassKeyword) {
  Layout[cursorIndex(ClassDeclSyntax::Cursor::ClassKeyword)] =
    ClassKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassDeclSyntaxBuilder &
ClassDeclSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(ClassDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassDeclSyntaxBuilder &
ClassDeclSyntaxBuilder::useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause) {
  Layout[cursorIndex(ClassDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassDeclSyntaxBuilder &
ClassDeclSyntaxBuilder::useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause) {
  Layout[cursorIndex(ClassDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassDeclSyntaxBuilder &
ClassDeclSyntaxBuilder::useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause) {
  Layout[cursorIndex(ClassDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassDeclSyntaxBuilder &
ClassDeclSyntaxBuilder::useMembers(MemberDeclBlockSyntax Members) {
  Layout[cursorIndex(ClassDeclSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassDeclSyntax
ClassDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_class, OwnedString::makeUnowned("class"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[7])
    Layout[7] = RawSyntax::missing(SyntaxKind::MemberDeclBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ClassDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<ClassDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StructDeclSyntaxBuilder &
StructDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(StructDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StructDeclSyntaxBuilder &
StructDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(StructDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StructDeclSyntaxBuilder &
StructDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(StructDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StructDeclSyntaxBuilder &
StructDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(StructDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StructDeclSyntaxBuilder &
StructDeclSyntaxBuilder::useStructKeyword(TokenSyntax StructKeyword) {
  Layout[cursorIndex(StructDeclSyntax::Cursor::StructKeyword)] =
    StructKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StructDeclSyntaxBuilder &
StructDeclSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(StructDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StructDeclSyntaxBuilder &
StructDeclSyntaxBuilder::useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause) {
  Layout[cursorIndex(StructDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StructDeclSyntaxBuilder &
StructDeclSyntaxBuilder::useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause) {
  Layout[cursorIndex(StructDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StructDeclSyntaxBuilder &
StructDeclSyntaxBuilder::useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause) {
  Layout[cursorIndex(StructDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StructDeclSyntaxBuilder &
StructDeclSyntaxBuilder::useMembers(MemberDeclBlockSyntax Members) {
  Layout[cursorIndex(StructDeclSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
StructDeclSyntax
StructDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_struct, OwnedString::makeUnowned("struct"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[7])
    Layout[7] = RawSyntax::missing(SyntaxKind::MemberDeclBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::StructDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<StructDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ProtocolDeclSyntaxBuilder &
ProtocolDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ProtocolDeclSyntaxBuilder &
ProtocolDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ProtocolDeclSyntaxBuilder &
ProtocolDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ProtocolDeclSyntaxBuilder &
ProtocolDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ProtocolDeclSyntaxBuilder &
ProtocolDeclSyntaxBuilder::useProtocolKeyword(TokenSyntax ProtocolKeyword) {
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::ProtocolKeyword)] =
    ProtocolKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ProtocolDeclSyntaxBuilder &
ProtocolDeclSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ProtocolDeclSyntaxBuilder &
ProtocolDeclSyntaxBuilder::useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause) {
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ProtocolDeclSyntaxBuilder &
ProtocolDeclSyntaxBuilder::useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause) {
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ProtocolDeclSyntaxBuilder &
ProtocolDeclSyntaxBuilder::useMembers(MemberDeclBlockSyntax Members) {
  Layout[cursorIndex(ProtocolDeclSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ProtocolDeclSyntax
ProtocolDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_protocol, OwnedString::makeUnowned("protocol"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[6])
    Layout[6] = RawSyntax::missing(SyntaxKind::MemberDeclBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ProtocolDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<ProtocolDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExtensionDeclSyntaxBuilder &
ExtensionDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExtensionDeclSyntaxBuilder &
ExtensionDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(ExtensionDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExtensionDeclSyntaxBuilder &
ExtensionDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExtensionDeclSyntaxBuilder &
ExtensionDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(ExtensionDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExtensionDeclSyntaxBuilder &
ExtensionDeclSyntaxBuilder::useExtensionKeyword(TokenSyntax ExtensionKeyword) {
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::ExtensionKeyword)] =
    ExtensionKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExtensionDeclSyntaxBuilder &
ExtensionDeclSyntaxBuilder::useExtendedType(TypeSyntax ExtendedType) {
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::ExtendedType)] =
    ExtendedType.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExtensionDeclSyntaxBuilder &
ExtensionDeclSyntaxBuilder::useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause) {
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExtensionDeclSyntaxBuilder &
ExtensionDeclSyntaxBuilder::useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause) {
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExtensionDeclSyntaxBuilder &
ExtensionDeclSyntaxBuilder::useMembers(MemberDeclBlockSyntax Members) {
  Layout[cursorIndex(ExtensionDeclSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExtensionDeclSyntax
ExtensionDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_extension, OwnedString::makeUnowned("extension"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::Type);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[6])
    Layout[6] = RawSyntax::missing(SyntaxKind::MemberDeclBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ExtensionDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<ExtensionDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberDeclBlockSyntaxBuilder &
MemberDeclBlockSyntaxBuilder::useLeftBrace(TokenSyntax LeftBrace) {
  Layout[cursorIndex(MemberDeclBlockSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberDeclBlockSyntaxBuilder &
MemberDeclBlockSyntaxBuilder::useMembers(MemberDeclListSyntax Members) {
  Layout[cursorIndex(MemberDeclBlockSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberDeclBlockSyntaxBuilder &
MemberDeclBlockSyntaxBuilder::addMember(MemberDeclListItemSyntax Member) {
  auto &raw = Layout[cursorIndex(MemberDeclBlockSyntax::Cursor::Members)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::MemberDeclList,
                          {Member.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Member.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberDeclBlockSyntaxBuilder &
MemberDeclBlockSyntaxBuilder::useRightBrace(TokenSyntax RightBrace) {
  Layout[cursorIndex(MemberDeclBlockSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberDeclBlockSyntax
MemberDeclBlockSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::MemberDeclList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::MemberDeclBlock, 
    Layout, SourcePresence::Present, Arena);
  return make<MemberDeclBlockSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberDeclListItemSyntaxBuilder &
MemberDeclListItemSyntaxBuilder::useDecl(DeclSyntax Decl) {
  Layout[cursorIndex(MemberDeclListItemSyntax::Cursor::Decl)] =
    Decl.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberDeclListItemSyntaxBuilder &
MemberDeclListItemSyntaxBuilder::useSemicolon(TokenSyntax Semicolon) {
  Layout[cursorIndex(MemberDeclListItemSyntax::Cursor::Semicolon)] =
    Semicolon.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberDeclListItemSyntax
MemberDeclListItemSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Decl);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::MemberDeclListItem, 
    Layout, SourcePresence::Present, Arena);
  return make<MemberDeclListItemSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SourceFileSyntaxBuilder &
SourceFileSyntaxBuilder::useStatements(CodeBlockItemListSyntax Statements) {
  Layout[cursorIndex(SourceFileSyntax::Cursor::Statements)] =
    Statements.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SourceFileSyntaxBuilder &
SourceFileSyntaxBuilder::addStatement(CodeBlockItemSyntax Statement) {
  auto &raw = Layout[cursorIndex(SourceFileSyntax::Cursor::Statements)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::CodeBlockItemList,
                          {Statement.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Statement.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SourceFileSyntaxBuilder &
SourceFileSyntaxBuilder::useEOFToken(TokenSyntax EOFToken) {
  Layout[cursorIndex(SourceFileSyntax::Cursor::EOFToken)] =
    EOFToken.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SourceFileSyntax
SourceFileSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::CodeBlockItemList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SourceFile, 
    Layout, SourcePresence::Present, Arena);
  return make<SourceFileSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerClauseSyntaxBuilder &
InitializerClauseSyntaxBuilder::useEqual(TokenSyntax Equal) {
  Layout[cursorIndex(InitializerClauseSyntax::Cursor::Equal)] =
    Equal.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerClauseSyntaxBuilder &
InitializerClauseSyntaxBuilder::useValue(ExprSyntax Value) {
  Layout[cursorIndex(InitializerClauseSyntax::Cursor::Value)] =
    Value.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerClauseSyntax
InitializerClauseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::equal, OwnedString::makeUnowned("="));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::InitializerClause, 
    Layout, SourcePresence::Present, Arena);
  return make<InitializerClauseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionParameterSyntaxBuilder &
FunctionParameterSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionParameterSyntaxBuilder &
FunctionParameterSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(FunctionParameterSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionParameterSyntaxBuilder &
FunctionParameterSyntaxBuilder::useFirstName(TokenSyntax FirstName) {
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::FirstName)] =
    FirstName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionParameterSyntaxBuilder &
FunctionParameterSyntaxBuilder::useSecondName(TokenSyntax SecondName) {
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::SecondName)] =
    SecondName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionParameterSyntaxBuilder &
FunctionParameterSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionParameterSyntaxBuilder &
FunctionParameterSyntaxBuilder::useType(TypeSyntax Type) {
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionParameterSyntaxBuilder &
FunctionParameterSyntaxBuilder::useEllipsis(TokenSyntax Ellipsis) {
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::Ellipsis)] =
    Ellipsis.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionParameterSyntaxBuilder &
FunctionParameterSyntaxBuilder::useDefaultArgument(InitializerClauseSyntax DefaultArgument) {
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::DefaultArgument)] =
    DefaultArgument.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionParameterSyntaxBuilder &
FunctionParameterSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(FunctionParameterSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionParameterSyntax
FunctionParameterSyntaxBuilder::build() {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::FunctionParameter, 
    Layout, SourcePresence::Present, Arena);
  return make<FunctionParameterSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionDeclSyntaxBuilder &
FunctionDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionDeclSyntaxBuilder &
FunctionDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(FunctionDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionDeclSyntaxBuilder &
FunctionDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionDeclSyntaxBuilder &
FunctionDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(FunctionDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionDeclSyntaxBuilder &
FunctionDeclSyntaxBuilder::useFuncKeyword(TokenSyntax FuncKeyword) {
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::FuncKeyword)] =
    FuncKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionDeclSyntaxBuilder &
FunctionDeclSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionDeclSyntaxBuilder &
FunctionDeclSyntaxBuilder::useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause) {
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionDeclSyntaxBuilder &
FunctionDeclSyntaxBuilder::useSignature(FunctionSignatureSyntax Signature) {
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::Signature)] =
    Signature.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionDeclSyntaxBuilder &
FunctionDeclSyntaxBuilder::useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause) {
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionDeclSyntaxBuilder &
FunctionDeclSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(FunctionDeclSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionDeclSyntax
FunctionDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_func, OwnedString::makeUnowned("func"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[5])
    Layout[5] = RawSyntax::missing(SyntaxKind::FunctionSignature);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::FunctionDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<FunctionDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntaxBuilder &
InitializerDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntaxBuilder &
InitializerDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(InitializerDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntaxBuilder &
InitializerDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntaxBuilder &
InitializerDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(InitializerDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntaxBuilder &
InitializerDeclSyntaxBuilder::useInitKeyword(TokenSyntax InitKeyword) {
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::InitKeyword)] =
    InitKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntaxBuilder &
InitializerDeclSyntaxBuilder::useOptionalMark(TokenSyntax OptionalMark) {
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::OptionalMark)] =
    OptionalMark.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntaxBuilder &
InitializerDeclSyntaxBuilder::useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause) {
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntaxBuilder &
InitializerDeclSyntaxBuilder::useParameters(ParameterClauseSyntax Parameters) {
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::Parameters)] =
    Parameters.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntaxBuilder &
InitializerDeclSyntaxBuilder::useThrowsOrRethrowsKeyword(TokenSyntax ThrowsOrRethrowsKeyword) {
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::ThrowsOrRethrowsKeyword)] =
    ThrowsOrRethrowsKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntaxBuilder &
InitializerDeclSyntaxBuilder::useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause) {
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntaxBuilder &
InitializerDeclSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(InitializerDeclSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
InitializerDeclSyntax
InitializerDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_init, OwnedString::makeUnowned("init"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[5])
    Layout[5] = RawSyntax::missing(SyntaxKind::ParameterClause);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::InitializerDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<InitializerDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeinitializerDeclSyntaxBuilder &
DeinitializerDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeinitializerDeclSyntaxBuilder &
DeinitializerDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeinitializerDeclSyntaxBuilder &
DeinitializerDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeinitializerDeclSyntaxBuilder &
DeinitializerDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeinitializerDeclSyntaxBuilder &
DeinitializerDeclSyntaxBuilder::useDeinitKeyword(TokenSyntax DeinitKeyword) {
  Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::DeinitKeyword)] =
    DeinitKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeinitializerDeclSyntaxBuilder &
DeinitializerDeclSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(DeinitializerDeclSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeinitializerDeclSyntax
DeinitializerDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_deinit, OwnedString::makeUnowned("deinit"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DeinitializerDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<DeinitializerDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptDeclSyntaxBuilder &
SubscriptDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptDeclSyntaxBuilder &
SubscriptDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptDeclSyntaxBuilder &
SubscriptDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptDeclSyntaxBuilder &
SubscriptDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptDeclSyntaxBuilder &
SubscriptDeclSyntaxBuilder::useSubscriptKeyword(TokenSyntax SubscriptKeyword) {
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::SubscriptKeyword)] =
    SubscriptKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptDeclSyntaxBuilder &
SubscriptDeclSyntaxBuilder::useGenericParameterClause(GenericParameterClauseSyntax GenericParameterClause) {
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::GenericParameterClause)] =
    GenericParameterClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptDeclSyntaxBuilder &
SubscriptDeclSyntaxBuilder::useIndices(ParameterClauseSyntax Indices) {
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Indices)] =
    Indices.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptDeclSyntaxBuilder &
SubscriptDeclSyntaxBuilder::useResult(ReturnClauseSyntax Result) {
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Result)] =
    Result.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptDeclSyntaxBuilder &
SubscriptDeclSyntaxBuilder::useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause) {
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptDeclSyntaxBuilder &
SubscriptDeclSyntaxBuilder::useAccessor(Syntax Accessor) {
  Layout[cursorIndex(SubscriptDeclSyntax::Cursor::Accessor)] =
    Accessor.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SubscriptDeclSyntax
SubscriptDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_subscript, OwnedString::makeUnowned("subscript"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(SyntaxKind::ParameterClause);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[5])
    Layout[5] = RawSyntax::missing(SyntaxKind::ReturnClause);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SubscriptDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<SubscriptDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessLevelModifierSyntaxBuilder &
AccessLevelModifierSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(AccessLevelModifierSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessLevelModifierSyntaxBuilder &
AccessLevelModifierSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(AccessLevelModifierSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessLevelModifierSyntaxBuilder &
AccessLevelModifierSyntaxBuilder::useModifier(TokenSyntax Modifier) {
  Layout[cursorIndex(AccessLevelModifierSyntax::Cursor::Modifier)] =
    Modifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessLevelModifierSyntaxBuilder &
AccessLevelModifierSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(AccessLevelModifierSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessLevelModifierSyntax
AccessLevelModifierSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AccessLevelModifier, 
    Layout, SourcePresence::Present, Arena);
  return make<AccessLevelModifierSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessPathComponentSyntaxBuilder &
AccessPathComponentSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(AccessPathComponentSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessPathComponentSyntaxBuilder &
AccessPathComponentSyntaxBuilder::useTrailingDot(TokenSyntax TrailingDot) {
  Layout[cursorIndex(AccessPathComponentSyntax::Cursor::TrailingDot)] =
    TrailingDot.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessPathComponentSyntax
AccessPathComponentSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AccessPathComponent, 
    Layout, SourcePresence::Present, Arena);
  return make<AccessPathComponentSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImportDeclSyntaxBuilder &
ImportDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(ImportDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImportDeclSyntaxBuilder &
ImportDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(ImportDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImportDeclSyntaxBuilder &
ImportDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(ImportDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImportDeclSyntaxBuilder &
ImportDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(ImportDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImportDeclSyntaxBuilder &
ImportDeclSyntaxBuilder::useImportTok(TokenSyntax ImportTok) {
  Layout[cursorIndex(ImportDeclSyntax::Cursor::ImportTok)] =
    ImportTok.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImportDeclSyntaxBuilder &
ImportDeclSyntaxBuilder::useImportKind(TokenSyntax ImportKind) {
  Layout[cursorIndex(ImportDeclSyntax::Cursor::ImportKind)] =
    ImportKind.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImportDeclSyntaxBuilder &
ImportDeclSyntaxBuilder::usePath(AccessPathSyntax Path) {
  Layout[cursorIndex(ImportDeclSyntax::Cursor::Path)] =
    Path.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImportDeclSyntaxBuilder &
ImportDeclSyntaxBuilder::addPathComponent(AccessPathComponentSyntax PathComponent) {
  auto &raw = Layout[cursorIndex(ImportDeclSyntax::Cursor::Path)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AccessPath,
                          {PathComponent.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(PathComponent.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImportDeclSyntax
ImportDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_import, OwnedString::makeUnowned("import"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(SyntaxKind::AccessPath);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ImportDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<ImportDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorParameterSyntaxBuilder &
AccessorParameterSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(AccessorParameterSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorParameterSyntaxBuilder &
AccessorParameterSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(AccessorParameterSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorParameterSyntaxBuilder &
AccessorParameterSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(AccessorParameterSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorParameterSyntax
AccessorParameterSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AccessorParameter, 
    Layout, SourcePresence::Present, Arena);
  return make<AccessorParameterSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorDeclSyntaxBuilder &
AccessorDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(AccessorDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorDeclSyntaxBuilder &
AccessorDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(AccessorDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorDeclSyntaxBuilder &
AccessorDeclSyntaxBuilder::useModifier(DeclModifierSyntax Modifier) {
  Layout[cursorIndex(AccessorDeclSyntax::Cursor::Modifier)] =
    Modifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorDeclSyntaxBuilder &
AccessorDeclSyntaxBuilder::useAccessorKind(TokenSyntax AccessorKind) {
  Layout[cursorIndex(AccessorDeclSyntax::Cursor::AccessorKind)] =
    AccessorKind.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorDeclSyntaxBuilder &
AccessorDeclSyntaxBuilder::useParameter(AccessorParameterSyntax Parameter) {
  Layout[cursorIndex(AccessorDeclSyntax::Cursor::Parameter)] =
    Parameter.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorDeclSyntaxBuilder &
AccessorDeclSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(AccessorDeclSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorDeclSyntax
AccessorDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AccessorDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<AccessorDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorBlockSyntaxBuilder &
AccessorBlockSyntaxBuilder::useLeftBrace(TokenSyntax LeftBrace) {
  Layout[cursorIndex(AccessorBlockSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorBlockSyntaxBuilder &
AccessorBlockSyntaxBuilder::useAccessors(AccessorListSyntax Accessors) {
  Layout[cursorIndex(AccessorBlockSyntax::Cursor::Accessors)] =
    Accessors.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorBlockSyntaxBuilder &
AccessorBlockSyntaxBuilder::addAccessor(AccessorDeclSyntax Accessor) {
  auto &raw = Layout[cursorIndex(AccessorBlockSyntax::Cursor::Accessors)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AccessorList,
                          {Accessor.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Accessor.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorBlockSyntaxBuilder &
AccessorBlockSyntaxBuilder::useRightBrace(TokenSyntax RightBrace) {
  Layout[cursorIndex(AccessorBlockSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AccessorBlockSyntax
AccessorBlockSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::AccessorList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AccessorBlock, 
    Layout, SourcePresence::Present, Arena);
  return make<AccessorBlockSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PatternBindingSyntaxBuilder &
PatternBindingSyntaxBuilder::usePattern(PatternSyntax Pattern) {
  Layout[cursorIndex(PatternBindingSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PatternBindingSyntaxBuilder &
PatternBindingSyntaxBuilder::useTypeAnnotation(TypeAnnotationSyntax TypeAnnotation) {
  Layout[cursorIndex(PatternBindingSyntax::Cursor::TypeAnnotation)] =
    TypeAnnotation.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PatternBindingSyntaxBuilder &
PatternBindingSyntaxBuilder::useInitializer(InitializerClauseSyntax Initializer) {
  Layout[cursorIndex(PatternBindingSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PatternBindingSyntaxBuilder &
PatternBindingSyntaxBuilder::useAccessor(Syntax Accessor) {
  Layout[cursorIndex(PatternBindingSyntax::Cursor::Accessor)] =
    Accessor.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PatternBindingSyntaxBuilder &
PatternBindingSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(PatternBindingSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PatternBindingSyntax
PatternBindingSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Pattern);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PatternBinding, 
    Layout, SourcePresence::Present, Arena);
  return make<PatternBindingSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VariableDeclSyntaxBuilder &
VariableDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(VariableDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VariableDeclSyntaxBuilder &
VariableDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(VariableDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VariableDeclSyntaxBuilder &
VariableDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(VariableDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VariableDeclSyntaxBuilder &
VariableDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(VariableDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VariableDeclSyntaxBuilder &
VariableDeclSyntaxBuilder::useLetOrVarKeyword(TokenSyntax LetOrVarKeyword) {
  Layout[cursorIndex(VariableDeclSyntax::Cursor::LetOrVarKeyword)] =
    LetOrVarKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VariableDeclSyntaxBuilder &
VariableDeclSyntaxBuilder::useBindings(PatternBindingListSyntax Bindings) {
  Layout[cursorIndex(VariableDeclSyntax::Cursor::Bindings)] =
    Bindings.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VariableDeclSyntaxBuilder &
VariableDeclSyntaxBuilder::addBinding(PatternBindingSyntax Binding) {
  auto &raw = Layout[cursorIndex(VariableDeclSyntax::Cursor::Bindings)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::PatternBindingList,
                          {Binding.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Binding.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VariableDeclSyntax
VariableDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_let, OwnedString::makeUnowned("let"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::PatternBindingList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::VariableDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<VariableDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseElementSyntaxBuilder &
EnumCaseElementSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(EnumCaseElementSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseElementSyntaxBuilder &
EnumCaseElementSyntaxBuilder::useAssociatedValue(ParameterClauseSyntax AssociatedValue) {
  Layout[cursorIndex(EnumCaseElementSyntax::Cursor::AssociatedValue)] =
    AssociatedValue.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseElementSyntaxBuilder &
EnumCaseElementSyntaxBuilder::useRawValue(InitializerClauseSyntax RawValue) {
  Layout[cursorIndex(EnumCaseElementSyntax::Cursor::RawValue)] =
    RawValue.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseElementSyntaxBuilder &
EnumCaseElementSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(EnumCaseElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseElementSyntax
EnumCaseElementSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::EnumCaseElement, 
    Layout, SourcePresence::Present, Arena);
  return make<EnumCaseElementSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseDeclSyntaxBuilder &
EnumCaseDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseDeclSyntaxBuilder &
EnumCaseDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseDeclSyntaxBuilder &
EnumCaseDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseDeclSyntaxBuilder &
EnumCaseDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseDeclSyntaxBuilder &
EnumCaseDeclSyntaxBuilder::useCaseKeyword(TokenSyntax CaseKeyword) {
  Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::CaseKeyword)] =
    CaseKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseDeclSyntaxBuilder &
EnumCaseDeclSyntaxBuilder::useElements(EnumCaseElementListSyntax Elements) {
  Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseDeclSyntaxBuilder &
EnumCaseDeclSyntaxBuilder::addElement(EnumCaseElementSyntax Element) {
  auto &raw = Layout[cursorIndex(EnumCaseDeclSyntax::Cursor::Elements)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::EnumCaseElementList,
                          {Element.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Element.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCaseDeclSyntax
EnumCaseDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_case, OwnedString::makeUnowned("case"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::EnumCaseElementList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::EnumCaseDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<EnumCaseDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumDeclSyntaxBuilder &
EnumDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(EnumDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumDeclSyntaxBuilder &
EnumDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(EnumDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumDeclSyntaxBuilder &
EnumDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(EnumDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumDeclSyntaxBuilder &
EnumDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(EnumDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumDeclSyntaxBuilder &
EnumDeclSyntaxBuilder::useEnumKeyword(TokenSyntax EnumKeyword) {
  Layout[cursorIndex(EnumDeclSyntax::Cursor::EnumKeyword)] =
    EnumKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumDeclSyntaxBuilder &
EnumDeclSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(EnumDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumDeclSyntaxBuilder &
EnumDeclSyntaxBuilder::useGenericParameters(GenericParameterClauseSyntax GenericParameters) {
  Layout[cursorIndex(EnumDeclSyntax::Cursor::GenericParameters)] =
    GenericParameters.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumDeclSyntaxBuilder &
EnumDeclSyntaxBuilder::useInheritanceClause(TypeInheritanceClauseSyntax InheritanceClause) {
  Layout[cursorIndex(EnumDeclSyntax::Cursor::InheritanceClause)] =
    InheritanceClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumDeclSyntaxBuilder &
EnumDeclSyntaxBuilder::useGenericWhereClause(GenericWhereClauseSyntax GenericWhereClause) {
  Layout[cursorIndex(EnumDeclSyntax::Cursor::GenericWhereClause)] =
    GenericWhereClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumDeclSyntaxBuilder &
EnumDeclSyntaxBuilder::useMembers(MemberDeclBlockSyntax Members) {
  Layout[cursorIndex(EnumDeclSyntax::Cursor::Members)] =
    Members.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumDeclSyntax
EnumDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_enum, OwnedString::makeUnowned("enum"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[7])
    Layout[7] = RawSyntax::missing(SyntaxKind::MemberDeclBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::EnumDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<EnumDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorDeclSyntaxBuilder &
OperatorDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(OperatorDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorDeclSyntaxBuilder &
OperatorDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(OperatorDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorDeclSyntaxBuilder &
OperatorDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(OperatorDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorDeclSyntaxBuilder &
OperatorDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(OperatorDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorDeclSyntaxBuilder &
OperatorDeclSyntaxBuilder::useOperatorKeyword(TokenSyntax OperatorKeyword) {
  Layout[cursorIndex(OperatorDeclSyntax::Cursor::OperatorKeyword)] =
    OperatorKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorDeclSyntaxBuilder &
OperatorDeclSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(OperatorDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorDeclSyntaxBuilder &
OperatorDeclSyntaxBuilder::useOperatorPrecedenceAndTypes(OperatorPrecedenceAndTypesSyntax OperatorPrecedenceAndTypes) {
  Layout[cursorIndex(OperatorDeclSyntax::Cursor::OperatorPrecedenceAndTypes)] =
    OperatorPrecedenceAndTypes.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorDeclSyntax
OperatorDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_operator, OwnedString::makeUnowned("operator"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::oper_binary_unspaced, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::OperatorDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<OperatorDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorPrecedenceAndTypesSyntaxBuilder &
OperatorPrecedenceAndTypesSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(OperatorPrecedenceAndTypesSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorPrecedenceAndTypesSyntaxBuilder &
OperatorPrecedenceAndTypesSyntaxBuilder::usePrecedenceGroupAndDesignatedTypes(IdentifierListSyntax PrecedenceGroupAndDesignatedTypes) {
  Layout[cursorIndex(OperatorPrecedenceAndTypesSyntax::Cursor::PrecedenceGroupAndDesignatedTypes)] =
    PrecedenceGroupAndDesignatedTypes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorPrecedenceAndTypesSyntaxBuilder &
OperatorPrecedenceAndTypesSyntaxBuilder::addPrecedenceGroupAndDesignatedType(TokenSyntax PrecedenceGroupAndDesignatedType) {
  auto &raw = Layout[cursorIndex(OperatorPrecedenceAndTypesSyntax::Cursor::PrecedenceGroupAndDesignatedTypes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::IdentifierList,
                          {PrecedenceGroupAndDesignatedType.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(PrecedenceGroupAndDesignatedType.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OperatorPrecedenceAndTypesSyntax
OperatorPrecedenceAndTypesSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::IdentifierList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::OperatorPrecedenceAndTypes, 
    Layout, SourcePresence::Present, Arena);
  return make<OperatorPrecedenceAndTypesSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupDeclSyntaxBuilder &
PrecedenceGroupDeclSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupDeclSyntaxBuilder &
PrecedenceGroupDeclSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupDeclSyntaxBuilder &
PrecedenceGroupDeclSyntaxBuilder::useModifiers(ModifierListSyntax Modifiers) {
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::Modifiers)] =
    Modifiers.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupDeclSyntaxBuilder &
PrecedenceGroupDeclSyntaxBuilder::addModifier(DeclModifierSyntax Modifier) {
  auto &raw = Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::Modifiers)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Modifier.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupDeclSyntaxBuilder &
PrecedenceGroupDeclSyntaxBuilder::usePrecedencegroupKeyword(TokenSyntax PrecedencegroupKeyword) {
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::PrecedencegroupKeyword)] =
    PrecedencegroupKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupDeclSyntaxBuilder &
PrecedenceGroupDeclSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupDeclSyntaxBuilder &
PrecedenceGroupDeclSyntaxBuilder::useLeftBrace(TokenSyntax LeftBrace) {
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupDeclSyntaxBuilder &
PrecedenceGroupDeclSyntaxBuilder::useGroupAttributes(PrecedenceGroupAttributeListSyntax GroupAttributes) {
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::GroupAttributes)] =
    GroupAttributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupDeclSyntaxBuilder &
PrecedenceGroupDeclSyntaxBuilder::addGroupAttribute(Syntax GroupAttribute) {
  auto &raw = Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::GroupAttributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::PrecedenceGroupAttributeList,
                          {GroupAttribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(GroupAttribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupDeclSyntaxBuilder &
PrecedenceGroupDeclSyntaxBuilder::useRightBrace(TokenSyntax RightBrace) {
  Layout[cursorIndex(PrecedenceGroupDeclSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupDeclSyntax
PrecedenceGroupDeclSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_precedencegroup, OwnedString::makeUnowned("precedencegroup"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[5])
    Layout[5] = RawSyntax::missing(SyntaxKind::PrecedenceGroupAttributeList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[6])
    Layout[6] = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PrecedenceGroupDecl, 
    Layout, SourcePresence::Present, Arena);
  return make<PrecedenceGroupDeclSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupRelationSyntaxBuilder &
PrecedenceGroupRelationSyntaxBuilder::useHigherThanOrLowerThan(TokenSyntax HigherThanOrLowerThan) {
  Layout[cursorIndex(PrecedenceGroupRelationSyntax::Cursor::HigherThanOrLowerThan)] =
    HigherThanOrLowerThan.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupRelationSyntaxBuilder &
PrecedenceGroupRelationSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(PrecedenceGroupRelationSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupRelationSyntaxBuilder &
PrecedenceGroupRelationSyntaxBuilder::useOtherNames(PrecedenceGroupNameListSyntax OtherNames) {
  Layout[cursorIndex(PrecedenceGroupRelationSyntax::Cursor::OtherNames)] =
    OtherNames.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupRelationSyntaxBuilder &
PrecedenceGroupRelationSyntaxBuilder::addOtherName(PrecedenceGroupNameElementSyntax OtherName) {
  auto &raw = Layout[cursorIndex(PrecedenceGroupRelationSyntax::Cursor::OtherNames)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::PrecedenceGroupNameList,
                          {OtherName.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(OtherName.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupRelationSyntax
PrecedenceGroupRelationSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::PrecedenceGroupNameList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PrecedenceGroupRelation, 
    Layout, SourcePresence::Present, Arena);
  return make<PrecedenceGroupRelationSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupNameElementSyntaxBuilder &
PrecedenceGroupNameElementSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(PrecedenceGroupNameElementSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupNameElementSyntaxBuilder &
PrecedenceGroupNameElementSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(PrecedenceGroupNameElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupNameElementSyntax
PrecedenceGroupNameElementSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PrecedenceGroupNameElement, 
    Layout, SourcePresence::Present, Arena);
  return make<PrecedenceGroupNameElementSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupAssignmentSyntaxBuilder &
PrecedenceGroupAssignmentSyntaxBuilder::useAssignmentKeyword(TokenSyntax AssignmentKeyword) {
  Layout[cursorIndex(PrecedenceGroupAssignmentSyntax::Cursor::AssignmentKeyword)] =
    AssignmentKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupAssignmentSyntaxBuilder &
PrecedenceGroupAssignmentSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(PrecedenceGroupAssignmentSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupAssignmentSyntaxBuilder &
PrecedenceGroupAssignmentSyntaxBuilder::useFlag(TokenSyntax Flag) {
  Layout[cursorIndex(PrecedenceGroupAssignmentSyntax::Cursor::Flag)] =
    Flag.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupAssignmentSyntax
PrecedenceGroupAssignmentSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_true, OwnedString::makeUnowned("true"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PrecedenceGroupAssignment, 
    Layout, SourcePresence::Present, Arena);
  return make<PrecedenceGroupAssignmentSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupAssociativitySyntaxBuilder &
PrecedenceGroupAssociativitySyntaxBuilder::useAssociativityKeyword(TokenSyntax AssociativityKeyword) {
  Layout[cursorIndex(PrecedenceGroupAssociativitySyntax::Cursor::AssociativityKeyword)] =
    AssociativityKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupAssociativitySyntaxBuilder &
PrecedenceGroupAssociativitySyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(PrecedenceGroupAssociativitySyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupAssociativitySyntaxBuilder &
PrecedenceGroupAssociativitySyntaxBuilder::useValue(TokenSyntax Value) {
  Layout[cursorIndex(PrecedenceGroupAssociativitySyntax::Cursor::Value)] =
    Value.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PrecedenceGroupAssociativitySyntax
PrecedenceGroupAssociativitySyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PrecedenceGroupAssociativity, 
    Layout, SourcePresence::Present, Arena);
  return make<PrecedenceGroupAssociativitySyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CustomAttributeSyntaxBuilder &
CustomAttributeSyntaxBuilder::useAtSignToken(TokenSyntax AtSignToken) {
  Layout[cursorIndex(CustomAttributeSyntax::Cursor::AtSignToken)] =
    AtSignToken.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CustomAttributeSyntaxBuilder &
CustomAttributeSyntaxBuilder::useAttributeName(TypeSyntax AttributeName) {
  Layout[cursorIndex(CustomAttributeSyntax::Cursor::AttributeName)] =
    AttributeName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CustomAttributeSyntaxBuilder &
CustomAttributeSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(CustomAttributeSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CustomAttributeSyntaxBuilder &
CustomAttributeSyntaxBuilder::useArgumentList(FunctionCallArgumentListSyntax ArgumentList) {
  Layout[cursorIndex(CustomAttributeSyntax::Cursor::ArgumentList)] =
    ArgumentList.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CustomAttributeSyntaxBuilder &
CustomAttributeSyntaxBuilder::addArgument(FunctionCallArgumentSyntax Argument) {
  auto &raw = Layout[cursorIndex(CustomAttributeSyntax::Cursor::ArgumentList)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::FunctionCallArgumentList,
                          {Argument.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Argument.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CustomAttributeSyntaxBuilder &
CustomAttributeSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(CustomAttributeSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CustomAttributeSyntax
CustomAttributeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::at_sign, OwnedString::makeUnowned("@"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::CustomAttribute, 
    Layout, SourcePresence::Present, Arena);
  return make<CustomAttributeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributeSyntaxBuilder &
AttributeSyntaxBuilder::useAtSignToken(TokenSyntax AtSignToken) {
  Layout[cursorIndex(AttributeSyntax::Cursor::AtSignToken)] =
    AtSignToken.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributeSyntaxBuilder &
AttributeSyntaxBuilder::useAttributeName(TokenSyntax AttributeName) {
  Layout[cursorIndex(AttributeSyntax::Cursor::AttributeName)] =
    AttributeName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributeSyntaxBuilder &
AttributeSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(AttributeSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributeSyntaxBuilder &
AttributeSyntaxBuilder::useArgument(Syntax Argument) {
  Layout[cursorIndex(AttributeSyntax::Cursor::Argument)] =
    Argument.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributeSyntaxBuilder &
AttributeSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(AttributeSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributeSyntaxBuilder &
AttributeSyntaxBuilder::useTokenList(TokenListSyntax TokenList) {
  Layout[cursorIndex(AttributeSyntax::Cursor::TokenList)] =
    TokenList.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributeSyntaxBuilder &
AttributeSyntaxBuilder::addToken(TokenSyntax Token) {
  auto &raw = Layout[cursorIndex(AttributeSyntax::Cursor::TokenList)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::TokenList,
                          {Token.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Token.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributeSyntax
AttributeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::at_sign, OwnedString::makeUnowned("@"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::Attribute, 
    Layout, SourcePresence::Present, Arena);
  return make<AttributeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
LabeledSpecializeEntrySyntaxBuilder &
LabeledSpecializeEntrySyntaxBuilder::useLabel(TokenSyntax Label) {
  Layout[cursorIndex(LabeledSpecializeEntrySyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
LabeledSpecializeEntrySyntaxBuilder &
LabeledSpecializeEntrySyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(LabeledSpecializeEntrySyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
LabeledSpecializeEntrySyntaxBuilder &
LabeledSpecializeEntrySyntaxBuilder::useValue(TokenSyntax Value) {
  Layout[cursorIndex(LabeledSpecializeEntrySyntax::Cursor::Value)] =
    Value.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
LabeledSpecializeEntrySyntaxBuilder &
LabeledSpecializeEntrySyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(LabeledSpecializeEntrySyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
LabeledSpecializeEntrySyntax
LabeledSpecializeEntrySyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::LabeledSpecializeEntry, 
    Layout, SourcePresence::Present, Arena);
  return make<LabeledSpecializeEntrySyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
NamedAttributeStringArgumentSyntaxBuilder &
NamedAttributeStringArgumentSyntaxBuilder::useNameTok(TokenSyntax NameTok) {
  Layout[cursorIndex(NamedAttributeStringArgumentSyntax::Cursor::NameTok)] =
    NameTok.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
NamedAttributeStringArgumentSyntaxBuilder &
NamedAttributeStringArgumentSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(NamedAttributeStringArgumentSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
NamedAttributeStringArgumentSyntaxBuilder &
NamedAttributeStringArgumentSyntaxBuilder::useStringOrDeclname(Syntax StringOrDeclname) {
  Layout[cursorIndex(NamedAttributeStringArgumentSyntax::Cursor::StringOrDeclname)] =
    StringOrDeclname.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
NamedAttributeStringArgumentSyntax
NamedAttributeStringArgumentSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::string_literal, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::NamedAttributeStringArgument, 
    Layout, SourcePresence::Present, Arena);
  return make<NamedAttributeStringArgumentSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclNameSyntaxBuilder &
DeclNameSyntaxBuilder::useDeclBaseName(Syntax DeclBaseName) {
  Layout[cursorIndex(DeclNameSyntax::Cursor::DeclBaseName)] =
    DeclBaseName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclNameSyntaxBuilder &
DeclNameSyntaxBuilder::useDeclNameArguments(DeclNameArgumentsSyntax DeclNameArguments) {
  Layout[cursorIndex(DeclNameSyntax::Cursor::DeclNameArguments)] =
    DeclNameArguments.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclNameSyntax
DeclNameSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DeclName, 
    Layout, SourcePresence::Present, Arena);
  return make<DeclNameSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImplementsAttributeArgumentsSyntaxBuilder &
ImplementsAttributeArgumentsSyntaxBuilder::useType(SimpleTypeIdentifierSyntax Type) {
  Layout[cursorIndex(ImplementsAttributeArgumentsSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImplementsAttributeArgumentsSyntaxBuilder &
ImplementsAttributeArgumentsSyntaxBuilder::useComma(TokenSyntax Comma) {
  Layout[cursorIndex(ImplementsAttributeArgumentsSyntax::Cursor::Comma)] =
    Comma.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImplementsAttributeArgumentsSyntaxBuilder &
ImplementsAttributeArgumentsSyntaxBuilder::useDeclBaseName(Syntax DeclBaseName) {
  Layout[cursorIndex(ImplementsAttributeArgumentsSyntax::Cursor::DeclBaseName)] =
    DeclBaseName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImplementsAttributeArgumentsSyntaxBuilder &
ImplementsAttributeArgumentsSyntaxBuilder::useDeclNameArguments(DeclNameArgumentsSyntax DeclNameArguments) {
  Layout[cursorIndex(ImplementsAttributeArgumentsSyntax::Cursor::DeclNameArguments)] =
    DeclNameArguments.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImplementsAttributeArgumentsSyntax
ImplementsAttributeArgumentsSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::SimpleTypeIdentifier);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::comma, OwnedString::makeUnowned(","));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ImplementsAttributeArguments, 
    Layout, SourcePresence::Present, Arena);
  return make<ImplementsAttributeArgumentsSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjCSelectorPieceSyntaxBuilder &
ObjCSelectorPieceSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(ObjCSelectorPieceSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjCSelectorPieceSyntaxBuilder &
ObjCSelectorPieceSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(ObjCSelectorPieceSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ObjCSelectorPieceSyntax
ObjCSelectorPieceSyntaxBuilder::build() {
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ObjCSelectorPiece, 
    Layout, SourcePresence::Present, Arena);
  return make<ObjCSelectorPieceSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ContinueStmtSyntaxBuilder &
ContinueStmtSyntaxBuilder::useContinueKeyword(TokenSyntax ContinueKeyword) {
  Layout[cursorIndex(ContinueStmtSyntax::Cursor::ContinueKeyword)] =
    ContinueKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ContinueStmtSyntaxBuilder &
ContinueStmtSyntaxBuilder::useLabel(TokenSyntax Label) {
  Layout[cursorIndex(ContinueStmtSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ContinueStmtSyntax
ContinueStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_continue, OwnedString::makeUnowned("continue"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ContinueStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<ContinueStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WhileStmtSyntaxBuilder &
WhileStmtSyntaxBuilder::useLabelName(TokenSyntax LabelName) {
  Layout[cursorIndex(WhileStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WhileStmtSyntaxBuilder &
WhileStmtSyntaxBuilder::useLabelColon(TokenSyntax LabelColon) {
  Layout[cursorIndex(WhileStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WhileStmtSyntaxBuilder &
WhileStmtSyntaxBuilder::useWhileKeyword(TokenSyntax WhileKeyword) {
  Layout[cursorIndex(WhileStmtSyntax::Cursor::WhileKeyword)] =
    WhileKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WhileStmtSyntaxBuilder &
WhileStmtSyntaxBuilder::useConditions(ConditionElementListSyntax Conditions) {
  Layout[cursorIndex(WhileStmtSyntax::Cursor::Conditions)] =
    Conditions.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WhileStmtSyntaxBuilder &
WhileStmtSyntaxBuilder::addCondition(ConditionElementSyntax Condition) {
  auto &raw = Layout[cursorIndex(WhileStmtSyntax::Cursor::Conditions)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ConditionElementList,
                          {Condition.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Condition.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WhileStmtSyntaxBuilder &
WhileStmtSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(WhileStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WhileStmtSyntax
WhileStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_while, OwnedString::makeUnowned("while"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::ConditionElementList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::WhileStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<WhileStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeferStmtSyntaxBuilder &
DeferStmtSyntaxBuilder::useDeferKeyword(TokenSyntax DeferKeyword) {
  Layout[cursorIndex(DeferStmtSyntax::Cursor::DeferKeyword)] =
    DeferKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeferStmtSyntaxBuilder &
DeferStmtSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(DeferStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeferStmtSyntax
DeferStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_defer, OwnedString::makeUnowned("defer"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DeferStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<DeferStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExpressionStmtSyntaxBuilder &
ExpressionStmtSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(ExpressionStmtSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExpressionStmtSyntax
ExpressionStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ExpressionStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<ExpressionStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
RepeatWhileStmtSyntaxBuilder &
RepeatWhileStmtSyntaxBuilder::useLabelName(TokenSyntax LabelName) {
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
RepeatWhileStmtSyntaxBuilder &
RepeatWhileStmtSyntaxBuilder::useLabelColon(TokenSyntax LabelColon) {
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
RepeatWhileStmtSyntaxBuilder &
RepeatWhileStmtSyntaxBuilder::useRepeatKeyword(TokenSyntax RepeatKeyword) {
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::RepeatKeyword)] =
    RepeatKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
RepeatWhileStmtSyntaxBuilder &
RepeatWhileStmtSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
RepeatWhileStmtSyntaxBuilder &
RepeatWhileStmtSyntaxBuilder::useWhileKeyword(TokenSyntax WhileKeyword) {
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::WhileKeyword)] =
    WhileKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
RepeatWhileStmtSyntaxBuilder &
RepeatWhileStmtSyntaxBuilder::useCondition(ExprSyntax Condition) {
  Layout[cursorIndex(RepeatWhileStmtSyntax::Cursor::Condition)] =
    Condition.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
RepeatWhileStmtSyntax
RepeatWhileStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_repeat, OwnedString::makeUnowned("repeat"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(tok::kw_while, OwnedString::makeUnowned("while"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[5])
    Layout[5] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::RepeatWhileStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<RepeatWhileStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GuardStmtSyntaxBuilder &
GuardStmtSyntaxBuilder::useGuardKeyword(TokenSyntax GuardKeyword) {
  Layout[cursorIndex(GuardStmtSyntax::Cursor::GuardKeyword)] =
    GuardKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GuardStmtSyntaxBuilder &
GuardStmtSyntaxBuilder::useConditions(ConditionElementListSyntax Conditions) {
  Layout[cursorIndex(GuardStmtSyntax::Cursor::Conditions)] =
    Conditions.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GuardStmtSyntaxBuilder &
GuardStmtSyntaxBuilder::addCondition(ConditionElementSyntax Condition) {
  auto &raw = Layout[cursorIndex(GuardStmtSyntax::Cursor::Conditions)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ConditionElementList,
                          {Condition.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Condition.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GuardStmtSyntaxBuilder &
GuardStmtSyntaxBuilder::useElseKeyword(TokenSyntax ElseKeyword) {
  Layout[cursorIndex(GuardStmtSyntax::Cursor::ElseKeyword)] =
    ElseKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GuardStmtSyntaxBuilder &
GuardStmtSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(GuardStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GuardStmtSyntax
GuardStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_guard, OwnedString::makeUnowned("guard"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::ConditionElementList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_else, OwnedString::makeUnowned("else"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::GuardStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<GuardStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WhereClauseSyntaxBuilder &
WhereClauseSyntaxBuilder::useWhereKeyword(TokenSyntax WhereKeyword) {
  Layout[cursorIndex(WhereClauseSyntax::Cursor::WhereKeyword)] =
    WhereKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WhereClauseSyntaxBuilder &
WhereClauseSyntaxBuilder::useGuardResult(ExprSyntax GuardResult) {
  Layout[cursorIndex(WhereClauseSyntax::Cursor::GuardResult)] =
    GuardResult.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WhereClauseSyntax
WhereClauseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_where, OwnedString::makeUnowned("where"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::WhereClause, 
    Layout, SourcePresence::Present, Arena);
  return make<WhereClauseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForInStmtSyntaxBuilder &
ForInStmtSyntaxBuilder::useLabelName(TokenSyntax LabelName) {
  Layout[cursorIndex(ForInStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForInStmtSyntaxBuilder &
ForInStmtSyntaxBuilder::useLabelColon(TokenSyntax LabelColon) {
  Layout[cursorIndex(ForInStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForInStmtSyntaxBuilder &
ForInStmtSyntaxBuilder::useForKeyword(TokenSyntax ForKeyword) {
  Layout[cursorIndex(ForInStmtSyntax::Cursor::ForKeyword)] =
    ForKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForInStmtSyntaxBuilder &
ForInStmtSyntaxBuilder::useCaseKeyword(TokenSyntax CaseKeyword) {
  Layout[cursorIndex(ForInStmtSyntax::Cursor::CaseKeyword)] =
    CaseKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForInStmtSyntaxBuilder &
ForInStmtSyntaxBuilder::usePattern(PatternSyntax Pattern) {
  Layout[cursorIndex(ForInStmtSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForInStmtSyntaxBuilder &
ForInStmtSyntaxBuilder::useTypeAnnotation(TypeAnnotationSyntax TypeAnnotation) {
  Layout[cursorIndex(ForInStmtSyntax::Cursor::TypeAnnotation)] =
    TypeAnnotation.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForInStmtSyntaxBuilder &
ForInStmtSyntaxBuilder::useInKeyword(TokenSyntax InKeyword) {
  Layout[cursorIndex(ForInStmtSyntax::Cursor::InKeyword)] =
    InKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForInStmtSyntaxBuilder &
ForInStmtSyntaxBuilder::useSequenceExpr(ExprSyntax SequenceExpr) {
  Layout[cursorIndex(ForInStmtSyntax::Cursor::SequenceExpr)] =
    SequenceExpr.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForInStmtSyntaxBuilder &
ForInStmtSyntaxBuilder::useWhereClause(WhereClauseSyntax WhereClause) {
  Layout[cursorIndex(ForInStmtSyntax::Cursor::WhereClause)] =
    WhereClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForInStmtSyntaxBuilder &
ForInStmtSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(ForInStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ForInStmtSyntax
ForInStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_for, OwnedString::makeUnowned("for"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(SyntaxKind::Pattern);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[6])
    Layout[6] = RawSyntax::missing(tok::kw_in, OwnedString::makeUnowned("in"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[7])
    Layout[7] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[9])
    Layout[9] = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ForInStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<ForInStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchStmtSyntaxBuilder &
SwitchStmtSyntaxBuilder::useLabelName(TokenSyntax LabelName) {
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchStmtSyntaxBuilder &
SwitchStmtSyntaxBuilder::useLabelColon(TokenSyntax LabelColon) {
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchStmtSyntaxBuilder &
SwitchStmtSyntaxBuilder::useSwitchKeyword(TokenSyntax SwitchKeyword) {
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::SwitchKeyword)] =
    SwitchKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchStmtSyntaxBuilder &
SwitchStmtSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchStmtSyntaxBuilder &
SwitchStmtSyntaxBuilder::useLeftBrace(TokenSyntax LeftBrace) {
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::LeftBrace)] =
    LeftBrace.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchStmtSyntaxBuilder &
SwitchStmtSyntaxBuilder::useCases(SwitchCaseListSyntax Cases) {
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::Cases)] =
    Cases.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchStmtSyntaxBuilder &
SwitchStmtSyntaxBuilder::addCase(Syntax Case) {
  auto &raw = Layout[cursorIndex(SwitchStmtSyntax::Cursor::Cases)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::SwitchCaseList,
                          {Case.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Case.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchStmtSyntaxBuilder &
SwitchStmtSyntaxBuilder::useRightBrace(TokenSyntax RightBrace) {
  Layout[cursorIndex(SwitchStmtSyntax::Cursor::RightBrace)] =
    RightBrace.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchStmtSyntax
SwitchStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_switch, OwnedString::makeUnowned("switch"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[5])
    Layout[5] = RawSyntax::missing(SyntaxKind::SwitchCaseList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[6])
    Layout[6] = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SwitchStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<SwitchStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DoStmtSyntaxBuilder &
DoStmtSyntaxBuilder::useLabelName(TokenSyntax LabelName) {
  Layout[cursorIndex(DoStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DoStmtSyntaxBuilder &
DoStmtSyntaxBuilder::useLabelColon(TokenSyntax LabelColon) {
  Layout[cursorIndex(DoStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DoStmtSyntaxBuilder &
DoStmtSyntaxBuilder::useDoKeyword(TokenSyntax DoKeyword) {
  Layout[cursorIndex(DoStmtSyntax::Cursor::DoKeyword)] =
    DoKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DoStmtSyntaxBuilder &
DoStmtSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(DoStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DoStmtSyntaxBuilder &
DoStmtSyntaxBuilder::useCatchClauses(CatchClauseListSyntax CatchClauses) {
  Layout[cursorIndex(DoStmtSyntax::Cursor::CatchClauses)] =
    CatchClauses.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DoStmtSyntaxBuilder &
DoStmtSyntaxBuilder::addCatchClause(CatchClauseSyntax CatchClause) {
  auto &raw = Layout[cursorIndex(DoStmtSyntax::Cursor::CatchClauses)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::CatchClauseList,
                          {CatchClause.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(CatchClause.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DoStmtSyntax
DoStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_do, OwnedString::makeUnowned("do"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DoStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<DoStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ReturnStmtSyntaxBuilder &
ReturnStmtSyntaxBuilder::useReturnKeyword(TokenSyntax ReturnKeyword) {
  Layout[cursorIndex(ReturnStmtSyntax::Cursor::ReturnKeyword)] =
    ReturnKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ReturnStmtSyntaxBuilder &
ReturnStmtSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(ReturnStmtSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ReturnStmtSyntax
ReturnStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_return, OwnedString::makeUnowned("return"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ReturnStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<ReturnStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
YieldStmtSyntaxBuilder &
YieldStmtSyntaxBuilder::useYieldKeyword(TokenSyntax YieldKeyword) {
  Layout[cursorIndex(YieldStmtSyntax::Cursor::YieldKeyword)] =
    YieldKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
YieldStmtSyntaxBuilder &
YieldStmtSyntaxBuilder::useYields(Syntax Yields) {
  Layout[cursorIndex(YieldStmtSyntax::Cursor::Yields)] =
    Yields.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
YieldStmtSyntax
YieldStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_yield, OwnedString::makeUnowned("yield"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::YieldList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::YieldStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<YieldStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
YieldListSyntaxBuilder &
YieldListSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(YieldListSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
YieldListSyntaxBuilder &
YieldListSyntaxBuilder::useElementList(ExprListSyntax ElementList) {
  Layout[cursorIndex(YieldListSyntax::Cursor::ElementList)] =
    ElementList.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
YieldListSyntaxBuilder &
YieldListSyntaxBuilder::addElement(ExprSyntax Element) {
  auto &raw = Layout[cursorIndex(YieldListSyntax::Cursor::ElementList)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ExprList,
                          {Element.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Element.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
YieldListSyntaxBuilder &
YieldListSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(YieldListSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
YieldListSyntaxBuilder &
YieldListSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(YieldListSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
YieldListSyntax
YieldListSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::ExprList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::YieldList, 
    Layout, SourcePresence::Present, Arena);
  return make<YieldListSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FallthroughStmtSyntaxBuilder &
FallthroughStmtSyntaxBuilder::useFallthroughKeyword(TokenSyntax FallthroughKeyword) {
  Layout[cursorIndex(FallthroughStmtSyntax::Cursor::FallthroughKeyword)] =
    FallthroughKeyword.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FallthroughStmtSyntax
FallthroughStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_fallthrough, OwnedString::makeUnowned("fallthrough"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::FallthroughStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<FallthroughStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
BreakStmtSyntaxBuilder &
BreakStmtSyntaxBuilder::useBreakKeyword(TokenSyntax BreakKeyword) {
  Layout[cursorIndex(BreakStmtSyntax::Cursor::BreakKeyword)] =
    BreakKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
BreakStmtSyntaxBuilder &
BreakStmtSyntaxBuilder::useLabel(TokenSyntax Label) {
  Layout[cursorIndex(BreakStmtSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
BreakStmtSyntax
BreakStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_break, OwnedString::makeUnowned("break"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::BreakStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<BreakStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ConditionElementSyntaxBuilder &
ConditionElementSyntaxBuilder::useCondition(Syntax Condition) {
  Layout[cursorIndex(ConditionElementSyntax::Cursor::Condition)] =
    Condition.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ConditionElementSyntaxBuilder &
ConditionElementSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(ConditionElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ConditionElementSyntax
ConditionElementSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ConditionElement, 
    Layout, SourcePresence::Present, Arena);
  return make<ConditionElementSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityConditionSyntaxBuilder &
AvailabilityConditionSyntaxBuilder::usePoundAvailableKeyword(TokenSyntax PoundAvailableKeyword) {
  Layout[cursorIndex(AvailabilityConditionSyntax::Cursor::PoundAvailableKeyword)] =
    PoundAvailableKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityConditionSyntaxBuilder &
AvailabilityConditionSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(AvailabilityConditionSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityConditionSyntaxBuilder &
AvailabilityConditionSyntaxBuilder::useAvailabilitySpec(AvailabilitySpecListSyntax AvailabilitySpec) {
  Layout[cursorIndex(AvailabilityConditionSyntax::Cursor::AvailabilitySpec)] =
    AvailabilitySpec.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityConditionSyntaxBuilder &
AvailabilityConditionSyntaxBuilder::addAvailabilityArgument(AvailabilityArgumentSyntax AvailabilityArgument) {
  auto &raw = Layout[cursorIndex(AvailabilityConditionSyntax::Cursor::AvailabilitySpec)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AvailabilitySpecList,
                          {AvailabilityArgument.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(AvailabilityArgument.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityConditionSyntaxBuilder &
AvailabilityConditionSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(AvailabilityConditionSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityConditionSyntax
AvailabilityConditionSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_available, OwnedString::makeUnowned("#available"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::AvailabilitySpecList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AvailabilityCondition, 
    Layout, SourcePresence::Present, Arena);
  return make<AvailabilityConditionSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MatchingPatternConditionSyntaxBuilder &
MatchingPatternConditionSyntaxBuilder::useCaseKeyword(TokenSyntax CaseKeyword) {
  Layout[cursorIndex(MatchingPatternConditionSyntax::Cursor::CaseKeyword)] =
    CaseKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MatchingPatternConditionSyntaxBuilder &
MatchingPatternConditionSyntaxBuilder::usePattern(PatternSyntax Pattern) {
  Layout[cursorIndex(MatchingPatternConditionSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MatchingPatternConditionSyntaxBuilder &
MatchingPatternConditionSyntaxBuilder::useTypeAnnotation(TypeAnnotationSyntax TypeAnnotation) {
  Layout[cursorIndex(MatchingPatternConditionSyntax::Cursor::TypeAnnotation)] =
    TypeAnnotation.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MatchingPatternConditionSyntaxBuilder &
MatchingPatternConditionSyntaxBuilder::useInitializer(InitializerClauseSyntax Initializer) {
  Layout[cursorIndex(MatchingPatternConditionSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MatchingPatternConditionSyntax
MatchingPatternConditionSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_case, OwnedString::makeUnowned("case"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Pattern);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::InitializerClause);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::MatchingPatternCondition, 
    Layout, SourcePresence::Present, Arena);
  return make<MatchingPatternConditionSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalBindingConditionSyntaxBuilder &
OptionalBindingConditionSyntaxBuilder::useLetOrVarKeyword(TokenSyntax LetOrVarKeyword) {
  Layout[cursorIndex(OptionalBindingConditionSyntax::Cursor::LetOrVarKeyword)] =
    LetOrVarKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalBindingConditionSyntaxBuilder &
OptionalBindingConditionSyntaxBuilder::usePattern(PatternSyntax Pattern) {
  Layout[cursorIndex(OptionalBindingConditionSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalBindingConditionSyntaxBuilder &
OptionalBindingConditionSyntaxBuilder::useTypeAnnotation(TypeAnnotationSyntax TypeAnnotation) {
  Layout[cursorIndex(OptionalBindingConditionSyntax::Cursor::TypeAnnotation)] =
    TypeAnnotation.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalBindingConditionSyntaxBuilder &
OptionalBindingConditionSyntaxBuilder::useInitializer(InitializerClauseSyntax Initializer) {
  Layout[cursorIndex(OptionalBindingConditionSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalBindingConditionSyntax
OptionalBindingConditionSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_let, OwnedString::makeUnowned("let"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Pattern);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::InitializerClause);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::OptionalBindingCondition, 
    Layout, SourcePresence::Present, Arena);
  return make<OptionalBindingConditionSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclarationStmtSyntaxBuilder &
DeclarationStmtSyntaxBuilder::useDeclaration(DeclSyntax Declaration) {
  Layout[cursorIndex(DeclarationStmtSyntax::Cursor::Declaration)] =
    Declaration.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DeclarationStmtSyntax
DeclarationStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Decl);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DeclarationStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<DeclarationStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ThrowStmtSyntaxBuilder &
ThrowStmtSyntaxBuilder::useThrowKeyword(TokenSyntax ThrowKeyword) {
  Layout[cursorIndex(ThrowStmtSyntax::Cursor::ThrowKeyword)] =
    ThrowKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ThrowStmtSyntaxBuilder &
ThrowStmtSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(ThrowStmtSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ThrowStmtSyntax
ThrowStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_throw, OwnedString::makeUnowned("throw"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ThrowStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<ThrowStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfStmtSyntaxBuilder &
IfStmtSyntaxBuilder::useLabelName(TokenSyntax LabelName) {
  Layout[cursorIndex(IfStmtSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfStmtSyntaxBuilder &
IfStmtSyntaxBuilder::useLabelColon(TokenSyntax LabelColon) {
  Layout[cursorIndex(IfStmtSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfStmtSyntaxBuilder &
IfStmtSyntaxBuilder::useIfKeyword(TokenSyntax IfKeyword) {
  Layout[cursorIndex(IfStmtSyntax::Cursor::IfKeyword)] =
    IfKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfStmtSyntaxBuilder &
IfStmtSyntaxBuilder::useConditions(ConditionElementListSyntax Conditions) {
  Layout[cursorIndex(IfStmtSyntax::Cursor::Conditions)] =
    Conditions.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfStmtSyntaxBuilder &
IfStmtSyntaxBuilder::addCondition(ConditionElementSyntax Condition) {
  auto &raw = Layout[cursorIndex(IfStmtSyntax::Cursor::Conditions)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::ConditionElementList,
                          {Condition.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Condition.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfStmtSyntaxBuilder &
IfStmtSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(IfStmtSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfStmtSyntaxBuilder &
IfStmtSyntaxBuilder::useElseKeyword(TokenSyntax ElseKeyword) {
  Layout[cursorIndex(IfStmtSyntax::Cursor::ElseKeyword)] =
    ElseKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfStmtSyntaxBuilder &
IfStmtSyntaxBuilder::useElseBody(Syntax ElseBody) {
  Layout[cursorIndex(IfStmtSyntax::Cursor::ElseBody)] =
    ElseBody.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IfStmtSyntax
IfStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::kw_if, OwnedString::makeUnowned("if"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::ConditionElementList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::IfStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<IfStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ElseIfContinuationSyntaxBuilder &
ElseIfContinuationSyntaxBuilder::useIfStatement(IfStmtSyntax IfStatement) {
  Layout[cursorIndex(ElseIfContinuationSyntax::Cursor::IfStatement)] =
    IfStatement.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ElseIfContinuationSyntax
ElseIfContinuationSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::IfStmt);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ElseIfContinuation, 
    Layout, SourcePresence::Present, Arena);
  return make<ElseIfContinuationSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ElseBlockSyntaxBuilder &
ElseBlockSyntaxBuilder::useElseKeyword(TokenSyntax ElseKeyword) {
  Layout[cursorIndex(ElseBlockSyntax::Cursor::ElseKeyword)] =
    ElseKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ElseBlockSyntaxBuilder &
ElseBlockSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(ElseBlockSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ElseBlockSyntax
ElseBlockSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_else, OwnedString::makeUnowned("else"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ElseBlock, 
    Layout, SourcePresence::Present, Arena);
  return make<ElseBlockSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchCaseSyntaxBuilder &
SwitchCaseSyntaxBuilder::useUnknownAttr(AttributeSyntax UnknownAttr) {
  Layout[cursorIndex(SwitchCaseSyntax::Cursor::UnknownAttr)] =
    UnknownAttr.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchCaseSyntaxBuilder &
SwitchCaseSyntaxBuilder::useLabel(Syntax Label) {
  Layout[cursorIndex(SwitchCaseSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchCaseSyntaxBuilder &
SwitchCaseSyntaxBuilder::useStatements(CodeBlockItemListSyntax Statements) {
  Layout[cursorIndex(SwitchCaseSyntax::Cursor::Statements)] =
    Statements.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchCaseSyntaxBuilder &
SwitchCaseSyntaxBuilder::addStatement(CodeBlockItemSyntax Statement) {
  auto &raw = Layout[cursorIndex(SwitchCaseSyntax::Cursor::Statements)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::CodeBlockItemList,
                          {Statement.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Statement.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchCaseSyntax
SwitchCaseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::SwitchDefaultLabel);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::CodeBlockItemList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SwitchCase, 
    Layout, SourcePresence::Present, Arena);
  return make<SwitchCaseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchDefaultLabelSyntaxBuilder &
SwitchDefaultLabelSyntaxBuilder::useDefaultKeyword(TokenSyntax DefaultKeyword) {
  Layout[cursorIndex(SwitchDefaultLabelSyntax::Cursor::DefaultKeyword)] =
    DefaultKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchDefaultLabelSyntaxBuilder &
SwitchDefaultLabelSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(SwitchDefaultLabelSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchDefaultLabelSyntax
SwitchDefaultLabelSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_default, OwnedString::makeUnowned("default"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SwitchDefaultLabel, 
    Layout, SourcePresence::Present, Arena);
  return make<SwitchDefaultLabelSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CaseItemSyntaxBuilder &
CaseItemSyntaxBuilder::usePattern(PatternSyntax Pattern) {
  Layout[cursorIndex(CaseItemSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CaseItemSyntaxBuilder &
CaseItemSyntaxBuilder::useWhereClause(WhereClauseSyntax WhereClause) {
  Layout[cursorIndex(CaseItemSyntax::Cursor::WhereClause)] =
    WhereClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CaseItemSyntaxBuilder &
CaseItemSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(CaseItemSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CaseItemSyntax
CaseItemSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Pattern);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::CaseItem, 
    Layout, SourcePresence::Present, Arena);
  return make<CaseItemSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchCaseLabelSyntaxBuilder &
SwitchCaseLabelSyntaxBuilder::useCaseKeyword(TokenSyntax CaseKeyword) {
  Layout[cursorIndex(SwitchCaseLabelSyntax::Cursor::CaseKeyword)] =
    CaseKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchCaseLabelSyntaxBuilder &
SwitchCaseLabelSyntaxBuilder::useCaseItems(CaseItemListSyntax CaseItems) {
  Layout[cursorIndex(SwitchCaseLabelSyntax::Cursor::CaseItems)] =
    CaseItems.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchCaseLabelSyntaxBuilder &
SwitchCaseLabelSyntaxBuilder::addCaseItem(CaseItemSyntax CaseItem) {
  auto &raw = Layout[cursorIndex(SwitchCaseLabelSyntax::Cursor::CaseItems)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::CaseItemList,
                          {CaseItem.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(CaseItem.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchCaseLabelSyntaxBuilder &
SwitchCaseLabelSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(SwitchCaseLabelSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SwitchCaseLabelSyntax
SwitchCaseLabelSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_case, OwnedString::makeUnowned("case"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::CaseItemList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SwitchCaseLabel, 
    Layout, SourcePresence::Present, Arena);
  return make<SwitchCaseLabelSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CatchClauseSyntaxBuilder &
CatchClauseSyntaxBuilder::useCatchKeyword(TokenSyntax CatchKeyword) {
  Layout[cursorIndex(CatchClauseSyntax::Cursor::CatchKeyword)] =
    CatchKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CatchClauseSyntaxBuilder &
CatchClauseSyntaxBuilder::usePattern(PatternSyntax Pattern) {
  Layout[cursorIndex(CatchClauseSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CatchClauseSyntaxBuilder &
CatchClauseSyntaxBuilder::useWhereClause(WhereClauseSyntax WhereClause) {
  Layout[cursorIndex(CatchClauseSyntax::Cursor::WhereClause)] =
    WhereClause.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CatchClauseSyntaxBuilder &
CatchClauseSyntaxBuilder::useBody(CodeBlockSyntax Body) {
  Layout[cursorIndex(CatchClauseSyntax::Cursor::Body)] =
    Body.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CatchClauseSyntax
CatchClauseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_catch, OwnedString::makeUnowned("catch"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::CatchClause, 
    Layout, SourcePresence::Present, Arena);
  return make<CatchClauseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundAssertStmtSyntaxBuilder &
PoundAssertStmtSyntaxBuilder::usePoundAssert(TokenSyntax PoundAssert) {
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::PoundAssert)] =
    PoundAssert.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundAssertStmtSyntaxBuilder &
PoundAssertStmtSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundAssertStmtSyntaxBuilder &
PoundAssertStmtSyntaxBuilder::useCondition(ExprSyntax Condition) {
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::Condition)] =
    Condition.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundAssertStmtSyntaxBuilder &
PoundAssertStmtSyntaxBuilder::useComma(TokenSyntax Comma) {
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::Comma)] =
    Comma.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundAssertStmtSyntaxBuilder &
PoundAssertStmtSyntaxBuilder::useMessage(TokenSyntax Message) {
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::Message)] =
    Message.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundAssertStmtSyntaxBuilder &
PoundAssertStmtSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(PoundAssertStmtSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
PoundAssertStmtSyntax
PoundAssertStmtSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::pound_assert, OwnedString::makeUnowned("#assert"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Expr);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[5])
    Layout[5] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::PoundAssertStmt, 
    Layout, SourcePresence::Present, Arena);
  return make<PoundAssertStmtSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericWhereClauseSyntaxBuilder &
GenericWhereClauseSyntaxBuilder::useWhereKeyword(TokenSyntax WhereKeyword) {
  Layout[cursorIndex(GenericWhereClauseSyntax::Cursor::WhereKeyword)] =
    WhereKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericWhereClauseSyntaxBuilder &
GenericWhereClauseSyntaxBuilder::useRequirementList(GenericRequirementListSyntax RequirementList) {
  Layout[cursorIndex(GenericWhereClauseSyntax::Cursor::RequirementList)] =
    RequirementList.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericWhereClauseSyntaxBuilder &
GenericWhereClauseSyntaxBuilder::addRequirement(Syntax Requirement) {
  auto &raw = Layout[cursorIndex(GenericWhereClauseSyntax::Cursor::RequirementList)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::GenericRequirementList,
                          {Requirement.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Requirement.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericWhereClauseSyntax
GenericWhereClauseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_where, OwnedString::makeUnowned("where"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::GenericRequirementList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::GenericWhereClause, 
    Layout, SourcePresence::Present, Arena);
  return make<GenericWhereClauseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SameTypeRequirementSyntaxBuilder &
SameTypeRequirementSyntaxBuilder::useLeftTypeIdentifier(TypeSyntax LeftTypeIdentifier) {
  Layout[cursorIndex(SameTypeRequirementSyntax::Cursor::LeftTypeIdentifier)] =
    LeftTypeIdentifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SameTypeRequirementSyntaxBuilder &
SameTypeRequirementSyntaxBuilder::useEqualityToken(TokenSyntax EqualityToken) {
  Layout[cursorIndex(SameTypeRequirementSyntax::Cursor::EqualityToken)] =
    EqualityToken.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SameTypeRequirementSyntaxBuilder &
SameTypeRequirementSyntaxBuilder::useRightTypeIdentifier(TypeSyntax RightTypeIdentifier) {
  Layout[cursorIndex(SameTypeRequirementSyntax::Cursor::RightTypeIdentifier)] =
    RightTypeIdentifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SameTypeRequirementSyntaxBuilder &
SameTypeRequirementSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(SameTypeRequirementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SameTypeRequirementSyntax
SameTypeRequirementSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Type);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::oper_binary_spaced, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SameTypeRequirement, 
    Layout, SourcePresence::Present, Arena);
  return make<SameTypeRequirementSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterSyntaxBuilder &
GenericParameterSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(GenericParameterSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterSyntaxBuilder &
GenericParameterSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(GenericParameterSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterSyntaxBuilder &
GenericParameterSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(GenericParameterSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterSyntaxBuilder &
GenericParameterSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(GenericParameterSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterSyntaxBuilder &
GenericParameterSyntaxBuilder::useInheritedType(TypeSyntax InheritedType) {
  Layout[cursorIndex(GenericParameterSyntax::Cursor::InheritedType)] =
    InheritedType.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterSyntaxBuilder &
GenericParameterSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(GenericParameterSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterSyntax
GenericParameterSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::GenericParameter, 
    Layout, SourcePresence::Present, Arena);
  return make<GenericParameterSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterClauseSyntaxBuilder &
GenericParameterClauseSyntaxBuilder::useLeftAngleBracket(TokenSyntax LeftAngleBracket) {
  Layout[cursorIndex(GenericParameterClauseSyntax::Cursor::LeftAngleBracket)] =
    LeftAngleBracket.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterClauseSyntaxBuilder &
GenericParameterClauseSyntaxBuilder::useGenericParameterList(GenericParameterListSyntax GenericParameterList) {
  Layout[cursorIndex(GenericParameterClauseSyntax::Cursor::GenericParameterList)] =
    GenericParameterList.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterClauseSyntaxBuilder &
GenericParameterClauseSyntaxBuilder::addGenericParameter(GenericParameterSyntax GenericParameter) {
  auto &raw = Layout[cursorIndex(GenericParameterClauseSyntax::Cursor::GenericParameterList)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::GenericParameterList,
                          {GenericParameter.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(GenericParameter.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterClauseSyntaxBuilder &
GenericParameterClauseSyntaxBuilder::useRightAngleBracket(TokenSyntax RightAngleBracket) {
  Layout[cursorIndex(GenericParameterClauseSyntax::Cursor::RightAngleBracket)] =
    RightAngleBracket.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericParameterClauseSyntax
GenericParameterClauseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_angle, OwnedString::makeUnowned("<"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::GenericParameterList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_angle, OwnedString::makeUnowned(">"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::GenericParameterClause, 
    Layout, SourcePresence::Present, Arena);
  return make<GenericParameterClauseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ConformanceRequirementSyntaxBuilder &
ConformanceRequirementSyntaxBuilder::useLeftTypeIdentifier(TypeSyntax LeftTypeIdentifier) {
  Layout[cursorIndex(ConformanceRequirementSyntax::Cursor::LeftTypeIdentifier)] =
    LeftTypeIdentifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ConformanceRequirementSyntaxBuilder &
ConformanceRequirementSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(ConformanceRequirementSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ConformanceRequirementSyntaxBuilder &
ConformanceRequirementSyntaxBuilder::useRightTypeIdentifier(TypeSyntax RightTypeIdentifier) {
  Layout[cursorIndex(ConformanceRequirementSyntax::Cursor::RightTypeIdentifier)] =
    RightTypeIdentifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ConformanceRequirementSyntaxBuilder &
ConformanceRequirementSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(ConformanceRequirementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ConformanceRequirementSyntax
ConformanceRequirementSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Type);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ConformanceRequirement, 
    Layout, SourcePresence::Present, Arena);
  return make<ConformanceRequirementSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SimpleTypeIdentifierSyntaxBuilder &
SimpleTypeIdentifierSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(SimpleTypeIdentifierSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SimpleTypeIdentifierSyntaxBuilder &
SimpleTypeIdentifierSyntaxBuilder::useGenericArgumentClause(GenericArgumentClauseSyntax GenericArgumentClause) {
  Layout[cursorIndex(SimpleTypeIdentifierSyntax::Cursor::GenericArgumentClause)] =
    GenericArgumentClause.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SimpleTypeIdentifierSyntax
SimpleTypeIdentifierSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SimpleTypeIdentifier, 
    Layout, SourcePresence::Present, Arena);
  return make<SimpleTypeIdentifierSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberTypeIdentifierSyntaxBuilder &
MemberTypeIdentifierSyntaxBuilder::useBaseType(TypeSyntax BaseType) {
  Layout[cursorIndex(MemberTypeIdentifierSyntax::Cursor::BaseType)] =
    BaseType.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberTypeIdentifierSyntaxBuilder &
MemberTypeIdentifierSyntaxBuilder::usePeriod(TokenSyntax Period) {
  Layout[cursorIndex(MemberTypeIdentifierSyntax::Cursor::Period)] =
    Period.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberTypeIdentifierSyntaxBuilder &
MemberTypeIdentifierSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(MemberTypeIdentifierSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberTypeIdentifierSyntaxBuilder &
MemberTypeIdentifierSyntaxBuilder::useGenericArgumentClause(GenericArgumentClauseSyntax GenericArgumentClause) {
  Layout[cursorIndex(MemberTypeIdentifierSyntax::Cursor::GenericArgumentClause)] =
    GenericArgumentClause.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MemberTypeIdentifierSyntax
MemberTypeIdentifierSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Type);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::period, OwnedString::makeUnowned("."));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::MemberTypeIdentifier, 
    Layout, SourcePresence::Present, Arena);
  return make<MemberTypeIdentifierSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassRestrictionTypeSyntaxBuilder &
ClassRestrictionTypeSyntaxBuilder::useClassKeyword(TokenSyntax ClassKeyword) {
  Layout[cursorIndex(ClassRestrictionTypeSyntax::Cursor::ClassKeyword)] =
    ClassKeyword.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ClassRestrictionTypeSyntax
ClassRestrictionTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_class, OwnedString::makeUnowned("class"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ClassRestrictionType, 
    Layout, SourcePresence::Present, Arena);
  return make<ClassRestrictionTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayTypeSyntaxBuilder &
ArrayTypeSyntaxBuilder::useLeftSquareBracket(TokenSyntax LeftSquareBracket) {
  Layout[cursorIndex(ArrayTypeSyntax::Cursor::LeftSquareBracket)] =
    LeftSquareBracket.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayTypeSyntaxBuilder &
ArrayTypeSyntaxBuilder::useElementType(TypeSyntax ElementType) {
  Layout[cursorIndex(ArrayTypeSyntax::Cursor::ElementType)] =
    ElementType.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayTypeSyntaxBuilder &
ArrayTypeSyntaxBuilder::useRightSquareBracket(TokenSyntax RightSquareBracket) {
  Layout[cursorIndex(ArrayTypeSyntax::Cursor::RightSquareBracket)] =
    RightSquareBracket.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ArrayTypeSyntax
ArrayTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Type);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ArrayType, 
    Layout, SourcePresence::Present, Arena);
  return make<ArrayTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryTypeSyntaxBuilder &
DictionaryTypeSyntaxBuilder::useLeftSquareBracket(TokenSyntax LeftSquareBracket) {
  Layout[cursorIndex(DictionaryTypeSyntax::Cursor::LeftSquareBracket)] =
    LeftSquareBracket.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryTypeSyntaxBuilder &
DictionaryTypeSyntaxBuilder::useKeyType(TypeSyntax KeyType) {
  Layout[cursorIndex(DictionaryTypeSyntax::Cursor::KeyType)] =
    KeyType.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryTypeSyntaxBuilder &
DictionaryTypeSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(DictionaryTypeSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryTypeSyntaxBuilder &
DictionaryTypeSyntaxBuilder::useValueType(TypeSyntax ValueType) {
  Layout[cursorIndex(DictionaryTypeSyntax::Cursor::ValueType)] =
    ValueType.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryTypeSyntaxBuilder &
DictionaryTypeSyntaxBuilder::useRightSquareBracket(TokenSyntax RightSquareBracket) {
  Layout[cursorIndex(DictionaryTypeSyntax::Cursor::RightSquareBracket)] =
    RightSquareBracket.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
DictionaryTypeSyntax
DictionaryTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Type);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[3])
    Layout[3] = RawSyntax::missing(SyntaxKind::Type);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::DictionaryType, 
    Layout, SourcePresence::Present, Arena);
  return make<DictionaryTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MetatypeTypeSyntaxBuilder &
MetatypeTypeSyntaxBuilder::useBaseType(TypeSyntax BaseType) {
  Layout[cursorIndex(MetatypeTypeSyntax::Cursor::BaseType)] =
    BaseType.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MetatypeTypeSyntaxBuilder &
MetatypeTypeSyntaxBuilder::usePeriod(TokenSyntax Period) {
  Layout[cursorIndex(MetatypeTypeSyntax::Cursor::Period)] =
    Period.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MetatypeTypeSyntaxBuilder &
MetatypeTypeSyntaxBuilder::useTypeOrProtocol(TokenSyntax TypeOrProtocol) {
  Layout[cursorIndex(MetatypeTypeSyntax::Cursor::TypeOrProtocol)] =
    TypeOrProtocol.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
MetatypeTypeSyntax
MetatypeTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Type);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::period, OwnedString::makeUnowned("."));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::MetatypeType, 
    Layout, SourcePresence::Present, Arena);
  return make<MetatypeTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalTypeSyntaxBuilder &
OptionalTypeSyntaxBuilder::useWrappedType(TypeSyntax WrappedType) {
  Layout[cursorIndex(OptionalTypeSyntax::Cursor::WrappedType)] =
    WrappedType.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalTypeSyntaxBuilder &
OptionalTypeSyntaxBuilder::useQuestionMark(TokenSyntax QuestionMark) {
  Layout[cursorIndex(OptionalTypeSyntax::Cursor::QuestionMark)] =
    QuestionMark.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalTypeSyntax
OptionalTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Type);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::question_postfix, OwnedString::makeUnowned("?"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::OptionalType, 
    Layout, SourcePresence::Present, Arena);
  return make<OptionalTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SomeTypeSyntaxBuilder &
SomeTypeSyntaxBuilder::useSomeSpecifier(TokenSyntax SomeSpecifier) {
  Layout[cursorIndex(SomeTypeSyntax::Cursor::SomeSpecifier)] =
    SomeSpecifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SomeTypeSyntaxBuilder &
SomeTypeSyntaxBuilder::useBaseType(TypeSyntax BaseType) {
  Layout[cursorIndex(SomeTypeSyntax::Cursor::BaseType)] =
    BaseType.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
SomeTypeSyntax
SomeTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::SomeType, 
    Layout, SourcePresence::Present, Arena);
  return make<SomeTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImplicitlyUnwrappedOptionalTypeSyntaxBuilder &
ImplicitlyUnwrappedOptionalTypeSyntaxBuilder::useWrappedType(TypeSyntax WrappedType) {
  Layout[cursorIndex(ImplicitlyUnwrappedOptionalTypeSyntax::Cursor::WrappedType)] =
    WrappedType.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImplicitlyUnwrappedOptionalTypeSyntaxBuilder &
ImplicitlyUnwrappedOptionalTypeSyntaxBuilder::useExclamationMark(TokenSyntax ExclamationMark) {
  Layout[cursorIndex(ImplicitlyUnwrappedOptionalTypeSyntax::Cursor::ExclamationMark)] =
    ExclamationMark.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ImplicitlyUnwrappedOptionalTypeSyntax
ImplicitlyUnwrappedOptionalTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Type);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::exclaim_postfix, OwnedString::makeUnowned("!"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ImplicitlyUnwrappedOptionalType, 
    Layout, SourcePresence::Present, Arena);
  return make<ImplicitlyUnwrappedOptionalTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CompositionTypeElementSyntaxBuilder &
CompositionTypeElementSyntaxBuilder::useType(TypeSyntax Type) {
  Layout[cursorIndex(CompositionTypeElementSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CompositionTypeElementSyntaxBuilder &
CompositionTypeElementSyntaxBuilder::useAmpersand(TokenSyntax Ampersand) {
  Layout[cursorIndex(CompositionTypeElementSyntax::Cursor::Ampersand)] =
    Ampersand.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CompositionTypeElementSyntax
CompositionTypeElementSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::CompositionTypeElement, 
    Layout, SourcePresence::Present, Arena);
  return make<CompositionTypeElementSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CompositionTypeSyntaxBuilder &
CompositionTypeSyntaxBuilder::useElements(CompositionTypeElementListSyntax Elements) {
  Layout[cursorIndex(CompositionTypeSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CompositionTypeSyntaxBuilder &
CompositionTypeSyntaxBuilder::addElement(CompositionTypeElementSyntax Element) {
  auto &raw = Layout[cursorIndex(CompositionTypeSyntax::Cursor::Elements)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::CompositionTypeElementList,
                          {Element.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Element.getRaw());
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
CompositionTypeSyntax
CompositionTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::CompositionTypeElementList);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::CompositionType, 
    Layout, SourcePresence::Present, Arena);
  return make<CompositionTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeElementSyntaxBuilder &
TupleTypeElementSyntaxBuilder::useInOut(TokenSyntax InOut) {
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::InOut)] =
    InOut.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeElementSyntaxBuilder &
TupleTypeElementSyntaxBuilder::useName(TokenSyntax Name) {
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::Name)] =
    Name.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeElementSyntaxBuilder &
TupleTypeElementSyntaxBuilder::useSecondName(TokenSyntax SecondName) {
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::SecondName)] =
    SecondName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeElementSyntaxBuilder &
TupleTypeElementSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeElementSyntaxBuilder &
TupleTypeElementSyntaxBuilder::useType(TypeSyntax Type) {
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeElementSyntaxBuilder &
TupleTypeElementSyntaxBuilder::useEllipsis(TokenSyntax Ellipsis) {
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::Ellipsis)] =
    Ellipsis.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeElementSyntaxBuilder &
TupleTypeElementSyntaxBuilder::useInitializer(InitializerClauseSyntax Initializer) {
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::Initializer)] =
    Initializer.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeElementSyntaxBuilder &
TupleTypeElementSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(TupleTypeElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeElementSyntax
TupleTypeElementSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TupleTypeElement, 
    Layout, SourcePresence::Present, Arena);
  return make<TupleTypeElementSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeSyntaxBuilder &
TupleTypeSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(TupleTypeSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeSyntaxBuilder &
TupleTypeSyntaxBuilder::useElements(TupleTypeElementListSyntax Elements) {
  Layout[cursorIndex(TupleTypeSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeSyntaxBuilder &
TupleTypeSyntaxBuilder::addElement(TupleTypeElementSyntax Element) {
  auto &raw = Layout[cursorIndex(TupleTypeSyntax::Cursor::Elements)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::TupleTypeElementList,
                          {Element.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Element.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeSyntaxBuilder &
TupleTypeSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(TupleTypeSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TupleTypeSyntax
TupleTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::TupleTypeElementList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TupleType, 
    Layout, SourcePresence::Present, Arena);
  return make<TupleTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionTypeSyntaxBuilder &
FunctionTypeSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionTypeSyntaxBuilder &
FunctionTypeSyntaxBuilder::useArguments(TupleTypeElementListSyntax Arguments) {
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::Arguments)] =
    Arguments.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionTypeSyntaxBuilder &
FunctionTypeSyntaxBuilder::addArgument(TupleTypeElementSyntax Argument) {
  auto &raw = Layout[cursorIndex(FunctionTypeSyntax::Cursor::Arguments)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::TupleTypeElementList,
                          {Argument.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Argument.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionTypeSyntaxBuilder &
FunctionTypeSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionTypeSyntaxBuilder &
FunctionTypeSyntaxBuilder::useThrowsOrRethrowsKeyword(TokenSyntax ThrowsOrRethrowsKeyword) {
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::ThrowsOrRethrowsKeyword)] =
    ThrowsOrRethrowsKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionTypeSyntaxBuilder &
FunctionTypeSyntaxBuilder::useArrow(TokenSyntax Arrow) {
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::Arrow)] =
    Arrow.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionTypeSyntaxBuilder &
FunctionTypeSyntaxBuilder::useReturnType(TypeSyntax ReturnType) {
  Layout[cursorIndex(FunctionTypeSyntax::Cursor::ReturnType)] =
    ReturnType.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
FunctionTypeSyntax
FunctionTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::TupleTypeElementList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[4])
    Layout[4] = RawSyntax::missing(tok::arrow, OwnedString::makeUnowned("->"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[5])
    Layout[5] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::FunctionType, 
    Layout, SourcePresence::Present, Arena);
  return make<FunctionTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributedTypeSyntaxBuilder &
AttributedTypeSyntaxBuilder::useSpecifier(TokenSyntax Specifier) {
  Layout[cursorIndex(AttributedTypeSyntax::Cursor::Specifier)] =
    Specifier.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributedTypeSyntaxBuilder &
AttributedTypeSyntaxBuilder::useAttributes(AttributeListSyntax Attributes) {
  Layout[cursorIndex(AttributedTypeSyntax::Cursor::Attributes)] =
    Attributes.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributedTypeSyntaxBuilder &
AttributedTypeSyntaxBuilder::addAttribute(Syntax Attribute) {
  auto &raw = Layout[cursorIndex(AttributedTypeSyntax::Cursor::Attributes)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Attribute.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributedTypeSyntaxBuilder &
AttributedTypeSyntaxBuilder::useBaseType(TypeSyntax BaseType) {
  Layout[cursorIndex(AttributedTypeSyntax::Cursor::BaseType)] =
    BaseType.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AttributedTypeSyntax
AttributedTypeSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AttributedType, 
    Layout, SourcePresence::Present, Arena);
  return make<AttributedTypeSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericArgumentSyntaxBuilder &
GenericArgumentSyntaxBuilder::useArgumentType(TypeSyntax ArgumentType) {
  Layout[cursorIndex(GenericArgumentSyntax::Cursor::ArgumentType)] =
    ArgumentType.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericArgumentSyntaxBuilder &
GenericArgumentSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(GenericArgumentSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericArgumentSyntax
GenericArgumentSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::GenericArgument, 
    Layout, SourcePresence::Present, Arena);
  return make<GenericArgumentSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericArgumentClauseSyntaxBuilder &
GenericArgumentClauseSyntaxBuilder::useLeftAngleBracket(TokenSyntax LeftAngleBracket) {
  Layout[cursorIndex(GenericArgumentClauseSyntax::Cursor::LeftAngleBracket)] =
    LeftAngleBracket.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericArgumentClauseSyntaxBuilder &
GenericArgumentClauseSyntaxBuilder::useArguments(GenericArgumentListSyntax Arguments) {
  Layout[cursorIndex(GenericArgumentClauseSyntax::Cursor::Arguments)] =
    Arguments.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericArgumentClauseSyntaxBuilder &
GenericArgumentClauseSyntaxBuilder::addArgument(GenericArgumentSyntax Argument) {
  auto &raw = Layout[cursorIndex(GenericArgumentClauseSyntax::Cursor::Arguments)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::GenericArgumentList,
                          {Argument.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Argument.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericArgumentClauseSyntaxBuilder &
GenericArgumentClauseSyntaxBuilder::useRightAngleBracket(TokenSyntax RightAngleBracket) {
  Layout[cursorIndex(GenericArgumentClauseSyntax::Cursor::RightAngleBracket)] =
    RightAngleBracket.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
GenericArgumentClauseSyntax
GenericArgumentClauseSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_angle, OwnedString::makeUnowned("<"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::GenericArgumentList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_angle, OwnedString::makeUnowned(">"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::GenericArgumentClause, 
    Layout, SourcePresence::Present, Arena);
  return make<GenericArgumentClauseSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeAnnotationSyntaxBuilder &
TypeAnnotationSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(TypeAnnotationSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeAnnotationSyntaxBuilder &
TypeAnnotationSyntaxBuilder::useType(TypeSyntax Type) {
  Layout[cursorIndex(TypeAnnotationSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TypeAnnotationSyntax
TypeAnnotationSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TypeAnnotation, 
    Layout, SourcePresence::Present, Arena);
  return make<TypeAnnotationSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCasePatternSyntaxBuilder &
EnumCasePatternSyntaxBuilder::useType(TypeSyntax Type) {
  Layout[cursorIndex(EnumCasePatternSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCasePatternSyntaxBuilder &
EnumCasePatternSyntaxBuilder::usePeriod(TokenSyntax Period) {
  Layout[cursorIndex(EnumCasePatternSyntax::Cursor::Period)] =
    Period.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCasePatternSyntaxBuilder &
EnumCasePatternSyntaxBuilder::useCaseName(TokenSyntax CaseName) {
  Layout[cursorIndex(EnumCasePatternSyntax::Cursor::CaseName)] =
    CaseName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCasePatternSyntaxBuilder &
EnumCasePatternSyntaxBuilder::useAssociatedTuple(TuplePatternSyntax AssociatedTuple) {
  Layout[cursorIndex(EnumCasePatternSyntax::Cursor::AssociatedTuple)] =
    AssociatedTuple.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
EnumCasePatternSyntax
EnumCasePatternSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::period, OwnedString::makeUnowned("."));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::EnumCasePattern, 
    Layout, SourcePresence::Present, Arena);
  return make<EnumCasePatternSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IsTypePatternSyntaxBuilder &
IsTypePatternSyntaxBuilder::useIsKeyword(TokenSyntax IsKeyword) {
  Layout[cursorIndex(IsTypePatternSyntax::Cursor::IsKeyword)] =
    IsKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IsTypePatternSyntaxBuilder &
IsTypePatternSyntaxBuilder::useType(TypeSyntax Type) {
  Layout[cursorIndex(IsTypePatternSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IsTypePatternSyntax
IsTypePatternSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_is, OwnedString::makeUnowned("is"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::IsTypePattern, 
    Layout, SourcePresence::Present, Arena);
  return make<IsTypePatternSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalPatternSyntaxBuilder &
OptionalPatternSyntaxBuilder::useSubPattern(PatternSyntax SubPattern) {
  Layout[cursorIndex(OptionalPatternSyntax::Cursor::SubPattern)] =
    SubPattern.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalPatternSyntaxBuilder &
OptionalPatternSyntaxBuilder::useQuestionMark(TokenSyntax QuestionMark) {
  Layout[cursorIndex(OptionalPatternSyntax::Cursor::QuestionMark)] =
    QuestionMark.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
OptionalPatternSyntax
OptionalPatternSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Pattern);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::question_postfix, OwnedString::makeUnowned("?"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::OptionalPattern, 
    Layout, SourcePresence::Present, Arena);
  return make<OptionalPatternSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IdentifierPatternSyntaxBuilder &
IdentifierPatternSyntaxBuilder::useIdentifier(TokenSyntax Identifier) {
  Layout[cursorIndex(IdentifierPatternSyntax::Cursor::Identifier)] =
    Identifier.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
IdentifierPatternSyntax
IdentifierPatternSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_self, OwnedString::makeUnowned("self"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::IdentifierPattern, 
    Layout, SourcePresence::Present, Arena);
  return make<IdentifierPatternSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AsTypePatternSyntaxBuilder &
AsTypePatternSyntaxBuilder::usePattern(PatternSyntax Pattern) {
  Layout[cursorIndex(AsTypePatternSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AsTypePatternSyntaxBuilder &
AsTypePatternSyntaxBuilder::useAsKeyword(TokenSyntax AsKeyword) {
  Layout[cursorIndex(AsTypePatternSyntax::Cursor::AsKeyword)] =
    AsKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AsTypePatternSyntaxBuilder &
AsTypePatternSyntaxBuilder::useType(TypeSyntax Type) {
  Layout[cursorIndex(AsTypePatternSyntax::Cursor::Type)] =
    Type.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AsTypePatternSyntax
AsTypePatternSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Pattern);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::kw_as, OwnedString::makeUnowned("as"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Type);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AsTypePattern, 
    Layout, SourcePresence::Present, Arena);
  return make<AsTypePatternSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TuplePatternSyntaxBuilder &
TuplePatternSyntaxBuilder::useLeftParen(TokenSyntax LeftParen) {
  Layout[cursorIndex(TuplePatternSyntax::Cursor::LeftParen)] =
    LeftParen.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TuplePatternSyntaxBuilder &
TuplePatternSyntaxBuilder::useElements(TuplePatternElementListSyntax Elements) {
  Layout[cursorIndex(TuplePatternSyntax::Cursor::Elements)] =
    Elements.getRaw();
  return *this;
}
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TuplePatternSyntaxBuilder &
TuplePatternSyntaxBuilder::addElement(TuplePatternElementSyntax Element) {
  auto &raw = Layout[cursorIndex(TuplePatternSyntax::Cursor::Elements)];
  if (!raw)
    raw = RawSyntax::make(SyntaxKind::TuplePatternElementList,
                          {Element.getRaw()},
                          SourcePresence::Present, Arena);
  else
    raw = raw->append(Element.getRaw());
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TuplePatternSyntaxBuilder &
TuplePatternSyntaxBuilder::useRightParen(TokenSyntax RightParen) {
  Layout[cursorIndex(TuplePatternSyntax::Cursor::RightParen)] =
    RightParen.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TuplePatternSyntax
TuplePatternSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::TuplePatternElementList);
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TuplePattern, 
    Layout, SourcePresence::Present, Arena);
  return make<TuplePatternSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WildcardPatternSyntaxBuilder &
WildcardPatternSyntaxBuilder::useWildcard(TokenSyntax Wildcard) {
  Layout[cursorIndex(WildcardPatternSyntax::Cursor::Wildcard)] =
    Wildcard.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WildcardPatternSyntaxBuilder &
WildcardPatternSyntaxBuilder::useTypeAnnotation(TypeAnnotationSyntax TypeAnnotation) {
  Layout[cursorIndex(WildcardPatternSyntax::Cursor::TypeAnnotation)] =
    TypeAnnotation.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
WildcardPatternSyntax
WildcardPatternSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw__, OwnedString::makeUnowned("_"));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::WildcardPattern, 
    Layout, SourcePresence::Present, Arena);
  return make<WildcardPatternSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TuplePatternElementSyntaxBuilder &
TuplePatternElementSyntaxBuilder::useLabelName(TokenSyntax LabelName) {
  Layout[cursorIndex(TuplePatternElementSyntax::Cursor::LabelName)] =
    LabelName.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TuplePatternElementSyntaxBuilder &
TuplePatternElementSyntaxBuilder::useLabelColon(TokenSyntax LabelColon) {
  Layout[cursorIndex(TuplePatternElementSyntax::Cursor::LabelColon)] =
    LabelColon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TuplePatternElementSyntaxBuilder &
TuplePatternElementSyntaxBuilder::usePattern(PatternSyntax Pattern) {
  Layout[cursorIndex(TuplePatternElementSyntax::Cursor::Pattern)] =
    Pattern.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TuplePatternElementSyntaxBuilder &
TuplePatternElementSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(TuplePatternElementSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
TuplePatternElementSyntax
TuplePatternElementSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(SyntaxKind::Pattern);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::TuplePatternElement, 
    Layout, SourcePresence::Present, Arena);
  return make<TuplePatternElementSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExpressionPatternSyntaxBuilder &
ExpressionPatternSyntaxBuilder::useExpression(ExprSyntax Expression) {
  Layout[cursorIndex(ExpressionPatternSyntax::Cursor::Expression)] =
    Expression.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ExpressionPatternSyntax
ExpressionPatternSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(SyntaxKind::Expr);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ExpressionPattern, 
    Layout, SourcePresence::Present, Arena);
  return make<ExpressionPatternSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ValueBindingPatternSyntaxBuilder &
ValueBindingPatternSyntaxBuilder::useLetOrVarKeyword(TokenSyntax LetOrVarKeyword) {
  Layout[cursorIndex(ValueBindingPatternSyntax::Cursor::LetOrVarKeyword)] =
    LetOrVarKeyword.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ValueBindingPatternSyntaxBuilder &
ValueBindingPatternSyntaxBuilder::useValuePattern(PatternSyntax ValuePattern) {
  Layout[cursorIndex(ValueBindingPatternSyntax::Cursor::ValuePattern)] =
    ValuePattern.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
ValueBindingPatternSyntax
ValueBindingPatternSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::kw_let, OwnedString::makeUnowned("let"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::Pattern);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::ValueBindingPattern, 
    Layout, SourcePresence::Present, Arena);
  return make<ValueBindingPatternSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityArgumentSyntaxBuilder &
AvailabilityArgumentSyntaxBuilder::useEntry(Syntax Entry) {
  Layout[cursorIndex(AvailabilityArgumentSyntax::Cursor::Entry)] =
    Entry.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityArgumentSyntaxBuilder &
AvailabilityArgumentSyntaxBuilder::useTrailingComma(TokenSyntax TrailingComma) {
  Layout[cursorIndex(AvailabilityArgumentSyntax::Cursor::TrailingComma)] =
    TrailingComma.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityArgumentSyntax
AvailabilityArgumentSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::oper_binary_spaced, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AvailabilityArgument, 
    Layout, SourcePresence::Present, Arena);
  return make<AvailabilityArgumentSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityLabeledArgumentSyntaxBuilder &
AvailabilityLabeledArgumentSyntaxBuilder::useLabel(TokenSyntax Label) {
  Layout[cursorIndex(AvailabilityLabeledArgumentSyntax::Cursor::Label)] =
    Label.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityLabeledArgumentSyntaxBuilder &
AvailabilityLabeledArgumentSyntaxBuilder::useColon(TokenSyntax Colon) {
  Layout[cursorIndex(AvailabilityLabeledArgumentSyntax::Cursor::Colon)] =
    Colon.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityLabeledArgumentSyntaxBuilder &
AvailabilityLabeledArgumentSyntaxBuilder::useValue(Syntax Value) {
  Layout[cursorIndex(AvailabilityLabeledArgumentSyntax::Cursor::Value)] =
    Value.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityLabeledArgumentSyntax
AvailabilityLabeledArgumentSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[2])
    Layout[2] = RawSyntax::missing(tok::string_literal, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AvailabilityLabeledArgument, 
    Layout, SourcePresence::Present, Arena);
  return make<AvailabilityLabeledArgumentSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityVersionRestrictionSyntaxBuilder &
AvailabilityVersionRestrictionSyntaxBuilder::usePlatform(TokenSyntax Platform) {
  Layout[cursorIndex(AvailabilityVersionRestrictionSyntax::Cursor::Platform)] =
    Platform.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityVersionRestrictionSyntaxBuilder &
AvailabilityVersionRestrictionSyntaxBuilder::useVersion(VersionTupleSyntax Version) {
  Layout[cursorIndex(AvailabilityVersionRestrictionSyntax::Cursor::Version)] =
    Version.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
AvailabilityVersionRestrictionSyntax
AvailabilityVersionRestrictionSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[1])
    Layout[1] = RawSyntax::missing(SyntaxKind::VersionTuple);
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::AvailabilityVersionRestriction, 
    Layout, SourcePresence::Present, Arena);
  return make<AvailabilityVersionRestrictionSyntax>(raw);
}

#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VersionTupleSyntaxBuilder &
VersionTupleSyntaxBuilder::useMajorMinor(Syntax MajorMinor) {
  Layout[cursorIndex(VersionTupleSyntax::Cursor::MajorMinor)] =
    MajorMinor.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VersionTupleSyntaxBuilder &
VersionTupleSyntaxBuilder::usePatchPeriod(TokenSyntax PatchPeriod) {
  Layout[cursorIndex(VersionTupleSyntax::Cursor::PatchPeriod)] =
    PatchPeriod.getRaw();
  return *this;
}
#line 31 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VersionTupleSyntaxBuilder &
VersionTupleSyntaxBuilder::usePatchVersion(TokenSyntax PatchVersion) {
  Layout[cursorIndex(VersionTupleSyntax::Cursor::PatchVersion)] =
    PatchVersion.getRaw();
  return *this;
}
#line 57 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
VersionTupleSyntax
VersionTupleSyntaxBuilder::build() {
#line 62 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  if (!Layout[0])
    Layout[0] = RawSyntax::missing(tok::integer_literal, OwnedString::makeUnowned(""));
#line 67 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxBuilders.cpp.gyb"
  auto raw = RawSyntax::make(SyntaxKind::VersionTuple, 
    Layout, SourcePresence::Present, Arena);
  return make<VersionTupleSyntax>(raw);
}

