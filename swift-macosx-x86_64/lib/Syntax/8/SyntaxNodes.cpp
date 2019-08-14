#line 7 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
//// Automatically Generated From SyntaxNodes.cpp.gyb.
//// Do Not Edit Directly!
//===---------------- SyntaxNodes.cpp - Syntax Node definitions -----------===//
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


#include "swift/Syntax/SyntaxNodes.h"

using namespace swift;
using namespace swift::syntax;

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void CodeBlockItemSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Item))
    assert([](const RC<RawSyntax> &Raw) {
 // check Item
return [](const RC<RawSyntax> &Raw) {
 // check Decl
return DeclSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Stmt
return StmtSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Expr
return ExprSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check TokenList
return TokenListSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check NonEmptyTokenList
return NonEmptyTokenListSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Semicolon, tok::semi);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax CodeBlockItemSyntax::getItem() {
  return Syntax {Root, Data->getChild(Cursor::Item).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CodeBlockItemSyntax CodeBlockItemSyntax::withItem(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Decl);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CodeBlockItemSyntax>(raw, Cursor::Item);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> CodeBlockItemSyntax::getSemicolon() {
  auto ChildData = Data->getChild(Cursor::Semicolon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CodeBlockItemSyntax CodeBlockItemSyntax::withSemicolon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CodeBlockItemSyntax>(raw, Cursor::Semicolon);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<Syntax> CodeBlockItemSyntax::getErrorTokens() {
  auto ChildData = Data->getChild(Cursor::ErrorTokens);
  if (!ChildData)
    return llvm::None;
  return Syntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CodeBlockItemSyntax CodeBlockItemSyntax::withErrorTokens(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CodeBlockItemSyntax>(raw, Cursor::ErrorTokens);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void CodeBlockSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftBrace, tok::l_brace);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightBrace, tok::r_brace);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax CodeBlockSyntax::getLeftBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CodeBlockSyntax CodeBlockSyntax::withLeftBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CodeBlockSyntax>(raw, Cursor::LeftBrace);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockItemListSyntax CodeBlockSyntax::getStatements() {
  return CodeBlockItemListSyntax {Root, Data->getChild(Cursor::Statements).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockSyntax CodeBlockSyntax::addStatement(CodeBlockItemSyntax Statement) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Statements);
  if (raw)
    raw = raw->append(Statement.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::CodeBlockItemList,
                          {Statement.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<CodeBlockSyntax>(raw, Cursor::Statements);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CodeBlockSyntax CodeBlockSyntax::withStatements(
  llvm::Optional<CodeBlockItemListSyntax> NewCodeBlockItemListSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockItemListSyntax.hasValue()) {
    raw = NewCodeBlockItemListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlockItemList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CodeBlockSyntax>(raw, Cursor::Statements);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax CodeBlockSyntax::getRightBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CodeBlockSyntax CodeBlockSyntax::withRightBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CodeBlockSyntax>(raw, Cursor::RightBrace);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void InOutExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Ampersand, tok::amp_prefix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax InOutExprSyntax::getAmpersand() {
  return TokenSyntax {Root, Data->getChild(Cursor::Ampersand).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InOutExprSyntax InOutExprSyntax::withAmpersand(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::amp_prefix, OwnedString::makeUnowned("&"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InOutExprSyntax>(raw, Cursor::Ampersand);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax InOutExprSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InOutExprSyntax InOutExprSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InOutExprSyntax>(raw, Cursor::Expression);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PoundColumnExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundColumn, tok::pound_column);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundColumnExprSyntax::getPoundColumn() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundColumn).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundColumnExprSyntax PoundColumnExprSyntax::withPoundColumn(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_column, OwnedString::makeUnowned("#column"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundColumnExprSyntax>(raw, Cursor::PoundColumn);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TryExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TryKeyword, tok::kw_try);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, QuestionOrExclamationMark, tok::question_postfix, tok::exclaim_postfix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TryExprSyntax::getTryKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::TryKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TryExprSyntax TryExprSyntax::withTryKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_try, OwnedString::makeUnowned("try"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TryExprSyntax>(raw, Cursor::TryKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TryExprSyntax::getQuestionOrExclamationMark() {
  auto ChildData = Data->getChild(Cursor::QuestionOrExclamationMark);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TryExprSyntax TryExprSyntax::withQuestionOrExclamationMark(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TryExprSyntax>(raw, Cursor::QuestionOrExclamationMark);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax TryExprSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TryExprSyntax TryExprSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TryExprSyntax>(raw, Cursor::Expression);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DeclNameArgumentSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DeclNameArgumentSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclNameArgumentSyntax DeclNameArgumentSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclNameArgumentSyntax>(raw, Cursor::Name);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DeclNameArgumentSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclNameArgumentSyntax DeclNameArgumentSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclNameArgumentSyntax>(raw, Cursor::Colon);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DeclNameArgumentsSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DeclNameArgumentsSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclNameArgumentsSyntax DeclNameArgumentsSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclNameArgumentsSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
DeclNameArgumentListSyntax DeclNameArgumentsSyntax::getArguments() {
  return DeclNameArgumentListSyntax {Root, Data->getChild(Cursor::Arguments).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
DeclNameArgumentsSyntax DeclNameArgumentsSyntax::addArgument(DeclNameArgumentSyntax Argument) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Arguments);
  if (raw)
    raw = raw->append(Argument.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::DeclNameArgumentList,
                          {Argument.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<DeclNameArgumentsSyntax>(raw, Cursor::Arguments);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclNameArgumentsSyntax DeclNameArgumentsSyntax::withArguments(
  llvm::Optional<DeclNameArgumentListSyntax> NewDeclNameArgumentListSyntax) {
  RC<RawSyntax> raw;
  if (NewDeclNameArgumentListSyntax.hasValue()) {
    raw = NewDeclNameArgumentListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::DeclNameArgumentList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclNameArgumentsSyntax>(raw, Cursor::Arguments);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DeclNameArgumentsSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclNameArgumentsSyntax DeclNameArgumentsSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclNameArgumentsSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void IdentifierExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier, tok::kw_self, tok::kw_Self, tok::dollarident, tok::oper_binary_spaced);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax IdentifierExprSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IdentifierExprSyntax IdentifierExprSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IdentifierExprSyntax>(raw, Cursor::Identifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<DeclNameArgumentsSyntax> IdentifierExprSyntax::getDeclNameArguments() {
  auto ChildData = Data->getChild(Cursor::DeclNameArguments);
  if (!ChildData)
    return llvm::None;
  return DeclNameArgumentsSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IdentifierExprSyntax IdentifierExprSyntax::withDeclNameArguments(
  llvm::Optional<DeclNameArgumentsSyntax> NewDeclNameArgumentsSyntax) {
  RC<RawSyntax> raw;
  if (NewDeclNameArgumentsSyntax.hasValue()) {
    raw = NewDeclNameArgumentsSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IdentifierExprSyntax>(raw, Cursor::DeclNameArguments);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SuperRefExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, SuperKeyword, tok::kw_super);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SuperRefExprSyntax::getSuperKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::SuperKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SuperRefExprSyntax SuperRefExprSyntax::withSuperKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_super, OwnedString::makeUnowned("super"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SuperRefExprSyntax>(raw, Cursor::SuperKeyword);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void NilLiteralExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, NilKeyword, tok::kw_nil);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax NilLiteralExprSyntax::getNilKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::NilKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

NilLiteralExprSyntax NilLiteralExprSyntax::withNilKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_nil, OwnedString::makeUnowned("nil"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<NilLiteralExprSyntax>(raw, Cursor::NilKeyword);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DiscardAssignmentExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Wildcard, tok::kw__);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DiscardAssignmentExprSyntax::getWildcard() {
  return TokenSyntax {Root, Data->getChild(Cursor::Wildcard).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DiscardAssignmentExprSyntax DiscardAssignmentExprSyntax::withWildcard(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw__, OwnedString::makeUnowned("_"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DiscardAssignmentExprSyntax>(raw, Cursor::Wildcard);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AssignmentExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, AssignToken, tok::equal);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AssignmentExprSyntax::getAssignToken() {
  return TokenSyntax {Root, Data->getChild(Cursor::AssignToken).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AssignmentExprSyntax AssignmentExprSyntax::withAssignToken(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::equal, OwnedString::makeUnowned("="));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AssignmentExprSyntax>(raw, Cursor::AssignToken);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SequenceExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprListSyntax SequenceExprSyntax::getElements() {
  return ExprListSyntax {Root, Data->getChild(Cursor::Elements).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
SequenceExprSyntax SequenceExprSyntax::addElement(ExprSyntax Element) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Elements);
  if (raw)
    raw = raw->append(Element.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ExprList,
                          {Element.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<SequenceExprSyntax>(raw, Cursor::Elements);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SequenceExprSyntax SequenceExprSyntax::withElements(
  llvm::Optional<ExprListSyntax> NewExprListSyntax) {
  RC<RawSyntax> raw;
  if (NewExprListSyntax.hasValue()) {
    raw = NewExprListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::ExprList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SequenceExprSyntax>(raw, Cursor::Elements);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PoundLineExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundLine, tok::pound_line);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundLineExprSyntax::getPoundLine() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundLine).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundLineExprSyntax PoundLineExprSyntax::withPoundLine(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_line, OwnedString::makeUnowned("#line"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundLineExprSyntax>(raw, Cursor::PoundLine);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PoundFileExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundFile, tok::pound_file);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundFileExprSyntax::getPoundFile() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundFile).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundFileExprSyntax PoundFileExprSyntax::withPoundFile(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_file, OwnedString::makeUnowned("#file"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundFileExprSyntax>(raw, Cursor::PoundFile);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PoundFunctionExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundFunction, tok::pound_function);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundFunctionExprSyntax::getPoundFunction() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundFunction).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundFunctionExprSyntax PoundFunctionExprSyntax::withPoundFunction(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_function, OwnedString::makeUnowned("#function"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundFunctionExprSyntax>(raw, Cursor::PoundFunction);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PoundDsohandleExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundDsohandle, tok::pound_dsohandle);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundDsohandleExprSyntax::getPoundDsohandle() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundDsohandle).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundDsohandleExprSyntax PoundDsohandleExprSyntax::withPoundDsohandle(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_dsohandle, OwnedString::makeUnowned("#dsohandle"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundDsohandleExprSyntax>(raw, Cursor::PoundDsohandle);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SymbolicReferenceExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SymbolicReferenceExprSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SymbolicReferenceExprSyntax SymbolicReferenceExprSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SymbolicReferenceExprSyntax>(raw, Cursor::Identifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericArgumentClauseSyntax> SymbolicReferenceExprSyntax::getGenericArgumentClause() {
  auto ChildData = Data->getChild(Cursor::GenericArgumentClause);
  if (!ChildData)
    return llvm::None;
  return GenericArgumentClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SymbolicReferenceExprSyntax SymbolicReferenceExprSyntax::withGenericArgumentClause(
  llvm::Optional<GenericArgumentClauseSyntax> NewGenericArgumentClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericArgumentClauseSyntax.hasValue()) {
    raw = NewGenericArgumentClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SymbolicReferenceExprSyntax>(raw, Cursor::GenericArgumentClause);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PrefixOperatorExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, OperatorToken, tok::oper_prefix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> PrefixOperatorExprSyntax::getOperatorToken() {
  auto ChildData = Data->getChild(Cursor::OperatorToken);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrefixOperatorExprSyntax PrefixOperatorExprSyntax::withOperatorToken(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrefixOperatorExprSyntax>(raw, Cursor::OperatorToken);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax PrefixOperatorExprSyntax::getPostfixExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::PostfixExpression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrefixOperatorExprSyntax PrefixOperatorExprSyntax::withPostfixExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrefixOperatorExprSyntax>(raw, Cursor::PostfixExpression);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void BinaryOperatorExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax BinaryOperatorExprSyntax::getOperatorToken() {
  return TokenSyntax {Root, Data->getChild(Cursor::OperatorToken).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

BinaryOperatorExprSyntax BinaryOperatorExprSyntax::withOperatorToken(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<BinaryOperatorExprSyntax>(raw, Cursor::OperatorToken);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ArrowExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ThrowsToken, tok::kw_throws);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ArrowToken, tok::arrow);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ArrowExprSyntax::getThrowsToken() {
  auto ChildData = Data->getChild(Cursor::ThrowsToken);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ArrowExprSyntax ArrowExprSyntax::withThrowsToken(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ArrowExprSyntax>(raw, Cursor::ThrowsToken);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ArrowExprSyntax::getArrowToken() {
  return TokenSyntax {Root, Data->getChild(Cursor::ArrowToken).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ArrowExprSyntax ArrowExprSyntax::withArrowToken(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::arrow, OwnedString::makeUnowned("->"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ArrowExprSyntax>(raw, Cursor::ArrowToken);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void FloatLiteralExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, FloatingDigits, tok::floating_literal);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax FloatLiteralExprSyntax::getFloatingDigits() {
  return TokenSyntax {Root, Data->getChild(Cursor::FloatingDigits).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FloatLiteralExprSyntax FloatLiteralExprSyntax::withFloatingDigits(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::floating_literal, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FloatLiteralExprSyntax>(raw, Cursor::FloatingDigits);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TupleExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TupleExprSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleExprSyntax TupleExprSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleExprSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TupleElementListSyntax TupleExprSyntax::getElementList() {
  return TupleElementListSyntax {Root, Data->getChild(Cursor::ElementList).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TupleExprSyntax TupleExprSyntax::addElement(TupleElementSyntax Element) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::ElementList);
  if (raw)
    raw = raw->append(Element.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::TupleElementList,
                          {Element.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<TupleExprSyntax>(raw, Cursor::ElementList);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleExprSyntax TupleExprSyntax::withElementList(
  llvm::Optional<TupleElementListSyntax> NewTupleElementListSyntax) {
  RC<RawSyntax> raw;
  if (NewTupleElementListSyntax.hasValue()) {
    raw = NewTupleElementListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::TupleElementList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleExprSyntax>(raw, Cursor::ElementList);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TupleExprSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleExprSyntax TupleExprSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleExprSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ArrayExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftSquare, tok::l_square);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightSquare, tok::r_square);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ArrayExprSyntax::getLeftSquare() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftSquare).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ArrayExprSyntax ArrayExprSyntax::withLeftSquare(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ArrayExprSyntax>(raw, Cursor::LeftSquare);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ArrayElementListSyntax ArrayExprSyntax::getElements() {
  return ArrayElementListSyntax {Root, Data->getChild(Cursor::Elements).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ArrayExprSyntax ArrayExprSyntax::addElement(ArrayElementSyntax Element) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Elements);
  if (raw)
    raw = raw->append(Element.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ArrayElementList,
                          {Element.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ArrayExprSyntax>(raw, Cursor::Elements);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ArrayExprSyntax ArrayExprSyntax::withElements(
  llvm::Optional<ArrayElementListSyntax> NewArrayElementListSyntax) {
  RC<RawSyntax> raw;
  if (NewArrayElementListSyntax.hasValue()) {
    raw = NewArrayElementListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::ArrayElementList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ArrayExprSyntax>(raw, Cursor::Elements);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ArrayExprSyntax::getRightSquare() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightSquare).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ArrayExprSyntax ArrayExprSyntax::withRightSquare(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ArrayExprSyntax>(raw, Cursor::RightSquare);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DictionaryExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftSquare, tok::l_square);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Content))
    assert([](const RC<RawSyntax> &Raw) {
 // check Content
return [](const RC<RawSyntax> &Raw) {
 // check Colon
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::colon;
}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Elements
return DictionaryElementListSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightSquare, tok::r_square);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DictionaryExprSyntax::getLeftSquare() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftSquare).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryExprSyntax DictionaryExprSyntax::withLeftSquare(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryExprSyntax>(raw, Cursor::LeftSquare);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax DictionaryExprSyntax::getContent() {
  return Syntax {Root, Data->getChild(Cursor::Content).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryExprSyntax DictionaryExprSyntax::withContent(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryExprSyntax>(raw, Cursor::Content);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DictionaryExprSyntax::getRightSquare() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightSquare).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryExprSyntax DictionaryExprSyntax::withRightSquare(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryExprSyntax>(raw, Cursor::RightSquare);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void FunctionCallArgumentSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Label, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionCallArgumentSyntax::getLabel() {
  auto ChildData = Data->getChild(Cursor::Label);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionCallArgumentSyntax FunctionCallArgumentSyntax::withLabel(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionCallArgumentSyntax>(raw, Cursor::Label);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionCallArgumentSyntax::getColon() {
  auto ChildData = Data->getChild(Cursor::Colon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionCallArgumentSyntax FunctionCallArgumentSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionCallArgumentSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax FunctionCallArgumentSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionCallArgumentSyntax FunctionCallArgumentSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionCallArgumentSyntax>(raw, Cursor::Expression);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionCallArgumentSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionCallArgumentSyntax FunctionCallArgumentSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionCallArgumentSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TupleElementSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Label, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TupleElementSyntax::getLabel() {
  auto ChildData = Data->getChild(Cursor::Label);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleElementSyntax TupleElementSyntax::withLabel(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleElementSyntax>(raw, Cursor::Label);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TupleElementSyntax::getColon() {
  auto ChildData = Data->getChild(Cursor::Colon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleElementSyntax TupleElementSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleElementSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax TupleElementSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleElementSyntax TupleElementSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleElementSyntax>(raw, Cursor::Expression);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TupleElementSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleElementSyntax TupleElementSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleElementSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ArrayElementSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax ArrayElementSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ArrayElementSyntax ArrayElementSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ArrayElementSyntax>(raw, Cursor::Expression);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ArrayElementSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ArrayElementSyntax ArrayElementSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ArrayElementSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DictionaryElementSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax DictionaryElementSyntax::getKeyExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::KeyExpression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryElementSyntax DictionaryElementSyntax::withKeyExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryElementSyntax>(raw, Cursor::KeyExpression);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DictionaryElementSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryElementSyntax DictionaryElementSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryElementSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax DictionaryElementSyntax::getValueExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::ValueExpression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryElementSyntax DictionaryElementSyntax::withValueExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryElementSyntax>(raw, Cursor::ValueExpression);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> DictionaryElementSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryElementSyntax DictionaryElementSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryElementSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void IntegerLiteralExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Digits, tok::integer_literal);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax IntegerLiteralExprSyntax::getDigits() {
  return TokenSyntax {Root, Data->getChild(Cursor::Digits).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IntegerLiteralExprSyntax IntegerLiteralExprSyntax::withDigits(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::integer_literal, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IntegerLiteralExprSyntax>(raw, Cursor::Digits);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void BooleanLiteralExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, BooleanLiteral, tok::kw_true, tok::kw_false);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax BooleanLiteralExprSyntax::getBooleanLiteral() {
  return TokenSyntax {Root, Data->getChild(Cursor::BooleanLiteral).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

BooleanLiteralExprSyntax BooleanLiteralExprSyntax::withBooleanLiteral(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_true, OwnedString::makeUnowned("true"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<BooleanLiteralExprSyntax>(raw, Cursor::BooleanLiteral);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TernaryExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, QuestionMark, tok::question_infix);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ColonMark, tok::colon);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax TernaryExprSyntax::getConditionExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::ConditionExpression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TernaryExprSyntax TernaryExprSyntax::withConditionExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TernaryExprSyntax>(raw, Cursor::ConditionExpression);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TernaryExprSyntax::getQuestionMark() {
  return TokenSyntax {Root, Data->getChild(Cursor::QuestionMark).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TernaryExprSyntax TernaryExprSyntax::withQuestionMark(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::question_infix, OwnedString::makeUnowned("?"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TernaryExprSyntax>(raw, Cursor::QuestionMark);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax TernaryExprSyntax::getFirstChoice() {
  return ExprSyntax {Root, Data->getChild(Cursor::FirstChoice).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TernaryExprSyntax TernaryExprSyntax::withFirstChoice(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TernaryExprSyntax>(raw, Cursor::FirstChoice);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TernaryExprSyntax::getColonMark() {
  return TokenSyntax {Root, Data->getChild(Cursor::ColonMark).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TernaryExprSyntax TernaryExprSyntax::withColonMark(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TernaryExprSyntax>(raw, Cursor::ColonMark);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax TernaryExprSyntax::getSecondChoice() {
  return ExprSyntax {Root, Data->getChild(Cursor::SecondChoice).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TernaryExprSyntax TernaryExprSyntax::withSecondChoice(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TernaryExprSyntax>(raw, Cursor::SecondChoice);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void MemberAccessExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Dot, tok::period, tok::period_prefix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ExprSyntax> MemberAccessExprSyntax::getBase() {
  auto ChildData = Data->getChild(Cursor::Base);
  if (!ChildData)
    return llvm::None;
  return ExprSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberAccessExprSyntax MemberAccessExprSyntax::withBase(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberAccessExprSyntax>(raw, Cursor::Base);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax MemberAccessExprSyntax::getDot() {
  return TokenSyntax {Root, Data->getChild(Cursor::Dot).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberAccessExprSyntax MemberAccessExprSyntax::withDot(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::period, OwnedString::makeUnowned("."));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberAccessExprSyntax>(raw, Cursor::Dot);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax MemberAccessExprSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberAccessExprSyntax MemberAccessExprSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberAccessExprSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<DeclNameArgumentsSyntax> MemberAccessExprSyntax::getDeclNameArguments() {
  auto ChildData = Data->getChild(Cursor::DeclNameArguments);
  if (!ChildData)
    return llvm::None;
  return DeclNameArgumentsSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberAccessExprSyntax MemberAccessExprSyntax::withDeclNameArguments(
  llvm::Optional<DeclNameArgumentsSyntax> NewDeclNameArgumentsSyntax) {
  RC<RawSyntax> raw;
  if (NewDeclNameArgumentsSyntax.hasValue()) {
    raw = NewDeclNameArgumentsSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberAccessExprSyntax>(raw, Cursor::DeclNameArguments);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void IsExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, IsTok, tok::kw_is);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax IsExprSyntax::getIsTok() {
  return TokenSyntax {Root, Data->getChild(Cursor::IsTok).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IsExprSyntax IsExprSyntax::withIsTok(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_is, OwnedString::makeUnowned("is"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IsExprSyntax>(raw, Cursor::IsTok);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax IsExprSyntax::getTypeName() {
  return TypeSyntax {Root, Data->getChild(Cursor::TypeName).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IsExprSyntax IsExprSyntax::withTypeName(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IsExprSyntax>(raw, Cursor::TypeName);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AsExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, AsTok, tok::kw_as);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, QuestionOrExclamationMark, tok::question_postfix, tok::exclaim_postfix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AsExprSyntax::getAsTok() {
  return TokenSyntax {Root, Data->getChild(Cursor::AsTok).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AsExprSyntax AsExprSyntax::withAsTok(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_as, OwnedString::makeUnowned("as"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AsExprSyntax>(raw, Cursor::AsTok);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> AsExprSyntax::getQuestionOrExclamationMark() {
  auto ChildData = Data->getChild(Cursor::QuestionOrExclamationMark);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AsExprSyntax AsExprSyntax::withQuestionOrExclamationMark(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AsExprSyntax>(raw, Cursor::QuestionOrExclamationMark);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax AsExprSyntax::getTypeName() {
  return TypeSyntax {Root, Data->getChild(Cursor::TypeName).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AsExprSyntax AsExprSyntax::withTypeName(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AsExprSyntax>(raw, Cursor::TypeName);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TypeExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax TypeExprSyntax::getType() {
  return TypeSyntax {Root, Data->getChild(Cursor::Type).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypeExprSyntax TypeExprSyntax::withType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypeExprSyntax>(raw, Cursor::Type);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ClosureCaptureItemSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, AssignToken, tok::equal);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenListSyntax> ClosureCaptureItemSyntax::getSpecifier() {
  auto ChildData = Data->getChild(Cursor::Specifier);
  if (!ChildData)
    return llvm::None;
  return TokenListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ClosureCaptureItemSyntax ClosureCaptureItemSyntax::addSpecifierToken(TokenSyntax SpecifierToken) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Specifier);
  if (raw)
    raw = raw->append(SpecifierToken.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::TokenList,
                          {SpecifierToken.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ClosureCaptureItemSyntax>(raw, Cursor::Specifier);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureCaptureItemSyntax ClosureCaptureItemSyntax::withSpecifier(
  llvm::Optional<TokenListSyntax> NewTokenListSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenListSyntax.hasValue()) {
    raw = NewTokenListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureCaptureItemSyntax>(raw, Cursor::Specifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ClosureCaptureItemSyntax::getName() {
  auto ChildData = Data->getChild(Cursor::Name);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureCaptureItemSyntax ClosureCaptureItemSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureCaptureItemSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ClosureCaptureItemSyntax::getAssignToken() {
  auto ChildData = Data->getChild(Cursor::AssignToken);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureCaptureItemSyntax ClosureCaptureItemSyntax::withAssignToken(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureCaptureItemSyntax>(raw, Cursor::AssignToken);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax ClosureCaptureItemSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureCaptureItemSyntax ClosureCaptureItemSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureCaptureItemSyntax>(raw, Cursor::Expression);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ClosureCaptureItemSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureCaptureItemSyntax ClosureCaptureItemSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureCaptureItemSyntax>(raw, Cursor::TrailingComma);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ClosureCaptureSignatureSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftSquare, tok::l_square);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightSquare, tok::r_square);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ClosureCaptureSignatureSyntax::getLeftSquare() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftSquare).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureCaptureSignatureSyntax ClosureCaptureSignatureSyntax::withLeftSquare(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureCaptureSignatureSyntax>(raw, Cursor::LeftSquare);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ClosureCaptureItemListSyntax> ClosureCaptureSignatureSyntax::getItems() {
  auto ChildData = Data->getChild(Cursor::Items);
  if (!ChildData)
    return llvm::None;
  return ClosureCaptureItemListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ClosureCaptureSignatureSyntax ClosureCaptureSignatureSyntax::addItem(ClosureCaptureItemSyntax Item) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Items);
  if (raw)
    raw = raw->append(Item.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ClosureCaptureItemList,
                          {Item.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ClosureCaptureSignatureSyntax>(raw, Cursor::Items);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureCaptureSignatureSyntax ClosureCaptureSignatureSyntax::withItems(
  llvm::Optional<ClosureCaptureItemListSyntax> NewClosureCaptureItemListSyntax) {
  RC<RawSyntax> raw;
  if (NewClosureCaptureItemListSyntax.hasValue()) {
    raw = NewClosureCaptureItemListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureCaptureSignatureSyntax>(raw, Cursor::Items);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ClosureCaptureSignatureSyntax::getRightSquare() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightSquare).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureCaptureSignatureSyntax ClosureCaptureSignatureSyntax::withRightSquare(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureCaptureSignatureSyntax>(raw, Cursor::RightSquare);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ClosureParamSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier, tok::kw__);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ClosureParamSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureParamSyntax ClosureParamSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureParamSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ClosureParamSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureParamSyntax ClosureParamSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureParamSyntax>(raw, Cursor::TrailingComma);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ClosureSignatureSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Input))
    assert([](const RC<RawSyntax> &Raw) {
 // check Input
return [](const RC<RawSyntax> &Raw) {
 // check SimpleInput
return ClosureParamListSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Input
return ParameterClauseSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ThrowsTok, tok::kw_throws);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, InTok, tok::kw_in);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ClosureCaptureSignatureSyntax> ClosureSignatureSyntax::getCapture() {
  auto ChildData = Data->getChild(Cursor::Capture);
  if (!ChildData)
    return llvm::None;
  return ClosureCaptureSignatureSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureSignatureSyntax ClosureSignatureSyntax::withCapture(
  llvm::Optional<ClosureCaptureSignatureSyntax> NewClosureCaptureSignatureSyntax) {
  RC<RawSyntax> raw;
  if (NewClosureCaptureSignatureSyntax.hasValue()) {
    raw = NewClosureCaptureSignatureSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureSignatureSyntax>(raw, Cursor::Capture);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<Syntax> ClosureSignatureSyntax::getInput() {
  auto ChildData = Data->getChild(Cursor::Input);
  if (!ChildData)
    return llvm::None;
  return Syntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureSignatureSyntax ClosureSignatureSyntax::withInput(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureSignatureSyntax>(raw, Cursor::Input);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ClosureSignatureSyntax::getThrowsTok() {
  auto ChildData = Data->getChild(Cursor::ThrowsTok);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureSignatureSyntax ClosureSignatureSyntax::withThrowsTok(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureSignatureSyntax>(raw, Cursor::ThrowsTok);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ReturnClauseSyntax> ClosureSignatureSyntax::getOutput() {
  auto ChildData = Data->getChild(Cursor::Output);
  if (!ChildData)
    return llvm::None;
  return ReturnClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureSignatureSyntax ClosureSignatureSyntax::withOutput(
  llvm::Optional<ReturnClauseSyntax> NewReturnClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewReturnClauseSyntax.hasValue()) {
    raw = NewReturnClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureSignatureSyntax>(raw, Cursor::Output);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ClosureSignatureSyntax::getInTok() {
  return TokenSyntax {Root, Data->getChild(Cursor::InTok).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureSignatureSyntax ClosureSignatureSyntax::withInTok(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_in, OwnedString::makeUnowned("in"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureSignatureSyntax>(raw, Cursor::InTok);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ClosureExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftBrace, tok::l_brace);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightBrace, tok::r_brace);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ClosureExprSyntax::getLeftBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureExprSyntax ClosureExprSyntax::withLeftBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureExprSyntax>(raw, Cursor::LeftBrace);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ClosureSignatureSyntax> ClosureExprSyntax::getSignature() {
  auto ChildData = Data->getChild(Cursor::Signature);
  if (!ChildData)
    return llvm::None;
  return ClosureSignatureSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureExprSyntax ClosureExprSyntax::withSignature(
  llvm::Optional<ClosureSignatureSyntax> NewClosureSignatureSyntax) {
  RC<RawSyntax> raw;
  if (NewClosureSignatureSyntax.hasValue()) {
    raw = NewClosureSignatureSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureExprSyntax>(raw, Cursor::Signature);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockItemListSyntax ClosureExprSyntax::getStatements() {
  return CodeBlockItemListSyntax {Root, Data->getChild(Cursor::Statements).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ClosureExprSyntax ClosureExprSyntax::addStatement(CodeBlockItemSyntax Statement) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Statements);
  if (raw)
    raw = raw->append(Statement.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::CodeBlockItemList,
                          {Statement.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ClosureExprSyntax>(raw, Cursor::Statements);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureExprSyntax ClosureExprSyntax::withStatements(
  llvm::Optional<CodeBlockItemListSyntax> NewCodeBlockItemListSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockItemListSyntax.hasValue()) {
    raw = NewCodeBlockItemListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlockItemList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureExprSyntax>(raw, Cursor::Statements);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ClosureExprSyntax::getRightBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClosureExprSyntax ClosureExprSyntax::withRightBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClosureExprSyntax>(raw, Cursor::RightBrace);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void UnresolvedPatternExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PatternSyntax UnresolvedPatternExprSyntax::getPattern() {
  return PatternSyntax {Root, Data->getChild(Cursor::Pattern).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

UnresolvedPatternExprSyntax UnresolvedPatternExprSyntax::withPattern(
  llvm::Optional<PatternSyntax> NewPatternSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternSyntax.hasValue()) {
    raw = NewPatternSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Pattern);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<UnresolvedPatternExprSyntax>(raw, Cursor::Pattern);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void FunctionCallExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax FunctionCallExprSyntax::getCalledExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::CalledExpression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionCallExprSyntax FunctionCallExprSyntax::withCalledExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionCallExprSyntax>(raw, Cursor::CalledExpression);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionCallExprSyntax::getLeftParen() {
  auto ChildData = Data->getChild(Cursor::LeftParen);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionCallExprSyntax FunctionCallExprSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionCallExprSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
FunctionCallArgumentListSyntax FunctionCallExprSyntax::getArgumentList() {
  return FunctionCallArgumentListSyntax {Root, Data->getChild(Cursor::ArgumentList).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
FunctionCallExprSyntax FunctionCallExprSyntax::addArgument(FunctionCallArgumentSyntax Argument) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::ArgumentList);
  if (raw)
    raw = raw->append(Argument.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::FunctionCallArgumentList,
                          {Argument.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<FunctionCallExprSyntax>(raw, Cursor::ArgumentList);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionCallExprSyntax FunctionCallExprSyntax::withArgumentList(
  llvm::Optional<FunctionCallArgumentListSyntax> NewFunctionCallArgumentListSyntax) {
  RC<RawSyntax> raw;
  if (NewFunctionCallArgumentListSyntax.hasValue()) {
    raw = NewFunctionCallArgumentListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::FunctionCallArgumentList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionCallExprSyntax>(raw, Cursor::ArgumentList);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionCallExprSyntax::getRightParen() {
  auto ChildData = Data->getChild(Cursor::RightParen);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionCallExprSyntax FunctionCallExprSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionCallExprSyntax>(raw, Cursor::RightParen);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ClosureExprSyntax> FunctionCallExprSyntax::getTrailingClosure() {
  auto ChildData = Data->getChild(Cursor::TrailingClosure);
  if (!ChildData)
    return llvm::None;
  return ClosureExprSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionCallExprSyntax FunctionCallExprSyntax::withTrailingClosure(
  llvm::Optional<ClosureExprSyntax> NewClosureExprSyntax) {
  RC<RawSyntax> raw;
  if (NewClosureExprSyntax.hasValue()) {
    raw = NewClosureExprSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionCallExprSyntax>(raw, Cursor::TrailingClosure);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SubscriptExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftBracket, tok::l_square);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightBracket, tok::r_square);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax SubscriptExprSyntax::getCalledExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::CalledExpression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptExprSyntax SubscriptExprSyntax::withCalledExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptExprSyntax>(raw, Cursor::CalledExpression);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SubscriptExprSyntax::getLeftBracket() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftBracket).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptExprSyntax SubscriptExprSyntax::withLeftBracket(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptExprSyntax>(raw, Cursor::LeftBracket);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
FunctionCallArgumentListSyntax SubscriptExprSyntax::getArgumentList() {
  return FunctionCallArgumentListSyntax {Root, Data->getChild(Cursor::ArgumentList).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
SubscriptExprSyntax SubscriptExprSyntax::addArgument(FunctionCallArgumentSyntax Argument) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::ArgumentList);
  if (raw)
    raw = raw->append(Argument.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::FunctionCallArgumentList,
                          {Argument.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<SubscriptExprSyntax>(raw, Cursor::ArgumentList);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptExprSyntax SubscriptExprSyntax::withArgumentList(
  llvm::Optional<FunctionCallArgumentListSyntax> NewFunctionCallArgumentListSyntax) {
  RC<RawSyntax> raw;
  if (NewFunctionCallArgumentListSyntax.hasValue()) {
    raw = NewFunctionCallArgumentListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::FunctionCallArgumentList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptExprSyntax>(raw, Cursor::ArgumentList);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SubscriptExprSyntax::getRightBracket() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightBracket).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptExprSyntax SubscriptExprSyntax::withRightBracket(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptExprSyntax>(raw, Cursor::RightBracket);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ClosureExprSyntax> SubscriptExprSyntax::getTrailingClosure() {
  auto ChildData = Data->getChild(Cursor::TrailingClosure);
  if (!ChildData)
    return llvm::None;
  return ClosureExprSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptExprSyntax SubscriptExprSyntax::withTrailingClosure(
  llvm::Optional<ClosureExprSyntax> NewClosureExprSyntax) {
  RC<RawSyntax> raw;
  if (NewClosureExprSyntax.hasValue()) {
    raw = NewClosureExprSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptExprSyntax>(raw, Cursor::TrailingClosure);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void OptionalChainingExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, QuestionMark, tok::question_postfix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax OptionalChainingExprSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OptionalChainingExprSyntax OptionalChainingExprSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OptionalChainingExprSyntax>(raw, Cursor::Expression);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax OptionalChainingExprSyntax::getQuestionMark() {
  return TokenSyntax {Root, Data->getChild(Cursor::QuestionMark).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OptionalChainingExprSyntax OptionalChainingExprSyntax::withQuestionMark(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::question_postfix, OwnedString::makeUnowned("?"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OptionalChainingExprSyntax>(raw, Cursor::QuestionMark);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ForcedValueExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ExclamationMark, tok::exclaim_postfix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax ForcedValueExprSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForcedValueExprSyntax ForcedValueExprSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForcedValueExprSyntax>(raw, Cursor::Expression);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ForcedValueExprSyntax::getExclamationMark() {
  return TokenSyntax {Root, Data->getChild(Cursor::ExclamationMark).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForcedValueExprSyntax ForcedValueExprSyntax::withExclamationMark(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::exclaim_postfix, OwnedString::makeUnowned("!"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForcedValueExprSyntax>(raw, Cursor::ExclamationMark);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PostfixUnaryExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, OperatorToken, tok::oper_postfix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax PostfixUnaryExprSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PostfixUnaryExprSyntax PostfixUnaryExprSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PostfixUnaryExprSyntax>(raw, Cursor::Expression);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PostfixUnaryExprSyntax::getOperatorToken() {
  return TokenSyntax {Root, Data->getChild(Cursor::OperatorToken).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PostfixUnaryExprSyntax PostfixUnaryExprSyntax::withOperatorToken(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::oper_postfix, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PostfixUnaryExprSyntax>(raw, Cursor::OperatorToken);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SpecializeExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax SpecializeExprSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SpecializeExprSyntax SpecializeExprSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SpecializeExprSyntax>(raw, Cursor::Expression);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
GenericArgumentClauseSyntax SpecializeExprSyntax::getGenericArgumentClause() {
  return GenericArgumentClauseSyntax {Root, Data->getChild(Cursor::GenericArgumentClause).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SpecializeExprSyntax SpecializeExprSyntax::withGenericArgumentClause(
  llvm::Optional<GenericArgumentClauseSyntax> NewGenericArgumentClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericArgumentClauseSyntax.hasValue()) {
    raw = NewGenericArgumentClauseSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::GenericArgumentClause);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SpecializeExprSyntax>(raw, Cursor::GenericArgumentClause);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void StringSegmentSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Content, tok::string_segment);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax StringSegmentSyntax::getContent() {
  return TokenSyntax {Root, Data->getChild(Cursor::Content).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StringSegmentSyntax StringSegmentSyntax::withContent(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::string_segment, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StringSegmentSyntax>(raw, Cursor::Content);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ExpressionSegmentSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Backslash, tok::backslash);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Delimiter, tok::raw_string_delimiter);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::string_interpolation_anchor);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ExpressionSegmentSyntax::getBackslash() {
  return TokenSyntax {Root, Data->getChild(Cursor::Backslash).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExpressionSegmentSyntax ExpressionSegmentSyntax::withBackslash(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::backslash, OwnedString::makeUnowned("\\"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExpressionSegmentSyntax>(raw, Cursor::Backslash);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ExpressionSegmentSyntax::getDelimiter() {
  auto ChildData = Data->getChild(Cursor::Delimiter);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExpressionSegmentSyntax ExpressionSegmentSyntax::withDelimiter(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExpressionSegmentSyntax>(raw, Cursor::Delimiter);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ExpressionSegmentSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExpressionSegmentSyntax ExpressionSegmentSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExpressionSegmentSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
FunctionCallArgumentListSyntax ExpressionSegmentSyntax::getExpressions() {
  return FunctionCallArgumentListSyntax {Root, Data->getChild(Cursor::Expressions).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExpressionSegmentSyntax ExpressionSegmentSyntax::addExpression(FunctionCallArgumentSyntax Expression) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Expressions);
  if (raw)
    raw = raw->append(Expression.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::FunctionCallArgumentList,
                          {Expression.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ExpressionSegmentSyntax>(raw, Cursor::Expressions);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExpressionSegmentSyntax ExpressionSegmentSyntax::withExpressions(
  llvm::Optional<FunctionCallArgumentListSyntax> NewFunctionCallArgumentListSyntax) {
  RC<RawSyntax> raw;
  if (NewFunctionCallArgumentListSyntax.hasValue()) {
    raw = NewFunctionCallArgumentListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::FunctionCallArgumentList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExpressionSegmentSyntax>(raw, Cursor::Expressions);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ExpressionSegmentSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExpressionSegmentSyntax ExpressionSegmentSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::string_interpolation_anchor, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExpressionSegmentSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void StringLiteralExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, OpenDelimiter, tok::raw_string_delimiter);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, OpenQuote, tok::string_quote, tok::multiline_string_quote);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, CloseQuote, tok::string_quote, tok::multiline_string_quote);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, CloseDelimiter, tok::raw_string_delimiter);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> StringLiteralExprSyntax::getOpenDelimiter() {
  auto ChildData = Data->getChild(Cursor::OpenDelimiter);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StringLiteralExprSyntax StringLiteralExprSyntax::withOpenDelimiter(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StringLiteralExprSyntax>(raw, Cursor::OpenDelimiter);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax StringLiteralExprSyntax::getOpenQuote() {
  return TokenSyntax {Root, Data->getChild(Cursor::OpenQuote).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StringLiteralExprSyntax StringLiteralExprSyntax::withOpenQuote(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::string_quote, OwnedString::makeUnowned("\""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StringLiteralExprSyntax>(raw, Cursor::OpenQuote);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
StringLiteralSegmentsSyntax StringLiteralExprSyntax::getSegments() {
  return StringLiteralSegmentsSyntax {Root, Data->getChild(Cursor::Segments).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
StringLiteralExprSyntax StringLiteralExprSyntax::addSegment(Syntax Segment) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Segments);
  if (raw)
    raw = raw->append(Segment.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::StringLiteralSegments,
                          {Segment.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<StringLiteralExprSyntax>(raw, Cursor::Segments);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StringLiteralExprSyntax StringLiteralExprSyntax::withSegments(
  llvm::Optional<StringLiteralSegmentsSyntax> NewStringLiteralSegmentsSyntax) {
  RC<RawSyntax> raw;
  if (NewStringLiteralSegmentsSyntax.hasValue()) {
    raw = NewStringLiteralSegmentsSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::StringLiteralSegments);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StringLiteralExprSyntax>(raw, Cursor::Segments);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax StringLiteralExprSyntax::getCloseQuote() {
  return TokenSyntax {Root, Data->getChild(Cursor::CloseQuote).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StringLiteralExprSyntax StringLiteralExprSyntax::withCloseQuote(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::string_quote, OwnedString::makeUnowned("\""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StringLiteralExprSyntax>(raw, Cursor::CloseQuote);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> StringLiteralExprSyntax::getCloseDelimiter() {
  auto ChildData = Data->getChild(Cursor::CloseDelimiter);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StringLiteralExprSyntax StringLiteralExprSyntax::withCloseDelimiter(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StringLiteralExprSyntax>(raw, Cursor::CloseDelimiter);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void KeyPathExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Backslash, tok::backslash);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::RootExpr))
    assert([](const RC<RawSyntax> &Raw) {
 // check RootExpr
return [](const RC<RawSyntax> &Raw) {
 // check IdentifierExpr
return IdentifierExprSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check SpecializeExpr
return SpecializeExprSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax KeyPathExprSyntax::getBackslash() {
  return TokenSyntax {Root, Data->getChild(Cursor::Backslash).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

KeyPathExprSyntax KeyPathExprSyntax::withBackslash(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::backslash, OwnedString::makeUnowned("\\"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<KeyPathExprSyntax>(raw, Cursor::Backslash);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ExprSyntax> KeyPathExprSyntax::getRootExpr() {
  auto ChildData = Data->getChild(Cursor::RootExpr);
  if (!ChildData)
    return llvm::None;
  return ExprSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

KeyPathExprSyntax KeyPathExprSyntax::withRootExpr(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<KeyPathExprSyntax>(raw, Cursor::RootExpr);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax KeyPathExprSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

KeyPathExprSyntax KeyPathExprSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<KeyPathExprSyntax>(raw, Cursor::Expression);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void KeyPathBaseExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Period, tok::period);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax KeyPathBaseExprSyntax::getPeriod() {
  return TokenSyntax {Root, Data->getChild(Cursor::Period).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

KeyPathBaseExprSyntax KeyPathBaseExprSyntax::withPeriod(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::period, OwnedString::makeUnowned("."));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<KeyPathBaseExprSyntax>(raw, Cursor::Period);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ObjcNamePieceSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Dot, tok::period);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ObjcNamePieceSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcNamePieceSyntax ObjcNamePieceSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcNamePieceSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ObjcNamePieceSyntax::getDot() {
  auto ChildData = Data->getChild(Cursor::Dot);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcNamePieceSyntax ObjcNamePieceSyntax::withDot(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcNamePieceSyntax>(raw, Cursor::Dot);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ObjcKeyPathExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, KeyPath, tok::pound_keyPath);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ObjcKeyPathExprSyntax::getKeyPath() {
  return TokenSyntax {Root, Data->getChild(Cursor::KeyPath).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcKeyPathExprSyntax ObjcKeyPathExprSyntax::withKeyPath(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_keyPath, OwnedString::makeUnowned("#keyPath"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcKeyPathExprSyntax>(raw, Cursor::KeyPath);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ObjcKeyPathExprSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcKeyPathExprSyntax ObjcKeyPathExprSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcKeyPathExprSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ObjcNameSyntax ObjcKeyPathExprSyntax::getName() {
  return ObjcNameSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ObjcKeyPathExprSyntax ObjcKeyPathExprSyntax::addNamePiece(ObjcNamePieceSyntax NamePiece) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Name);
  if (raw)
    raw = raw->append(NamePiece.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ObjcName,
                          {NamePiece.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ObjcKeyPathExprSyntax>(raw, Cursor::Name);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcKeyPathExprSyntax ObjcKeyPathExprSyntax::withName(
  llvm::Optional<ObjcNameSyntax> NewObjcNameSyntax) {
  RC<RawSyntax> raw;
  if (NewObjcNameSyntax.hasValue()) {
    raw = NewObjcNameSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::ObjcName);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcKeyPathExprSyntax>(raw, Cursor::Name);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ObjcKeyPathExprSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcKeyPathExprSyntax ObjcKeyPathExprSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcKeyPathExprSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ObjcSelectorExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 6);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundSelector, tok::pound_selector);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Kind, tok::contextual_keyword);
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token_text(raw, Kind,
                                 tok::contextual_keyword, "getter", "setter");
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ObjcSelectorExprSyntax::getPoundSelector() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundSelector).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcSelectorExprSyntax ObjcSelectorExprSyntax::withPoundSelector(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_selector, OwnedString::makeUnowned("#selector"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcSelectorExprSyntax>(raw, Cursor::PoundSelector);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ObjcSelectorExprSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcSelectorExprSyntax ObjcSelectorExprSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcSelectorExprSyntax>(raw, Cursor::LeftParen);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ObjcSelectorExprSyntax::getKind() {
  auto ChildData = Data->getChild(Cursor::Kind);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcSelectorExprSyntax ObjcSelectorExprSyntax::withKind(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcSelectorExprSyntax>(raw, Cursor::Kind);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ObjcSelectorExprSyntax::getColon() {
  auto ChildData = Data->getChild(Cursor::Colon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcSelectorExprSyntax ObjcSelectorExprSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcSelectorExprSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax ObjcSelectorExprSyntax::getName() {
  return ExprSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcSelectorExprSyntax ObjcSelectorExprSyntax::withName(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcSelectorExprSyntax>(raw, Cursor::Name);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ObjcSelectorExprSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjcSelectorExprSyntax ObjcSelectorExprSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjcSelectorExprSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void EditorPlaceholderExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax EditorPlaceholderExprSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EditorPlaceholderExprSyntax EditorPlaceholderExprSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EditorPlaceholderExprSyntax>(raw, Cursor::Identifier);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ObjectLiteralExprSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::pound_colorLiteral, tok::pound_fileLiteral, tok::pound_imageLiteral);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ObjectLiteralExprSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjectLiteralExprSyntax ObjectLiteralExprSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_colorLiteral, OwnedString::makeUnowned("#colorLiteral"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjectLiteralExprSyntax>(raw, Cursor::Identifier);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ObjectLiteralExprSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjectLiteralExprSyntax ObjectLiteralExprSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjectLiteralExprSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
FunctionCallArgumentListSyntax ObjectLiteralExprSyntax::getArguments() {
  return FunctionCallArgumentListSyntax {Root, Data->getChild(Cursor::Arguments).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ObjectLiteralExprSyntax ObjectLiteralExprSyntax::addArgument(FunctionCallArgumentSyntax Argument) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Arguments);
  if (raw)
    raw = raw->append(Argument.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::FunctionCallArgumentList,
                          {Argument.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ObjectLiteralExprSyntax>(raw, Cursor::Arguments);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjectLiteralExprSyntax ObjectLiteralExprSyntax::withArguments(
  llvm::Optional<FunctionCallArgumentListSyntax> NewFunctionCallArgumentListSyntax) {
  RC<RawSyntax> raw;
  if (NewFunctionCallArgumentListSyntax.hasValue()) {
    raw = NewFunctionCallArgumentListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::FunctionCallArgumentList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjectLiteralExprSyntax>(raw, Cursor::Arguments);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ObjectLiteralExprSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjectLiteralExprSyntax ObjectLiteralExprSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjectLiteralExprSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TypeInitializerClauseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Equal, tok::equal);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TypeInitializerClauseSyntax::getEqual() {
  return TokenSyntax {Root, Data->getChild(Cursor::Equal).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypeInitializerClauseSyntax TypeInitializerClauseSyntax::withEqual(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::equal, OwnedString::makeUnowned("="));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypeInitializerClauseSyntax>(raw, Cursor::Equal);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax TypeInitializerClauseSyntax::getValue() {
  return TypeSyntax {Root, Data->getChild(Cursor::Value).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypeInitializerClauseSyntax TypeInitializerClauseSyntax::withValue(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypeInitializerClauseSyntax>(raw, Cursor::Value);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TypealiasDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 7);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TypealiasKeyword, tok::kw_typealias);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> TypealiasDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypealiasDeclSyntax TypealiasDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<TypealiasDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypealiasDeclSyntax TypealiasDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypealiasDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> TypealiasDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypealiasDeclSyntax TypealiasDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<TypealiasDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypealiasDeclSyntax TypealiasDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypealiasDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TypealiasDeclSyntax::getTypealiasKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::TypealiasKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypealiasDeclSyntax TypealiasDeclSyntax::withTypealiasKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_typealias, OwnedString::makeUnowned("typealias"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypealiasDeclSyntax>(raw, Cursor::TypealiasKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TypealiasDeclSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypealiasDeclSyntax TypealiasDeclSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypealiasDeclSyntax>(raw, Cursor::Identifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericParameterClauseSyntax> TypealiasDeclSyntax::getGenericParameterClause() {
  auto ChildData = Data->getChild(Cursor::GenericParameterClause);
  if (!ChildData)
    return llvm::None;
  return GenericParameterClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypealiasDeclSyntax TypealiasDeclSyntax::withGenericParameterClause(
  llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericParameterClauseSyntax.hasValue()) {
    raw = NewGenericParameterClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypealiasDeclSyntax>(raw, Cursor::GenericParameterClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeInitializerClauseSyntax> TypealiasDeclSyntax::getInitializer() {
  auto ChildData = Data->getChild(Cursor::Initializer);
  if (!ChildData)
    return llvm::None;
  return TypeInitializerClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypealiasDeclSyntax TypealiasDeclSyntax::withInitializer(
  llvm::Optional<TypeInitializerClauseSyntax> NewTypeInitializerClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeInitializerClauseSyntax.hasValue()) {
    raw = NewTypeInitializerClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypealiasDeclSyntax>(raw, Cursor::Initializer);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericWhereClauseSyntax> TypealiasDeclSyntax::getGenericWhereClause() {
  auto ChildData = Data->getChild(Cursor::GenericWhereClause);
  if (!ChildData)
    return llvm::None;
  return GenericWhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypealiasDeclSyntax TypealiasDeclSyntax::withGenericWhereClause(
  llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericWhereClauseSyntax.hasValue()) {
    raw = NewGenericWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypealiasDeclSyntax>(raw, Cursor::GenericWhereClause);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AssociatedtypeDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 7);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, AssociatedtypeKeyword, tok::kw_associatedtype);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> AssociatedtypeDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
AssociatedtypeDeclSyntax AssociatedtypeDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<AssociatedtypeDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AssociatedtypeDeclSyntax AssociatedtypeDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AssociatedtypeDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> AssociatedtypeDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
AssociatedtypeDeclSyntax AssociatedtypeDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<AssociatedtypeDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AssociatedtypeDeclSyntax AssociatedtypeDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AssociatedtypeDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AssociatedtypeDeclSyntax::getAssociatedtypeKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::AssociatedtypeKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AssociatedtypeDeclSyntax AssociatedtypeDeclSyntax::withAssociatedtypeKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_associatedtype, OwnedString::makeUnowned("associatedtype"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AssociatedtypeDeclSyntax>(raw, Cursor::AssociatedtypeKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AssociatedtypeDeclSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AssociatedtypeDeclSyntax AssociatedtypeDeclSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AssociatedtypeDeclSyntax>(raw, Cursor::Identifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeInheritanceClauseSyntax> AssociatedtypeDeclSyntax::getInheritanceClause() {
  auto ChildData = Data->getChild(Cursor::InheritanceClause);
  if (!ChildData)
    return llvm::None;
  return TypeInheritanceClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AssociatedtypeDeclSyntax AssociatedtypeDeclSyntax::withInheritanceClause(
  llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeInheritanceClauseSyntax.hasValue()) {
    raw = NewTypeInheritanceClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AssociatedtypeDeclSyntax>(raw, Cursor::InheritanceClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeInitializerClauseSyntax> AssociatedtypeDeclSyntax::getInitializer() {
  auto ChildData = Data->getChild(Cursor::Initializer);
  if (!ChildData)
    return llvm::None;
  return TypeInitializerClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AssociatedtypeDeclSyntax AssociatedtypeDeclSyntax::withInitializer(
  llvm::Optional<TypeInitializerClauseSyntax> NewTypeInitializerClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeInitializerClauseSyntax.hasValue()) {
    raw = NewTypeInitializerClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AssociatedtypeDeclSyntax>(raw, Cursor::Initializer);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericWhereClauseSyntax> AssociatedtypeDeclSyntax::getGenericWhereClause() {
  auto ChildData = Data->getChild(Cursor::GenericWhereClause);
  if (!ChildData)
    return llvm::None;
  return GenericWhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AssociatedtypeDeclSyntax AssociatedtypeDeclSyntax::withGenericWhereClause(
  llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericWhereClauseSyntax.hasValue()) {
    raw = NewGenericWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AssociatedtypeDeclSyntax>(raw, Cursor::GenericWhereClause);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ParameterClauseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ParameterClauseSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ParameterClauseSyntax ParameterClauseSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ParameterClauseSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
FunctionParameterListSyntax ParameterClauseSyntax::getParameterList() {
  return FunctionParameterListSyntax {Root, Data->getChild(Cursor::ParameterList).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ParameterClauseSyntax ParameterClauseSyntax::addParameter(FunctionParameterSyntax Parameter) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::ParameterList);
  if (raw)
    raw = raw->append(Parameter.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::FunctionParameterList,
                          {Parameter.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ParameterClauseSyntax>(raw, Cursor::ParameterList);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ParameterClauseSyntax ParameterClauseSyntax::withParameterList(
  llvm::Optional<FunctionParameterListSyntax> NewFunctionParameterListSyntax) {
  RC<RawSyntax> raw;
  if (NewFunctionParameterListSyntax.hasValue()) {
    raw = NewFunctionParameterListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::FunctionParameterList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ParameterClauseSyntax>(raw, Cursor::ParameterList);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ParameterClauseSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ParameterClauseSyntax ParameterClauseSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ParameterClauseSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ReturnClauseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Arrow, tok::arrow);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ReturnClauseSyntax::getArrow() {
  return TokenSyntax {Root, Data->getChild(Cursor::Arrow).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ReturnClauseSyntax ReturnClauseSyntax::withArrow(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::arrow, OwnedString::makeUnowned("->"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ReturnClauseSyntax>(raw, Cursor::Arrow);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax ReturnClauseSyntax::getReturnType() {
  return TypeSyntax {Root, Data->getChild(Cursor::ReturnType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ReturnClauseSyntax ReturnClauseSyntax::withReturnType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ReturnClauseSyntax>(raw, Cursor::ReturnType);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void FunctionSignatureSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ThrowsOrRethrowsKeyword, tok::kw_throws, tok::kw_rethrows);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ParameterClauseSyntax FunctionSignatureSyntax::getInput() {
  return ParameterClauseSyntax {Root, Data->getChild(Cursor::Input).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionSignatureSyntax FunctionSignatureSyntax::withInput(
  llvm::Optional<ParameterClauseSyntax> NewParameterClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewParameterClauseSyntax.hasValue()) {
    raw = NewParameterClauseSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::ParameterClause);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionSignatureSyntax>(raw, Cursor::Input);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionSignatureSyntax::getThrowsOrRethrowsKeyword() {
  auto ChildData = Data->getChild(Cursor::ThrowsOrRethrowsKeyword);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionSignatureSyntax FunctionSignatureSyntax::withThrowsOrRethrowsKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionSignatureSyntax>(raw, Cursor::ThrowsOrRethrowsKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ReturnClauseSyntax> FunctionSignatureSyntax::getOutput() {
  auto ChildData = Data->getChild(Cursor::Output);
  if (!ChildData)
    return llvm::None;
  return ReturnClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionSignatureSyntax FunctionSignatureSyntax::withOutput(
  llvm::Optional<ReturnClauseSyntax> NewReturnClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewReturnClauseSyntax.hasValue()) {
    raw = NewReturnClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionSignatureSyntax>(raw, Cursor::Output);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void IfConfigClauseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundKeyword, tok::pound_if, tok::pound_elseif, tok::pound_else);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Elements))
    assert([](const RC<RawSyntax> &Raw) {
 // check Elements
return [](const RC<RawSyntax> &Raw) {
 // check Statements
return CodeBlockItemListSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check SwitchCases
return SwitchCaseListSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Decls
return MemberDeclListSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax IfConfigClauseSyntax::getPoundKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfConfigClauseSyntax IfConfigClauseSyntax::withPoundKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_if, OwnedString::makeUnowned("#if"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfConfigClauseSyntax>(raw, Cursor::PoundKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ExprSyntax> IfConfigClauseSyntax::getCondition() {
  auto ChildData = Data->getChild(Cursor::Condition);
  if (!ChildData)
    return llvm::None;
  return ExprSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfConfigClauseSyntax IfConfigClauseSyntax::withCondition(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfConfigClauseSyntax>(raw, Cursor::Condition);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax IfConfigClauseSyntax::getElements() {
  return Syntax {Root, Data->getChild(Cursor::Elements).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfConfigClauseSyntax IfConfigClauseSyntax::withElements(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlockItemList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfConfigClauseSyntax>(raw, Cursor::Elements);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void IfConfigDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundEndif, tok::pound_endif);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
IfConfigClauseListSyntax IfConfigDeclSyntax::getClauses() {
  return IfConfigClauseListSyntax {Root, Data->getChild(Cursor::Clauses).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
IfConfigDeclSyntax IfConfigDeclSyntax::addClause(IfConfigClauseSyntax Clause) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Clauses);
  if (raw)
    raw = raw->append(Clause.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::IfConfigClauseList,
                          {Clause.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<IfConfigDeclSyntax>(raw, Cursor::Clauses);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfConfigDeclSyntax IfConfigDeclSyntax::withClauses(
  llvm::Optional<IfConfigClauseListSyntax> NewIfConfigClauseListSyntax) {
  RC<RawSyntax> raw;
  if (NewIfConfigClauseListSyntax.hasValue()) {
    raw = NewIfConfigClauseListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::IfConfigClauseList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfConfigDeclSyntax>(raw, Cursor::Clauses);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax IfConfigDeclSyntax::getPoundEndif() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundEndif).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfConfigDeclSyntax IfConfigDeclSyntax::withPoundEndif(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_endif, OwnedString::makeUnowned("#endif"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfConfigDeclSyntax>(raw, Cursor::PoundEndif);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PoundErrorDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundError, tok::pound_error);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundErrorDeclSyntax::getPoundError() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundError).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundErrorDeclSyntax PoundErrorDeclSyntax::withPoundError(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_error, OwnedString::makeUnowned("#error"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundErrorDeclSyntax>(raw, Cursor::PoundError);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundErrorDeclSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundErrorDeclSyntax PoundErrorDeclSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundErrorDeclSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
StringLiteralExprSyntax PoundErrorDeclSyntax::getMessage() {
  return StringLiteralExprSyntax {Root, Data->getChild(Cursor::Message).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundErrorDeclSyntax PoundErrorDeclSyntax::withMessage(
  llvm::Optional<StringLiteralExprSyntax> NewStringLiteralExprSyntax) {
  RC<RawSyntax> raw;
  if (NewStringLiteralExprSyntax.hasValue()) {
    raw = NewStringLiteralExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::StringLiteralExpr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundErrorDeclSyntax>(raw, Cursor::Message);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundErrorDeclSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundErrorDeclSyntax PoundErrorDeclSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundErrorDeclSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PoundWarningDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundWarning, tok::pound_warning);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundWarningDeclSyntax::getPoundWarning() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundWarning).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundWarningDeclSyntax PoundWarningDeclSyntax::withPoundWarning(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_warning, OwnedString::makeUnowned("#warning"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundWarningDeclSyntax>(raw, Cursor::PoundWarning);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundWarningDeclSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundWarningDeclSyntax PoundWarningDeclSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundWarningDeclSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
StringLiteralExprSyntax PoundWarningDeclSyntax::getMessage() {
  return StringLiteralExprSyntax {Root, Data->getChild(Cursor::Message).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundWarningDeclSyntax PoundWarningDeclSyntax::withMessage(
  llvm::Optional<StringLiteralExprSyntax> NewStringLiteralExprSyntax) {
  RC<RawSyntax> raw;
  if (NewStringLiteralExprSyntax.hasValue()) {
    raw = NewStringLiteralExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::StringLiteralExpr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundWarningDeclSyntax>(raw, Cursor::Message);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundWarningDeclSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundWarningDeclSyntax PoundWarningDeclSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundWarningDeclSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PoundSourceLocationSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundSourceLocation, tok::pound_sourceLocation);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundSourceLocationSyntax::getPoundSourceLocation() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundSourceLocation).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundSourceLocationSyntax PoundSourceLocationSyntax::withPoundSourceLocation(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_sourceLocation, OwnedString::makeUnowned("#sourceLocation"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundSourceLocationSyntax>(raw, Cursor::PoundSourceLocation);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundSourceLocationSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundSourceLocationSyntax PoundSourceLocationSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundSourceLocationSyntax>(raw, Cursor::LeftParen);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<PoundSourceLocationArgsSyntax> PoundSourceLocationSyntax::getArgs() {
  auto ChildData = Data->getChild(Cursor::Args);
  if (!ChildData)
    return llvm::None;
  return PoundSourceLocationArgsSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundSourceLocationSyntax PoundSourceLocationSyntax::withArgs(
  llvm::Optional<PoundSourceLocationArgsSyntax> NewPoundSourceLocationArgsSyntax) {
  RC<RawSyntax> raw;
  if (NewPoundSourceLocationArgsSyntax.hasValue()) {
    raw = NewPoundSourceLocationArgsSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundSourceLocationSyntax>(raw, Cursor::Args);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundSourceLocationSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundSourceLocationSyntax PoundSourceLocationSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundSourceLocationSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PoundSourceLocationArgsSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 7);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, FileArgLabel, tok::identifier);
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token_text(raw, FileArgLabel,
                                 tok::identifier, "file");
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, FileArgColon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, FileName, tok::string_literal);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Comma, tok::comma);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LineArgLabel, tok::identifier);
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token_text(raw, LineArgLabel,
                                 tok::identifier, "line");
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LineArgColon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LineNumber, tok::integer_literal);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundSourceLocationArgsSyntax::getFileArgLabel() {
  return TokenSyntax {Root, Data->getChild(Cursor::FileArgLabel).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundSourceLocationArgsSyntax PoundSourceLocationArgsSyntax::withFileArgLabel(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundSourceLocationArgsSyntax>(raw, Cursor::FileArgLabel);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundSourceLocationArgsSyntax::getFileArgColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::FileArgColon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundSourceLocationArgsSyntax PoundSourceLocationArgsSyntax::withFileArgColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundSourceLocationArgsSyntax>(raw, Cursor::FileArgColon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundSourceLocationArgsSyntax::getFileName() {
  return TokenSyntax {Root, Data->getChild(Cursor::FileName).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundSourceLocationArgsSyntax PoundSourceLocationArgsSyntax::withFileName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::string_literal, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundSourceLocationArgsSyntax>(raw, Cursor::FileName);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundSourceLocationArgsSyntax::getComma() {
  return TokenSyntax {Root, Data->getChild(Cursor::Comma).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundSourceLocationArgsSyntax PoundSourceLocationArgsSyntax::withComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::comma, OwnedString::makeUnowned(","));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundSourceLocationArgsSyntax>(raw, Cursor::Comma);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundSourceLocationArgsSyntax::getLineArgLabel() {
  return TokenSyntax {Root, Data->getChild(Cursor::LineArgLabel).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundSourceLocationArgsSyntax PoundSourceLocationArgsSyntax::withLineArgLabel(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundSourceLocationArgsSyntax>(raw, Cursor::LineArgLabel);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundSourceLocationArgsSyntax::getLineArgColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::LineArgColon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundSourceLocationArgsSyntax PoundSourceLocationArgsSyntax::withLineArgColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundSourceLocationArgsSyntax>(raw, Cursor::LineArgColon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundSourceLocationArgsSyntax::getLineNumber() {
  return TokenSyntax {Root, Data->getChild(Cursor::LineNumber).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundSourceLocationArgsSyntax PoundSourceLocationArgsSyntax::withLineNumber(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::integer_literal, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundSourceLocationArgsSyntax>(raw, Cursor::LineNumber);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DeclModifierSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, DetailLeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Detail, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, DetailRightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DeclModifierSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclModifierSyntax DeclModifierSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclModifierSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> DeclModifierSyntax::getDetailLeftParen() {
  auto ChildData = Data->getChild(Cursor::DetailLeftParen);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclModifierSyntax DeclModifierSyntax::withDetailLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclModifierSyntax>(raw, Cursor::DetailLeftParen);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> DeclModifierSyntax::getDetail() {
  auto ChildData = Data->getChild(Cursor::Detail);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclModifierSyntax DeclModifierSyntax::withDetail(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclModifierSyntax>(raw, Cursor::Detail);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> DeclModifierSyntax::getDetailRightParen() {
  auto ChildData = Data->getChild(Cursor::DetailRightParen);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclModifierSyntax DeclModifierSyntax::withDetailRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclModifierSyntax>(raw, Cursor::DetailRightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void InheritedTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax InheritedTypeSyntax::getTypeName() {
  return TypeSyntax {Root, Data->getChild(Cursor::TypeName).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InheritedTypeSyntax InheritedTypeSyntax::withTypeName(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InheritedTypeSyntax>(raw, Cursor::TypeName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> InheritedTypeSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InheritedTypeSyntax InheritedTypeSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InheritedTypeSyntax>(raw, Cursor::TrailingComma);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TypeInheritanceClauseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TypeInheritanceClauseSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypeInheritanceClauseSyntax TypeInheritanceClauseSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypeInheritanceClauseSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
InheritedTypeListSyntax TypeInheritanceClauseSyntax::getInheritedTypeCollection() {
  return InheritedTypeListSyntax {Root, Data->getChild(Cursor::InheritedTypeCollection).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeInheritanceClauseSyntax TypeInheritanceClauseSyntax::addInheritedType(InheritedTypeSyntax InheritedType) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::InheritedTypeCollection);
  if (raw)
    raw = raw->append(InheritedType.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::InheritedTypeList,
                          {InheritedType.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<TypeInheritanceClauseSyntax>(raw, Cursor::InheritedTypeCollection);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypeInheritanceClauseSyntax TypeInheritanceClauseSyntax::withInheritedTypeCollection(
  llvm::Optional<InheritedTypeListSyntax> NewInheritedTypeListSyntax) {
  RC<RawSyntax> raw;
  if (NewInheritedTypeListSyntax.hasValue()) {
    raw = NewInheritedTypeListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::InheritedTypeList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypeInheritanceClauseSyntax>(raw, Cursor::InheritedTypeCollection);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ClassDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 8);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ClassKeyword, tok::kw_class);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> ClassDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ClassDeclSyntax ClassDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ClassDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClassDeclSyntax ClassDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClassDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> ClassDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ClassDeclSyntax ClassDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ClassDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClassDeclSyntax ClassDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClassDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ClassDeclSyntax::getClassKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::ClassKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClassDeclSyntax ClassDeclSyntax::withClassKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_class, OwnedString::makeUnowned("class"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClassDeclSyntax>(raw, Cursor::ClassKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ClassDeclSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClassDeclSyntax ClassDeclSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClassDeclSyntax>(raw, Cursor::Identifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericParameterClauseSyntax> ClassDeclSyntax::getGenericParameterClause() {
  auto ChildData = Data->getChild(Cursor::GenericParameterClause);
  if (!ChildData)
    return llvm::None;
  return GenericParameterClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClassDeclSyntax ClassDeclSyntax::withGenericParameterClause(
  llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericParameterClauseSyntax.hasValue()) {
    raw = NewGenericParameterClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClassDeclSyntax>(raw, Cursor::GenericParameterClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeInheritanceClauseSyntax> ClassDeclSyntax::getInheritanceClause() {
  auto ChildData = Data->getChild(Cursor::InheritanceClause);
  if (!ChildData)
    return llvm::None;
  return TypeInheritanceClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClassDeclSyntax ClassDeclSyntax::withInheritanceClause(
  llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeInheritanceClauseSyntax.hasValue()) {
    raw = NewTypeInheritanceClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClassDeclSyntax>(raw, Cursor::InheritanceClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericWhereClauseSyntax> ClassDeclSyntax::getGenericWhereClause() {
  auto ChildData = Data->getChild(Cursor::GenericWhereClause);
  if (!ChildData)
    return llvm::None;
  return GenericWhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClassDeclSyntax ClassDeclSyntax::withGenericWhereClause(
  llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericWhereClauseSyntax.hasValue()) {
    raw = NewGenericWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClassDeclSyntax>(raw, Cursor::GenericWhereClause);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
MemberDeclBlockSyntax ClassDeclSyntax::getMembers() {
  return MemberDeclBlockSyntax {Root, Data->getChild(Cursor::Members).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClassDeclSyntax ClassDeclSyntax::withMembers(
  llvm::Optional<MemberDeclBlockSyntax> NewMemberDeclBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewMemberDeclBlockSyntax.hasValue()) {
    raw = NewMemberDeclBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::MemberDeclBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClassDeclSyntax>(raw, Cursor::Members);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void StructDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 8);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, StructKeyword, tok::kw_struct);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> StructDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
StructDeclSyntax StructDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<StructDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StructDeclSyntax StructDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StructDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> StructDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
StructDeclSyntax StructDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<StructDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StructDeclSyntax StructDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StructDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax StructDeclSyntax::getStructKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::StructKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StructDeclSyntax StructDeclSyntax::withStructKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_struct, OwnedString::makeUnowned("struct"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StructDeclSyntax>(raw, Cursor::StructKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax StructDeclSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StructDeclSyntax StructDeclSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StructDeclSyntax>(raw, Cursor::Identifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericParameterClauseSyntax> StructDeclSyntax::getGenericParameterClause() {
  auto ChildData = Data->getChild(Cursor::GenericParameterClause);
  if (!ChildData)
    return llvm::None;
  return GenericParameterClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StructDeclSyntax StructDeclSyntax::withGenericParameterClause(
  llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericParameterClauseSyntax.hasValue()) {
    raw = NewGenericParameterClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StructDeclSyntax>(raw, Cursor::GenericParameterClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeInheritanceClauseSyntax> StructDeclSyntax::getInheritanceClause() {
  auto ChildData = Data->getChild(Cursor::InheritanceClause);
  if (!ChildData)
    return llvm::None;
  return TypeInheritanceClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StructDeclSyntax StructDeclSyntax::withInheritanceClause(
  llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeInheritanceClauseSyntax.hasValue()) {
    raw = NewTypeInheritanceClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StructDeclSyntax>(raw, Cursor::InheritanceClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericWhereClauseSyntax> StructDeclSyntax::getGenericWhereClause() {
  auto ChildData = Data->getChild(Cursor::GenericWhereClause);
  if (!ChildData)
    return llvm::None;
  return GenericWhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StructDeclSyntax StructDeclSyntax::withGenericWhereClause(
  llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericWhereClauseSyntax.hasValue()) {
    raw = NewGenericWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StructDeclSyntax>(raw, Cursor::GenericWhereClause);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
MemberDeclBlockSyntax StructDeclSyntax::getMembers() {
  return MemberDeclBlockSyntax {Root, Data->getChild(Cursor::Members).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

StructDeclSyntax StructDeclSyntax::withMembers(
  llvm::Optional<MemberDeclBlockSyntax> NewMemberDeclBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewMemberDeclBlockSyntax.hasValue()) {
    raw = NewMemberDeclBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::MemberDeclBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<StructDeclSyntax>(raw, Cursor::Members);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ProtocolDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 7);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ProtocolKeyword, tok::kw_protocol);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> ProtocolDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ProtocolDeclSyntax ProtocolDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ProtocolDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ProtocolDeclSyntax ProtocolDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ProtocolDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> ProtocolDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ProtocolDeclSyntax ProtocolDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ProtocolDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ProtocolDeclSyntax ProtocolDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ProtocolDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ProtocolDeclSyntax::getProtocolKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::ProtocolKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ProtocolDeclSyntax ProtocolDeclSyntax::withProtocolKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_protocol, OwnedString::makeUnowned("protocol"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ProtocolDeclSyntax>(raw, Cursor::ProtocolKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ProtocolDeclSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ProtocolDeclSyntax ProtocolDeclSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ProtocolDeclSyntax>(raw, Cursor::Identifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeInheritanceClauseSyntax> ProtocolDeclSyntax::getInheritanceClause() {
  auto ChildData = Data->getChild(Cursor::InheritanceClause);
  if (!ChildData)
    return llvm::None;
  return TypeInheritanceClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ProtocolDeclSyntax ProtocolDeclSyntax::withInheritanceClause(
  llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeInheritanceClauseSyntax.hasValue()) {
    raw = NewTypeInheritanceClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ProtocolDeclSyntax>(raw, Cursor::InheritanceClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericWhereClauseSyntax> ProtocolDeclSyntax::getGenericWhereClause() {
  auto ChildData = Data->getChild(Cursor::GenericWhereClause);
  if (!ChildData)
    return llvm::None;
  return GenericWhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ProtocolDeclSyntax ProtocolDeclSyntax::withGenericWhereClause(
  llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericWhereClauseSyntax.hasValue()) {
    raw = NewGenericWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ProtocolDeclSyntax>(raw, Cursor::GenericWhereClause);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
MemberDeclBlockSyntax ProtocolDeclSyntax::getMembers() {
  return MemberDeclBlockSyntax {Root, Data->getChild(Cursor::Members).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ProtocolDeclSyntax ProtocolDeclSyntax::withMembers(
  llvm::Optional<MemberDeclBlockSyntax> NewMemberDeclBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewMemberDeclBlockSyntax.hasValue()) {
    raw = NewMemberDeclBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::MemberDeclBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ProtocolDeclSyntax>(raw, Cursor::Members);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ExtensionDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 7);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ExtensionKeyword, tok::kw_extension);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> ExtensionDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExtensionDeclSyntax ExtensionDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ExtensionDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExtensionDeclSyntax ExtensionDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExtensionDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> ExtensionDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExtensionDeclSyntax ExtensionDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ExtensionDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExtensionDeclSyntax ExtensionDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExtensionDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ExtensionDeclSyntax::getExtensionKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::ExtensionKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExtensionDeclSyntax ExtensionDeclSyntax::withExtensionKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_extension, OwnedString::makeUnowned("extension"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExtensionDeclSyntax>(raw, Cursor::ExtensionKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax ExtensionDeclSyntax::getExtendedType() {
  return TypeSyntax {Root, Data->getChild(Cursor::ExtendedType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExtensionDeclSyntax ExtensionDeclSyntax::withExtendedType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExtensionDeclSyntax>(raw, Cursor::ExtendedType);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeInheritanceClauseSyntax> ExtensionDeclSyntax::getInheritanceClause() {
  auto ChildData = Data->getChild(Cursor::InheritanceClause);
  if (!ChildData)
    return llvm::None;
  return TypeInheritanceClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExtensionDeclSyntax ExtensionDeclSyntax::withInheritanceClause(
  llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeInheritanceClauseSyntax.hasValue()) {
    raw = NewTypeInheritanceClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExtensionDeclSyntax>(raw, Cursor::InheritanceClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericWhereClauseSyntax> ExtensionDeclSyntax::getGenericWhereClause() {
  auto ChildData = Data->getChild(Cursor::GenericWhereClause);
  if (!ChildData)
    return llvm::None;
  return GenericWhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExtensionDeclSyntax ExtensionDeclSyntax::withGenericWhereClause(
  llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericWhereClauseSyntax.hasValue()) {
    raw = NewGenericWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExtensionDeclSyntax>(raw, Cursor::GenericWhereClause);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
MemberDeclBlockSyntax ExtensionDeclSyntax::getMembers() {
  return MemberDeclBlockSyntax {Root, Data->getChild(Cursor::Members).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExtensionDeclSyntax ExtensionDeclSyntax::withMembers(
  llvm::Optional<MemberDeclBlockSyntax> NewMemberDeclBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewMemberDeclBlockSyntax.hasValue()) {
    raw = NewMemberDeclBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::MemberDeclBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExtensionDeclSyntax>(raw, Cursor::Members);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void MemberDeclBlockSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftBrace, tok::l_brace);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightBrace, tok::r_brace);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax MemberDeclBlockSyntax::getLeftBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberDeclBlockSyntax MemberDeclBlockSyntax::withLeftBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberDeclBlockSyntax>(raw, Cursor::LeftBrace);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
MemberDeclListSyntax MemberDeclBlockSyntax::getMembers() {
  return MemberDeclListSyntax {Root, Data->getChild(Cursor::Members).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
MemberDeclBlockSyntax MemberDeclBlockSyntax::addMember(MemberDeclListItemSyntax Member) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Members);
  if (raw)
    raw = raw->append(Member.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::MemberDeclList,
                          {Member.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<MemberDeclBlockSyntax>(raw, Cursor::Members);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberDeclBlockSyntax MemberDeclBlockSyntax::withMembers(
  llvm::Optional<MemberDeclListSyntax> NewMemberDeclListSyntax) {
  RC<RawSyntax> raw;
  if (NewMemberDeclListSyntax.hasValue()) {
    raw = NewMemberDeclListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::MemberDeclList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberDeclBlockSyntax>(raw, Cursor::Members);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax MemberDeclBlockSyntax::getRightBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberDeclBlockSyntax MemberDeclBlockSyntax::withRightBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberDeclBlockSyntax>(raw, Cursor::RightBrace);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void MemberDeclListItemSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Semicolon, tok::semi);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
DeclSyntax MemberDeclListItemSyntax::getDecl() {
  return DeclSyntax {Root, Data->getChild(Cursor::Decl).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberDeclListItemSyntax MemberDeclListItemSyntax::withDecl(
  llvm::Optional<DeclSyntax> NewDeclSyntax) {
  RC<RawSyntax> raw;
  if (NewDeclSyntax.hasValue()) {
    raw = NewDeclSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Decl);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberDeclListItemSyntax>(raw, Cursor::Decl);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> MemberDeclListItemSyntax::getSemicolon() {
  auto ChildData = Data->getChild(Cursor::Semicolon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberDeclListItemSyntax MemberDeclListItemSyntax::withSemicolon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberDeclListItemSyntax>(raw, Cursor::Semicolon);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SourceFileSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockItemListSyntax SourceFileSyntax::getStatements() {
  return CodeBlockItemListSyntax {Root, Data->getChild(Cursor::Statements).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
SourceFileSyntax SourceFileSyntax::addStatement(CodeBlockItemSyntax Statement) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Statements);
  if (raw)
    raw = raw->append(Statement.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::CodeBlockItemList,
                          {Statement.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<SourceFileSyntax>(raw, Cursor::Statements);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SourceFileSyntax SourceFileSyntax::withStatements(
  llvm::Optional<CodeBlockItemListSyntax> NewCodeBlockItemListSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockItemListSyntax.hasValue()) {
    raw = NewCodeBlockItemListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlockItemList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SourceFileSyntax>(raw, Cursor::Statements);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SourceFileSyntax::getEOFToken() {
  return TokenSyntax {Root, Data->getChild(Cursor::EOFToken).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SourceFileSyntax SourceFileSyntax::withEOFToken(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SourceFileSyntax>(raw, Cursor::EOFToken);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void InitializerClauseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Equal, tok::equal);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax InitializerClauseSyntax::getEqual() {
  return TokenSyntax {Root, Data->getChild(Cursor::Equal).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InitializerClauseSyntax InitializerClauseSyntax::withEqual(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::equal, OwnedString::makeUnowned("="));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InitializerClauseSyntax>(raw, Cursor::Equal);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax InitializerClauseSyntax::getValue() {
  return ExprSyntax {Root, Data->getChild(Cursor::Value).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InitializerClauseSyntax InitializerClauseSyntax::withValue(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InitializerClauseSyntax>(raw, Cursor::Value);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void FunctionParameterSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 8);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, FirstName, tok::identifier, tok::kw__);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, SecondName, tok::identifier, tok::kw__);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Ellipsis, tok::ellipsis);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> FunctionParameterSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
FunctionParameterSyntax FunctionParameterSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<FunctionParameterSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionParameterSyntax FunctionParameterSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionParameterSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionParameterSyntax::getFirstName() {
  auto ChildData = Data->getChild(Cursor::FirstName);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionParameterSyntax FunctionParameterSyntax::withFirstName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionParameterSyntax>(raw, Cursor::FirstName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionParameterSyntax::getSecondName() {
  auto ChildData = Data->getChild(Cursor::SecondName);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionParameterSyntax FunctionParameterSyntax::withSecondName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionParameterSyntax>(raw, Cursor::SecondName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionParameterSyntax::getColon() {
  auto ChildData = Data->getChild(Cursor::Colon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionParameterSyntax FunctionParameterSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionParameterSyntax>(raw, Cursor::Colon);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeSyntax> FunctionParameterSyntax::getType() {
  auto ChildData = Data->getChild(Cursor::Type);
  if (!ChildData)
    return llvm::None;
  return TypeSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionParameterSyntax FunctionParameterSyntax::withType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionParameterSyntax>(raw, Cursor::Type);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionParameterSyntax::getEllipsis() {
  auto ChildData = Data->getChild(Cursor::Ellipsis);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionParameterSyntax FunctionParameterSyntax::withEllipsis(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionParameterSyntax>(raw, Cursor::Ellipsis);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<InitializerClauseSyntax> FunctionParameterSyntax::getDefaultArgument() {
  auto ChildData = Data->getChild(Cursor::DefaultArgument);
  if (!ChildData)
    return llvm::None;
  return InitializerClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionParameterSyntax FunctionParameterSyntax::withDefaultArgument(
  llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewInitializerClauseSyntax.hasValue()) {
    raw = NewInitializerClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionParameterSyntax>(raw, Cursor::DefaultArgument);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionParameterSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionParameterSyntax FunctionParameterSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionParameterSyntax>(raw, Cursor::TrailingComma);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void FunctionDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 8);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, FuncKeyword, tok::kw_func);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier, tok::oper_binary_unspaced, tok::oper_binary_spaced, tok::oper_prefix, tok::oper_postfix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> FunctionDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
FunctionDeclSyntax FunctionDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<FunctionDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionDeclSyntax FunctionDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> FunctionDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
FunctionDeclSyntax FunctionDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<FunctionDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionDeclSyntax FunctionDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax FunctionDeclSyntax::getFuncKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::FuncKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionDeclSyntax FunctionDeclSyntax::withFuncKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_func, OwnedString::makeUnowned("func"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionDeclSyntax>(raw, Cursor::FuncKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax FunctionDeclSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionDeclSyntax FunctionDeclSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionDeclSyntax>(raw, Cursor::Identifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericParameterClauseSyntax> FunctionDeclSyntax::getGenericParameterClause() {
  auto ChildData = Data->getChild(Cursor::GenericParameterClause);
  if (!ChildData)
    return llvm::None;
  return GenericParameterClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionDeclSyntax FunctionDeclSyntax::withGenericParameterClause(
  llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericParameterClauseSyntax.hasValue()) {
    raw = NewGenericParameterClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionDeclSyntax>(raw, Cursor::GenericParameterClause);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
FunctionSignatureSyntax FunctionDeclSyntax::getSignature() {
  return FunctionSignatureSyntax {Root, Data->getChild(Cursor::Signature).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionDeclSyntax FunctionDeclSyntax::withSignature(
  llvm::Optional<FunctionSignatureSyntax> NewFunctionSignatureSyntax) {
  RC<RawSyntax> raw;
  if (NewFunctionSignatureSyntax.hasValue()) {
    raw = NewFunctionSignatureSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::FunctionSignature);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionDeclSyntax>(raw, Cursor::Signature);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericWhereClauseSyntax> FunctionDeclSyntax::getGenericWhereClause() {
  auto ChildData = Data->getChild(Cursor::GenericWhereClause);
  if (!ChildData)
    return llvm::None;
  return GenericWhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionDeclSyntax FunctionDeclSyntax::withGenericWhereClause(
  llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericWhereClauseSyntax.hasValue()) {
    raw = NewGenericWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionDeclSyntax>(raw, Cursor::GenericWhereClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<CodeBlockSyntax> FunctionDeclSyntax::getBody() {
  auto ChildData = Data->getChild(Cursor::Body);
  if (!ChildData)
    return llvm::None;
  return CodeBlockSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionDeclSyntax FunctionDeclSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionDeclSyntax>(raw, Cursor::Body);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void InitializerDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 9);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, InitKeyword, tok::kw_init);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, OptionalMark, tok::question_postfix, tok::question_infix, tok::exclaim_postfix);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ThrowsOrRethrowsKeyword, tok::kw_throws, tok::kw_rethrows);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> InitializerDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
InitializerDeclSyntax InitializerDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<InitializerDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InitializerDeclSyntax InitializerDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InitializerDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> InitializerDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
InitializerDeclSyntax InitializerDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<InitializerDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InitializerDeclSyntax InitializerDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InitializerDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax InitializerDeclSyntax::getInitKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::InitKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InitializerDeclSyntax InitializerDeclSyntax::withInitKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_init, OwnedString::makeUnowned("init"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InitializerDeclSyntax>(raw, Cursor::InitKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> InitializerDeclSyntax::getOptionalMark() {
  auto ChildData = Data->getChild(Cursor::OptionalMark);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InitializerDeclSyntax InitializerDeclSyntax::withOptionalMark(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InitializerDeclSyntax>(raw, Cursor::OptionalMark);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericParameterClauseSyntax> InitializerDeclSyntax::getGenericParameterClause() {
  auto ChildData = Data->getChild(Cursor::GenericParameterClause);
  if (!ChildData)
    return llvm::None;
  return GenericParameterClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InitializerDeclSyntax InitializerDeclSyntax::withGenericParameterClause(
  llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericParameterClauseSyntax.hasValue()) {
    raw = NewGenericParameterClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InitializerDeclSyntax>(raw, Cursor::GenericParameterClause);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ParameterClauseSyntax InitializerDeclSyntax::getParameters() {
  return ParameterClauseSyntax {Root, Data->getChild(Cursor::Parameters).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InitializerDeclSyntax InitializerDeclSyntax::withParameters(
  llvm::Optional<ParameterClauseSyntax> NewParameterClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewParameterClauseSyntax.hasValue()) {
    raw = NewParameterClauseSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::ParameterClause);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InitializerDeclSyntax>(raw, Cursor::Parameters);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> InitializerDeclSyntax::getThrowsOrRethrowsKeyword() {
  auto ChildData = Data->getChild(Cursor::ThrowsOrRethrowsKeyword);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InitializerDeclSyntax InitializerDeclSyntax::withThrowsOrRethrowsKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InitializerDeclSyntax>(raw, Cursor::ThrowsOrRethrowsKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericWhereClauseSyntax> InitializerDeclSyntax::getGenericWhereClause() {
  auto ChildData = Data->getChild(Cursor::GenericWhereClause);
  if (!ChildData)
    return llvm::None;
  return GenericWhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InitializerDeclSyntax InitializerDeclSyntax::withGenericWhereClause(
  llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericWhereClauseSyntax.hasValue()) {
    raw = NewGenericWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InitializerDeclSyntax>(raw, Cursor::GenericWhereClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<CodeBlockSyntax> InitializerDeclSyntax::getBody() {
  auto ChildData = Data->getChild(Cursor::Body);
  if (!ChildData)
    return llvm::None;
  return CodeBlockSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

InitializerDeclSyntax InitializerDeclSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<InitializerDeclSyntax>(raw, Cursor::Body);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DeinitializerDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, DeinitKeyword, tok::kw_deinit);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> DeinitializerDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
DeinitializerDeclSyntax DeinitializerDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<DeinitializerDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeinitializerDeclSyntax DeinitializerDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeinitializerDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> DeinitializerDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
DeinitializerDeclSyntax DeinitializerDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<DeinitializerDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeinitializerDeclSyntax DeinitializerDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeinitializerDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DeinitializerDeclSyntax::getDeinitKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::DeinitKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeinitializerDeclSyntax DeinitializerDeclSyntax::withDeinitKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_deinit, OwnedString::makeUnowned("deinit"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeinitializerDeclSyntax>(raw, Cursor::DeinitKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockSyntax DeinitializerDeclSyntax::getBody() {
  return CodeBlockSyntax {Root, Data->getChild(Cursor::Body).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeinitializerDeclSyntax DeinitializerDeclSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeinitializerDeclSyntax>(raw, Cursor::Body);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SubscriptDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 8);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, SubscriptKeyword, tok::kw_subscript);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Accessor))
    assert([](const RC<RawSyntax> &Raw) {
 // check Accessor
return [](const RC<RawSyntax> &Raw) {
 // check Accessors
return AccessorBlockSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Getter
return CodeBlockSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> SubscriptDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
SubscriptDeclSyntax SubscriptDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<SubscriptDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptDeclSyntax SubscriptDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> SubscriptDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
SubscriptDeclSyntax SubscriptDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<SubscriptDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptDeclSyntax SubscriptDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SubscriptDeclSyntax::getSubscriptKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::SubscriptKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptDeclSyntax SubscriptDeclSyntax::withSubscriptKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_subscript, OwnedString::makeUnowned("subscript"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptDeclSyntax>(raw, Cursor::SubscriptKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericParameterClauseSyntax> SubscriptDeclSyntax::getGenericParameterClause() {
  auto ChildData = Data->getChild(Cursor::GenericParameterClause);
  if (!ChildData)
    return llvm::None;
  return GenericParameterClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptDeclSyntax SubscriptDeclSyntax::withGenericParameterClause(
  llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericParameterClauseSyntax.hasValue()) {
    raw = NewGenericParameterClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptDeclSyntax>(raw, Cursor::GenericParameterClause);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ParameterClauseSyntax SubscriptDeclSyntax::getIndices() {
  return ParameterClauseSyntax {Root, Data->getChild(Cursor::Indices).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptDeclSyntax SubscriptDeclSyntax::withIndices(
  llvm::Optional<ParameterClauseSyntax> NewParameterClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewParameterClauseSyntax.hasValue()) {
    raw = NewParameterClauseSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::ParameterClause);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptDeclSyntax>(raw, Cursor::Indices);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ReturnClauseSyntax SubscriptDeclSyntax::getResult() {
  return ReturnClauseSyntax {Root, Data->getChild(Cursor::Result).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptDeclSyntax SubscriptDeclSyntax::withResult(
  llvm::Optional<ReturnClauseSyntax> NewReturnClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewReturnClauseSyntax.hasValue()) {
    raw = NewReturnClauseSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::ReturnClause);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptDeclSyntax>(raw, Cursor::Result);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericWhereClauseSyntax> SubscriptDeclSyntax::getGenericWhereClause() {
  auto ChildData = Data->getChild(Cursor::GenericWhereClause);
  if (!ChildData)
    return llvm::None;
  return GenericWhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptDeclSyntax SubscriptDeclSyntax::withGenericWhereClause(
  llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericWhereClauseSyntax.hasValue()) {
    raw = NewGenericWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptDeclSyntax>(raw, Cursor::GenericWhereClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<Syntax> SubscriptDeclSyntax::getAccessor() {
  auto ChildData = Data->getChild(Cursor::Accessor);
  if (!ChildData)
    return llvm::None;
  return Syntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SubscriptDeclSyntax SubscriptDeclSyntax::withAccessor(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SubscriptDeclSyntax>(raw, Cursor::Accessor);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AccessLevelModifierSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Modifier, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AccessLevelModifierSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessLevelModifierSyntax AccessLevelModifierSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessLevelModifierSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> AccessLevelModifierSyntax::getLeftParen() {
  auto ChildData = Data->getChild(Cursor::LeftParen);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessLevelModifierSyntax AccessLevelModifierSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessLevelModifierSyntax>(raw, Cursor::LeftParen);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> AccessLevelModifierSyntax::getModifier() {
  auto ChildData = Data->getChild(Cursor::Modifier);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessLevelModifierSyntax AccessLevelModifierSyntax::withModifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessLevelModifierSyntax>(raw, Cursor::Modifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> AccessLevelModifierSyntax::getRightParen() {
  auto ChildData = Data->getChild(Cursor::RightParen);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessLevelModifierSyntax AccessLevelModifierSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessLevelModifierSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AccessPathComponentSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingDot, tok::period);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AccessPathComponentSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessPathComponentSyntax AccessPathComponentSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessPathComponentSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> AccessPathComponentSyntax::getTrailingDot() {
  auto ChildData = Data->getChild(Cursor::TrailingDot);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessPathComponentSyntax AccessPathComponentSyntax::withTrailingDot(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessPathComponentSyntax>(raw, Cursor::TrailingDot);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ImportDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ImportTok, tok::kw_import);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ImportKind, tok::kw_typealias, tok::kw_struct, tok::kw_class, tok::kw_enum, tok::kw_protocol, tok::kw_var, tok::kw_let, tok::kw_func);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> ImportDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ImportDeclSyntax ImportDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ImportDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ImportDeclSyntax ImportDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ImportDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> ImportDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ImportDeclSyntax ImportDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ImportDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ImportDeclSyntax ImportDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ImportDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ImportDeclSyntax::getImportTok() {
  return TokenSyntax {Root, Data->getChild(Cursor::ImportTok).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ImportDeclSyntax ImportDeclSyntax::withImportTok(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_import, OwnedString::makeUnowned("import"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ImportDeclSyntax>(raw, Cursor::ImportTok);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ImportDeclSyntax::getImportKind() {
  auto ChildData = Data->getChild(Cursor::ImportKind);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ImportDeclSyntax ImportDeclSyntax::withImportKind(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ImportDeclSyntax>(raw, Cursor::ImportKind);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
AccessPathSyntax ImportDeclSyntax::getPath() {
  return AccessPathSyntax {Root, Data->getChild(Cursor::Path).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ImportDeclSyntax ImportDeclSyntax::addPathComponent(AccessPathComponentSyntax PathComponent) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Path);
  if (raw)
    raw = raw->append(PathComponent.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AccessPath,
                          {PathComponent.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<ImportDeclSyntax>(raw, Cursor::Path);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ImportDeclSyntax ImportDeclSyntax::withPath(
  llvm::Optional<AccessPathSyntax> NewAccessPathSyntax) {
  RC<RawSyntax> raw;
  if (NewAccessPathSyntax.hasValue()) {
    raw = NewAccessPathSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::AccessPath);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ImportDeclSyntax>(raw, Cursor::Path);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AccessorParameterSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AccessorParameterSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessorParameterSyntax AccessorParameterSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessorParameterSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AccessorParameterSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessorParameterSyntax AccessorParameterSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessorParameterSyntax>(raw, Cursor::Name);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AccessorParameterSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessorParameterSyntax AccessorParameterSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessorParameterSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AccessorDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> AccessorDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
AccessorDeclSyntax AccessorDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<AccessorDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessorDeclSyntax AccessorDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessorDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<DeclModifierSyntax> AccessorDeclSyntax::getModifier() {
  auto ChildData = Data->getChild(Cursor::Modifier);
  if (!ChildData)
    return llvm::None;
  return DeclModifierSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessorDeclSyntax AccessorDeclSyntax::withModifier(
  llvm::Optional<DeclModifierSyntax> NewDeclModifierSyntax) {
  RC<RawSyntax> raw;
  if (NewDeclModifierSyntax.hasValue()) {
    raw = NewDeclModifierSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessorDeclSyntax>(raw, Cursor::Modifier);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AccessorDeclSyntax::getAccessorKind() {
  return TokenSyntax {Root, Data->getChild(Cursor::AccessorKind).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessorDeclSyntax AccessorDeclSyntax::withAccessorKind(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessorDeclSyntax>(raw, Cursor::AccessorKind);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AccessorParameterSyntax> AccessorDeclSyntax::getParameter() {
  auto ChildData = Data->getChild(Cursor::Parameter);
  if (!ChildData)
    return llvm::None;
  return AccessorParameterSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessorDeclSyntax AccessorDeclSyntax::withParameter(
  llvm::Optional<AccessorParameterSyntax> NewAccessorParameterSyntax) {
  RC<RawSyntax> raw;
  if (NewAccessorParameterSyntax.hasValue()) {
    raw = NewAccessorParameterSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessorDeclSyntax>(raw, Cursor::Parameter);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<CodeBlockSyntax> AccessorDeclSyntax::getBody() {
  auto ChildData = Data->getChild(Cursor::Body);
  if (!ChildData)
    return llvm::None;
  return CodeBlockSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessorDeclSyntax AccessorDeclSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessorDeclSyntax>(raw, Cursor::Body);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AccessorBlockSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftBrace, tok::l_brace);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightBrace, tok::r_brace);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AccessorBlockSyntax::getLeftBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessorBlockSyntax AccessorBlockSyntax::withLeftBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessorBlockSyntax>(raw, Cursor::LeftBrace);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
AccessorListSyntax AccessorBlockSyntax::getAccessors() {
  return AccessorListSyntax {Root, Data->getChild(Cursor::Accessors).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
AccessorBlockSyntax AccessorBlockSyntax::addAccessor(AccessorDeclSyntax Accessor) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Accessors);
  if (raw)
    raw = raw->append(Accessor.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AccessorList,
                          {Accessor.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<AccessorBlockSyntax>(raw, Cursor::Accessors);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessorBlockSyntax AccessorBlockSyntax::withAccessors(
  llvm::Optional<AccessorListSyntax> NewAccessorListSyntax) {
  RC<RawSyntax> raw;
  if (NewAccessorListSyntax.hasValue()) {
    raw = NewAccessorListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::AccessorList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessorBlockSyntax>(raw, Cursor::Accessors);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AccessorBlockSyntax::getRightBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AccessorBlockSyntax AccessorBlockSyntax::withRightBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AccessorBlockSyntax>(raw, Cursor::RightBrace);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PatternBindingSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Accessor))
    assert([](const RC<RawSyntax> &Raw) {
 // check Accessor
return [](const RC<RawSyntax> &Raw) {
 // check Accessors
return AccessorBlockSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Getter
return CodeBlockSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PatternSyntax PatternBindingSyntax::getPattern() {
  return PatternSyntax {Root, Data->getChild(Cursor::Pattern).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PatternBindingSyntax PatternBindingSyntax::withPattern(
  llvm::Optional<PatternSyntax> NewPatternSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternSyntax.hasValue()) {
    raw = NewPatternSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Pattern);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PatternBindingSyntax>(raw, Cursor::Pattern);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeAnnotationSyntax> PatternBindingSyntax::getTypeAnnotation() {
  auto ChildData = Data->getChild(Cursor::TypeAnnotation);
  if (!ChildData)
    return llvm::None;
  return TypeAnnotationSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PatternBindingSyntax PatternBindingSyntax::withTypeAnnotation(
  llvm::Optional<TypeAnnotationSyntax> NewTypeAnnotationSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeAnnotationSyntax.hasValue()) {
    raw = NewTypeAnnotationSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PatternBindingSyntax>(raw, Cursor::TypeAnnotation);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<InitializerClauseSyntax> PatternBindingSyntax::getInitializer() {
  auto ChildData = Data->getChild(Cursor::Initializer);
  if (!ChildData)
    return llvm::None;
  return InitializerClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PatternBindingSyntax PatternBindingSyntax::withInitializer(
  llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewInitializerClauseSyntax.hasValue()) {
    raw = NewInitializerClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PatternBindingSyntax>(raw, Cursor::Initializer);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<Syntax> PatternBindingSyntax::getAccessor() {
  auto ChildData = Data->getChild(Cursor::Accessor);
  if (!ChildData)
    return llvm::None;
  return Syntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PatternBindingSyntax PatternBindingSyntax::withAccessor(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PatternBindingSyntax>(raw, Cursor::Accessor);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> PatternBindingSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PatternBindingSyntax PatternBindingSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PatternBindingSyntax>(raw, Cursor::TrailingComma);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void VariableDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LetOrVarKeyword, tok::kw_let, tok::kw_var);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> VariableDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
VariableDeclSyntax VariableDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<VariableDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

VariableDeclSyntax VariableDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<VariableDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> VariableDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
VariableDeclSyntax VariableDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<VariableDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

VariableDeclSyntax VariableDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<VariableDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax VariableDeclSyntax::getLetOrVarKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::LetOrVarKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

VariableDeclSyntax VariableDeclSyntax::withLetOrVarKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_let, OwnedString::makeUnowned("let"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<VariableDeclSyntax>(raw, Cursor::LetOrVarKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PatternBindingListSyntax VariableDeclSyntax::getBindings() {
  return PatternBindingListSyntax {Root, Data->getChild(Cursor::Bindings).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
VariableDeclSyntax VariableDeclSyntax::addBinding(PatternBindingSyntax Binding) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Bindings);
  if (raw)
    raw = raw->append(Binding.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::PatternBindingList,
                          {Binding.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<VariableDeclSyntax>(raw, Cursor::Bindings);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

VariableDeclSyntax VariableDeclSyntax::withBindings(
  llvm::Optional<PatternBindingListSyntax> NewPatternBindingListSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternBindingListSyntax.hasValue()) {
    raw = NewPatternBindingListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::PatternBindingList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<VariableDeclSyntax>(raw, Cursor::Bindings);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void EnumCaseElementSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax EnumCaseElementSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCaseElementSyntax EnumCaseElementSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCaseElementSyntax>(raw, Cursor::Identifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ParameterClauseSyntax> EnumCaseElementSyntax::getAssociatedValue() {
  auto ChildData = Data->getChild(Cursor::AssociatedValue);
  if (!ChildData)
    return llvm::None;
  return ParameterClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCaseElementSyntax EnumCaseElementSyntax::withAssociatedValue(
  llvm::Optional<ParameterClauseSyntax> NewParameterClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewParameterClauseSyntax.hasValue()) {
    raw = NewParameterClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCaseElementSyntax>(raw, Cursor::AssociatedValue);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<InitializerClauseSyntax> EnumCaseElementSyntax::getRawValue() {
  auto ChildData = Data->getChild(Cursor::RawValue);
  if (!ChildData)
    return llvm::None;
  return InitializerClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCaseElementSyntax EnumCaseElementSyntax::withRawValue(
  llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewInitializerClauseSyntax.hasValue()) {
    raw = NewInitializerClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCaseElementSyntax>(raw, Cursor::RawValue);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> EnumCaseElementSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCaseElementSyntax EnumCaseElementSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCaseElementSyntax>(raw, Cursor::TrailingComma);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void EnumCaseDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, CaseKeyword, tok::kw_case);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> EnumCaseDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
EnumCaseDeclSyntax EnumCaseDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<EnumCaseDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCaseDeclSyntax EnumCaseDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCaseDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> EnumCaseDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
EnumCaseDeclSyntax EnumCaseDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<EnumCaseDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCaseDeclSyntax EnumCaseDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCaseDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax EnumCaseDeclSyntax::getCaseKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::CaseKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCaseDeclSyntax EnumCaseDeclSyntax::withCaseKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_case, OwnedString::makeUnowned("case"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCaseDeclSyntax>(raw, Cursor::CaseKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
EnumCaseElementListSyntax EnumCaseDeclSyntax::getElements() {
  return EnumCaseElementListSyntax {Root, Data->getChild(Cursor::Elements).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
EnumCaseDeclSyntax EnumCaseDeclSyntax::addElement(EnumCaseElementSyntax Element) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Elements);
  if (raw)
    raw = raw->append(Element.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::EnumCaseElementList,
                          {Element.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<EnumCaseDeclSyntax>(raw, Cursor::Elements);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCaseDeclSyntax EnumCaseDeclSyntax::withElements(
  llvm::Optional<EnumCaseElementListSyntax> NewEnumCaseElementListSyntax) {
  RC<RawSyntax> raw;
  if (NewEnumCaseElementListSyntax.hasValue()) {
    raw = NewEnumCaseElementListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::EnumCaseElementList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCaseDeclSyntax>(raw, Cursor::Elements);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void EnumDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 8);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, EnumKeyword, tok::kw_enum);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> EnumDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
EnumDeclSyntax EnumDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<EnumDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumDeclSyntax EnumDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> EnumDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
EnumDeclSyntax EnumDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<EnumDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumDeclSyntax EnumDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax EnumDeclSyntax::getEnumKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::EnumKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumDeclSyntax EnumDeclSyntax::withEnumKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_enum, OwnedString::makeUnowned("enum"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumDeclSyntax>(raw, Cursor::EnumKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax EnumDeclSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumDeclSyntax EnumDeclSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumDeclSyntax>(raw, Cursor::Identifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericParameterClauseSyntax> EnumDeclSyntax::getGenericParameters() {
  auto ChildData = Data->getChild(Cursor::GenericParameters);
  if (!ChildData)
    return llvm::None;
  return GenericParameterClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumDeclSyntax EnumDeclSyntax::withGenericParameters(
  llvm::Optional<GenericParameterClauseSyntax> NewGenericParameterClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericParameterClauseSyntax.hasValue()) {
    raw = NewGenericParameterClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumDeclSyntax>(raw, Cursor::GenericParameters);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeInheritanceClauseSyntax> EnumDeclSyntax::getInheritanceClause() {
  auto ChildData = Data->getChild(Cursor::InheritanceClause);
  if (!ChildData)
    return llvm::None;
  return TypeInheritanceClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumDeclSyntax EnumDeclSyntax::withInheritanceClause(
  llvm::Optional<TypeInheritanceClauseSyntax> NewTypeInheritanceClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeInheritanceClauseSyntax.hasValue()) {
    raw = NewTypeInheritanceClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumDeclSyntax>(raw, Cursor::InheritanceClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericWhereClauseSyntax> EnumDeclSyntax::getGenericWhereClause() {
  auto ChildData = Data->getChild(Cursor::GenericWhereClause);
  if (!ChildData)
    return llvm::None;
  return GenericWhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumDeclSyntax EnumDeclSyntax::withGenericWhereClause(
  llvm::Optional<GenericWhereClauseSyntax> NewGenericWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericWhereClauseSyntax.hasValue()) {
    raw = NewGenericWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumDeclSyntax>(raw, Cursor::GenericWhereClause);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
MemberDeclBlockSyntax EnumDeclSyntax::getMembers() {
  return MemberDeclBlockSyntax {Root, Data->getChild(Cursor::Members).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumDeclSyntax EnumDeclSyntax::withMembers(
  llvm::Optional<MemberDeclBlockSyntax> NewMemberDeclBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewMemberDeclBlockSyntax.hasValue()) {
    raw = NewMemberDeclBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::MemberDeclBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumDeclSyntax>(raw, Cursor::Members);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void OperatorDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, OperatorKeyword, tok::kw_operator);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::oper_binary_unspaced, tok::oper_binary_spaced, tok::oper_prefix, tok::oper_postfix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> OperatorDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
OperatorDeclSyntax OperatorDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<OperatorDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OperatorDeclSyntax OperatorDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OperatorDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> OperatorDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
OperatorDeclSyntax OperatorDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<OperatorDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OperatorDeclSyntax OperatorDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OperatorDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax OperatorDeclSyntax::getOperatorKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::OperatorKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OperatorDeclSyntax OperatorDeclSyntax::withOperatorKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_operator, OwnedString::makeUnowned("operator"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OperatorDeclSyntax>(raw, Cursor::OperatorKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax OperatorDeclSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OperatorDeclSyntax OperatorDeclSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::oper_binary_unspaced, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OperatorDeclSyntax>(raw, Cursor::Identifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<OperatorPrecedenceAndTypesSyntax> OperatorDeclSyntax::getOperatorPrecedenceAndTypes() {
  auto ChildData = Data->getChild(Cursor::OperatorPrecedenceAndTypes);
  if (!ChildData)
    return llvm::None;
  return OperatorPrecedenceAndTypesSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OperatorDeclSyntax OperatorDeclSyntax::withOperatorPrecedenceAndTypes(
  llvm::Optional<OperatorPrecedenceAndTypesSyntax> NewOperatorPrecedenceAndTypesSyntax) {
  RC<RawSyntax> raw;
  if (NewOperatorPrecedenceAndTypesSyntax.hasValue()) {
    raw = NewOperatorPrecedenceAndTypesSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OperatorDeclSyntax>(raw, Cursor::OperatorPrecedenceAndTypes);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void OperatorPrecedenceAndTypesSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax OperatorPrecedenceAndTypesSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OperatorPrecedenceAndTypesSyntax OperatorPrecedenceAndTypesSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OperatorPrecedenceAndTypesSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
IdentifierListSyntax OperatorPrecedenceAndTypesSyntax::getPrecedenceGroupAndDesignatedTypes() {
  return IdentifierListSyntax {Root, Data->getChild(Cursor::PrecedenceGroupAndDesignatedTypes).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
OperatorPrecedenceAndTypesSyntax OperatorPrecedenceAndTypesSyntax::addPrecedenceGroupAndDesignatedType(TokenSyntax PrecedenceGroupAndDesignatedType) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::PrecedenceGroupAndDesignatedTypes);
  if (raw)
    raw = raw->append(PrecedenceGroupAndDesignatedType.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::IdentifierList,
                          {PrecedenceGroupAndDesignatedType.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<OperatorPrecedenceAndTypesSyntax>(raw, Cursor::PrecedenceGroupAndDesignatedTypes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OperatorPrecedenceAndTypesSyntax OperatorPrecedenceAndTypesSyntax::withPrecedenceGroupAndDesignatedTypes(
  llvm::Optional<IdentifierListSyntax> NewIdentifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewIdentifierListSyntax.hasValue()) {
    raw = NewIdentifierListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::IdentifierList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OperatorPrecedenceAndTypesSyntax>(raw, Cursor::PrecedenceGroupAndDesignatedTypes);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PrecedenceGroupDeclSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 7);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PrecedencegroupKeyword, tok::kw_precedencegroup);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftBrace, tok::l_brace);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightBrace, tok::r_brace);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> PrecedenceGroupDeclSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PrecedenceGroupDeclSyntax PrecedenceGroupDeclSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<PrecedenceGroupDeclSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupDeclSyntax PrecedenceGroupDeclSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupDeclSyntax>(raw, Cursor::Attributes);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ModifierListSyntax> PrecedenceGroupDeclSyntax::getModifiers() {
  auto ChildData = Data->getChild(Cursor::Modifiers);
  if (!ChildData)
    return llvm::None;
  return ModifierListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PrecedenceGroupDeclSyntax PrecedenceGroupDeclSyntax::addModifier(DeclModifierSyntax Modifier) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Modifiers);
  if (raw)
    raw = raw->append(Modifier.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ModifierList,
                          {Modifier.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<PrecedenceGroupDeclSyntax>(raw, Cursor::Modifiers);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupDeclSyntax PrecedenceGroupDeclSyntax::withModifiers(
  llvm::Optional<ModifierListSyntax> NewModifierListSyntax) {
  RC<RawSyntax> raw;
  if (NewModifierListSyntax.hasValue()) {
    raw = NewModifierListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupDeclSyntax>(raw, Cursor::Modifiers);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupDeclSyntax::getPrecedencegroupKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::PrecedencegroupKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupDeclSyntax PrecedenceGroupDeclSyntax::withPrecedencegroupKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_precedencegroup, OwnedString::makeUnowned("precedencegroup"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupDeclSyntax>(raw, Cursor::PrecedencegroupKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupDeclSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupDeclSyntax PrecedenceGroupDeclSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupDeclSyntax>(raw, Cursor::Identifier);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupDeclSyntax::getLeftBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupDeclSyntax PrecedenceGroupDeclSyntax::withLeftBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupDeclSyntax>(raw, Cursor::LeftBrace);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PrecedenceGroupAttributeListSyntax PrecedenceGroupDeclSyntax::getGroupAttributes() {
  return PrecedenceGroupAttributeListSyntax {Root, Data->getChild(Cursor::GroupAttributes).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PrecedenceGroupDeclSyntax PrecedenceGroupDeclSyntax::addGroupAttribute(Syntax GroupAttribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::GroupAttributes);
  if (raw)
    raw = raw->append(GroupAttribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::PrecedenceGroupAttributeList,
                          {GroupAttribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<PrecedenceGroupDeclSyntax>(raw, Cursor::GroupAttributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupDeclSyntax PrecedenceGroupDeclSyntax::withGroupAttributes(
  llvm::Optional<PrecedenceGroupAttributeListSyntax> NewPrecedenceGroupAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewPrecedenceGroupAttributeListSyntax.hasValue()) {
    raw = NewPrecedenceGroupAttributeListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::PrecedenceGroupAttributeList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupDeclSyntax>(raw, Cursor::GroupAttributes);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupDeclSyntax::getRightBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupDeclSyntax PrecedenceGroupDeclSyntax::withRightBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupDeclSyntax>(raw, Cursor::RightBrace);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PrecedenceGroupRelationSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, HigherThanOrLowerThan, tok::identifier);
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token_text(raw, HigherThanOrLowerThan,
                                 tok::identifier, "higherThan", "lowerThan");
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupRelationSyntax::getHigherThanOrLowerThan() {
  return TokenSyntax {Root, Data->getChild(Cursor::HigherThanOrLowerThan).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupRelationSyntax PrecedenceGroupRelationSyntax::withHigherThanOrLowerThan(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupRelationSyntax>(raw, Cursor::HigherThanOrLowerThan);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupRelationSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupRelationSyntax PrecedenceGroupRelationSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupRelationSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PrecedenceGroupNameListSyntax PrecedenceGroupRelationSyntax::getOtherNames() {
  return PrecedenceGroupNameListSyntax {Root, Data->getChild(Cursor::OtherNames).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PrecedenceGroupRelationSyntax PrecedenceGroupRelationSyntax::addOtherName(PrecedenceGroupNameElementSyntax OtherName) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::OtherNames);
  if (raw)
    raw = raw->append(OtherName.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::PrecedenceGroupNameList,
                          {OtherName.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<PrecedenceGroupRelationSyntax>(raw, Cursor::OtherNames);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupRelationSyntax PrecedenceGroupRelationSyntax::withOtherNames(
  llvm::Optional<PrecedenceGroupNameListSyntax> NewPrecedenceGroupNameListSyntax) {
  RC<RawSyntax> raw;
  if (NewPrecedenceGroupNameListSyntax.hasValue()) {
    raw = NewPrecedenceGroupNameListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::PrecedenceGroupNameList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupRelationSyntax>(raw, Cursor::OtherNames);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PrecedenceGroupNameElementSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupNameElementSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupNameElementSyntax PrecedenceGroupNameElementSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupNameElementSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> PrecedenceGroupNameElementSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupNameElementSyntax PrecedenceGroupNameElementSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupNameElementSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PrecedenceGroupAssignmentSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, AssignmentKeyword, tok::identifier);
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token_text(raw, AssignmentKeyword,
                                 tok::identifier, "assignment");
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Flag, tok::kw_true, tok::kw_false);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupAssignmentSyntax::getAssignmentKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::AssignmentKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupAssignmentSyntax PrecedenceGroupAssignmentSyntax::withAssignmentKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupAssignmentSyntax>(raw, Cursor::AssignmentKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupAssignmentSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupAssignmentSyntax PrecedenceGroupAssignmentSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupAssignmentSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupAssignmentSyntax::getFlag() {
  return TokenSyntax {Root, Data->getChild(Cursor::Flag).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupAssignmentSyntax PrecedenceGroupAssignmentSyntax::withFlag(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_true, OwnedString::makeUnowned("true"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupAssignmentSyntax>(raw, Cursor::Flag);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PrecedenceGroupAssociativitySyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, AssociativityKeyword, tok::identifier);
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token_text(raw, AssociativityKeyword,
                                 tok::identifier, "associativity");
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Value, tok::identifier);
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token_text(raw, Value,
                                 tok::identifier, "left", "right", "none");
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupAssociativitySyntax::getAssociativityKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::AssociativityKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupAssociativitySyntax PrecedenceGroupAssociativitySyntax::withAssociativityKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupAssociativitySyntax>(raw, Cursor::AssociativityKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupAssociativitySyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupAssociativitySyntax PrecedenceGroupAssociativitySyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupAssociativitySyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PrecedenceGroupAssociativitySyntax::getValue() {
  return TokenSyntax {Root, Data->getChild(Cursor::Value).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PrecedenceGroupAssociativitySyntax PrecedenceGroupAssociativitySyntax::withValue(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PrecedenceGroupAssociativitySyntax>(raw, Cursor::Value);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void CustomAttributeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, AtSignToken, tok::at_sign);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax CustomAttributeSyntax::getAtSignToken() {
  return TokenSyntax {Root, Data->getChild(Cursor::AtSignToken).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CustomAttributeSyntax CustomAttributeSyntax::withAtSignToken(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::at_sign, OwnedString::makeUnowned("@"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CustomAttributeSyntax>(raw, Cursor::AtSignToken);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax CustomAttributeSyntax::getAttributeName() {
  return TypeSyntax {Root, Data->getChild(Cursor::AttributeName).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CustomAttributeSyntax CustomAttributeSyntax::withAttributeName(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CustomAttributeSyntax>(raw, Cursor::AttributeName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> CustomAttributeSyntax::getLeftParen() {
  auto ChildData = Data->getChild(Cursor::LeftParen);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CustomAttributeSyntax CustomAttributeSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CustomAttributeSyntax>(raw, Cursor::LeftParen);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<FunctionCallArgumentListSyntax> CustomAttributeSyntax::getArgumentList() {
  auto ChildData = Data->getChild(Cursor::ArgumentList);
  if (!ChildData)
    return llvm::None;
  return FunctionCallArgumentListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CustomAttributeSyntax CustomAttributeSyntax::addArgument(FunctionCallArgumentSyntax Argument) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::ArgumentList);
  if (raw)
    raw = raw->append(Argument.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::FunctionCallArgumentList,
                          {Argument.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<CustomAttributeSyntax>(raw, Cursor::ArgumentList);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CustomAttributeSyntax CustomAttributeSyntax::withArgumentList(
  llvm::Optional<FunctionCallArgumentListSyntax> NewFunctionCallArgumentListSyntax) {
  RC<RawSyntax> raw;
  if (NewFunctionCallArgumentListSyntax.hasValue()) {
    raw = NewFunctionCallArgumentListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CustomAttributeSyntax>(raw, Cursor::ArgumentList);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> CustomAttributeSyntax::getRightParen() {
  auto ChildData = Data->getChild(Cursor::RightParen);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CustomAttributeSyntax CustomAttributeSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CustomAttributeSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AttributeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 6);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, AtSignToken, tok::at_sign);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Argument))
    assert([](const RC<RawSyntax> &Raw) {
 // check Argument
return [](const RC<RawSyntax> &Raw) {
 // check Identifier
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::identifier;
}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check String
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::string_literal;
}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Integer
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::integer_literal;
}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Availability
return AvailabilitySpecListSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check SpecializeArguments
return SpecializeAttributeSpecListSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check ObjCName
return ObjCSelectorSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check ImplementsArguments
return ImplementsAttributeArgumentsSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check NamedAttributeString
return NamedAttributeStringArgumentSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AttributeSyntax::getAtSignToken() {
  return TokenSyntax {Root, Data->getChild(Cursor::AtSignToken).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AttributeSyntax AttributeSyntax::withAtSignToken(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::at_sign, OwnedString::makeUnowned("@"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AttributeSyntax>(raw, Cursor::AtSignToken);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AttributeSyntax::getAttributeName() {
  return TokenSyntax {Root, Data->getChild(Cursor::AttributeName).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AttributeSyntax AttributeSyntax::withAttributeName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AttributeSyntax>(raw, Cursor::AttributeName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> AttributeSyntax::getLeftParen() {
  auto ChildData = Data->getChild(Cursor::LeftParen);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AttributeSyntax AttributeSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AttributeSyntax>(raw, Cursor::LeftParen);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<Syntax> AttributeSyntax::getArgument() {
  auto ChildData = Data->getChild(Cursor::Argument);
  if (!ChildData)
    return llvm::None;
  return Syntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AttributeSyntax AttributeSyntax::withArgument(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AttributeSyntax>(raw, Cursor::Argument);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> AttributeSyntax::getRightParen() {
  auto ChildData = Data->getChild(Cursor::RightParen);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AttributeSyntax AttributeSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AttributeSyntax>(raw, Cursor::RightParen);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenListSyntax> AttributeSyntax::getTokenList() {
  auto ChildData = Data->getChild(Cursor::TokenList);
  if (!ChildData)
    return llvm::None;
  return TokenListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
AttributeSyntax AttributeSyntax::addToken(TokenSyntax Token) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::TokenList);
  if (raw)
    raw = raw->append(Token.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::TokenList,
                          {Token.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<AttributeSyntax>(raw, Cursor::TokenList);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AttributeSyntax AttributeSyntax::withTokenList(
  llvm::Optional<TokenListSyntax> NewTokenListSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenListSyntax.hasValue()) {
    raw = NewTokenListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AttributeSyntax>(raw, Cursor::TokenList);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void LabeledSpecializeEntrySyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Label, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax LabeledSpecializeEntrySyntax::getLabel() {
  return TokenSyntax {Root, Data->getChild(Cursor::Label).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

LabeledSpecializeEntrySyntax LabeledSpecializeEntrySyntax::withLabel(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<LabeledSpecializeEntrySyntax>(raw, Cursor::Label);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax LabeledSpecializeEntrySyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

LabeledSpecializeEntrySyntax LabeledSpecializeEntrySyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<LabeledSpecializeEntrySyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax LabeledSpecializeEntrySyntax::getValue() {
  return TokenSyntax {Root, Data->getChild(Cursor::Value).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

LabeledSpecializeEntrySyntax LabeledSpecializeEntrySyntax::withValue(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<LabeledSpecializeEntrySyntax>(raw, Cursor::Value);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> LabeledSpecializeEntrySyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

LabeledSpecializeEntrySyntax LabeledSpecializeEntrySyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<LabeledSpecializeEntrySyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void NamedAttributeStringArgumentSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::StringOrDeclname))
    assert([](const RC<RawSyntax> &Raw) {
 // check StringOrDeclname
return [](const RC<RawSyntax> &Raw) {
 // check String
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::string_literal;
}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Declname
return DeclNameSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax NamedAttributeStringArgumentSyntax::getNameTok() {
  return TokenSyntax {Root, Data->getChild(Cursor::NameTok).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

NamedAttributeStringArgumentSyntax NamedAttributeStringArgumentSyntax::withNameTok(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::unknown, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<NamedAttributeStringArgumentSyntax>(raw, Cursor::NameTok);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax NamedAttributeStringArgumentSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

NamedAttributeStringArgumentSyntax NamedAttributeStringArgumentSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<NamedAttributeStringArgumentSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax NamedAttributeStringArgumentSyntax::getStringOrDeclname() {
  return Syntax {Root, Data->getChild(Cursor::StringOrDeclname).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

NamedAttributeStringArgumentSyntax NamedAttributeStringArgumentSyntax::withStringOrDeclname(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::string_literal, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<NamedAttributeStringArgumentSyntax>(raw, Cursor::StringOrDeclname);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DeclNameSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::DeclBaseName))
    assert([](const RC<RawSyntax> &Raw) {
 // check DeclBaseName
return [](const RC<RawSyntax> &Raw) {
 // check Identifier
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::identifier;
}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Operator
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::oper_prefix;
}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax DeclNameSyntax::getDeclBaseName() {
  return Syntax {Root, Data->getChild(Cursor::DeclBaseName).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclNameSyntax DeclNameSyntax::withDeclBaseName(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclNameSyntax>(raw, Cursor::DeclBaseName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<DeclNameArgumentsSyntax> DeclNameSyntax::getDeclNameArguments() {
  auto ChildData = Data->getChild(Cursor::DeclNameArguments);
  if (!ChildData)
    return llvm::None;
  return DeclNameArgumentsSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclNameSyntax DeclNameSyntax::withDeclNameArguments(
  llvm::Optional<DeclNameArgumentsSyntax> NewDeclNameArgumentsSyntax) {
  RC<RawSyntax> raw;
  if (NewDeclNameArgumentsSyntax.hasValue()) {
    raw = NewDeclNameArgumentsSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclNameSyntax>(raw, Cursor::DeclNameArguments);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ImplementsAttributeArgumentsSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Comma, tok::comma);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::DeclBaseName))
    assert([](const RC<RawSyntax> &Raw) {
 // check DeclBaseName
return [](const RC<RawSyntax> &Raw) {
 // check Identifier
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::identifier;
}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Operator
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::oper_prefix;
}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
SimpleTypeIdentifierSyntax ImplementsAttributeArgumentsSyntax::getType() {
  return SimpleTypeIdentifierSyntax {Root, Data->getChild(Cursor::Type).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ImplementsAttributeArgumentsSyntax ImplementsAttributeArgumentsSyntax::withType(
  llvm::Optional<SimpleTypeIdentifierSyntax> NewSimpleTypeIdentifierSyntax) {
  RC<RawSyntax> raw;
  if (NewSimpleTypeIdentifierSyntax.hasValue()) {
    raw = NewSimpleTypeIdentifierSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::SimpleTypeIdentifier);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ImplementsAttributeArgumentsSyntax>(raw, Cursor::Type);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ImplementsAttributeArgumentsSyntax::getComma() {
  return TokenSyntax {Root, Data->getChild(Cursor::Comma).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ImplementsAttributeArgumentsSyntax ImplementsAttributeArgumentsSyntax::withComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::comma, OwnedString::makeUnowned(","));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ImplementsAttributeArgumentsSyntax>(raw, Cursor::Comma);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax ImplementsAttributeArgumentsSyntax::getDeclBaseName() {
  return Syntax {Root, Data->getChild(Cursor::DeclBaseName).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ImplementsAttributeArgumentsSyntax ImplementsAttributeArgumentsSyntax::withDeclBaseName(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ImplementsAttributeArgumentsSyntax>(raw, Cursor::DeclBaseName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<DeclNameArgumentsSyntax> ImplementsAttributeArgumentsSyntax::getDeclNameArguments() {
  auto ChildData = Data->getChild(Cursor::DeclNameArguments);
  if (!ChildData)
    return llvm::None;
  return DeclNameArgumentsSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ImplementsAttributeArgumentsSyntax ImplementsAttributeArgumentsSyntax::withDeclNameArguments(
  llvm::Optional<DeclNameArgumentsSyntax> NewDeclNameArgumentsSyntax) {
  RC<RawSyntax> raw;
  if (NewDeclNameArgumentsSyntax.hasValue()) {
    raw = NewDeclNameArgumentsSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ImplementsAttributeArgumentsSyntax>(raw, Cursor::DeclNameArguments);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ObjCSelectorPieceSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ObjCSelectorPieceSyntax::getName() {
  auto ChildData = Data->getChild(Cursor::Name);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjCSelectorPieceSyntax ObjCSelectorPieceSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjCSelectorPieceSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ObjCSelectorPieceSyntax::getColon() {
  auto ChildData = Data->getChild(Cursor::Colon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ObjCSelectorPieceSyntax ObjCSelectorPieceSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ObjCSelectorPieceSyntax>(raw, Cursor::Colon);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ContinueStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ContinueKeyword, tok::kw_continue);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Label, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ContinueStmtSyntax::getContinueKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::ContinueKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ContinueStmtSyntax ContinueStmtSyntax::withContinueKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_continue, OwnedString::makeUnowned("continue"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ContinueStmtSyntax>(raw, Cursor::ContinueKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ContinueStmtSyntax::getLabel() {
  auto ChildData = Data->getChild(Cursor::Label);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ContinueStmtSyntax ContinueStmtSyntax::withLabel(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ContinueStmtSyntax>(raw, Cursor::Label);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void WhileStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelName, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelColon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, WhileKeyword, tok::kw_while);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> WhileStmtSyntax::getLabelName() {
  auto ChildData = Data->getChild(Cursor::LabelName);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

WhileStmtSyntax WhileStmtSyntax::withLabelName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<WhileStmtSyntax>(raw, Cursor::LabelName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> WhileStmtSyntax::getLabelColon() {
  auto ChildData = Data->getChild(Cursor::LabelColon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

WhileStmtSyntax WhileStmtSyntax::withLabelColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<WhileStmtSyntax>(raw, Cursor::LabelColon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax WhileStmtSyntax::getWhileKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::WhileKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

WhileStmtSyntax WhileStmtSyntax::withWhileKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_while, OwnedString::makeUnowned("while"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<WhileStmtSyntax>(raw, Cursor::WhileKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ConditionElementListSyntax WhileStmtSyntax::getConditions() {
  return ConditionElementListSyntax {Root, Data->getChild(Cursor::Conditions).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
WhileStmtSyntax WhileStmtSyntax::addCondition(ConditionElementSyntax Condition) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Conditions);
  if (raw)
    raw = raw->append(Condition.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ConditionElementList,
                          {Condition.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<WhileStmtSyntax>(raw, Cursor::Conditions);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

WhileStmtSyntax WhileStmtSyntax::withConditions(
  llvm::Optional<ConditionElementListSyntax> NewConditionElementListSyntax) {
  RC<RawSyntax> raw;
  if (NewConditionElementListSyntax.hasValue()) {
    raw = NewConditionElementListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::ConditionElementList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<WhileStmtSyntax>(raw, Cursor::Conditions);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockSyntax WhileStmtSyntax::getBody() {
  return CodeBlockSyntax {Root, Data->getChild(Cursor::Body).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

WhileStmtSyntax WhileStmtSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<WhileStmtSyntax>(raw, Cursor::Body);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DeferStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, DeferKeyword, tok::kw_defer);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DeferStmtSyntax::getDeferKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::DeferKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeferStmtSyntax DeferStmtSyntax::withDeferKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_defer, OwnedString::makeUnowned("defer"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeferStmtSyntax>(raw, Cursor::DeferKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockSyntax DeferStmtSyntax::getBody() {
  return CodeBlockSyntax {Root, Data->getChild(Cursor::Body).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeferStmtSyntax DeferStmtSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeferStmtSyntax>(raw, Cursor::Body);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ExpressionStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax ExpressionStmtSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExpressionStmtSyntax ExpressionStmtSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExpressionStmtSyntax>(raw, Cursor::Expression);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void RepeatWhileStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 6);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelName, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelColon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RepeatKeyword, tok::kw_repeat);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, WhileKeyword, tok::kw_while);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> RepeatWhileStmtSyntax::getLabelName() {
  auto ChildData = Data->getChild(Cursor::LabelName);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

RepeatWhileStmtSyntax RepeatWhileStmtSyntax::withLabelName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<RepeatWhileStmtSyntax>(raw, Cursor::LabelName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> RepeatWhileStmtSyntax::getLabelColon() {
  auto ChildData = Data->getChild(Cursor::LabelColon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

RepeatWhileStmtSyntax RepeatWhileStmtSyntax::withLabelColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<RepeatWhileStmtSyntax>(raw, Cursor::LabelColon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax RepeatWhileStmtSyntax::getRepeatKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::RepeatKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

RepeatWhileStmtSyntax RepeatWhileStmtSyntax::withRepeatKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_repeat, OwnedString::makeUnowned("repeat"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<RepeatWhileStmtSyntax>(raw, Cursor::RepeatKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockSyntax RepeatWhileStmtSyntax::getBody() {
  return CodeBlockSyntax {Root, Data->getChild(Cursor::Body).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

RepeatWhileStmtSyntax RepeatWhileStmtSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<RepeatWhileStmtSyntax>(raw, Cursor::Body);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax RepeatWhileStmtSyntax::getWhileKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::WhileKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

RepeatWhileStmtSyntax RepeatWhileStmtSyntax::withWhileKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_while, OwnedString::makeUnowned("while"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<RepeatWhileStmtSyntax>(raw, Cursor::WhileKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax RepeatWhileStmtSyntax::getCondition() {
  return ExprSyntax {Root, Data->getChild(Cursor::Condition).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

RepeatWhileStmtSyntax RepeatWhileStmtSyntax::withCondition(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<RepeatWhileStmtSyntax>(raw, Cursor::Condition);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void GuardStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, GuardKeyword, tok::kw_guard);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ElseKeyword, tok::kw_else);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax GuardStmtSyntax::getGuardKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::GuardKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GuardStmtSyntax GuardStmtSyntax::withGuardKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_guard, OwnedString::makeUnowned("guard"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GuardStmtSyntax>(raw, Cursor::GuardKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ConditionElementListSyntax GuardStmtSyntax::getConditions() {
  return ConditionElementListSyntax {Root, Data->getChild(Cursor::Conditions).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
GuardStmtSyntax GuardStmtSyntax::addCondition(ConditionElementSyntax Condition) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Conditions);
  if (raw)
    raw = raw->append(Condition.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ConditionElementList,
                          {Condition.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<GuardStmtSyntax>(raw, Cursor::Conditions);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GuardStmtSyntax GuardStmtSyntax::withConditions(
  llvm::Optional<ConditionElementListSyntax> NewConditionElementListSyntax) {
  RC<RawSyntax> raw;
  if (NewConditionElementListSyntax.hasValue()) {
    raw = NewConditionElementListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::ConditionElementList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GuardStmtSyntax>(raw, Cursor::Conditions);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax GuardStmtSyntax::getElseKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::ElseKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GuardStmtSyntax GuardStmtSyntax::withElseKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_else, OwnedString::makeUnowned("else"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GuardStmtSyntax>(raw, Cursor::ElseKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockSyntax GuardStmtSyntax::getBody() {
  return CodeBlockSyntax {Root, Data->getChild(Cursor::Body).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GuardStmtSyntax GuardStmtSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GuardStmtSyntax>(raw, Cursor::Body);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void WhereClauseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, WhereKeyword, tok::kw_where);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax WhereClauseSyntax::getWhereKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::WhereKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

WhereClauseSyntax WhereClauseSyntax::withWhereKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_where, OwnedString::makeUnowned("where"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<WhereClauseSyntax>(raw, Cursor::WhereKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax WhereClauseSyntax::getGuardResult() {
  return ExprSyntax {Root, Data->getChild(Cursor::GuardResult).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

WhereClauseSyntax WhereClauseSyntax::withGuardResult(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<WhereClauseSyntax>(raw, Cursor::GuardResult);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ForInStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 10);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelName, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelColon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ForKeyword, tok::kw_for);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, CaseKeyword, tok::kw_case);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, InKeyword, tok::kw_in);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ForInStmtSyntax::getLabelName() {
  auto ChildData = Data->getChild(Cursor::LabelName);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForInStmtSyntax ForInStmtSyntax::withLabelName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForInStmtSyntax>(raw, Cursor::LabelName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ForInStmtSyntax::getLabelColon() {
  auto ChildData = Data->getChild(Cursor::LabelColon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForInStmtSyntax ForInStmtSyntax::withLabelColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForInStmtSyntax>(raw, Cursor::LabelColon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ForInStmtSyntax::getForKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::ForKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForInStmtSyntax ForInStmtSyntax::withForKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_for, OwnedString::makeUnowned("for"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForInStmtSyntax>(raw, Cursor::ForKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ForInStmtSyntax::getCaseKeyword() {
  auto ChildData = Data->getChild(Cursor::CaseKeyword);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForInStmtSyntax ForInStmtSyntax::withCaseKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForInStmtSyntax>(raw, Cursor::CaseKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PatternSyntax ForInStmtSyntax::getPattern() {
  return PatternSyntax {Root, Data->getChild(Cursor::Pattern).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForInStmtSyntax ForInStmtSyntax::withPattern(
  llvm::Optional<PatternSyntax> NewPatternSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternSyntax.hasValue()) {
    raw = NewPatternSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Pattern);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForInStmtSyntax>(raw, Cursor::Pattern);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeAnnotationSyntax> ForInStmtSyntax::getTypeAnnotation() {
  auto ChildData = Data->getChild(Cursor::TypeAnnotation);
  if (!ChildData)
    return llvm::None;
  return TypeAnnotationSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForInStmtSyntax ForInStmtSyntax::withTypeAnnotation(
  llvm::Optional<TypeAnnotationSyntax> NewTypeAnnotationSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeAnnotationSyntax.hasValue()) {
    raw = NewTypeAnnotationSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForInStmtSyntax>(raw, Cursor::TypeAnnotation);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ForInStmtSyntax::getInKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::InKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForInStmtSyntax ForInStmtSyntax::withInKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_in, OwnedString::makeUnowned("in"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForInStmtSyntax>(raw, Cursor::InKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax ForInStmtSyntax::getSequenceExpr() {
  return ExprSyntax {Root, Data->getChild(Cursor::SequenceExpr).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForInStmtSyntax ForInStmtSyntax::withSequenceExpr(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForInStmtSyntax>(raw, Cursor::SequenceExpr);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<WhereClauseSyntax> ForInStmtSyntax::getWhereClause() {
  auto ChildData = Data->getChild(Cursor::WhereClause);
  if (!ChildData)
    return llvm::None;
  return WhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForInStmtSyntax ForInStmtSyntax::withWhereClause(
  llvm::Optional<WhereClauseSyntax> NewWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewWhereClauseSyntax.hasValue()) {
    raw = NewWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForInStmtSyntax>(raw, Cursor::WhereClause);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockSyntax ForInStmtSyntax::getBody() {
  return CodeBlockSyntax {Root, Data->getChild(Cursor::Body).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ForInStmtSyntax ForInStmtSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ForInStmtSyntax>(raw, Cursor::Body);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SwitchStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 7);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelName, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelColon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, SwitchKeyword, tok::kw_switch);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftBrace, tok::l_brace);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightBrace, tok::r_brace);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> SwitchStmtSyntax::getLabelName() {
  auto ChildData = Data->getChild(Cursor::LabelName);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchStmtSyntax SwitchStmtSyntax::withLabelName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchStmtSyntax>(raw, Cursor::LabelName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> SwitchStmtSyntax::getLabelColon() {
  auto ChildData = Data->getChild(Cursor::LabelColon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchStmtSyntax SwitchStmtSyntax::withLabelColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchStmtSyntax>(raw, Cursor::LabelColon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SwitchStmtSyntax::getSwitchKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::SwitchKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchStmtSyntax SwitchStmtSyntax::withSwitchKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_switch, OwnedString::makeUnowned("switch"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchStmtSyntax>(raw, Cursor::SwitchKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax SwitchStmtSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchStmtSyntax SwitchStmtSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchStmtSyntax>(raw, Cursor::Expression);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SwitchStmtSyntax::getLeftBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchStmtSyntax SwitchStmtSyntax::withLeftBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_brace, OwnedString::makeUnowned("{"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchStmtSyntax>(raw, Cursor::LeftBrace);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
SwitchCaseListSyntax SwitchStmtSyntax::getCases() {
  return SwitchCaseListSyntax {Root, Data->getChild(Cursor::Cases).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
SwitchStmtSyntax SwitchStmtSyntax::addCase(Syntax Case) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Cases);
  if (raw)
    raw = raw->append(Case.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::SwitchCaseList,
                          {Case.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<SwitchStmtSyntax>(raw, Cursor::Cases);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchStmtSyntax SwitchStmtSyntax::withCases(
  llvm::Optional<SwitchCaseListSyntax> NewSwitchCaseListSyntax) {
  RC<RawSyntax> raw;
  if (NewSwitchCaseListSyntax.hasValue()) {
    raw = NewSwitchCaseListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::SwitchCaseList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchStmtSyntax>(raw, Cursor::Cases);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SwitchStmtSyntax::getRightBrace() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightBrace).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchStmtSyntax SwitchStmtSyntax::withRightBrace(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_brace, OwnedString::makeUnowned("}"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchStmtSyntax>(raw, Cursor::RightBrace);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DoStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelName, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelColon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, DoKeyword, tok::kw_do);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> DoStmtSyntax::getLabelName() {
  auto ChildData = Data->getChild(Cursor::LabelName);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DoStmtSyntax DoStmtSyntax::withLabelName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DoStmtSyntax>(raw, Cursor::LabelName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> DoStmtSyntax::getLabelColon() {
  auto ChildData = Data->getChild(Cursor::LabelColon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DoStmtSyntax DoStmtSyntax::withLabelColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DoStmtSyntax>(raw, Cursor::LabelColon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DoStmtSyntax::getDoKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::DoKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DoStmtSyntax DoStmtSyntax::withDoKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_do, OwnedString::makeUnowned("do"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DoStmtSyntax>(raw, Cursor::DoKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockSyntax DoStmtSyntax::getBody() {
  return CodeBlockSyntax {Root, Data->getChild(Cursor::Body).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DoStmtSyntax DoStmtSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DoStmtSyntax>(raw, Cursor::Body);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<CatchClauseListSyntax> DoStmtSyntax::getCatchClauses() {
  auto ChildData = Data->getChild(Cursor::CatchClauses);
  if (!ChildData)
    return llvm::None;
  return CatchClauseListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
DoStmtSyntax DoStmtSyntax::addCatchClause(CatchClauseSyntax CatchClause) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::CatchClauses);
  if (raw)
    raw = raw->append(CatchClause.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::CatchClauseList,
                          {CatchClause.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<DoStmtSyntax>(raw, Cursor::CatchClauses);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DoStmtSyntax DoStmtSyntax::withCatchClauses(
  llvm::Optional<CatchClauseListSyntax> NewCatchClauseListSyntax) {
  RC<RawSyntax> raw;
  if (NewCatchClauseListSyntax.hasValue()) {
    raw = NewCatchClauseListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DoStmtSyntax>(raw, Cursor::CatchClauses);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ReturnStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ReturnKeyword, tok::kw_return);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ReturnStmtSyntax::getReturnKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::ReturnKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ReturnStmtSyntax ReturnStmtSyntax::withReturnKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_return, OwnedString::makeUnowned("return"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ReturnStmtSyntax>(raw, Cursor::ReturnKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<ExprSyntax> ReturnStmtSyntax::getExpression() {
  auto ChildData = Data->getChild(Cursor::Expression);
  if (!ChildData)
    return llvm::None;
  return ExprSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ReturnStmtSyntax ReturnStmtSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ReturnStmtSyntax>(raw, Cursor::Expression);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void YieldStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, YieldKeyword, tok::kw_yield);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Yields))
    assert([](const RC<RawSyntax> &Raw) {
 // check Yields
return [](const RC<RawSyntax> &Raw) {
 // check YieldList
return YieldListSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check SimpleYield
return ExprSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax YieldStmtSyntax::getYieldKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::YieldKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

YieldStmtSyntax YieldStmtSyntax::withYieldKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_yield, OwnedString::makeUnowned("yield"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<YieldStmtSyntax>(raw, Cursor::YieldKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax YieldStmtSyntax::getYields() {
  return Syntax {Root, Data->getChild(Cursor::Yields).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

YieldStmtSyntax YieldStmtSyntax::withYields(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::YieldList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<YieldStmtSyntax>(raw, Cursor::Yields);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void YieldListSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax YieldListSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

YieldListSyntax YieldListSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<YieldListSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprListSyntax YieldListSyntax::getElementList() {
  return ExprListSyntax {Root, Data->getChild(Cursor::ElementList).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
YieldListSyntax YieldListSyntax::addElement(ExprSyntax Element) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::ElementList);
  if (raw)
    raw = raw->append(Element.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ExprList,
                          {Element.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<YieldListSyntax>(raw, Cursor::ElementList);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

YieldListSyntax YieldListSyntax::withElementList(
  llvm::Optional<ExprListSyntax> NewExprListSyntax) {
  RC<RawSyntax> raw;
  if (NewExprListSyntax.hasValue()) {
    raw = NewExprListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::ExprList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<YieldListSyntax>(raw, Cursor::ElementList);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> YieldListSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

YieldListSyntax YieldListSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<YieldListSyntax>(raw, Cursor::TrailingComma);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax YieldListSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

YieldListSyntax YieldListSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<YieldListSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void FallthroughStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, FallthroughKeyword, tok::kw_fallthrough);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax FallthroughStmtSyntax::getFallthroughKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::FallthroughKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FallthroughStmtSyntax FallthroughStmtSyntax::withFallthroughKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_fallthrough, OwnedString::makeUnowned("fallthrough"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FallthroughStmtSyntax>(raw, Cursor::FallthroughKeyword);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void BreakStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, BreakKeyword, tok::kw_break);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Label, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax BreakStmtSyntax::getBreakKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::BreakKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

BreakStmtSyntax BreakStmtSyntax::withBreakKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_break, OwnedString::makeUnowned("break"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<BreakStmtSyntax>(raw, Cursor::BreakKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> BreakStmtSyntax::getLabel() {
  auto ChildData = Data->getChild(Cursor::Label);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

BreakStmtSyntax BreakStmtSyntax::withLabel(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<BreakStmtSyntax>(raw, Cursor::Label);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ConditionElementSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Condition))
    assert([](const RC<RawSyntax> &Raw) {
 // check Condition
return [](const RC<RawSyntax> &Raw) {
 // check Expression
return ExprSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Availablity
return AvailabilityConditionSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check MatchingPattern
return MatchingPatternConditionSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check OptionalBinding
return OptionalBindingConditionSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax ConditionElementSyntax::getCondition() {
  return Syntax {Root, Data->getChild(Cursor::Condition).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ConditionElementSyntax ConditionElementSyntax::withCondition(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ConditionElementSyntax>(raw, Cursor::Condition);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ConditionElementSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ConditionElementSyntax ConditionElementSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ConditionElementSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AvailabilityConditionSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundAvailableKeyword, tok::pound_available);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AvailabilityConditionSyntax::getPoundAvailableKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundAvailableKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AvailabilityConditionSyntax AvailabilityConditionSyntax::withPoundAvailableKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_available, OwnedString::makeUnowned("#available"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AvailabilityConditionSyntax>(raw, Cursor::PoundAvailableKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AvailabilityConditionSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AvailabilityConditionSyntax AvailabilityConditionSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AvailabilityConditionSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
AvailabilitySpecListSyntax AvailabilityConditionSyntax::getAvailabilitySpec() {
  return AvailabilitySpecListSyntax {Root, Data->getChild(Cursor::AvailabilitySpec).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
AvailabilityConditionSyntax AvailabilityConditionSyntax::addAvailabilityArgument(AvailabilityArgumentSyntax AvailabilityArgument) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::AvailabilitySpec);
  if (raw)
    raw = raw->append(AvailabilityArgument.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AvailabilitySpecList,
                          {AvailabilityArgument.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<AvailabilityConditionSyntax>(raw, Cursor::AvailabilitySpec);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AvailabilityConditionSyntax AvailabilityConditionSyntax::withAvailabilitySpec(
  llvm::Optional<AvailabilitySpecListSyntax> NewAvailabilitySpecListSyntax) {
  RC<RawSyntax> raw;
  if (NewAvailabilitySpecListSyntax.hasValue()) {
    raw = NewAvailabilitySpecListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::AvailabilitySpecList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AvailabilityConditionSyntax>(raw, Cursor::AvailabilitySpec);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AvailabilityConditionSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AvailabilityConditionSyntax AvailabilityConditionSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AvailabilityConditionSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void MatchingPatternConditionSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, CaseKeyword, tok::kw_case);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax MatchingPatternConditionSyntax::getCaseKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::CaseKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MatchingPatternConditionSyntax MatchingPatternConditionSyntax::withCaseKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_case, OwnedString::makeUnowned("case"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MatchingPatternConditionSyntax>(raw, Cursor::CaseKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PatternSyntax MatchingPatternConditionSyntax::getPattern() {
  return PatternSyntax {Root, Data->getChild(Cursor::Pattern).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MatchingPatternConditionSyntax MatchingPatternConditionSyntax::withPattern(
  llvm::Optional<PatternSyntax> NewPatternSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternSyntax.hasValue()) {
    raw = NewPatternSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Pattern);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MatchingPatternConditionSyntax>(raw, Cursor::Pattern);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeAnnotationSyntax> MatchingPatternConditionSyntax::getTypeAnnotation() {
  auto ChildData = Data->getChild(Cursor::TypeAnnotation);
  if (!ChildData)
    return llvm::None;
  return TypeAnnotationSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MatchingPatternConditionSyntax MatchingPatternConditionSyntax::withTypeAnnotation(
  llvm::Optional<TypeAnnotationSyntax> NewTypeAnnotationSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeAnnotationSyntax.hasValue()) {
    raw = NewTypeAnnotationSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MatchingPatternConditionSyntax>(raw, Cursor::TypeAnnotation);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
InitializerClauseSyntax MatchingPatternConditionSyntax::getInitializer() {
  return InitializerClauseSyntax {Root, Data->getChild(Cursor::Initializer).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MatchingPatternConditionSyntax MatchingPatternConditionSyntax::withInitializer(
  llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewInitializerClauseSyntax.hasValue()) {
    raw = NewInitializerClauseSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::InitializerClause);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MatchingPatternConditionSyntax>(raw, Cursor::Initializer);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void OptionalBindingConditionSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LetOrVarKeyword, tok::kw_let, tok::kw_var);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax OptionalBindingConditionSyntax::getLetOrVarKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::LetOrVarKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OptionalBindingConditionSyntax OptionalBindingConditionSyntax::withLetOrVarKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_let, OwnedString::makeUnowned("let"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OptionalBindingConditionSyntax>(raw, Cursor::LetOrVarKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PatternSyntax OptionalBindingConditionSyntax::getPattern() {
  return PatternSyntax {Root, Data->getChild(Cursor::Pattern).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OptionalBindingConditionSyntax OptionalBindingConditionSyntax::withPattern(
  llvm::Optional<PatternSyntax> NewPatternSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternSyntax.hasValue()) {
    raw = NewPatternSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Pattern);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OptionalBindingConditionSyntax>(raw, Cursor::Pattern);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeAnnotationSyntax> OptionalBindingConditionSyntax::getTypeAnnotation() {
  auto ChildData = Data->getChild(Cursor::TypeAnnotation);
  if (!ChildData)
    return llvm::None;
  return TypeAnnotationSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OptionalBindingConditionSyntax OptionalBindingConditionSyntax::withTypeAnnotation(
  llvm::Optional<TypeAnnotationSyntax> NewTypeAnnotationSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeAnnotationSyntax.hasValue()) {
    raw = NewTypeAnnotationSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OptionalBindingConditionSyntax>(raw, Cursor::TypeAnnotation);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
InitializerClauseSyntax OptionalBindingConditionSyntax::getInitializer() {
  return InitializerClauseSyntax {Root, Data->getChild(Cursor::Initializer).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OptionalBindingConditionSyntax OptionalBindingConditionSyntax::withInitializer(
  llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewInitializerClauseSyntax.hasValue()) {
    raw = NewInitializerClauseSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::InitializerClause);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OptionalBindingConditionSyntax>(raw, Cursor::Initializer);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DeclarationStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
DeclSyntax DeclarationStmtSyntax::getDeclaration() {
  return DeclSyntax {Root, Data->getChild(Cursor::Declaration).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DeclarationStmtSyntax DeclarationStmtSyntax::withDeclaration(
  llvm::Optional<DeclSyntax> NewDeclSyntax) {
  RC<RawSyntax> raw;
  if (NewDeclSyntax.hasValue()) {
    raw = NewDeclSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Decl);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DeclarationStmtSyntax>(raw, Cursor::Declaration);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ThrowStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ThrowKeyword, tok::kw_throw);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ThrowStmtSyntax::getThrowKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::ThrowKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ThrowStmtSyntax ThrowStmtSyntax::withThrowKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_throw, OwnedString::makeUnowned("throw"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ThrowStmtSyntax>(raw, Cursor::ThrowKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax ThrowStmtSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ThrowStmtSyntax ThrowStmtSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ThrowStmtSyntax>(raw, Cursor::Expression);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void IfStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 7);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelName, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelColon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, IfKeyword, tok::kw_if);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ElseKeyword, tok::kw_else);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::ElseBody))
    assert([](const RC<RawSyntax> &Raw) {
 // check ElseBody
return [](const RC<RawSyntax> &Raw) {
 // check IfStmt
return IfStmtSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check CodeBlock
return CodeBlockSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> IfStmtSyntax::getLabelName() {
  auto ChildData = Data->getChild(Cursor::LabelName);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfStmtSyntax IfStmtSyntax::withLabelName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfStmtSyntax>(raw, Cursor::LabelName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> IfStmtSyntax::getLabelColon() {
  auto ChildData = Data->getChild(Cursor::LabelColon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfStmtSyntax IfStmtSyntax::withLabelColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfStmtSyntax>(raw, Cursor::LabelColon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax IfStmtSyntax::getIfKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::IfKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfStmtSyntax IfStmtSyntax::withIfKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_if, OwnedString::makeUnowned("if"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfStmtSyntax>(raw, Cursor::IfKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ConditionElementListSyntax IfStmtSyntax::getConditions() {
  return ConditionElementListSyntax {Root, Data->getChild(Cursor::Conditions).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
IfStmtSyntax IfStmtSyntax::addCondition(ConditionElementSyntax Condition) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Conditions);
  if (raw)
    raw = raw->append(Condition.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::ConditionElementList,
                          {Condition.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<IfStmtSyntax>(raw, Cursor::Conditions);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfStmtSyntax IfStmtSyntax::withConditions(
  llvm::Optional<ConditionElementListSyntax> NewConditionElementListSyntax) {
  RC<RawSyntax> raw;
  if (NewConditionElementListSyntax.hasValue()) {
    raw = NewConditionElementListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::ConditionElementList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfStmtSyntax>(raw, Cursor::Conditions);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockSyntax IfStmtSyntax::getBody() {
  return CodeBlockSyntax {Root, Data->getChild(Cursor::Body).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfStmtSyntax IfStmtSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfStmtSyntax>(raw, Cursor::Body);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> IfStmtSyntax::getElseKeyword() {
  auto ChildData = Data->getChild(Cursor::ElseKeyword);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfStmtSyntax IfStmtSyntax::withElseKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfStmtSyntax>(raw, Cursor::ElseKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<Syntax> IfStmtSyntax::getElseBody() {
  auto ChildData = Data->getChild(Cursor::ElseBody);
  if (!ChildData)
    return llvm::None;
  return Syntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IfStmtSyntax IfStmtSyntax::withElseBody(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IfStmtSyntax>(raw, Cursor::ElseBody);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ElseIfContinuationSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
IfStmtSyntax ElseIfContinuationSyntax::getIfStatement() {
  return IfStmtSyntax {Root, Data->getChild(Cursor::IfStatement).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ElseIfContinuationSyntax ElseIfContinuationSyntax::withIfStatement(
  llvm::Optional<IfStmtSyntax> NewIfStmtSyntax) {
  RC<RawSyntax> raw;
  if (NewIfStmtSyntax.hasValue()) {
    raw = NewIfStmtSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::IfStmt);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ElseIfContinuationSyntax>(raw, Cursor::IfStatement);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ElseBlockSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ElseKeyword, tok::kw_else);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ElseBlockSyntax::getElseKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::ElseKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ElseBlockSyntax ElseBlockSyntax::withElseKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_else, OwnedString::makeUnowned("else"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ElseBlockSyntax>(raw, Cursor::ElseKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockSyntax ElseBlockSyntax::getBody() {
  return CodeBlockSyntax {Root, Data->getChild(Cursor::Body).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ElseBlockSyntax ElseBlockSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ElseBlockSyntax>(raw, Cursor::Body);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SwitchCaseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Label))
    assert([](const RC<RawSyntax> &Raw) {
 // check Label
return [](const RC<RawSyntax> &Raw) {
 // check Default
return SwitchDefaultLabelSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Case
return SwitchCaseLabelSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeSyntax> SwitchCaseSyntax::getUnknownAttr() {
  auto ChildData = Data->getChild(Cursor::UnknownAttr);
  if (!ChildData)
    return llvm::None;
  return AttributeSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchCaseSyntax SwitchCaseSyntax::withUnknownAttr(
  llvm::Optional<AttributeSyntax> NewAttributeSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeSyntax.hasValue()) {
    raw = NewAttributeSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchCaseSyntax>(raw, Cursor::UnknownAttr);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax SwitchCaseSyntax::getLabel() {
  return Syntax {Root, Data->getChild(Cursor::Label).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchCaseSyntax SwitchCaseSyntax::withLabel(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::SwitchDefaultLabel);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchCaseSyntax>(raw, Cursor::Label);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockItemListSyntax SwitchCaseSyntax::getStatements() {
  return CodeBlockItemListSyntax {Root, Data->getChild(Cursor::Statements).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
SwitchCaseSyntax SwitchCaseSyntax::addStatement(CodeBlockItemSyntax Statement) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Statements);
  if (raw)
    raw = raw->append(Statement.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::CodeBlockItemList,
                          {Statement.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<SwitchCaseSyntax>(raw, Cursor::Statements);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchCaseSyntax SwitchCaseSyntax::withStatements(
  llvm::Optional<CodeBlockItemListSyntax> NewCodeBlockItemListSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockItemListSyntax.hasValue()) {
    raw = NewCodeBlockItemListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlockItemList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchCaseSyntax>(raw, Cursor::Statements);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SwitchDefaultLabelSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, DefaultKeyword, tok::kw_default);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SwitchDefaultLabelSyntax::getDefaultKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::DefaultKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchDefaultLabelSyntax SwitchDefaultLabelSyntax::withDefaultKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_default, OwnedString::makeUnowned("default"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchDefaultLabelSyntax>(raw, Cursor::DefaultKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SwitchDefaultLabelSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchDefaultLabelSyntax SwitchDefaultLabelSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchDefaultLabelSyntax>(raw, Cursor::Colon);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void CaseItemSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PatternSyntax CaseItemSyntax::getPattern() {
  return PatternSyntax {Root, Data->getChild(Cursor::Pattern).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CaseItemSyntax CaseItemSyntax::withPattern(
  llvm::Optional<PatternSyntax> NewPatternSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternSyntax.hasValue()) {
    raw = NewPatternSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Pattern);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CaseItemSyntax>(raw, Cursor::Pattern);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<WhereClauseSyntax> CaseItemSyntax::getWhereClause() {
  auto ChildData = Data->getChild(Cursor::WhereClause);
  if (!ChildData)
    return llvm::None;
  return WhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CaseItemSyntax CaseItemSyntax::withWhereClause(
  llvm::Optional<WhereClauseSyntax> NewWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewWhereClauseSyntax.hasValue()) {
    raw = NewWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CaseItemSyntax>(raw, Cursor::WhereClause);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> CaseItemSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CaseItemSyntax CaseItemSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CaseItemSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SwitchCaseLabelSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, CaseKeyword, tok::kw_case);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SwitchCaseLabelSyntax::getCaseKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::CaseKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchCaseLabelSyntax SwitchCaseLabelSyntax::withCaseKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_case, OwnedString::makeUnowned("case"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchCaseLabelSyntax>(raw, Cursor::CaseKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CaseItemListSyntax SwitchCaseLabelSyntax::getCaseItems() {
  return CaseItemListSyntax {Root, Data->getChild(Cursor::CaseItems).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
SwitchCaseLabelSyntax SwitchCaseLabelSyntax::addCaseItem(CaseItemSyntax CaseItem) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::CaseItems);
  if (raw)
    raw = raw->append(CaseItem.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::CaseItemList,
                          {CaseItem.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<SwitchCaseLabelSyntax>(raw, Cursor::CaseItems);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchCaseLabelSyntax SwitchCaseLabelSyntax::withCaseItems(
  llvm::Optional<CaseItemListSyntax> NewCaseItemListSyntax) {
  RC<RawSyntax> raw;
  if (NewCaseItemListSyntax.hasValue()) {
    raw = NewCaseItemListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CaseItemList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchCaseLabelSyntax>(raw, Cursor::CaseItems);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SwitchCaseLabelSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SwitchCaseLabelSyntax SwitchCaseLabelSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SwitchCaseLabelSyntax>(raw, Cursor::Colon);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void CatchClauseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, CatchKeyword, tok::kw_catch);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax CatchClauseSyntax::getCatchKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::CatchKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CatchClauseSyntax CatchClauseSyntax::withCatchKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_catch, OwnedString::makeUnowned("catch"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CatchClauseSyntax>(raw, Cursor::CatchKeyword);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<PatternSyntax> CatchClauseSyntax::getPattern() {
  auto ChildData = Data->getChild(Cursor::Pattern);
  if (!ChildData)
    return llvm::None;
  return PatternSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CatchClauseSyntax CatchClauseSyntax::withPattern(
  llvm::Optional<PatternSyntax> NewPatternSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternSyntax.hasValue()) {
    raw = NewPatternSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CatchClauseSyntax>(raw, Cursor::Pattern);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<WhereClauseSyntax> CatchClauseSyntax::getWhereClause() {
  auto ChildData = Data->getChild(Cursor::WhereClause);
  if (!ChildData)
    return llvm::None;
  return WhereClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CatchClauseSyntax CatchClauseSyntax::withWhereClause(
  llvm::Optional<WhereClauseSyntax> NewWhereClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewWhereClauseSyntax.hasValue()) {
    raw = NewWhereClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CatchClauseSyntax>(raw, Cursor::WhereClause);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CodeBlockSyntax CatchClauseSyntax::getBody() {
  return CodeBlockSyntax {Root, Data->getChild(Cursor::Body).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CatchClauseSyntax CatchClauseSyntax::withBody(
  llvm::Optional<CodeBlockSyntax> NewCodeBlockSyntax) {
  RC<RawSyntax> raw;
  if (NewCodeBlockSyntax.hasValue()) {
    raw = NewCodeBlockSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CodeBlock);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CatchClauseSyntax>(raw, Cursor::Body);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void PoundAssertStmtSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 6);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PoundAssert, tok::pound_assert);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Comma, tok::comma);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Message, tok::string_literal);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundAssertStmtSyntax::getPoundAssert() {
  return TokenSyntax {Root, Data->getChild(Cursor::PoundAssert).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundAssertStmtSyntax PoundAssertStmtSyntax::withPoundAssert(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::pound_assert, OwnedString::makeUnowned("#assert"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundAssertStmtSyntax>(raw, Cursor::PoundAssert);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundAssertStmtSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundAssertStmtSyntax PoundAssertStmtSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundAssertStmtSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax PoundAssertStmtSyntax::getCondition() {
  return ExprSyntax {Root, Data->getChild(Cursor::Condition).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundAssertStmtSyntax PoundAssertStmtSyntax::withCondition(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundAssertStmtSyntax>(raw, Cursor::Condition);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> PoundAssertStmtSyntax::getComma() {
  auto ChildData = Data->getChild(Cursor::Comma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundAssertStmtSyntax PoundAssertStmtSyntax::withComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundAssertStmtSyntax>(raw, Cursor::Comma);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> PoundAssertStmtSyntax::getMessage() {
  auto ChildData = Data->getChild(Cursor::Message);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundAssertStmtSyntax PoundAssertStmtSyntax::withMessage(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundAssertStmtSyntax>(raw, Cursor::Message);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax PoundAssertStmtSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

PoundAssertStmtSyntax PoundAssertStmtSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<PoundAssertStmtSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void GenericWhereClauseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, WhereKeyword, tok::kw_where);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax GenericWhereClauseSyntax::getWhereKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::WhereKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericWhereClauseSyntax GenericWhereClauseSyntax::withWhereKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_where, OwnedString::makeUnowned("where"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericWhereClauseSyntax>(raw, Cursor::WhereKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
GenericRequirementListSyntax GenericWhereClauseSyntax::getRequirementList() {
  return GenericRequirementListSyntax {Root, Data->getChild(Cursor::RequirementList).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
GenericWhereClauseSyntax GenericWhereClauseSyntax::addRequirement(Syntax Requirement) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::RequirementList);
  if (raw)
    raw = raw->append(Requirement.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::GenericRequirementList,
                          {Requirement.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<GenericWhereClauseSyntax>(raw, Cursor::RequirementList);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericWhereClauseSyntax GenericWhereClauseSyntax::withRequirementList(
  llvm::Optional<GenericRequirementListSyntax> NewGenericRequirementListSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericRequirementListSyntax.hasValue()) {
    raw = NewGenericRequirementListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::GenericRequirementList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericWhereClauseSyntax>(raw, Cursor::RequirementList);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SameTypeRequirementSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, EqualityToken, tok::oper_binary_spaced, tok::oper_binary_unspaced);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax SameTypeRequirementSyntax::getLeftTypeIdentifier() {
  return TypeSyntax {Root, Data->getChild(Cursor::LeftTypeIdentifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SameTypeRequirementSyntax SameTypeRequirementSyntax::withLeftTypeIdentifier(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SameTypeRequirementSyntax>(raw, Cursor::LeftTypeIdentifier);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SameTypeRequirementSyntax::getEqualityToken() {
  return TokenSyntax {Root, Data->getChild(Cursor::EqualityToken).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SameTypeRequirementSyntax SameTypeRequirementSyntax::withEqualityToken(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::oper_binary_spaced, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SameTypeRequirementSyntax>(raw, Cursor::EqualityToken);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax SameTypeRequirementSyntax::getRightTypeIdentifier() {
  return TypeSyntax {Root, Data->getChild(Cursor::RightTypeIdentifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SameTypeRequirementSyntax SameTypeRequirementSyntax::withRightTypeIdentifier(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SameTypeRequirementSyntax>(raw, Cursor::RightTypeIdentifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> SameTypeRequirementSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SameTypeRequirementSyntax SameTypeRequirementSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SameTypeRequirementSyntax>(raw, Cursor::TrailingComma);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void GenericParameterSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> GenericParameterSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
GenericParameterSyntax GenericParameterSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<GenericParameterSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericParameterSyntax GenericParameterSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericParameterSyntax>(raw, Cursor::Attributes);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax GenericParameterSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericParameterSyntax GenericParameterSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericParameterSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> GenericParameterSyntax::getColon() {
  auto ChildData = Data->getChild(Cursor::Colon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericParameterSyntax GenericParameterSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericParameterSyntax>(raw, Cursor::Colon);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeSyntax> GenericParameterSyntax::getInheritedType() {
  auto ChildData = Data->getChild(Cursor::InheritedType);
  if (!ChildData)
    return llvm::None;
  return TypeSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericParameterSyntax GenericParameterSyntax::withInheritedType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericParameterSyntax>(raw, Cursor::InheritedType);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> GenericParameterSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericParameterSyntax GenericParameterSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericParameterSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void GenericParameterClauseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftAngleBracket, tok::l_angle);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightAngleBracket, tok::r_angle);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax GenericParameterClauseSyntax::getLeftAngleBracket() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftAngleBracket).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericParameterClauseSyntax GenericParameterClauseSyntax::withLeftAngleBracket(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_angle, OwnedString::makeUnowned("<"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericParameterClauseSyntax>(raw, Cursor::LeftAngleBracket);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
GenericParameterListSyntax GenericParameterClauseSyntax::getGenericParameterList() {
  return GenericParameterListSyntax {Root, Data->getChild(Cursor::GenericParameterList).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
GenericParameterClauseSyntax GenericParameterClauseSyntax::addGenericParameter(GenericParameterSyntax GenericParameter) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::GenericParameterList);
  if (raw)
    raw = raw->append(GenericParameter.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::GenericParameterList,
                          {GenericParameter.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<GenericParameterClauseSyntax>(raw, Cursor::GenericParameterList);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericParameterClauseSyntax GenericParameterClauseSyntax::withGenericParameterList(
  llvm::Optional<GenericParameterListSyntax> NewGenericParameterListSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericParameterListSyntax.hasValue()) {
    raw = NewGenericParameterListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::GenericParameterList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericParameterClauseSyntax>(raw, Cursor::GenericParameterList);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax GenericParameterClauseSyntax::getRightAngleBracket() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightAngleBracket).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericParameterClauseSyntax GenericParameterClauseSyntax::withRightAngleBracket(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_angle, OwnedString::makeUnowned(">"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericParameterClauseSyntax>(raw, Cursor::RightAngleBracket);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ConformanceRequirementSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax ConformanceRequirementSyntax::getLeftTypeIdentifier() {
  return TypeSyntax {Root, Data->getChild(Cursor::LeftTypeIdentifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ConformanceRequirementSyntax ConformanceRequirementSyntax::withLeftTypeIdentifier(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ConformanceRequirementSyntax>(raw, Cursor::LeftTypeIdentifier);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ConformanceRequirementSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ConformanceRequirementSyntax ConformanceRequirementSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ConformanceRequirementSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax ConformanceRequirementSyntax::getRightTypeIdentifier() {
  return TypeSyntax {Root, Data->getChild(Cursor::RightTypeIdentifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ConformanceRequirementSyntax ConformanceRequirementSyntax::withRightTypeIdentifier(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ConformanceRequirementSyntax>(raw, Cursor::RightTypeIdentifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> ConformanceRequirementSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ConformanceRequirementSyntax ConformanceRequirementSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ConformanceRequirementSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SimpleTypeIdentifierSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier, tok::kw_Self, tok::kw_Any);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SimpleTypeIdentifierSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SimpleTypeIdentifierSyntax SimpleTypeIdentifierSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SimpleTypeIdentifierSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericArgumentClauseSyntax> SimpleTypeIdentifierSyntax::getGenericArgumentClause() {
  auto ChildData = Data->getChild(Cursor::GenericArgumentClause);
  if (!ChildData)
    return llvm::None;
  return GenericArgumentClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SimpleTypeIdentifierSyntax SimpleTypeIdentifierSyntax::withGenericArgumentClause(
  llvm::Optional<GenericArgumentClauseSyntax> NewGenericArgumentClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericArgumentClauseSyntax.hasValue()) {
    raw = NewGenericArgumentClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SimpleTypeIdentifierSyntax>(raw, Cursor::GenericArgumentClause);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void MemberTypeIdentifierSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Period, tok::period, tok::period_prefix);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier, tok::kw_Self, tok::kw_Any);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax MemberTypeIdentifierSyntax::getBaseType() {
  return TypeSyntax {Root, Data->getChild(Cursor::BaseType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberTypeIdentifierSyntax MemberTypeIdentifierSyntax::withBaseType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberTypeIdentifierSyntax>(raw, Cursor::BaseType);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax MemberTypeIdentifierSyntax::getPeriod() {
  return TokenSyntax {Root, Data->getChild(Cursor::Period).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberTypeIdentifierSyntax MemberTypeIdentifierSyntax::withPeriod(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::period, OwnedString::makeUnowned("."));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberTypeIdentifierSyntax>(raw, Cursor::Period);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax MemberTypeIdentifierSyntax::getName() {
  return TokenSyntax {Root, Data->getChild(Cursor::Name).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberTypeIdentifierSyntax MemberTypeIdentifierSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberTypeIdentifierSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<GenericArgumentClauseSyntax> MemberTypeIdentifierSyntax::getGenericArgumentClause() {
  auto ChildData = Data->getChild(Cursor::GenericArgumentClause);
  if (!ChildData)
    return llvm::None;
  return GenericArgumentClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MemberTypeIdentifierSyntax MemberTypeIdentifierSyntax::withGenericArgumentClause(
  llvm::Optional<GenericArgumentClauseSyntax> NewGenericArgumentClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericArgumentClauseSyntax.hasValue()) {
    raw = NewGenericArgumentClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MemberTypeIdentifierSyntax>(raw, Cursor::GenericArgumentClause);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ClassRestrictionTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ClassKeyword, tok::kw_class);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ClassRestrictionTypeSyntax::getClassKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::ClassKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ClassRestrictionTypeSyntax ClassRestrictionTypeSyntax::withClassKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_class, OwnedString::makeUnowned("class"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ClassRestrictionTypeSyntax>(raw, Cursor::ClassKeyword);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ArrayTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftSquareBracket, tok::l_square);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightSquareBracket, tok::r_square);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ArrayTypeSyntax::getLeftSquareBracket() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftSquareBracket).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ArrayTypeSyntax ArrayTypeSyntax::withLeftSquareBracket(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ArrayTypeSyntax>(raw, Cursor::LeftSquareBracket);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax ArrayTypeSyntax::getElementType() {
  return TypeSyntax {Root, Data->getChild(Cursor::ElementType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ArrayTypeSyntax ArrayTypeSyntax::withElementType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ArrayTypeSyntax>(raw, Cursor::ElementType);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ArrayTypeSyntax::getRightSquareBracket() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightSquareBracket).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ArrayTypeSyntax ArrayTypeSyntax::withRightSquareBracket(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ArrayTypeSyntax>(raw, Cursor::RightSquareBracket);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void DictionaryTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 5);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftSquareBracket, tok::l_square);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightSquareBracket, tok::r_square);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DictionaryTypeSyntax::getLeftSquareBracket() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftSquareBracket).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryTypeSyntax DictionaryTypeSyntax::withLeftSquareBracket(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_square, OwnedString::makeUnowned("["));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryTypeSyntax>(raw, Cursor::LeftSquareBracket);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax DictionaryTypeSyntax::getKeyType() {
  return TypeSyntax {Root, Data->getChild(Cursor::KeyType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryTypeSyntax DictionaryTypeSyntax::withKeyType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryTypeSyntax>(raw, Cursor::KeyType);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DictionaryTypeSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryTypeSyntax DictionaryTypeSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryTypeSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax DictionaryTypeSyntax::getValueType() {
  return TypeSyntax {Root, Data->getChild(Cursor::ValueType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryTypeSyntax DictionaryTypeSyntax::withValueType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryTypeSyntax>(raw, Cursor::ValueType);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax DictionaryTypeSyntax::getRightSquareBracket() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightSquareBracket).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

DictionaryTypeSyntax DictionaryTypeSyntax::withRightSquareBracket(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_square, OwnedString::makeUnowned("]"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<DictionaryTypeSyntax>(raw, Cursor::RightSquareBracket);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void MetatypeTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Period, tok::period);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TypeOrProtocol, tok::identifier);
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token_text(raw, TypeOrProtocol,
                                 tok::identifier, "Type", "Protocol");
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax MetatypeTypeSyntax::getBaseType() {
  return TypeSyntax {Root, Data->getChild(Cursor::BaseType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MetatypeTypeSyntax MetatypeTypeSyntax::withBaseType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MetatypeTypeSyntax>(raw, Cursor::BaseType);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax MetatypeTypeSyntax::getPeriod() {
  return TokenSyntax {Root, Data->getChild(Cursor::Period).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MetatypeTypeSyntax MetatypeTypeSyntax::withPeriod(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::period, OwnedString::makeUnowned("."));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MetatypeTypeSyntax>(raw, Cursor::Period);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax MetatypeTypeSyntax::getTypeOrProtocol() {
  return TokenSyntax {Root, Data->getChild(Cursor::TypeOrProtocol).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

MetatypeTypeSyntax MetatypeTypeSyntax::withTypeOrProtocol(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<MetatypeTypeSyntax>(raw, Cursor::TypeOrProtocol);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void OptionalTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, QuestionMark, tok::question_postfix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax OptionalTypeSyntax::getWrappedType() {
  return TypeSyntax {Root, Data->getChild(Cursor::WrappedType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OptionalTypeSyntax OptionalTypeSyntax::withWrappedType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OptionalTypeSyntax>(raw, Cursor::WrappedType);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax OptionalTypeSyntax::getQuestionMark() {
  return TokenSyntax {Root, Data->getChild(Cursor::QuestionMark).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OptionalTypeSyntax OptionalTypeSyntax::withQuestionMark(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::question_postfix, OwnedString::makeUnowned("?"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OptionalTypeSyntax>(raw, Cursor::QuestionMark);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void SomeTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, SomeSpecifier, tok::identifier);
#line 44 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token_text(raw, SomeSpecifier,
                                 tok::identifier, "some");
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax SomeTypeSyntax::getSomeSpecifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::SomeSpecifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SomeTypeSyntax SomeTypeSyntax::withSomeSpecifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SomeTypeSyntax>(raw, Cursor::SomeSpecifier);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax SomeTypeSyntax::getBaseType() {
  return TypeSyntax {Root, Data->getChild(Cursor::BaseType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

SomeTypeSyntax SomeTypeSyntax::withBaseType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<SomeTypeSyntax>(raw, Cursor::BaseType);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ImplicitlyUnwrappedOptionalTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ExclamationMark, tok::exclaim_postfix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax ImplicitlyUnwrappedOptionalTypeSyntax::getWrappedType() {
  return TypeSyntax {Root, Data->getChild(Cursor::WrappedType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ImplicitlyUnwrappedOptionalTypeSyntax ImplicitlyUnwrappedOptionalTypeSyntax::withWrappedType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ImplicitlyUnwrappedOptionalTypeSyntax>(raw, Cursor::WrappedType);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ImplicitlyUnwrappedOptionalTypeSyntax::getExclamationMark() {
  return TokenSyntax {Root, Data->getChild(Cursor::ExclamationMark).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ImplicitlyUnwrappedOptionalTypeSyntax ImplicitlyUnwrappedOptionalTypeSyntax::withExclamationMark(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::exclaim_postfix, OwnedString::makeUnowned("!"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ImplicitlyUnwrappedOptionalTypeSyntax>(raw, Cursor::ExclamationMark);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void CompositionTypeElementSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax CompositionTypeElementSyntax::getType() {
  return TypeSyntax {Root, Data->getChild(Cursor::Type).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CompositionTypeElementSyntax CompositionTypeElementSyntax::withType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CompositionTypeElementSyntax>(raw, Cursor::Type);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> CompositionTypeElementSyntax::getAmpersand() {
  auto ChildData = Data->getChild(Cursor::Ampersand);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CompositionTypeElementSyntax CompositionTypeElementSyntax::withAmpersand(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CompositionTypeElementSyntax>(raw, Cursor::Ampersand);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void CompositionTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CompositionTypeElementListSyntax CompositionTypeSyntax::getElements() {
  return CompositionTypeElementListSyntax {Root, Data->getChild(Cursor::Elements).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
CompositionTypeSyntax CompositionTypeSyntax::addElement(CompositionTypeElementSyntax Element) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Elements);
  if (raw)
    raw = raw->append(Element.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::CompositionTypeElementList,
                          {Element.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<CompositionTypeSyntax>(raw, Cursor::Elements);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

CompositionTypeSyntax CompositionTypeSyntax::withElements(
  llvm::Optional<CompositionTypeElementListSyntax> NewCompositionTypeElementListSyntax) {
  RC<RawSyntax> raw;
  if (NewCompositionTypeElementListSyntax.hasValue()) {
    raw = NewCompositionTypeElementListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::CompositionTypeElementList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<CompositionTypeSyntax>(raw, Cursor::Elements);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TupleTypeElementSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 8);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, InOut, tok::kw_inout);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Name, tok::identifier, tok::kw__);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, SecondName, tok::identifier, tok::kw__);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Ellipsis, tok::ellipsis);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TupleTypeElementSyntax::getInOut() {
  auto ChildData = Data->getChild(Cursor::InOut);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleTypeElementSyntax TupleTypeElementSyntax::withInOut(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleTypeElementSyntax>(raw, Cursor::InOut);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TupleTypeElementSyntax::getName() {
  auto ChildData = Data->getChild(Cursor::Name);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleTypeElementSyntax TupleTypeElementSyntax::withName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleTypeElementSyntax>(raw, Cursor::Name);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TupleTypeElementSyntax::getSecondName() {
  auto ChildData = Data->getChild(Cursor::SecondName);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleTypeElementSyntax TupleTypeElementSyntax::withSecondName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleTypeElementSyntax>(raw, Cursor::SecondName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TupleTypeElementSyntax::getColon() {
  auto ChildData = Data->getChild(Cursor::Colon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleTypeElementSyntax TupleTypeElementSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleTypeElementSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax TupleTypeElementSyntax::getType() {
  return TypeSyntax {Root, Data->getChild(Cursor::Type).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleTypeElementSyntax TupleTypeElementSyntax::withType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleTypeElementSyntax>(raw, Cursor::Type);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TupleTypeElementSyntax::getEllipsis() {
  auto ChildData = Data->getChild(Cursor::Ellipsis);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleTypeElementSyntax TupleTypeElementSyntax::withEllipsis(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleTypeElementSyntax>(raw, Cursor::Ellipsis);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<InitializerClauseSyntax> TupleTypeElementSyntax::getInitializer() {
  auto ChildData = Data->getChild(Cursor::Initializer);
  if (!ChildData)
    return llvm::None;
  return InitializerClauseSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleTypeElementSyntax TupleTypeElementSyntax::withInitializer(
  llvm::Optional<InitializerClauseSyntax> NewInitializerClauseSyntax) {
  RC<RawSyntax> raw;
  if (NewInitializerClauseSyntax.hasValue()) {
    raw = NewInitializerClauseSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleTypeElementSyntax>(raw, Cursor::Initializer);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TupleTypeElementSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleTypeElementSyntax TupleTypeElementSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleTypeElementSyntax>(raw, Cursor::TrailingComma);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TupleTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TupleTypeSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleTypeSyntax TupleTypeSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleTypeSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TupleTypeElementListSyntax TupleTypeSyntax::getElements() {
  return TupleTypeElementListSyntax {Root, Data->getChild(Cursor::Elements).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TupleTypeSyntax TupleTypeSyntax::addElement(TupleTypeElementSyntax Element) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Elements);
  if (raw)
    raw = raw->append(Element.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::TupleTypeElementList,
                          {Element.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<TupleTypeSyntax>(raw, Cursor::Elements);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleTypeSyntax TupleTypeSyntax::withElements(
  llvm::Optional<TupleTypeElementListSyntax> NewTupleTypeElementListSyntax) {
  RC<RawSyntax> raw;
  if (NewTupleTypeElementListSyntax.hasValue()) {
    raw = NewTupleTypeElementListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::TupleTypeElementList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleTypeSyntax>(raw, Cursor::Elements);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TupleTypeSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TupleTypeSyntax TupleTypeSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TupleTypeSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void FunctionTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 6);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, ThrowsOrRethrowsKeyword, tok::kw_throws, tok::kw_rethrows, tok::kw_throw);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Arrow, tok::arrow);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax FunctionTypeSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionTypeSyntax FunctionTypeSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionTypeSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TupleTypeElementListSyntax FunctionTypeSyntax::getArguments() {
  return TupleTypeElementListSyntax {Root, Data->getChild(Cursor::Arguments).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
FunctionTypeSyntax FunctionTypeSyntax::addArgument(TupleTypeElementSyntax Argument) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Arguments);
  if (raw)
    raw = raw->append(Argument.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::TupleTypeElementList,
                          {Argument.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<FunctionTypeSyntax>(raw, Cursor::Arguments);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionTypeSyntax FunctionTypeSyntax::withArguments(
  llvm::Optional<TupleTypeElementListSyntax> NewTupleTypeElementListSyntax) {
  RC<RawSyntax> raw;
  if (NewTupleTypeElementListSyntax.hasValue()) {
    raw = NewTupleTypeElementListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::TupleTypeElementList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionTypeSyntax>(raw, Cursor::Arguments);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax FunctionTypeSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionTypeSyntax FunctionTypeSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionTypeSyntax>(raw, Cursor::RightParen);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> FunctionTypeSyntax::getThrowsOrRethrowsKeyword() {
  auto ChildData = Data->getChild(Cursor::ThrowsOrRethrowsKeyword);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionTypeSyntax FunctionTypeSyntax::withThrowsOrRethrowsKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionTypeSyntax>(raw, Cursor::ThrowsOrRethrowsKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax FunctionTypeSyntax::getArrow() {
  return TokenSyntax {Root, Data->getChild(Cursor::Arrow).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionTypeSyntax FunctionTypeSyntax::withArrow(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::arrow, OwnedString::makeUnowned("->"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionTypeSyntax>(raw, Cursor::Arrow);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax FunctionTypeSyntax::getReturnType() {
  return TypeSyntax {Root, Data->getChild(Cursor::ReturnType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

FunctionTypeSyntax FunctionTypeSyntax::withReturnType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<FunctionTypeSyntax>(raw, Cursor::ReturnType);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AttributedTypeSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> AttributedTypeSyntax::getSpecifier() {
  auto ChildData = Data->getChild(Cursor::Specifier);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AttributedTypeSyntax AttributedTypeSyntax::withSpecifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AttributedTypeSyntax>(raw, Cursor::Specifier);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<AttributeListSyntax> AttributedTypeSyntax::getAttributes() {
  auto ChildData = Data->getChild(Cursor::Attributes);
  if (!ChildData)
    return llvm::None;
  return AttributeListSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
AttributedTypeSyntax AttributedTypeSyntax::addAttribute(Syntax Attribute) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Attributes);
  if (raw)
    raw = raw->append(Attribute.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::AttributeList,
                          {Attribute.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<AttributedTypeSyntax>(raw, Cursor::Attributes);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AttributedTypeSyntax AttributedTypeSyntax::withAttributes(
  llvm::Optional<AttributeListSyntax> NewAttributeListSyntax) {
  RC<RawSyntax> raw;
  if (NewAttributeListSyntax.hasValue()) {
    raw = NewAttributeListSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AttributedTypeSyntax>(raw, Cursor::Attributes);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax AttributedTypeSyntax::getBaseType() {
  return TypeSyntax {Root, Data->getChild(Cursor::BaseType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AttributedTypeSyntax AttributedTypeSyntax::withBaseType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AttributedTypeSyntax>(raw, Cursor::BaseType);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void GenericArgumentSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax GenericArgumentSyntax::getArgumentType() {
  return TypeSyntax {Root, Data->getChild(Cursor::ArgumentType).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericArgumentSyntax GenericArgumentSyntax::withArgumentType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericArgumentSyntax>(raw, Cursor::ArgumentType);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> GenericArgumentSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericArgumentSyntax GenericArgumentSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericArgumentSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void GenericArgumentClauseSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftAngleBracket, tok::l_angle);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightAngleBracket, tok::r_angle);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax GenericArgumentClauseSyntax::getLeftAngleBracket() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftAngleBracket).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericArgumentClauseSyntax GenericArgumentClauseSyntax::withLeftAngleBracket(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_angle, OwnedString::makeUnowned("<"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericArgumentClauseSyntax>(raw, Cursor::LeftAngleBracket);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
GenericArgumentListSyntax GenericArgumentClauseSyntax::getArguments() {
  return GenericArgumentListSyntax {Root, Data->getChild(Cursor::Arguments).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
GenericArgumentClauseSyntax GenericArgumentClauseSyntax::addArgument(GenericArgumentSyntax Argument) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Arguments);
  if (raw)
    raw = raw->append(Argument.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::GenericArgumentList,
                          {Argument.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<GenericArgumentClauseSyntax>(raw, Cursor::Arguments);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericArgumentClauseSyntax GenericArgumentClauseSyntax::withArguments(
  llvm::Optional<GenericArgumentListSyntax> NewGenericArgumentListSyntax) {
  RC<RawSyntax> raw;
  if (NewGenericArgumentListSyntax.hasValue()) {
    raw = NewGenericArgumentListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::GenericArgumentList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericArgumentClauseSyntax>(raw, Cursor::Arguments);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax GenericArgumentClauseSyntax::getRightAngleBracket() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightAngleBracket).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

GenericArgumentClauseSyntax GenericArgumentClauseSyntax::withRightAngleBracket(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_angle, OwnedString::makeUnowned(">"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<GenericArgumentClauseSyntax>(raw, Cursor::RightAngleBracket);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TypeAnnotationSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TypeAnnotationSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypeAnnotationSyntax TypeAnnotationSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypeAnnotationSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax TypeAnnotationSyntax::getType() {
  return TypeSyntax {Root, Data->getChild(Cursor::Type).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TypeAnnotationSyntax TypeAnnotationSyntax::withType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TypeAnnotationSyntax>(raw, Cursor::Type);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void EnumCasePatternSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Period, tok::period);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, CaseName, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeSyntax> EnumCasePatternSyntax::getType() {
  auto ChildData = Data->getChild(Cursor::Type);
  if (!ChildData)
    return llvm::None;
  return TypeSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCasePatternSyntax EnumCasePatternSyntax::withType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCasePatternSyntax>(raw, Cursor::Type);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax EnumCasePatternSyntax::getPeriod() {
  return TokenSyntax {Root, Data->getChild(Cursor::Period).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCasePatternSyntax EnumCasePatternSyntax::withPeriod(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::period, OwnedString::makeUnowned("."));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCasePatternSyntax>(raw, Cursor::Period);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax EnumCasePatternSyntax::getCaseName() {
  return TokenSyntax {Root, Data->getChild(Cursor::CaseName).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCasePatternSyntax EnumCasePatternSyntax::withCaseName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCasePatternSyntax>(raw, Cursor::CaseName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TuplePatternSyntax> EnumCasePatternSyntax::getAssociatedTuple() {
  auto ChildData = Data->getChild(Cursor::AssociatedTuple);
  if (!ChildData)
    return llvm::None;
  return TuplePatternSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

EnumCasePatternSyntax EnumCasePatternSyntax::withAssociatedTuple(
  llvm::Optional<TuplePatternSyntax> NewTuplePatternSyntax) {
  RC<RawSyntax> raw;
  if (NewTuplePatternSyntax.hasValue()) {
    raw = NewTuplePatternSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<EnumCasePatternSyntax>(raw, Cursor::AssociatedTuple);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void IsTypePatternSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, IsKeyword, tok::kw_is);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax IsTypePatternSyntax::getIsKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::IsKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IsTypePatternSyntax IsTypePatternSyntax::withIsKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_is, OwnedString::makeUnowned("is"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IsTypePatternSyntax>(raw, Cursor::IsKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax IsTypePatternSyntax::getType() {
  return TypeSyntax {Root, Data->getChild(Cursor::Type).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IsTypePatternSyntax IsTypePatternSyntax::withType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IsTypePatternSyntax>(raw, Cursor::Type);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void OptionalPatternSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, QuestionMark, tok::question_postfix);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PatternSyntax OptionalPatternSyntax::getSubPattern() {
  return PatternSyntax {Root, Data->getChild(Cursor::SubPattern).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OptionalPatternSyntax OptionalPatternSyntax::withSubPattern(
  llvm::Optional<PatternSyntax> NewPatternSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternSyntax.hasValue()) {
    raw = NewPatternSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Pattern);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OptionalPatternSyntax>(raw, Cursor::SubPattern);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax OptionalPatternSyntax::getQuestionMark() {
  return TokenSyntax {Root, Data->getChild(Cursor::QuestionMark).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

OptionalPatternSyntax OptionalPatternSyntax::withQuestionMark(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::question_postfix, OwnedString::makeUnowned("?"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<OptionalPatternSyntax>(raw, Cursor::QuestionMark);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void IdentifierPatternSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Identifier, tok::kw_self, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax IdentifierPatternSyntax::getIdentifier() {
  return TokenSyntax {Root, Data->getChild(Cursor::Identifier).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

IdentifierPatternSyntax IdentifierPatternSyntax::withIdentifier(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_self, OwnedString::makeUnowned("self"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<IdentifierPatternSyntax>(raw, Cursor::Identifier);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AsTypePatternSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, AsKeyword, tok::kw_as);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PatternSyntax AsTypePatternSyntax::getPattern() {
  return PatternSyntax {Root, Data->getChild(Cursor::Pattern).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AsTypePatternSyntax AsTypePatternSyntax::withPattern(
  llvm::Optional<PatternSyntax> NewPatternSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternSyntax.hasValue()) {
    raw = NewPatternSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Pattern);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AsTypePatternSyntax>(raw, Cursor::Pattern);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AsTypePatternSyntax::getAsKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::AsKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AsTypePatternSyntax AsTypePatternSyntax::withAsKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_as, OwnedString::makeUnowned("as"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AsTypePatternSyntax>(raw, Cursor::AsKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TypeSyntax AsTypePatternSyntax::getType() {
  return TypeSyntax {Root, Data->getChild(Cursor::Type).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AsTypePatternSyntax AsTypePatternSyntax::withType(
  llvm::Optional<TypeSyntax> NewTypeSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeSyntax.hasValue()) {
    raw = NewTypeSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Type);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AsTypePatternSyntax>(raw, Cursor::Type);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TuplePatternSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LeftParen, tok::l_paren);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, RightParen, tok::r_paren);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TuplePatternSyntax::getLeftParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::LeftParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TuplePatternSyntax TuplePatternSyntax::withLeftParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::l_paren, OwnedString::makeUnowned("("));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TuplePatternSyntax>(raw, Cursor::LeftParen);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TuplePatternElementListSyntax TuplePatternSyntax::getElements() {
  return TuplePatternElementListSyntax {Root, Data->getChild(Cursor::Elements).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 77 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TuplePatternSyntax TuplePatternSyntax::addElement(TuplePatternElementSyntax Element) {
  RC<RawSyntax> raw = getRaw()->getChild(Cursor::Elements);
  if (raw)
    raw = raw->append(Element.getRaw());
  else
    raw = RawSyntax::make(SyntaxKind::TuplePatternElementList,
                          {Element.getRaw()}, SourcePresence::Present);
  return Data->replaceChild<TuplePatternSyntax>(raw, Cursor::Elements);
}
#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TuplePatternSyntax TuplePatternSyntax::withElements(
  llvm::Optional<TuplePatternElementListSyntax> NewTuplePatternElementListSyntax) {
  RC<RawSyntax> raw;
  if (NewTuplePatternElementListSyntax.hasValue()) {
    raw = NewTuplePatternElementListSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::TuplePatternElementList);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TuplePatternSyntax>(raw, Cursor::Elements);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax TuplePatternSyntax::getRightParen() {
  return TokenSyntax {Root, Data->getChild(Cursor::RightParen).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TuplePatternSyntax TuplePatternSyntax::withRightParen(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::r_paren, OwnedString::makeUnowned(")"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TuplePatternSyntax>(raw, Cursor::RightParen);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void WildcardPatternSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Wildcard, tok::kw__);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax WildcardPatternSyntax::getWildcard() {
  return TokenSyntax {Root, Data->getChild(Cursor::Wildcard).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

WildcardPatternSyntax WildcardPatternSyntax::withWildcard(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw__, OwnedString::makeUnowned("_"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<WildcardPatternSyntax>(raw, Cursor::Wildcard);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TypeAnnotationSyntax> WildcardPatternSyntax::getTypeAnnotation() {
  auto ChildData = Data->getChild(Cursor::TypeAnnotation);
  if (!ChildData)
    return llvm::None;
  return TypeAnnotationSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

WildcardPatternSyntax WildcardPatternSyntax::withTypeAnnotation(
  llvm::Optional<TypeAnnotationSyntax> NewTypeAnnotationSyntax) {
  RC<RawSyntax> raw;
  if (NewTypeAnnotationSyntax.hasValue()) {
    raw = NewTypeAnnotationSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<WildcardPatternSyntax>(raw, Cursor::TypeAnnotation);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void TuplePatternElementSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 4);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelName, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LabelColon, tok::colon);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TuplePatternElementSyntax::getLabelName() {
  auto ChildData = Data->getChild(Cursor::LabelName);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TuplePatternElementSyntax TuplePatternElementSyntax::withLabelName(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TuplePatternElementSyntax>(raw, Cursor::LabelName);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TuplePatternElementSyntax::getLabelColon() {
  auto ChildData = Data->getChild(Cursor::LabelColon);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TuplePatternElementSyntax TuplePatternElementSyntax::withLabelColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TuplePatternElementSyntax>(raw, Cursor::LabelColon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PatternSyntax TuplePatternElementSyntax::getPattern() {
  return PatternSyntax {Root, Data->getChild(Cursor::Pattern).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TuplePatternElementSyntax TuplePatternElementSyntax::withPattern(
  llvm::Optional<PatternSyntax> NewPatternSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternSyntax.hasValue()) {
    raw = NewPatternSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Pattern);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TuplePatternElementSyntax>(raw, Cursor::Pattern);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> TuplePatternElementSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

TuplePatternElementSyntax TuplePatternElementSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<TuplePatternElementSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ExpressionPatternSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 1);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
ExprSyntax ExpressionPatternSyntax::getExpression() {
  return ExprSyntax {Root, Data->getChild(Cursor::Expression).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ExpressionPatternSyntax ExpressionPatternSyntax::withExpression(
  llvm::Optional<ExprSyntax> NewExprSyntax) {
  RC<RawSyntax> raw;
  if (NewExprSyntax.hasValue()) {
    raw = NewExprSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Expr);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ExpressionPatternSyntax>(raw, Cursor::Expression);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void ValueBindingPatternSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, LetOrVarKeyword, tok::kw_let, tok::kw_var);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax ValueBindingPatternSyntax::getLetOrVarKeyword() {
  return TokenSyntax {Root, Data->getChild(Cursor::LetOrVarKeyword).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ValueBindingPatternSyntax ValueBindingPatternSyntax::withLetOrVarKeyword(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::kw_let, OwnedString::makeUnowned("let"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ValueBindingPatternSyntax>(raw, Cursor::LetOrVarKeyword);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
PatternSyntax ValueBindingPatternSyntax::getValuePattern() {
  return PatternSyntax {Root, Data->getChild(Cursor::ValuePattern).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

ValueBindingPatternSyntax ValueBindingPatternSyntax::withValuePattern(
  llvm::Optional<PatternSyntax> NewPatternSyntax) {
  RC<RawSyntax> raw;
  if (NewPatternSyntax.hasValue()) {
    raw = NewPatternSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::Pattern);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<ValueBindingPatternSyntax>(raw, Cursor::ValuePattern);
}

#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AvailabilityArgumentSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Entry))
    assert([](const RC<RawSyntax> &Raw) {
 // check Entry
return [](const RC<RawSyntax> &Raw) {
 // check Star
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::oper_binary_spaced;
}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check IdentifierRestriction
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::identifier;
}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check AvailabilityVersionRestriction
return AvailabilityVersionRestrictionSyntax::kindof(Raw->getKind());}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check AvailabilityLabeledArgument
return AvailabilityLabeledArgumentSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, TrailingComma, tok::comma);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax AvailabilityArgumentSyntax::getEntry() {
  return Syntax {Root, Data->getChild(Cursor::Entry).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AvailabilityArgumentSyntax AvailabilityArgumentSyntax::withEntry(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::oper_binary_spaced, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AvailabilityArgumentSyntax>(raw, Cursor::Entry);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> AvailabilityArgumentSyntax::getTrailingComma() {
  auto ChildData = Data->getChild(Cursor::TrailingComma);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AvailabilityArgumentSyntax AvailabilityArgumentSyntax::withTrailingComma(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AvailabilityArgumentSyntax>(raw, Cursor::TrailingComma);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AvailabilityLabeledArgumentSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Label, tok::identifier);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Colon, tok::colon);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::Value))
    assert([](const RC<RawSyntax> &Raw) {
 // check Value
return [](const RC<RawSyntax> &Raw) {
 // check String
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::string_literal;
}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check Version
return VersionTupleSyntax::kindof(Raw->getKind());}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
#line 53 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AvailabilityLabeledArgumentSyntax::getLabel() {
  return TokenSyntax {Root, Data->getChild(Cursor::Label).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AvailabilityLabeledArgumentSyntax AvailabilityLabeledArgumentSyntax::withLabel(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AvailabilityLabeledArgumentSyntax>(raw, Cursor::Label);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AvailabilityLabeledArgumentSyntax::getColon() {
  return TokenSyntax {Root, Data->getChild(Cursor::Colon).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AvailabilityLabeledArgumentSyntax AvailabilityLabeledArgumentSyntax::withColon(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::colon, OwnedString::makeUnowned(":"));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AvailabilityLabeledArgumentSyntax>(raw, Cursor::Colon);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax AvailabilityLabeledArgumentSyntax::getValue() {
  return Syntax {Root, Data->getChild(Cursor::Value).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AvailabilityLabeledArgumentSyntax AvailabilityLabeledArgumentSyntax::withValue(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::string_literal, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AvailabilityLabeledArgumentSyntax>(raw, Cursor::Value);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void AvailabilityVersionRestrictionSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 2);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, Platform, tok::identifier);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
TokenSyntax AvailabilityVersionRestrictionSyntax::getPlatform() {
  return TokenSyntax {Root, Data->getChild(Cursor::Platform).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AvailabilityVersionRestrictionSyntax AvailabilityVersionRestrictionSyntax::withPlatform(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::identifier, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AvailabilityVersionRestrictionSyntax>(raw, Cursor::Platform);
}

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
VersionTupleSyntax AvailabilityVersionRestrictionSyntax::getVersion() {
  return VersionTupleSyntax {Root, Data->getChild(Cursor::Version).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

AvailabilityVersionRestrictionSyntax AvailabilityVersionRestrictionSyntax::withVersion(
  llvm::Optional<VersionTupleSyntax> NewVersionTupleSyntax) {
  RC<RawSyntax> raw;
  if (NewVersionTupleSyntax.hasValue()) {
    raw = NewVersionTupleSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(SyntaxKind::VersionTuple);
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<AvailabilityVersionRestrictionSyntax>(raw, Cursor::Version);
}

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
void VersionTupleSyntax::validate() const {
#ifndef NDEBUG
  auto raw = Data->getRaw();
  if (isMissing()) return;
  assert(raw->getLayout().size() == 3);
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  if (auto &__Child = raw->getChild(Cursor::MajorMinor))
    assert([](const RC<RawSyntax> &Raw) {
 // check MajorMinor
return [](const RC<RawSyntax> &Raw) {
 // check Major
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::integer_literal;
}(Raw) || [](const RC<RawSyntax> &Raw) {
 // check MajorMinor
if (!Raw->isToken()) return false;
auto TokKind = Raw->getTokenKind();
return TokKind == tok::floating_literal;
}(Raw);
}(__Child));
#line 50 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PatchPeriod, tok::period);
#line 38 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  syntax_assert_child_token(raw, PatchVersion, tok::integer_literal);
#line 52 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
#endif
}
#line 55 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 65 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
Syntax VersionTupleSyntax::getMajorMinor() {
  return Syntax {Root, Data->getChild(Cursor::MajorMinor).get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

VersionTupleSyntax VersionTupleSyntax::withMajorMinor(
  llvm::Optional<Syntax> NewSyntax) {
  RC<RawSyntax> raw;
  if (NewSyntax.hasValue()) {
    raw = NewSyntax->getRaw();
  } else {
#line 97 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = RawSyntax::missing(tok::integer_literal, OwnedString::makeUnowned(""));
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<VersionTupleSyntax>(raw, Cursor::MajorMinor);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> VersionTupleSyntax::getPatchPeriod() {
  auto ChildData = Data->getChild(Cursor::PatchPeriod);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

VersionTupleSyntax VersionTupleSyntax::withPatchPeriod(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<VersionTupleSyntax>(raw, Cursor::PatchPeriod);
}

#line 58 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
llvm::Optional<TokenSyntax> VersionTupleSyntax::getPatchVersion() {
  auto ChildData = Data->getChild(Cursor::PatchVersion);
  if (!ChildData)
    return llvm::None;
  return TokenSyntax {Root, ChildData.get()};
}
#line 69 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

#line 87 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

VersionTupleSyntax VersionTupleSyntax::withPatchVersion(
  llvm::Optional<TokenSyntax> NewTokenSyntax) {
  RC<RawSyntax> raw;
  if (NewTokenSyntax.hasValue()) {
    raw = NewTokenSyntax->getRaw();
  } else {
#line 95 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
    raw = nullptr;
#line 99 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"
  }
  return Data->replaceChild<VersionTupleSyntax>(raw, Cursor::PatchVersion);
}

#line 105 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Syntax/SyntaxNodes.cpp.gyb"

const char* swift::syntax::getSyntaxStructureVersioningIdentifier() {
  return "4459570639681560034";
}
