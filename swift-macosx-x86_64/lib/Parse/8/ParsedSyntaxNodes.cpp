#line 6 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
//// Automatically Generated From ParsedSyntaxNodes.cpp.gyb.
//// Do Not Edit Directly!
//===--- ParsedSyntaxNodes.cpp - Parsed Syntax Node definitions -----------===//
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

#include "swift/Parse/ParsedSyntaxNodes.h"
#include "swift/Syntax/SyntaxNodes.h"

using namespace swift;
using namespace swift::syntax;

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedCodeBlockItemSyntax::getDeferredItem() {
  return ParsedSyntax {getRaw().getDeferredChildren()[CodeBlockItemSyntax::Cursor::Item]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedCodeBlockItemSyntax::getDeferredSemicolon() {
  auto RawChild = getRaw().getDeferredChildren()[CodeBlockItemSyntax::Cursor::Semicolon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedSyntax>
ParsedCodeBlockItemSyntax::getDeferredErrorTokens() {
  auto RawChild = getRaw().getDeferredChildren()[CodeBlockItemSyntax::Cursor::ErrorTokens];
  if (RawChild.isNull())
    return None;
  return ParsedSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedCodeBlockSyntax::getDeferredLeftBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[CodeBlockSyntax::Cursor::LeftBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockItemListSyntax ParsedCodeBlockSyntax::getDeferredStatements() {
  return ParsedCodeBlockItemListSyntax {getRaw().getDeferredChildren()[CodeBlockSyntax::Cursor::Statements]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedCodeBlockSyntax::getDeferredRightBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[CodeBlockSyntax::Cursor::RightBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedInOutExprSyntax::getDeferredAmpersand() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[InOutExprSyntax::Cursor::Ampersand]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedInOutExprSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[InOutExprSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundColumnExprSyntax::getDeferredPoundColumn() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundColumnExprSyntax::Cursor::PoundColumn]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTryExprSyntax::getDeferredTryKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TryExprSyntax::Cursor::TryKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTryExprSyntax::getDeferredQuestionOrExclamationMark() {
  auto RawChild = getRaw().getDeferredChildren()[TryExprSyntax::Cursor::QuestionOrExclamationMark];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedTryExprSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[TryExprSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDeclNameArgumentSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DeclNameArgumentSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDeclNameArgumentSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DeclNameArgumentSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDeclNameArgumentsSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DeclNameArgumentsSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedDeclNameArgumentListSyntax ParsedDeclNameArgumentsSyntax::getDeferredArguments() {
  return ParsedDeclNameArgumentListSyntax {getRaw().getDeferredChildren()[DeclNameArgumentsSyntax::Cursor::Arguments]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDeclNameArgumentsSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DeclNameArgumentsSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedIdentifierExprSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[IdentifierExprSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedDeclNameArgumentsSyntax>
ParsedIdentifierExprSyntax::getDeferredDeclNameArguments() {
  auto RawChild = getRaw().getDeferredChildren()[IdentifierExprSyntax::Cursor::DeclNameArguments];
  if (RawChild.isNull())
    return None;
  return ParsedDeclNameArgumentsSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSuperRefExprSyntax::getDeferredSuperKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SuperRefExprSyntax::Cursor::SuperKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedNilLiteralExprSyntax::getDeferredNilKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[NilLiteralExprSyntax::Cursor::NilKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDiscardAssignmentExprSyntax::getDeferredWildcard() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DiscardAssignmentExprSyntax::Cursor::Wildcard]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAssignmentExprSyntax::getDeferredAssignToken() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AssignmentExprSyntax::Cursor::AssignToken]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprListSyntax ParsedSequenceExprSyntax::getDeferredElements() {
  return ParsedExprListSyntax {getRaw().getDeferredChildren()[SequenceExprSyntax::Cursor::Elements]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundLineExprSyntax::getDeferredPoundLine() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundLineExprSyntax::Cursor::PoundLine]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundFileExprSyntax::getDeferredPoundFile() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundFileExprSyntax::Cursor::PoundFile]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundFunctionExprSyntax::getDeferredPoundFunction() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundFunctionExprSyntax::Cursor::PoundFunction]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundDsohandleExprSyntax::getDeferredPoundDsohandle() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundDsohandleExprSyntax::Cursor::PoundDsohandle]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSymbolicReferenceExprSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SymbolicReferenceExprSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericArgumentClauseSyntax>
ParsedSymbolicReferenceExprSyntax::getDeferredGenericArgumentClause() {
  auto RawChild = getRaw().getDeferredChildren()[SymbolicReferenceExprSyntax::Cursor::GenericArgumentClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericArgumentClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedPrefixOperatorExprSyntax::getDeferredOperatorToken() {
  auto RawChild = getRaw().getDeferredChildren()[PrefixOperatorExprSyntax::Cursor::OperatorToken];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedPrefixOperatorExprSyntax::getDeferredPostfixExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[PrefixOperatorExprSyntax::Cursor::PostfixExpression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedBinaryOperatorExprSyntax::getDeferredOperatorToken() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[BinaryOperatorExprSyntax::Cursor::OperatorToken]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedArrowExprSyntax::getDeferredThrowsToken() {
  auto RawChild = getRaw().getDeferredChildren()[ArrowExprSyntax::Cursor::ThrowsToken];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedArrowExprSyntax::getDeferredArrowToken() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ArrowExprSyntax::Cursor::ArrowToken]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedFloatLiteralExprSyntax::getDeferredFloatingDigits() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[FloatLiteralExprSyntax::Cursor::FloatingDigits]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTupleExprSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TupleExprSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTupleElementListSyntax ParsedTupleExprSyntax::getDeferredElementList() {
  return ParsedTupleElementListSyntax {getRaw().getDeferredChildren()[TupleExprSyntax::Cursor::ElementList]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTupleExprSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TupleExprSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedArrayExprSyntax::getDeferredLeftSquare() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ArrayExprSyntax::Cursor::LeftSquare]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedArrayElementListSyntax ParsedArrayExprSyntax::getDeferredElements() {
  return ParsedArrayElementListSyntax {getRaw().getDeferredChildren()[ArrayExprSyntax::Cursor::Elements]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedArrayExprSyntax::getDeferredRightSquare() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ArrayExprSyntax::Cursor::RightSquare]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDictionaryExprSyntax::getDeferredLeftSquare() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DictionaryExprSyntax::Cursor::LeftSquare]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedDictionaryExprSyntax::getDeferredContent() {
  return ParsedSyntax {getRaw().getDeferredChildren()[DictionaryExprSyntax::Cursor::Content]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDictionaryExprSyntax::getDeferredRightSquare() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DictionaryExprSyntax::Cursor::RightSquare]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionCallArgumentSyntax::getDeferredLabel() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionCallArgumentSyntax::Cursor::Label];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionCallArgumentSyntax::getDeferredColon() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionCallArgumentSyntax::Cursor::Colon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedFunctionCallArgumentSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[FunctionCallArgumentSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionCallArgumentSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionCallArgumentSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTupleElementSyntax::getDeferredLabel() {
  auto RawChild = getRaw().getDeferredChildren()[TupleElementSyntax::Cursor::Label];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTupleElementSyntax::getDeferredColon() {
  auto RawChild = getRaw().getDeferredChildren()[TupleElementSyntax::Cursor::Colon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedTupleElementSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[TupleElementSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTupleElementSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[TupleElementSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedArrayElementSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[ArrayElementSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedArrayElementSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[ArrayElementSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedDictionaryElementSyntax::getDeferredKeyExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[DictionaryElementSyntax::Cursor::KeyExpression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDictionaryElementSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DictionaryElementSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedDictionaryElementSyntax::getDeferredValueExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[DictionaryElementSyntax::Cursor::ValueExpression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedDictionaryElementSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[DictionaryElementSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedIntegerLiteralExprSyntax::getDeferredDigits() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[IntegerLiteralExprSyntax::Cursor::Digits]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedBooleanLiteralExprSyntax::getDeferredBooleanLiteral() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[BooleanLiteralExprSyntax::Cursor::BooleanLiteral]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedTernaryExprSyntax::getDeferredConditionExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[TernaryExprSyntax::Cursor::ConditionExpression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTernaryExprSyntax::getDeferredQuestionMark() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TernaryExprSyntax::Cursor::QuestionMark]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedTernaryExprSyntax::getDeferredFirstChoice() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[TernaryExprSyntax::Cursor::FirstChoice]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTernaryExprSyntax::getDeferredColonMark() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TernaryExprSyntax::Cursor::ColonMark]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedTernaryExprSyntax::getDeferredSecondChoice() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[TernaryExprSyntax::Cursor::SecondChoice]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedExprSyntax>
ParsedMemberAccessExprSyntax::getDeferredBase() {
  auto RawChild = getRaw().getDeferredChildren()[MemberAccessExprSyntax::Cursor::Base];
  if (RawChild.isNull())
    return None;
  return ParsedExprSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedMemberAccessExprSyntax::getDeferredDot() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[MemberAccessExprSyntax::Cursor::Dot]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedMemberAccessExprSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[MemberAccessExprSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedDeclNameArgumentsSyntax>
ParsedMemberAccessExprSyntax::getDeferredDeclNameArguments() {
  auto RawChild = getRaw().getDeferredChildren()[MemberAccessExprSyntax::Cursor::DeclNameArguments];
  if (RawChild.isNull())
    return None;
  return ParsedDeclNameArgumentsSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedIsExprSyntax::getDeferredIsTok() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[IsExprSyntax::Cursor::IsTok]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedIsExprSyntax::getDeferredTypeName() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[IsExprSyntax::Cursor::TypeName]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAsExprSyntax::getDeferredAsTok() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AsExprSyntax::Cursor::AsTok]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedAsExprSyntax::getDeferredQuestionOrExclamationMark() {
  auto RawChild = getRaw().getDeferredChildren()[AsExprSyntax::Cursor::QuestionOrExclamationMark];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedAsExprSyntax::getDeferredTypeName() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[AsExprSyntax::Cursor::TypeName]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedTypeExprSyntax::getDeferredType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[TypeExprSyntax::Cursor::Type]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenListSyntax>
ParsedClosureCaptureItemSyntax::getDeferredSpecifier() {
  auto RawChild = getRaw().getDeferredChildren()[ClosureCaptureItemSyntax::Cursor::Specifier];
  if (RawChild.isNull())
    return None;
  return ParsedTokenListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedClosureCaptureItemSyntax::getDeferredName() {
  auto RawChild = getRaw().getDeferredChildren()[ClosureCaptureItemSyntax::Cursor::Name];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedClosureCaptureItemSyntax::getDeferredAssignToken() {
  auto RawChild = getRaw().getDeferredChildren()[ClosureCaptureItemSyntax::Cursor::AssignToken];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedClosureCaptureItemSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[ClosureCaptureItemSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedClosureCaptureItemSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[ClosureCaptureItemSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedClosureCaptureSignatureSyntax::getDeferredLeftSquare() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ClosureCaptureSignatureSyntax::Cursor::LeftSquare]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedClosureCaptureItemListSyntax>
ParsedClosureCaptureSignatureSyntax::getDeferredItems() {
  auto RawChild = getRaw().getDeferredChildren()[ClosureCaptureSignatureSyntax::Cursor::Items];
  if (RawChild.isNull())
    return None;
  return ParsedClosureCaptureItemListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedClosureCaptureSignatureSyntax::getDeferredRightSquare() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ClosureCaptureSignatureSyntax::Cursor::RightSquare]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedClosureParamSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ClosureParamSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedClosureParamSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[ClosureParamSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedClosureCaptureSignatureSyntax>
ParsedClosureSignatureSyntax::getDeferredCapture() {
  auto RawChild = getRaw().getDeferredChildren()[ClosureSignatureSyntax::Cursor::Capture];
  if (RawChild.isNull())
    return None;
  return ParsedClosureCaptureSignatureSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedSyntax>
ParsedClosureSignatureSyntax::getDeferredInput() {
  auto RawChild = getRaw().getDeferredChildren()[ClosureSignatureSyntax::Cursor::Input];
  if (RawChild.isNull())
    return None;
  return ParsedSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedClosureSignatureSyntax::getDeferredThrowsTok() {
  auto RawChild = getRaw().getDeferredChildren()[ClosureSignatureSyntax::Cursor::ThrowsTok];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedReturnClauseSyntax>
ParsedClosureSignatureSyntax::getDeferredOutput() {
  auto RawChild = getRaw().getDeferredChildren()[ClosureSignatureSyntax::Cursor::Output];
  if (RawChild.isNull())
    return None;
  return ParsedReturnClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedClosureSignatureSyntax::getDeferredInTok() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ClosureSignatureSyntax::Cursor::InTok]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedClosureExprSyntax::getDeferredLeftBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ClosureExprSyntax::Cursor::LeftBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedClosureSignatureSyntax>
ParsedClosureExprSyntax::getDeferredSignature() {
  auto RawChild = getRaw().getDeferredChildren()[ClosureExprSyntax::Cursor::Signature];
  if (RawChild.isNull())
    return None;
  return ParsedClosureSignatureSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockItemListSyntax ParsedClosureExprSyntax::getDeferredStatements() {
  return ParsedCodeBlockItemListSyntax {getRaw().getDeferredChildren()[ClosureExprSyntax::Cursor::Statements]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedClosureExprSyntax::getDeferredRightBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ClosureExprSyntax::Cursor::RightBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPatternSyntax ParsedUnresolvedPatternExprSyntax::getDeferredPattern() {
  return ParsedPatternSyntax {getRaw().getDeferredChildren()[UnresolvedPatternExprSyntax::Cursor::Pattern]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedFunctionCallExprSyntax::getDeferredCalledExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[FunctionCallExprSyntax::Cursor::CalledExpression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionCallExprSyntax::getDeferredLeftParen() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionCallExprSyntax::Cursor::LeftParen];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedFunctionCallArgumentListSyntax ParsedFunctionCallExprSyntax::getDeferredArgumentList() {
  return ParsedFunctionCallArgumentListSyntax {getRaw().getDeferredChildren()[FunctionCallExprSyntax::Cursor::ArgumentList]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionCallExprSyntax::getDeferredRightParen() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionCallExprSyntax::Cursor::RightParen];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedClosureExprSyntax>
ParsedFunctionCallExprSyntax::getDeferredTrailingClosure() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionCallExprSyntax::Cursor::TrailingClosure];
  if (RawChild.isNull())
    return None;
  return ParsedClosureExprSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedSubscriptExprSyntax::getDeferredCalledExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[SubscriptExprSyntax::Cursor::CalledExpression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSubscriptExprSyntax::getDeferredLeftBracket() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SubscriptExprSyntax::Cursor::LeftBracket]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedFunctionCallArgumentListSyntax ParsedSubscriptExprSyntax::getDeferredArgumentList() {
  return ParsedFunctionCallArgumentListSyntax {getRaw().getDeferredChildren()[SubscriptExprSyntax::Cursor::ArgumentList]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSubscriptExprSyntax::getDeferredRightBracket() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SubscriptExprSyntax::Cursor::RightBracket]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedClosureExprSyntax>
ParsedSubscriptExprSyntax::getDeferredTrailingClosure() {
  auto RawChild = getRaw().getDeferredChildren()[SubscriptExprSyntax::Cursor::TrailingClosure];
  if (RawChild.isNull())
    return None;
  return ParsedClosureExprSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedOptionalChainingExprSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[OptionalChainingExprSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedOptionalChainingExprSyntax::getDeferredQuestionMark() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[OptionalChainingExprSyntax::Cursor::QuestionMark]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedForcedValueExprSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[ForcedValueExprSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedForcedValueExprSyntax::getDeferredExclamationMark() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ForcedValueExprSyntax::Cursor::ExclamationMark]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedPostfixUnaryExprSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[PostfixUnaryExprSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPostfixUnaryExprSyntax::getDeferredOperatorToken() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PostfixUnaryExprSyntax::Cursor::OperatorToken]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedSpecializeExprSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[SpecializeExprSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedGenericArgumentClauseSyntax ParsedSpecializeExprSyntax::getDeferredGenericArgumentClause() {
  return ParsedGenericArgumentClauseSyntax {getRaw().getDeferredChildren()[SpecializeExprSyntax::Cursor::GenericArgumentClause]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedStringSegmentSyntax::getDeferredContent() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[StringSegmentSyntax::Cursor::Content]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedExpressionSegmentSyntax::getDeferredBackslash() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ExpressionSegmentSyntax::Cursor::Backslash]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedExpressionSegmentSyntax::getDeferredDelimiter() {
  auto RawChild = getRaw().getDeferredChildren()[ExpressionSegmentSyntax::Cursor::Delimiter];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedExpressionSegmentSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ExpressionSegmentSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedFunctionCallArgumentListSyntax ParsedExpressionSegmentSyntax::getDeferredExpressions() {
  return ParsedFunctionCallArgumentListSyntax {getRaw().getDeferredChildren()[ExpressionSegmentSyntax::Cursor::Expressions]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedExpressionSegmentSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ExpressionSegmentSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedStringLiteralExprSyntax::getDeferredOpenDelimiter() {
  auto RawChild = getRaw().getDeferredChildren()[StringLiteralExprSyntax::Cursor::OpenDelimiter];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedStringLiteralExprSyntax::getDeferredOpenQuote() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[StringLiteralExprSyntax::Cursor::OpenQuote]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedStringLiteralSegmentsSyntax ParsedStringLiteralExprSyntax::getDeferredSegments() {
  return ParsedStringLiteralSegmentsSyntax {getRaw().getDeferredChildren()[StringLiteralExprSyntax::Cursor::Segments]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedStringLiteralExprSyntax::getDeferredCloseQuote() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[StringLiteralExprSyntax::Cursor::CloseQuote]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedStringLiteralExprSyntax::getDeferredCloseDelimiter() {
  auto RawChild = getRaw().getDeferredChildren()[StringLiteralExprSyntax::Cursor::CloseDelimiter];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedKeyPathExprSyntax::getDeferredBackslash() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[KeyPathExprSyntax::Cursor::Backslash]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedExprSyntax>
ParsedKeyPathExprSyntax::getDeferredRootExpr() {
  auto RawChild = getRaw().getDeferredChildren()[KeyPathExprSyntax::Cursor::RootExpr];
  if (RawChild.isNull())
    return None;
  return ParsedExprSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedKeyPathExprSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[KeyPathExprSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedKeyPathBaseExprSyntax::getDeferredPeriod() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[KeyPathBaseExprSyntax::Cursor::Period]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedObjcNamePieceSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ObjcNamePieceSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedObjcNamePieceSyntax::getDeferredDot() {
  auto RawChild = getRaw().getDeferredChildren()[ObjcNamePieceSyntax::Cursor::Dot];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedObjcKeyPathExprSyntax::getDeferredKeyPath() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ObjcKeyPathExprSyntax::Cursor::KeyPath]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedObjcKeyPathExprSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ObjcKeyPathExprSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedObjcNameSyntax ParsedObjcKeyPathExprSyntax::getDeferredName() {
  return ParsedObjcNameSyntax {getRaw().getDeferredChildren()[ObjcKeyPathExprSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedObjcKeyPathExprSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ObjcKeyPathExprSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedObjcSelectorExprSyntax::getDeferredPoundSelector() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ObjcSelectorExprSyntax::Cursor::PoundSelector]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedObjcSelectorExprSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ObjcSelectorExprSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedObjcSelectorExprSyntax::getDeferredKind() {
  auto RawChild = getRaw().getDeferredChildren()[ObjcSelectorExprSyntax::Cursor::Kind];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedObjcSelectorExprSyntax::getDeferredColon() {
  auto RawChild = getRaw().getDeferredChildren()[ObjcSelectorExprSyntax::Cursor::Colon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedObjcSelectorExprSyntax::getDeferredName() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[ObjcSelectorExprSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedObjcSelectorExprSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ObjcSelectorExprSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedEditorPlaceholderExprSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[EditorPlaceholderExprSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedObjectLiteralExprSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ObjectLiteralExprSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedObjectLiteralExprSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ObjectLiteralExprSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedFunctionCallArgumentListSyntax ParsedObjectLiteralExprSyntax::getDeferredArguments() {
  return ParsedFunctionCallArgumentListSyntax {getRaw().getDeferredChildren()[ObjectLiteralExprSyntax::Cursor::Arguments]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedObjectLiteralExprSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ObjectLiteralExprSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTypeInitializerClauseSyntax::getDeferredEqual() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TypeInitializerClauseSyntax::Cursor::Equal]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedTypeInitializerClauseSyntax::getDeferredValue() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[TypeInitializerClauseSyntax::Cursor::Value]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedTypealiasDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[TypealiasDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedTypealiasDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[TypealiasDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTypealiasDeclSyntax::getDeferredTypealiasKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TypealiasDeclSyntax::Cursor::TypealiasKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTypealiasDeclSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TypealiasDeclSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericParameterClauseSyntax>
ParsedTypealiasDeclSyntax::getDeferredGenericParameterClause() {
  auto RawChild = getRaw().getDeferredChildren()[TypealiasDeclSyntax::Cursor::GenericParameterClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericParameterClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeInitializerClauseSyntax>
ParsedTypealiasDeclSyntax::getDeferredInitializer() {
  auto RawChild = getRaw().getDeferredChildren()[TypealiasDeclSyntax::Cursor::Initializer];
  if (RawChild.isNull())
    return None;
  return ParsedTypeInitializerClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericWhereClauseSyntax>
ParsedTypealiasDeclSyntax::getDeferredGenericWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[TypealiasDeclSyntax::Cursor::GenericWhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedAssociatedtypeDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[AssociatedtypeDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedAssociatedtypeDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[AssociatedtypeDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAssociatedtypeDeclSyntax::getDeferredAssociatedtypeKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AssociatedtypeDeclSyntax::Cursor::AssociatedtypeKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAssociatedtypeDeclSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AssociatedtypeDeclSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeInheritanceClauseSyntax>
ParsedAssociatedtypeDeclSyntax::getDeferredInheritanceClause() {
  auto RawChild = getRaw().getDeferredChildren()[AssociatedtypeDeclSyntax::Cursor::InheritanceClause];
  if (RawChild.isNull())
    return None;
  return ParsedTypeInheritanceClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeInitializerClauseSyntax>
ParsedAssociatedtypeDeclSyntax::getDeferredInitializer() {
  auto RawChild = getRaw().getDeferredChildren()[AssociatedtypeDeclSyntax::Cursor::Initializer];
  if (RawChild.isNull())
    return None;
  return ParsedTypeInitializerClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericWhereClauseSyntax>
ParsedAssociatedtypeDeclSyntax::getDeferredGenericWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[AssociatedtypeDeclSyntax::Cursor::GenericWhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedParameterClauseSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ParameterClauseSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedFunctionParameterListSyntax ParsedParameterClauseSyntax::getDeferredParameterList() {
  return ParsedFunctionParameterListSyntax {getRaw().getDeferredChildren()[ParameterClauseSyntax::Cursor::ParameterList]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedParameterClauseSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ParameterClauseSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedReturnClauseSyntax::getDeferredArrow() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ReturnClauseSyntax::Cursor::Arrow]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedReturnClauseSyntax::getDeferredReturnType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[ReturnClauseSyntax::Cursor::ReturnType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedParameterClauseSyntax ParsedFunctionSignatureSyntax::getDeferredInput() {
  return ParsedParameterClauseSyntax {getRaw().getDeferredChildren()[FunctionSignatureSyntax::Cursor::Input]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionSignatureSyntax::getDeferredThrowsOrRethrowsKeyword() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionSignatureSyntax::Cursor::ThrowsOrRethrowsKeyword];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedReturnClauseSyntax>
ParsedFunctionSignatureSyntax::getDeferredOutput() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionSignatureSyntax::Cursor::Output];
  if (RawChild.isNull())
    return None;
  return ParsedReturnClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedIfConfigClauseSyntax::getDeferredPoundKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[IfConfigClauseSyntax::Cursor::PoundKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedExprSyntax>
ParsedIfConfigClauseSyntax::getDeferredCondition() {
  auto RawChild = getRaw().getDeferredChildren()[IfConfigClauseSyntax::Cursor::Condition];
  if (RawChild.isNull())
    return None;
  return ParsedExprSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedIfConfigClauseSyntax::getDeferredElements() {
  return ParsedSyntax {getRaw().getDeferredChildren()[IfConfigClauseSyntax::Cursor::Elements]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedIfConfigClauseListSyntax ParsedIfConfigDeclSyntax::getDeferredClauses() {
  return ParsedIfConfigClauseListSyntax {getRaw().getDeferredChildren()[IfConfigDeclSyntax::Cursor::Clauses]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedIfConfigDeclSyntax::getDeferredPoundEndif() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[IfConfigDeclSyntax::Cursor::PoundEndif]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundErrorDeclSyntax::getDeferredPoundError() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundErrorDeclSyntax::Cursor::PoundError]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundErrorDeclSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundErrorDeclSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedStringLiteralExprSyntax ParsedPoundErrorDeclSyntax::getDeferredMessage() {
  return ParsedStringLiteralExprSyntax {getRaw().getDeferredChildren()[PoundErrorDeclSyntax::Cursor::Message]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundErrorDeclSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundErrorDeclSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundWarningDeclSyntax::getDeferredPoundWarning() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundWarningDeclSyntax::Cursor::PoundWarning]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundWarningDeclSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundWarningDeclSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedStringLiteralExprSyntax ParsedPoundWarningDeclSyntax::getDeferredMessage() {
  return ParsedStringLiteralExprSyntax {getRaw().getDeferredChildren()[PoundWarningDeclSyntax::Cursor::Message]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundWarningDeclSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundWarningDeclSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundSourceLocationSyntax::getDeferredPoundSourceLocation() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundSourceLocationSyntax::Cursor::PoundSourceLocation]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundSourceLocationSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundSourceLocationSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedPoundSourceLocationArgsSyntax>
ParsedPoundSourceLocationSyntax::getDeferredArgs() {
  auto RawChild = getRaw().getDeferredChildren()[PoundSourceLocationSyntax::Cursor::Args];
  if (RawChild.isNull())
    return None;
  return ParsedPoundSourceLocationArgsSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundSourceLocationSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundSourceLocationSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundSourceLocationArgsSyntax::getDeferredFileArgLabel() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundSourceLocationArgsSyntax::Cursor::FileArgLabel]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundSourceLocationArgsSyntax::getDeferredFileArgColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundSourceLocationArgsSyntax::Cursor::FileArgColon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundSourceLocationArgsSyntax::getDeferredFileName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundSourceLocationArgsSyntax::Cursor::FileName]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundSourceLocationArgsSyntax::getDeferredComma() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundSourceLocationArgsSyntax::Cursor::Comma]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundSourceLocationArgsSyntax::getDeferredLineArgLabel() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundSourceLocationArgsSyntax::Cursor::LineArgLabel]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundSourceLocationArgsSyntax::getDeferredLineArgColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundSourceLocationArgsSyntax::Cursor::LineArgColon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundSourceLocationArgsSyntax::getDeferredLineNumber() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundSourceLocationArgsSyntax::Cursor::LineNumber]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDeclModifierSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DeclModifierSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedDeclModifierSyntax::getDeferredDetailLeftParen() {
  auto RawChild = getRaw().getDeferredChildren()[DeclModifierSyntax::Cursor::DetailLeftParen];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedDeclModifierSyntax::getDeferredDetail() {
  auto RawChild = getRaw().getDeferredChildren()[DeclModifierSyntax::Cursor::Detail];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedDeclModifierSyntax::getDeferredDetailRightParen() {
  auto RawChild = getRaw().getDeferredChildren()[DeclModifierSyntax::Cursor::DetailRightParen];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedInheritedTypeSyntax::getDeferredTypeName() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[InheritedTypeSyntax::Cursor::TypeName]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedInheritedTypeSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[InheritedTypeSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTypeInheritanceClauseSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TypeInheritanceClauseSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedInheritedTypeListSyntax ParsedTypeInheritanceClauseSyntax::getDeferredInheritedTypeCollection() {
  return ParsedInheritedTypeListSyntax {getRaw().getDeferredChildren()[TypeInheritanceClauseSyntax::Cursor::InheritedTypeCollection]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedClassDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[ClassDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedClassDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[ClassDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedClassDeclSyntax::getDeferredClassKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ClassDeclSyntax::Cursor::ClassKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedClassDeclSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ClassDeclSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericParameterClauseSyntax>
ParsedClassDeclSyntax::getDeferredGenericParameterClause() {
  auto RawChild = getRaw().getDeferredChildren()[ClassDeclSyntax::Cursor::GenericParameterClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericParameterClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeInheritanceClauseSyntax>
ParsedClassDeclSyntax::getDeferredInheritanceClause() {
  auto RawChild = getRaw().getDeferredChildren()[ClassDeclSyntax::Cursor::InheritanceClause];
  if (RawChild.isNull())
    return None;
  return ParsedTypeInheritanceClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericWhereClauseSyntax>
ParsedClassDeclSyntax::getDeferredGenericWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[ClassDeclSyntax::Cursor::GenericWhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedMemberDeclBlockSyntax ParsedClassDeclSyntax::getDeferredMembers() {
  return ParsedMemberDeclBlockSyntax {getRaw().getDeferredChildren()[ClassDeclSyntax::Cursor::Members]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedStructDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[StructDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedStructDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[StructDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedStructDeclSyntax::getDeferredStructKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[StructDeclSyntax::Cursor::StructKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedStructDeclSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[StructDeclSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericParameterClauseSyntax>
ParsedStructDeclSyntax::getDeferredGenericParameterClause() {
  auto RawChild = getRaw().getDeferredChildren()[StructDeclSyntax::Cursor::GenericParameterClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericParameterClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeInheritanceClauseSyntax>
ParsedStructDeclSyntax::getDeferredInheritanceClause() {
  auto RawChild = getRaw().getDeferredChildren()[StructDeclSyntax::Cursor::InheritanceClause];
  if (RawChild.isNull())
    return None;
  return ParsedTypeInheritanceClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericWhereClauseSyntax>
ParsedStructDeclSyntax::getDeferredGenericWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[StructDeclSyntax::Cursor::GenericWhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedMemberDeclBlockSyntax ParsedStructDeclSyntax::getDeferredMembers() {
  return ParsedMemberDeclBlockSyntax {getRaw().getDeferredChildren()[StructDeclSyntax::Cursor::Members]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedProtocolDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[ProtocolDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedProtocolDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[ProtocolDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedProtocolDeclSyntax::getDeferredProtocolKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ProtocolDeclSyntax::Cursor::ProtocolKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedProtocolDeclSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ProtocolDeclSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeInheritanceClauseSyntax>
ParsedProtocolDeclSyntax::getDeferredInheritanceClause() {
  auto RawChild = getRaw().getDeferredChildren()[ProtocolDeclSyntax::Cursor::InheritanceClause];
  if (RawChild.isNull())
    return None;
  return ParsedTypeInheritanceClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericWhereClauseSyntax>
ParsedProtocolDeclSyntax::getDeferredGenericWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[ProtocolDeclSyntax::Cursor::GenericWhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedMemberDeclBlockSyntax ParsedProtocolDeclSyntax::getDeferredMembers() {
  return ParsedMemberDeclBlockSyntax {getRaw().getDeferredChildren()[ProtocolDeclSyntax::Cursor::Members]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedExtensionDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[ExtensionDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedExtensionDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[ExtensionDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedExtensionDeclSyntax::getDeferredExtensionKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ExtensionDeclSyntax::Cursor::ExtensionKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedExtensionDeclSyntax::getDeferredExtendedType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[ExtensionDeclSyntax::Cursor::ExtendedType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeInheritanceClauseSyntax>
ParsedExtensionDeclSyntax::getDeferredInheritanceClause() {
  auto RawChild = getRaw().getDeferredChildren()[ExtensionDeclSyntax::Cursor::InheritanceClause];
  if (RawChild.isNull())
    return None;
  return ParsedTypeInheritanceClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericWhereClauseSyntax>
ParsedExtensionDeclSyntax::getDeferredGenericWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[ExtensionDeclSyntax::Cursor::GenericWhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedMemberDeclBlockSyntax ParsedExtensionDeclSyntax::getDeferredMembers() {
  return ParsedMemberDeclBlockSyntax {getRaw().getDeferredChildren()[ExtensionDeclSyntax::Cursor::Members]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedMemberDeclBlockSyntax::getDeferredLeftBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[MemberDeclBlockSyntax::Cursor::LeftBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedMemberDeclListSyntax ParsedMemberDeclBlockSyntax::getDeferredMembers() {
  return ParsedMemberDeclListSyntax {getRaw().getDeferredChildren()[MemberDeclBlockSyntax::Cursor::Members]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedMemberDeclBlockSyntax::getDeferredRightBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[MemberDeclBlockSyntax::Cursor::RightBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedDeclSyntax ParsedMemberDeclListItemSyntax::getDeferredDecl() {
  return ParsedDeclSyntax {getRaw().getDeferredChildren()[MemberDeclListItemSyntax::Cursor::Decl]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedMemberDeclListItemSyntax::getDeferredSemicolon() {
  auto RawChild = getRaw().getDeferredChildren()[MemberDeclListItemSyntax::Cursor::Semicolon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockItemListSyntax ParsedSourceFileSyntax::getDeferredStatements() {
  return ParsedCodeBlockItemListSyntax {getRaw().getDeferredChildren()[SourceFileSyntax::Cursor::Statements]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSourceFileSyntax::getDeferredEOFToken() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SourceFileSyntax::Cursor::EOFToken]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedInitializerClauseSyntax::getDeferredEqual() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[InitializerClauseSyntax::Cursor::Equal]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedInitializerClauseSyntax::getDeferredValue() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[InitializerClauseSyntax::Cursor::Value]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedFunctionParameterSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionParameterSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionParameterSyntax::getDeferredFirstName() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionParameterSyntax::Cursor::FirstName];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionParameterSyntax::getDeferredSecondName() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionParameterSyntax::Cursor::SecondName];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionParameterSyntax::getDeferredColon() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionParameterSyntax::Cursor::Colon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeSyntax>
ParsedFunctionParameterSyntax::getDeferredType() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionParameterSyntax::Cursor::Type];
  if (RawChild.isNull())
    return None;
  return ParsedTypeSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionParameterSyntax::getDeferredEllipsis() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionParameterSyntax::Cursor::Ellipsis];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedInitializerClauseSyntax>
ParsedFunctionParameterSyntax::getDeferredDefaultArgument() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionParameterSyntax::Cursor::DefaultArgument];
  if (RawChild.isNull())
    return None;
  return ParsedInitializerClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionParameterSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionParameterSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedFunctionDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedFunctionDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedFunctionDeclSyntax::getDeferredFuncKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[FunctionDeclSyntax::Cursor::FuncKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedFunctionDeclSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[FunctionDeclSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericParameterClauseSyntax>
ParsedFunctionDeclSyntax::getDeferredGenericParameterClause() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionDeclSyntax::Cursor::GenericParameterClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericParameterClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedFunctionSignatureSyntax ParsedFunctionDeclSyntax::getDeferredSignature() {
  return ParsedFunctionSignatureSyntax {getRaw().getDeferredChildren()[FunctionDeclSyntax::Cursor::Signature]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericWhereClauseSyntax>
ParsedFunctionDeclSyntax::getDeferredGenericWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionDeclSyntax::Cursor::GenericWhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedCodeBlockSyntax>
ParsedFunctionDeclSyntax::getDeferredBody() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionDeclSyntax::Cursor::Body];
  if (RawChild.isNull())
    return None;
  return ParsedCodeBlockSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedInitializerDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[InitializerDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedInitializerDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[InitializerDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedInitializerDeclSyntax::getDeferredInitKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[InitializerDeclSyntax::Cursor::InitKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedInitializerDeclSyntax::getDeferredOptionalMark() {
  auto RawChild = getRaw().getDeferredChildren()[InitializerDeclSyntax::Cursor::OptionalMark];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericParameterClauseSyntax>
ParsedInitializerDeclSyntax::getDeferredGenericParameterClause() {
  auto RawChild = getRaw().getDeferredChildren()[InitializerDeclSyntax::Cursor::GenericParameterClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericParameterClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedParameterClauseSyntax ParsedInitializerDeclSyntax::getDeferredParameters() {
  return ParsedParameterClauseSyntax {getRaw().getDeferredChildren()[InitializerDeclSyntax::Cursor::Parameters]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedInitializerDeclSyntax::getDeferredThrowsOrRethrowsKeyword() {
  auto RawChild = getRaw().getDeferredChildren()[InitializerDeclSyntax::Cursor::ThrowsOrRethrowsKeyword];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericWhereClauseSyntax>
ParsedInitializerDeclSyntax::getDeferredGenericWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[InitializerDeclSyntax::Cursor::GenericWhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedCodeBlockSyntax>
ParsedInitializerDeclSyntax::getDeferredBody() {
  auto RawChild = getRaw().getDeferredChildren()[InitializerDeclSyntax::Cursor::Body];
  if (RawChild.isNull())
    return None;
  return ParsedCodeBlockSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedDeinitializerDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[DeinitializerDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedDeinitializerDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[DeinitializerDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDeinitializerDeclSyntax::getDeferredDeinitKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DeinitializerDeclSyntax::Cursor::DeinitKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockSyntax ParsedDeinitializerDeclSyntax::getDeferredBody() {
  return ParsedCodeBlockSyntax {getRaw().getDeferredChildren()[DeinitializerDeclSyntax::Cursor::Body]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedSubscriptDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[SubscriptDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedSubscriptDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[SubscriptDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSubscriptDeclSyntax::getDeferredSubscriptKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SubscriptDeclSyntax::Cursor::SubscriptKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericParameterClauseSyntax>
ParsedSubscriptDeclSyntax::getDeferredGenericParameterClause() {
  auto RawChild = getRaw().getDeferredChildren()[SubscriptDeclSyntax::Cursor::GenericParameterClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericParameterClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedParameterClauseSyntax ParsedSubscriptDeclSyntax::getDeferredIndices() {
  return ParsedParameterClauseSyntax {getRaw().getDeferredChildren()[SubscriptDeclSyntax::Cursor::Indices]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedReturnClauseSyntax ParsedSubscriptDeclSyntax::getDeferredResult() {
  return ParsedReturnClauseSyntax {getRaw().getDeferredChildren()[SubscriptDeclSyntax::Cursor::Result]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericWhereClauseSyntax>
ParsedSubscriptDeclSyntax::getDeferredGenericWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[SubscriptDeclSyntax::Cursor::GenericWhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedSyntax>
ParsedSubscriptDeclSyntax::getDeferredAccessor() {
  auto RawChild = getRaw().getDeferredChildren()[SubscriptDeclSyntax::Cursor::Accessor];
  if (RawChild.isNull())
    return None;
  return ParsedSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAccessLevelModifierSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AccessLevelModifierSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedAccessLevelModifierSyntax::getDeferredLeftParen() {
  auto RawChild = getRaw().getDeferredChildren()[AccessLevelModifierSyntax::Cursor::LeftParen];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedAccessLevelModifierSyntax::getDeferredModifier() {
  auto RawChild = getRaw().getDeferredChildren()[AccessLevelModifierSyntax::Cursor::Modifier];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedAccessLevelModifierSyntax::getDeferredRightParen() {
  auto RawChild = getRaw().getDeferredChildren()[AccessLevelModifierSyntax::Cursor::RightParen];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAccessPathComponentSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AccessPathComponentSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedAccessPathComponentSyntax::getDeferredTrailingDot() {
  auto RawChild = getRaw().getDeferredChildren()[AccessPathComponentSyntax::Cursor::TrailingDot];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedImportDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[ImportDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedImportDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[ImportDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedImportDeclSyntax::getDeferredImportTok() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ImportDeclSyntax::Cursor::ImportTok]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedImportDeclSyntax::getDeferredImportKind() {
  auto RawChild = getRaw().getDeferredChildren()[ImportDeclSyntax::Cursor::ImportKind];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedAccessPathSyntax ParsedImportDeclSyntax::getDeferredPath() {
  return ParsedAccessPathSyntax {getRaw().getDeferredChildren()[ImportDeclSyntax::Cursor::Path]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAccessorParameterSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AccessorParameterSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAccessorParameterSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AccessorParameterSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAccessorParameterSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AccessorParameterSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedAccessorDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[AccessorDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedDeclModifierSyntax>
ParsedAccessorDeclSyntax::getDeferredModifier() {
  auto RawChild = getRaw().getDeferredChildren()[AccessorDeclSyntax::Cursor::Modifier];
  if (RawChild.isNull())
    return None;
  return ParsedDeclModifierSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAccessorDeclSyntax::getDeferredAccessorKind() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AccessorDeclSyntax::Cursor::AccessorKind]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAccessorParameterSyntax>
ParsedAccessorDeclSyntax::getDeferredParameter() {
  auto RawChild = getRaw().getDeferredChildren()[AccessorDeclSyntax::Cursor::Parameter];
  if (RawChild.isNull())
    return None;
  return ParsedAccessorParameterSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedCodeBlockSyntax>
ParsedAccessorDeclSyntax::getDeferredBody() {
  auto RawChild = getRaw().getDeferredChildren()[AccessorDeclSyntax::Cursor::Body];
  if (RawChild.isNull())
    return None;
  return ParsedCodeBlockSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAccessorBlockSyntax::getDeferredLeftBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AccessorBlockSyntax::Cursor::LeftBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedAccessorListSyntax ParsedAccessorBlockSyntax::getDeferredAccessors() {
  return ParsedAccessorListSyntax {getRaw().getDeferredChildren()[AccessorBlockSyntax::Cursor::Accessors]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAccessorBlockSyntax::getDeferredRightBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AccessorBlockSyntax::Cursor::RightBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPatternSyntax ParsedPatternBindingSyntax::getDeferredPattern() {
  return ParsedPatternSyntax {getRaw().getDeferredChildren()[PatternBindingSyntax::Cursor::Pattern]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeAnnotationSyntax>
ParsedPatternBindingSyntax::getDeferredTypeAnnotation() {
  auto RawChild = getRaw().getDeferredChildren()[PatternBindingSyntax::Cursor::TypeAnnotation];
  if (RawChild.isNull())
    return None;
  return ParsedTypeAnnotationSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedInitializerClauseSyntax>
ParsedPatternBindingSyntax::getDeferredInitializer() {
  auto RawChild = getRaw().getDeferredChildren()[PatternBindingSyntax::Cursor::Initializer];
  if (RawChild.isNull())
    return None;
  return ParsedInitializerClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedSyntax>
ParsedPatternBindingSyntax::getDeferredAccessor() {
  auto RawChild = getRaw().getDeferredChildren()[PatternBindingSyntax::Cursor::Accessor];
  if (RawChild.isNull())
    return None;
  return ParsedSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedPatternBindingSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[PatternBindingSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedVariableDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[VariableDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedVariableDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[VariableDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedVariableDeclSyntax::getDeferredLetOrVarKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[VariableDeclSyntax::Cursor::LetOrVarKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPatternBindingListSyntax ParsedVariableDeclSyntax::getDeferredBindings() {
  return ParsedPatternBindingListSyntax {getRaw().getDeferredChildren()[VariableDeclSyntax::Cursor::Bindings]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedEnumCaseElementSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[EnumCaseElementSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedParameterClauseSyntax>
ParsedEnumCaseElementSyntax::getDeferredAssociatedValue() {
  auto RawChild = getRaw().getDeferredChildren()[EnumCaseElementSyntax::Cursor::AssociatedValue];
  if (RawChild.isNull())
    return None;
  return ParsedParameterClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedInitializerClauseSyntax>
ParsedEnumCaseElementSyntax::getDeferredRawValue() {
  auto RawChild = getRaw().getDeferredChildren()[EnumCaseElementSyntax::Cursor::RawValue];
  if (RawChild.isNull())
    return None;
  return ParsedInitializerClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedEnumCaseElementSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[EnumCaseElementSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedEnumCaseDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[EnumCaseDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedEnumCaseDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[EnumCaseDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedEnumCaseDeclSyntax::getDeferredCaseKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[EnumCaseDeclSyntax::Cursor::CaseKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedEnumCaseElementListSyntax ParsedEnumCaseDeclSyntax::getDeferredElements() {
  return ParsedEnumCaseElementListSyntax {getRaw().getDeferredChildren()[EnumCaseDeclSyntax::Cursor::Elements]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedEnumDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[EnumDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedEnumDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[EnumDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedEnumDeclSyntax::getDeferredEnumKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[EnumDeclSyntax::Cursor::EnumKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedEnumDeclSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[EnumDeclSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericParameterClauseSyntax>
ParsedEnumDeclSyntax::getDeferredGenericParameters() {
  auto RawChild = getRaw().getDeferredChildren()[EnumDeclSyntax::Cursor::GenericParameters];
  if (RawChild.isNull())
    return None;
  return ParsedGenericParameterClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeInheritanceClauseSyntax>
ParsedEnumDeclSyntax::getDeferredInheritanceClause() {
  auto RawChild = getRaw().getDeferredChildren()[EnumDeclSyntax::Cursor::InheritanceClause];
  if (RawChild.isNull())
    return None;
  return ParsedTypeInheritanceClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericWhereClauseSyntax>
ParsedEnumDeclSyntax::getDeferredGenericWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[EnumDeclSyntax::Cursor::GenericWhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedMemberDeclBlockSyntax ParsedEnumDeclSyntax::getDeferredMembers() {
  return ParsedMemberDeclBlockSyntax {getRaw().getDeferredChildren()[EnumDeclSyntax::Cursor::Members]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedOperatorDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[OperatorDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedOperatorDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[OperatorDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedOperatorDeclSyntax::getDeferredOperatorKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[OperatorDeclSyntax::Cursor::OperatorKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedOperatorDeclSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[OperatorDeclSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedOperatorPrecedenceAndTypesSyntax>
ParsedOperatorDeclSyntax::getDeferredOperatorPrecedenceAndTypes() {
  auto RawChild = getRaw().getDeferredChildren()[OperatorDeclSyntax::Cursor::OperatorPrecedenceAndTypes];
  if (RawChild.isNull())
    return None;
  return ParsedOperatorPrecedenceAndTypesSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedOperatorPrecedenceAndTypesSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[OperatorPrecedenceAndTypesSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedIdentifierListSyntax ParsedOperatorPrecedenceAndTypesSyntax::getDeferredPrecedenceGroupAndDesignatedTypes() {
  return ParsedIdentifierListSyntax {getRaw().getDeferredChildren()[OperatorPrecedenceAndTypesSyntax::Cursor::PrecedenceGroupAndDesignatedTypes]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedPrecedenceGroupDeclSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[PrecedenceGroupDeclSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedModifierListSyntax>
ParsedPrecedenceGroupDeclSyntax::getDeferredModifiers() {
  auto RawChild = getRaw().getDeferredChildren()[PrecedenceGroupDeclSyntax::Cursor::Modifiers];
  if (RawChild.isNull())
    return None;
  return ParsedModifierListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupDeclSyntax::getDeferredPrecedencegroupKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupDeclSyntax::Cursor::PrecedencegroupKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupDeclSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupDeclSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupDeclSyntax::getDeferredLeftBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupDeclSyntax::Cursor::LeftBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPrecedenceGroupAttributeListSyntax ParsedPrecedenceGroupDeclSyntax::getDeferredGroupAttributes() {
  return ParsedPrecedenceGroupAttributeListSyntax {getRaw().getDeferredChildren()[PrecedenceGroupDeclSyntax::Cursor::GroupAttributes]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupDeclSyntax::getDeferredRightBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupDeclSyntax::Cursor::RightBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupRelationSyntax::getDeferredHigherThanOrLowerThan() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupRelationSyntax::Cursor::HigherThanOrLowerThan]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupRelationSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupRelationSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPrecedenceGroupNameListSyntax ParsedPrecedenceGroupRelationSyntax::getDeferredOtherNames() {
  return ParsedPrecedenceGroupNameListSyntax {getRaw().getDeferredChildren()[PrecedenceGroupRelationSyntax::Cursor::OtherNames]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupNameElementSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupNameElementSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedPrecedenceGroupNameElementSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[PrecedenceGroupNameElementSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupAssignmentSyntax::getDeferredAssignmentKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupAssignmentSyntax::Cursor::AssignmentKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupAssignmentSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupAssignmentSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupAssignmentSyntax::getDeferredFlag() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupAssignmentSyntax::Cursor::Flag]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupAssociativitySyntax::getDeferredAssociativityKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupAssociativitySyntax::Cursor::AssociativityKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupAssociativitySyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupAssociativitySyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPrecedenceGroupAssociativitySyntax::getDeferredValue() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PrecedenceGroupAssociativitySyntax::Cursor::Value]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedCustomAttributeSyntax::getDeferredAtSignToken() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[CustomAttributeSyntax::Cursor::AtSignToken]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedCustomAttributeSyntax::getDeferredAttributeName() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[CustomAttributeSyntax::Cursor::AttributeName]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedCustomAttributeSyntax::getDeferredLeftParen() {
  auto RawChild = getRaw().getDeferredChildren()[CustomAttributeSyntax::Cursor::LeftParen];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedFunctionCallArgumentListSyntax>
ParsedCustomAttributeSyntax::getDeferredArgumentList() {
  auto RawChild = getRaw().getDeferredChildren()[CustomAttributeSyntax::Cursor::ArgumentList];
  if (RawChild.isNull())
    return None;
  return ParsedFunctionCallArgumentListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedCustomAttributeSyntax::getDeferredRightParen() {
  auto RawChild = getRaw().getDeferredChildren()[CustomAttributeSyntax::Cursor::RightParen];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAttributeSyntax::getDeferredAtSignToken() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AttributeSyntax::Cursor::AtSignToken]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAttributeSyntax::getDeferredAttributeName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AttributeSyntax::Cursor::AttributeName]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedAttributeSyntax::getDeferredLeftParen() {
  auto RawChild = getRaw().getDeferredChildren()[AttributeSyntax::Cursor::LeftParen];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedSyntax>
ParsedAttributeSyntax::getDeferredArgument() {
  auto RawChild = getRaw().getDeferredChildren()[AttributeSyntax::Cursor::Argument];
  if (RawChild.isNull())
    return None;
  return ParsedSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedAttributeSyntax::getDeferredRightParen() {
  auto RawChild = getRaw().getDeferredChildren()[AttributeSyntax::Cursor::RightParen];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenListSyntax>
ParsedAttributeSyntax::getDeferredTokenList() {
  auto RawChild = getRaw().getDeferredChildren()[AttributeSyntax::Cursor::TokenList];
  if (RawChild.isNull())
    return None;
  return ParsedTokenListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedLabeledSpecializeEntrySyntax::getDeferredLabel() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[LabeledSpecializeEntrySyntax::Cursor::Label]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedLabeledSpecializeEntrySyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[LabeledSpecializeEntrySyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedLabeledSpecializeEntrySyntax::getDeferredValue() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[LabeledSpecializeEntrySyntax::Cursor::Value]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedLabeledSpecializeEntrySyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[LabeledSpecializeEntrySyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedNamedAttributeStringArgumentSyntax::getDeferredNameTok() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[NamedAttributeStringArgumentSyntax::Cursor::NameTok]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedNamedAttributeStringArgumentSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[NamedAttributeStringArgumentSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedNamedAttributeStringArgumentSyntax::getDeferredStringOrDeclname() {
  return ParsedSyntax {getRaw().getDeferredChildren()[NamedAttributeStringArgumentSyntax::Cursor::StringOrDeclname]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedDeclNameSyntax::getDeferredDeclBaseName() {
  return ParsedSyntax {getRaw().getDeferredChildren()[DeclNameSyntax::Cursor::DeclBaseName]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedDeclNameArgumentsSyntax>
ParsedDeclNameSyntax::getDeferredDeclNameArguments() {
  auto RawChild = getRaw().getDeferredChildren()[DeclNameSyntax::Cursor::DeclNameArguments];
  if (RawChild.isNull())
    return None;
  return ParsedDeclNameArgumentsSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSimpleTypeIdentifierSyntax ParsedImplementsAttributeArgumentsSyntax::getDeferredType() {
  return ParsedSimpleTypeIdentifierSyntax {getRaw().getDeferredChildren()[ImplementsAttributeArgumentsSyntax::Cursor::Type]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedImplementsAttributeArgumentsSyntax::getDeferredComma() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ImplementsAttributeArgumentsSyntax::Cursor::Comma]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedImplementsAttributeArgumentsSyntax::getDeferredDeclBaseName() {
  return ParsedSyntax {getRaw().getDeferredChildren()[ImplementsAttributeArgumentsSyntax::Cursor::DeclBaseName]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedDeclNameArgumentsSyntax>
ParsedImplementsAttributeArgumentsSyntax::getDeferredDeclNameArguments() {
  auto RawChild = getRaw().getDeferredChildren()[ImplementsAttributeArgumentsSyntax::Cursor::DeclNameArguments];
  if (RawChild.isNull())
    return None;
  return ParsedDeclNameArgumentsSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedObjCSelectorPieceSyntax::getDeferredName() {
  auto RawChild = getRaw().getDeferredChildren()[ObjCSelectorPieceSyntax::Cursor::Name];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedObjCSelectorPieceSyntax::getDeferredColon() {
  auto RawChild = getRaw().getDeferredChildren()[ObjCSelectorPieceSyntax::Cursor::Colon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedContinueStmtSyntax::getDeferredContinueKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ContinueStmtSyntax::Cursor::ContinueKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedContinueStmtSyntax::getDeferredLabel() {
  auto RawChild = getRaw().getDeferredChildren()[ContinueStmtSyntax::Cursor::Label];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedWhileStmtSyntax::getDeferredLabelName() {
  auto RawChild = getRaw().getDeferredChildren()[WhileStmtSyntax::Cursor::LabelName];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedWhileStmtSyntax::getDeferredLabelColon() {
  auto RawChild = getRaw().getDeferredChildren()[WhileStmtSyntax::Cursor::LabelColon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedWhileStmtSyntax::getDeferredWhileKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[WhileStmtSyntax::Cursor::WhileKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedConditionElementListSyntax ParsedWhileStmtSyntax::getDeferredConditions() {
  return ParsedConditionElementListSyntax {getRaw().getDeferredChildren()[WhileStmtSyntax::Cursor::Conditions]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockSyntax ParsedWhileStmtSyntax::getDeferredBody() {
  return ParsedCodeBlockSyntax {getRaw().getDeferredChildren()[WhileStmtSyntax::Cursor::Body]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDeferStmtSyntax::getDeferredDeferKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DeferStmtSyntax::Cursor::DeferKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockSyntax ParsedDeferStmtSyntax::getDeferredBody() {
  return ParsedCodeBlockSyntax {getRaw().getDeferredChildren()[DeferStmtSyntax::Cursor::Body]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedExpressionStmtSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[ExpressionStmtSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedRepeatWhileStmtSyntax::getDeferredLabelName() {
  auto RawChild = getRaw().getDeferredChildren()[RepeatWhileStmtSyntax::Cursor::LabelName];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedRepeatWhileStmtSyntax::getDeferredLabelColon() {
  auto RawChild = getRaw().getDeferredChildren()[RepeatWhileStmtSyntax::Cursor::LabelColon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedRepeatWhileStmtSyntax::getDeferredRepeatKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[RepeatWhileStmtSyntax::Cursor::RepeatKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockSyntax ParsedRepeatWhileStmtSyntax::getDeferredBody() {
  return ParsedCodeBlockSyntax {getRaw().getDeferredChildren()[RepeatWhileStmtSyntax::Cursor::Body]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedRepeatWhileStmtSyntax::getDeferredWhileKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[RepeatWhileStmtSyntax::Cursor::WhileKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedRepeatWhileStmtSyntax::getDeferredCondition() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[RepeatWhileStmtSyntax::Cursor::Condition]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedGuardStmtSyntax::getDeferredGuardKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[GuardStmtSyntax::Cursor::GuardKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedConditionElementListSyntax ParsedGuardStmtSyntax::getDeferredConditions() {
  return ParsedConditionElementListSyntax {getRaw().getDeferredChildren()[GuardStmtSyntax::Cursor::Conditions]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedGuardStmtSyntax::getDeferredElseKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[GuardStmtSyntax::Cursor::ElseKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockSyntax ParsedGuardStmtSyntax::getDeferredBody() {
  return ParsedCodeBlockSyntax {getRaw().getDeferredChildren()[GuardStmtSyntax::Cursor::Body]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedWhereClauseSyntax::getDeferredWhereKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[WhereClauseSyntax::Cursor::WhereKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedWhereClauseSyntax::getDeferredGuardResult() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[WhereClauseSyntax::Cursor::GuardResult]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedForInStmtSyntax::getDeferredLabelName() {
  auto RawChild = getRaw().getDeferredChildren()[ForInStmtSyntax::Cursor::LabelName];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedForInStmtSyntax::getDeferredLabelColon() {
  auto RawChild = getRaw().getDeferredChildren()[ForInStmtSyntax::Cursor::LabelColon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedForInStmtSyntax::getDeferredForKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ForInStmtSyntax::Cursor::ForKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedForInStmtSyntax::getDeferredCaseKeyword() {
  auto RawChild = getRaw().getDeferredChildren()[ForInStmtSyntax::Cursor::CaseKeyword];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPatternSyntax ParsedForInStmtSyntax::getDeferredPattern() {
  return ParsedPatternSyntax {getRaw().getDeferredChildren()[ForInStmtSyntax::Cursor::Pattern]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeAnnotationSyntax>
ParsedForInStmtSyntax::getDeferredTypeAnnotation() {
  auto RawChild = getRaw().getDeferredChildren()[ForInStmtSyntax::Cursor::TypeAnnotation];
  if (RawChild.isNull())
    return None;
  return ParsedTypeAnnotationSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedForInStmtSyntax::getDeferredInKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ForInStmtSyntax::Cursor::InKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedForInStmtSyntax::getDeferredSequenceExpr() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[ForInStmtSyntax::Cursor::SequenceExpr]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedWhereClauseSyntax>
ParsedForInStmtSyntax::getDeferredWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[ForInStmtSyntax::Cursor::WhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockSyntax ParsedForInStmtSyntax::getDeferredBody() {
  return ParsedCodeBlockSyntax {getRaw().getDeferredChildren()[ForInStmtSyntax::Cursor::Body]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedSwitchStmtSyntax::getDeferredLabelName() {
  auto RawChild = getRaw().getDeferredChildren()[SwitchStmtSyntax::Cursor::LabelName];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedSwitchStmtSyntax::getDeferredLabelColon() {
  auto RawChild = getRaw().getDeferredChildren()[SwitchStmtSyntax::Cursor::LabelColon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSwitchStmtSyntax::getDeferredSwitchKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SwitchStmtSyntax::Cursor::SwitchKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedSwitchStmtSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[SwitchStmtSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSwitchStmtSyntax::getDeferredLeftBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SwitchStmtSyntax::Cursor::LeftBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSwitchCaseListSyntax ParsedSwitchStmtSyntax::getDeferredCases() {
  return ParsedSwitchCaseListSyntax {getRaw().getDeferredChildren()[SwitchStmtSyntax::Cursor::Cases]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSwitchStmtSyntax::getDeferredRightBrace() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SwitchStmtSyntax::Cursor::RightBrace]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedDoStmtSyntax::getDeferredLabelName() {
  auto RawChild = getRaw().getDeferredChildren()[DoStmtSyntax::Cursor::LabelName];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedDoStmtSyntax::getDeferredLabelColon() {
  auto RawChild = getRaw().getDeferredChildren()[DoStmtSyntax::Cursor::LabelColon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDoStmtSyntax::getDeferredDoKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DoStmtSyntax::Cursor::DoKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockSyntax ParsedDoStmtSyntax::getDeferredBody() {
  return ParsedCodeBlockSyntax {getRaw().getDeferredChildren()[DoStmtSyntax::Cursor::Body]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedCatchClauseListSyntax>
ParsedDoStmtSyntax::getDeferredCatchClauses() {
  auto RawChild = getRaw().getDeferredChildren()[DoStmtSyntax::Cursor::CatchClauses];
  if (RawChild.isNull())
    return None;
  return ParsedCatchClauseListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedReturnStmtSyntax::getDeferredReturnKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ReturnStmtSyntax::Cursor::ReturnKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedExprSyntax>
ParsedReturnStmtSyntax::getDeferredExpression() {
  auto RawChild = getRaw().getDeferredChildren()[ReturnStmtSyntax::Cursor::Expression];
  if (RawChild.isNull())
    return None;
  return ParsedExprSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedYieldStmtSyntax::getDeferredYieldKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[YieldStmtSyntax::Cursor::YieldKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedYieldStmtSyntax::getDeferredYields() {
  return ParsedSyntax {getRaw().getDeferredChildren()[YieldStmtSyntax::Cursor::Yields]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedYieldListSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[YieldListSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprListSyntax ParsedYieldListSyntax::getDeferredElementList() {
  return ParsedExprListSyntax {getRaw().getDeferredChildren()[YieldListSyntax::Cursor::ElementList]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedYieldListSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[YieldListSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedYieldListSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[YieldListSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedFallthroughStmtSyntax::getDeferredFallthroughKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[FallthroughStmtSyntax::Cursor::FallthroughKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedBreakStmtSyntax::getDeferredBreakKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[BreakStmtSyntax::Cursor::BreakKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedBreakStmtSyntax::getDeferredLabel() {
  auto RawChild = getRaw().getDeferredChildren()[BreakStmtSyntax::Cursor::Label];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedConditionElementSyntax::getDeferredCondition() {
  return ParsedSyntax {getRaw().getDeferredChildren()[ConditionElementSyntax::Cursor::Condition]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedConditionElementSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[ConditionElementSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAvailabilityConditionSyntax::getDeferredPoundAvailableKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AvailabilityConditionSyntax::Cursor::PoundAvailableKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAvailabilityConditionSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AvailabilityConditionSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedAvailabilitySpecListSyntax ParsedAvailabilityConditionSyntax::getDeferredAvailabilitySpec() {
  return ParsedAvailabilitySpecListSyntax {getRaw().getDeferredChildren()[AvailabilityConditionSyntax::Cursor::AvailabilitySpec]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAvailabilityConditionSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AvailabilityConditionSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedMatchingPatternConditionSyntax::getDeferredCaseKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[MatchingPatternConditionSyntax::Cursor::CaseKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPatternSyntax ParsedMatchingPatternConditionSyntax::getDeferredPattern() {
  return ParsedPatternSyntax {getRaw().getDeferredChildren()[MatchingPatternConditionSyntax::Cursor::Pattern]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeAnnotationSyntax>
ParsedMatchingPatternConditionSyntax::getDeferredTypeAnnotation() {
  auto RawChild = getRaw().getDeferredChildren()[MatchingPatternConditionSyntax::Cursor::TypeAnnotation];
  if (RawChild.isNull())
    return None;
  return ParsedTypeAnnotationSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedInitializerClauseSyntax ParsedMatchingPatternConditionSyntax::getDeferredInitializer() {
  return ParsedInitializerClauseSyntax {getRaw().getDeferredChildren()[MatchingPatternConditionSyntax::Cursor::Initializer]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedOptionalBindingConditionSyntax::getDeferredLetOrVarKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[OptionalBindingConditionSyntax::Cursor::LetOrVarKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPatternSyntax ParsedOptionalBindingConditionSyntax::getDeferredPattern() {
  return ParsedPatternSyntax {getRaw().getDeferredChildren()[OptionalBindingConditionSyntax::Cursor::Pattern]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeAnnotationSyntax>
ParsedOptionalBindingConditionSyntax::getDeferredTypeAnnotation() {
  auto RawChild = getRaw().getDeferredChildren()[OptionalBindingConditionSyntax::Cursor::TypeAnnotation];
  if (RawChild.isNull())
    return None;
  return ParsedTypeAnnotationSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedInitializerClauseSyntax ParsedOptionalBindingConditionSyntax::getDeferredInitializer() {
  return ParsedInitializerClauseSyntax {getRaw().getDeferredChildren()[OptionalBindingConditionSyntax::Cursor::Initializer]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedDeclSyntax ParsedDeclarationStmtSyntax::getDeferredDeclaration() {
  return ParsedDeclSyntax {getRaw().getDeferredChildren()[DeclarationStmtSyntax::Cursor::Declaration]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedThrowStmtSyntax::getDeferredThrowKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ThrowStmtSyntax::Cursor::ThrowKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedThrowStmtSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[ThrowStmtSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedIfStmtSyntax::getDeferredLabelName() {
  auto RawChild = getRaw().getDeferredChildren()[IfStmtSyntax::Cursor::LabelName];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedIfStmtSyntax::getDeferredLabelColon() {
  auto RawChild = getRaw().getDeferredChildren()[IfStmtSyntax::Cursor::LabelColon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedIfStmtSyntax::getDeferredIfKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[IfStmtSyntax::Cursor::IfKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedConditionElementListSyntax ParsedIfStmtSyntax::getDeferredConditions() {
  return ParsedConditionElementListSyntax {getRaw().getDeferredChildren()[IfStmtSyntax::Cursor::Conditions]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockSyntax ParsedIfStmtSyntax::getDeferredBody() {
  return ParsedCodeBlockSyntax {getRaw().getDeferredChildren()[IfStmtSyntax::Cursor::Body]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedIfStmtSyntax::getDeferredElseKeyword() {
  auto RawChild = getRaw().getDeferredChildren()[IfStmtSyntax::Cursor::ElseKeyword];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedSyntax>
ParsedIfStmtSyntax::getDeferredElseBody() {
  auto RawChild = getRaw().getDeferredChildren()[IfStmtSyntax::Cursor::ElseBody];
  if (RawChild.isNull())
    return None;
  return ParsedSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedIfStmtSyntax ParsedElseIfContinuationSyntax::getDeferredIfStatement() {
  return ParsedIfStmtSyntax {getRaw().getDeferredChildren()[ElseIfContinuationSyntax::Cursor::IfStatement]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedElseBlockSyntax::getDeferredElseKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ElseBlockSyntax::Cursor::ElseKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockSyntax ParsedElseBlockSyntax::getDeferredBody() {
  return ParsedCodeBlockSyntax {getRaw().getDeferredChildren()[ElseBlockSyntax::Cursor::Body]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeSyntax>
ParsedSwitchCaseSyntax::getDeferredUnknownAttr() {
  auto RawChild = getRaw().getDeferredChildren()[SwitchCaseSyntax::Cursor::UnknownAttr];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedSwitchCaseSyntax::getDeferredLabel() {
  return ParsedSyntax {getRaw().getDeferredChildren()[SwitchCaseSyntax::Cursor::Label]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockItemListSyntax ParsedSwitchCaseSyntax::getDeferredStatements() {
  return ParsedCodeBlockItemListSyntax {getRaw().getDeferredChildren()[SwitchCaseSyntax::Cursor::Statements]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSwitchDefaultLabelSyntax::getDeferredDefaultKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SwitchDefaultLabelSyntax::Cursor::DefaultKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSwitchDefaultLabelSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SwitchDefaultLabelSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPatternSyntax ParsedCaseItemSyntax::getDeferredPattern() {
  return ParsedPatternSyntax {getRaw().getDeferredChildren()[CaseItemSyntax::Cursor::Pattern]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedWhereClauseSyntax>
ParsedCaseItemSyntax::getDeferredWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[CaseItemSyntax::Cursor::WhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedCaseItemSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[CaseItemSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSwitchCaseLabelSyntax::getDeferredCaseKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SwitchCaseLabelSyntax::Cursor::CaseKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCaseItemListSyntax ParsedSwitchCaseLabelSyntax::getDeferredCaseItems() {
  return ParsedCaseItemListSyntax {getRaw().getDeferredChildren()[SwitchCaseLabelSyntax::Cursor::CaseItems]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSwitchCaseLabelSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SwitchCaseLabelSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedCatchClauseSyntax::getDeferredCatchKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[CatchClauseSyntax::Cursor::CatchKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedPatternSyntax>
ParsedCatchClauseSyntax::getDeferredPattern() {
  auto RawChild = getRaw().getDeferredChildren()[CatchClauseSyntax::Cursor::Pattern];
  if (RawChild.isNull())
    return None;
  return ParsedPatternSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedWhereClauseSyntax>
ParsedCatchClauseSyntax::getDeferredWhereClause() {
  auto RawChild = getRaw().getDeferredChildren()[CatchClauseSyntax::Cursor::WhereClause];
  if (RawChild.isNull())
    return None;
  return ParsedWhereClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCodeBlockSyntax ParsedCatchClauseSyntax::getDeferredBody() {
  return ParsedCodeBlockSyntax {getRaw().getDeferredChildren()[CatchClauseSyntax::Cursor::Body]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundAssertStmtSyntax::getDeferredPoundAssert() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundAssertStmtSyntax::Cursor::PoundAssert]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundAssertStmtSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundAssertStmtSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedPoundAssertStmtSyntax::getDeferredCondition() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[PoundAssertStmtSyntax::Cursor::Condition]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedPoundAssertStmtSyntax::getDeferredComma() {
  auto RawChild = getRaw().getDeferredChildren()[PoundAssertStmtSyntax::Cursor::Comma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedPoundAssertStmtSyntax::getDeferredMessage() {
  auto RawChild = getRaw().getDeferredChildren()[PoundAssertStmtSyntax::Cursor::Message];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedPoundAssertStmtSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[PoundAssertStmtSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedGenericWhereClauseSyntax::getDeferredWhereKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[GenericWhereClauseSyntax::Cursor::WhereKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedGenericRequirementListSyntax ParsedGenericWhereClauseSyntax::getDeferredRequirementList() {
  return ParsedGenericRequirementListSyntax {getRaw().getDeferredChildren()[GenericWhereClauseSyntax::Cursor::RequirementList]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedSameTypeRequirementSyntax::getDeferredLeftTypeIdentifier() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[SameTypeRequirementSyntax::Cursor::LeftTypeIdentifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSameTypeRequirementSyntax::getDeferredEqualityToken() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SameTypeRequirementSyntax::Cursor::EqualityToken]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedSameTypeRequirementSyntax::getDeferredRightTypeIdentifier() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[SameTypeRequirementSyntax::Cursor::RightTypeIdentifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedSameTypeRequirementSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[SameTypeRequirementSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedGenericParameterSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[GenericParameterSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedGenericParameterSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[GenericParameterSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedGenericParameterSyntax::getDeferredColon() {
  auto RawChild = getRaw().getDeferredChildren()[GenericParameterSyntax::Cursor::Colon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeSyntax>
ParsedGenericParameterSyntax::getDeferredInheritedType() {
  auto RawChild = getRaw().getDeferredChildren()[GenericParameterSyntax::Cursor::InheritedType];
  if (RawChild.isNull())
    return None;
  return ParsedTypeSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedGenericParameterSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[GenericParameterSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedGenericParameterClauseSyntax::getDeferredLeftAngleBracket() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[GenericParameterClauseSyntax::Cursor::LeftAngleBracket]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedGenericParameterListSyntax ParsedGenericParameterClauseSyntax::getDeferredGenericParameterList() {
  return ParsedGenericParameterListSyntax {getRaw().getDeferredChildren()[GenericParameterClauseSyntax::Cursor::GenericParameterList]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedGenericParameterClauseSyntax::getDeferredRightAngleBracket() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[GenericParameterClauseSyntax::Cursor::RightAngleBracket]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedConformanceRequirementSyntax::getDeferredLeftTypeIdentifier() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[ConformanceRequirementSyntax::Cursor::LeftTypeIdentifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedConformanceRequirementSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ConformanceRequirementSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedConformanceRequirementSyntax::getDeferredRightTypeIdentifier() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[ConformanceRequirementSyntax::Cursor::RightTypeIdentifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedConformanceRequirementSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[ConformanceRequirementSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSimpleTypeIdentifierSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SimpleTypeIdentifierSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericArgumentClauseSyntax>
ParsedSimpleTypeIdentifierSyntax::getDeferredGenericArgumentClause() {
  auto RawChild = getRaw().getDeferredChildren()[SimpleTypeIdentifierSyntax::Cursor::GenericArgumentClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericArgumentClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedMemberTypeIdentifierSyntax::getDeferredBaseType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[MemberTypeIdentifierSyntax::Cursor::BaseType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedMemberTypeIdentifierSyntax::getDeferredPeriod() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[MemberTypeIdentifierSyntax::Cursor::Period]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedMemberTypeIdentifierSyntax::getDeferredName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[MemberTypeIdentifierSyntax::Cursor::Name]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedGenericArgumentClauseSyntax>
ParsedMemberTypeIdentifierSyntax::getDeferredGenericArgumentClause() {
  auto RawChild = getRaw().getDeferredChildren()[MemberTypeIdentifierSyntax::Cursor::GenericArgumentClause];
  if (RawChild.isNull())
    return None;
  return ParsedGenericArgumentClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedClassRestrictionTypeSyntax::getDeferredClassKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ClassRestrictionTypeSyntax::Cursor::ClassKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedArrayTypeSyntax::getDeferredLeftSquareBracket() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ArrayTypeSyntax::Cursor::LeftSquareBracket]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedArrayTypeSyntax::getDeferredElementType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[ArrayTypeSyntax::Cursor::ElementType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedArrayTypeSyntax::getDeferredRightSquareBracket() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ArrayTypeSyntax::Cursor::RightSquareBracket]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDictionaryTypeSyntax::getDeferredLeftSquareBracket() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DictionaryTypeSyntax::Cursor::LeftSquareBracket]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedDictionaryTypeSyntax::getDeferredKeyType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[DictionaryTypeSyntax::Cursor::KeyType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDictionaryTypeSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DictionaryTypeSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedDictionaryTypeSyntax::getDeferredValueType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[DictionaryTypeSyntax::Cursor::ValueType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedDictionaryTypeSyntax::getDeferredRightSquareBracket() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[DictionaryTypeSyntax::Cursor::RightSquareBracket]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedMetatypeTypeSyntax::getDeferredBaseType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[MetatypeTypeSyntax::Cursor::BaseType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedMetatypeTypeSyntax::getDeferredPeriod() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[MetatypeTypeSyntax::Cursor::Period]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedMetatypeTypeSyntax::getDeferredTypeOrProtocol() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[MetatypeTypeSyntax::Cursor::TypeOrProtocol]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedOptionalTypeSyntax::getDeferredWrappedType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[OptionalTypeSyntax::Cursor::WrappedType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedOptionalTypeSyntax::getDeferredQuestionMark() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[OptionalTypeSyntax::Cursor::QuestionMark]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedSomeTypeSyntax::getDeferredSomeSpecifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[SomeTypeSyntax::Cursor::SomeSpecifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedSomeTypeSyntax::getDeferredBaseType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[SomeTypeSyntax::Cursor::BaseType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedImplicitlyUnwrappedOptionalTypeSyntax::getDeferredWrappedType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[ImplicitlyUnwrappedOptionalTypeSyntax::Cursor::WrappedType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedImplicitlyUnwrappedOptionalTypeSyntax::getDeferredExclamationMark() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ImplicitlyUnwrappedOptionalTypeSyntax::Cursor::ExclamationMark]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedCompositionTypeElementSyntax::getDeferredType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[CompositionTypeElementSyntax::Cursor::Type]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedCompositionTypeElementSyntax::getDeferredAmpersand() {
  auto RawChild = getRaw().getDeferredChildren()[CompositionTypeElementSyntax::Cursor::Ampersand];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedCompositionTypeElementListSyntax ParsedCompositionTypeSyntax::getDeferredElements() {
  return ParsedCompositionTypeElementListSyntax {getRaw().getDeferredChildren()[CompositionTypeSyntax::Cursor::Elements]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTupleTypeElementSyntax::getDeferredInOut() {
  auto RawChild = getRaw().getDeferredChildren()[TupleTypeElementSyntax::Cursor::InOut];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTupleTypeElementSyntax::getDeferredName() {
  auto RawChild = getRaw().getDeferredChildren()[TupleTypeElementSyntax::Cursor::Name];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTupleTypeElementSyntax::getDeferredSecondName() {
  auto RawChild = getRaw().getDeferredChildren()[TupleTypeElementSyntax::Cursor::SecondName];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTupleTypeElementSyntax::getDeferredColon() {
  auto RawChild = getRaw().getDeferredChildren()[TupleTypeElementSyntax::Cursor::Colon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedTupleTypeElementSyntax::getDeferredType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[TupleTypeElementSyntax::Cursor::Type]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTupleTypeElementSyntax::getDeferredEllipsis() {
  auto RawChild = getRaw().getDeferredChildren()[TupleTypeElementSyntax::Cursor::Ellipsis];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedInitializerClauseSyntax>
ParsedTupleTypeElementSyntax::getDeferredInitializer() {
  auto RawChild = getRaw().getDeferredChildren()[TupleTypeElementSyntax::Cursor::Initializer];
  if (RawChild.isNull())
    return None;
  return ParsedInitializerClauseSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTupleTypeElementSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[TupleTypeElementSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTupleTypeSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TupleTypeSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTupleTypeElementListSyntax ParsedTupleTypeSyntax::getDeferredElements() {
  return ParsedTupleTypeElementListSyntax {getRaw().getDeferredChildren()[TupleTypeSyntax::Cursor::Elements]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTupleTypeSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TupleTypeSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedFunctionTypeSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[FunctionTypeSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTupleTypeElementListSyntax ParsedFunctionTypeSyntax::getDeferredArguments() {
  return ParsedTupleTypeElementListSyntax {getRaw().getDeferredChildren()[FunctionTypeSyntax::Cursor::Arguments]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedFunctionTypeSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[FunctionTypeSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedFunctionTypeSyntax::getDeferredThrowsOrRethrowsKeyword() {
  auto RawChild = getRaw().getDeferredChildren()[FunctionTypeSyntax::Cursor::ThrowsOrRethrowsKeyword];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedFunctionTypeSyntax::getDeferredArrow() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[FunctionTypeSyntax::Cursor::Arrow]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedFunctionTypeSyntax::getDeferredReturnType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[FunctionTypeSyntax::Cursor::ReturnType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedAttributedTypeSyntax::getDeferredSpecifier() {
  auto RawChild = getRaw().getDeferredChildren()[AttributedTypeSyntax::Cursor::Specifier];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedAttributeListSyntax>
ParsedAttributedTypeSyntax::getDeferredAttributes() {
  auto RawChild = getRaw().getDeferredChildren()[AttributedTypeSyntax::Cursor::Attributes];
  if (RawChild.isNull())
    return None;
  return ParsedAttributeListSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedAttributedTypeSyntax::getDeferredBaseType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[AttributedTypeSyntax::Cursor::BaseType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedGenericArgumentSyntax::getDeferredArgumentType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[GenericArgumentSyntax::Cursor::ArgumentType]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedGenericArgumentSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[GenericArgumentSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedGenericArgumentClauseSyntax::getDeferredLeftAngleBracket() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[GenericArgumentClauseSyntax::Cursor::LeftAngleBracket]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedGenericArgumentListSyntax ParsedGenericArgumentClauseSyntax::getDeferredArguments() {
  return ParsedGenericArgumentListSyntax {getRaw().getDeferredChildren()[GenericArgumentClauseSyntax::Cursor::Arguments]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedGenericArgumentClauseSyntax::getDeferredRightAngleBracket() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[GenericArgumentClauseSyntax::Cursor::RightAngleBracket]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTypeAnnotationSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TypeAnnotationSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedTypeAnnotationSyntax::getDeferredType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[TypeAnnotationSyntax::Cursor::Type]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeSyntax>
ParsedEnumCasePatternSyntax::getDeferredType() {
  auto RawChild = getRaw().getDeferredChildren()[EnumCasePatternSyntax::Cursor::Type];
  if (RawChild.isNull())
    return None;
  return ParsedTypeSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedEnumCasePatternSyntax::getDeferredPeriod() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[EnumCasePatternSyntax::Cursor::Period]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedEnumCasePatternSyntax::getDeferredCaseName() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[EnumCasePatternSyntax::Cursor::CaseName]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTuplePatternSyntax>
ParsedEnumCasePatternSyntax::getDeferredAssociatedTuple() {
  auto RawChild = getRaw().getDeferredChildren()[EnumCasePatternSyntax::Cursor::AssociatedTuple];
  if (RawChild.isNull())
    return None;
  return ParsedTuplePatternSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedIsTypePatternSyntax::getDeferredIsKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[IsTypePatternSyntax::Cursor::IsKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedIsTypePatternSyntax::getDeferredType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[IsTypePatternSyntax::Cursor::Type]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPatternSyntax ParsedOptionalPatternSyntax::getDeferredSubPattern() {
  return ParsedPatternSyntax {getRaw().getDeferredChildren()[OptionalPatternSyntax::Cursor::SubPattern]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedOptionalPatternSyntax::getDeferredQuestionMark() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[OptionalPatternSyntax::Cursor::QuestionMark]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedIdentifierPatternSyntax::getDeferredIdentifier() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[IdentifierPatternSyntax::Cursor::Identifier]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPatternSyntax ParsedAsTypePatternSyntax::getDeferredPattern() {
  return ParsedPatternSyntax {getRaw().getDeferredChildren()[AsTypePatternSyntax::Cursor::Pattern]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAsTypePatternSyntax::getDeferredAsKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AsTypePatternSyntax::Cursor::AsKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTypeSyntax ParsedAsTypePatternSyntax::getDeferredType() {
  return ParsedTypeSyntax {getRaw().getDeferredChildren()[AsTypePatternSyntax::Cursor::Type]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTuplePatternSyntax::getDeferredLeftParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TuplePatternSyntax::Cursor::LeftParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTuplePatternElementListSyntax ParsedTuplePatternSyntax::getDeferredElements() {
  return ParsedTuplePatternElementListSyntax {getRaw().getDeferredChildren()[TuplePatternSyntax::Cursor::Elements]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedTuplePatternSyntax::getDeferredRightParen() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[TuplePatternSyntax::Cursor::RightParen]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedWildcardPatternSyntax::getDeferredWildcard() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[WildcardPatternSyntax::Cursor::Wildcard]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTypeAnnotationSyntax>
ParsedWildcardPatternSyntax::getDeferredTypeAnnotation() {
  auto RawChild = getRaw().getDeferredChildren()[WildcardPatternSyntax::Cursor::TypeAnnotation];
  if (RawChild.isNull())
    return None;
  return ParsedTypeAnnotationSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTuplePatternElementSyntax::getDeferredLabelName() {
  auto RawChild = getRaw().getDeferredChildren()[TuplePatternElementSyntax::Cursor::LabelName];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTuplePatternElementSyntax::getDeferredLabelColon() {
  auto RawChild = getRaw().getDeferredChildren()[TuplePatternElementSyntax::Cursor::LabelColon];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPatternSyntax ParsedTuplePatternElementSyntax::getDeferredPattern() {
  return ParsedPatternSyntax {getRaw().getDeferredChildren()[TuplePatternElementSyntax::Cursor::Pattern]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedTuplePatternElementSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[TuplePatternElementSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedExprSyntax ParsedExpressionPatternSyntax::getDeferredExpression() {
  return ParsedExprSyntax {getRaw().getDeferredChildren()[ExpressionPatternSyntax::Cursor::Expression]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedValueBindingPatternSyntax::getDeferredLetOrVarKeyword() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[ValueBindingPatternSyntax::Cursor::LetOrVarKeyword]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedPatternSyntax ParsedValueBindingPatternSyntax::getDeferredValuePattern() {
  return ParsedPatternSyntax {getRaw().getDeferredChildren()[ValueBindingPatternSyntax::Cursor::ValuePattern]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedAvailabilityArgumentSyntax::getDeferredEntry() {
  return ParsedSyntax {getRaw().getDeferredChildren()[AvailabilityArgumentSyntax::Cursor::Entry]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedAvailabilityArgumentSyntax::getDeferredTrailingComma() {
  auto RawChild = getRaw().getDeferredChildren()[AvailabilityArgumentSyntax::Cursor::TrailingComma];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAvailabilityLabeledArgumentSyntax::getDeferredLabel() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AvailabilityLabeledArgumentSyntax::Cursor::Label]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAvailabilityLabeledArgumentSyntax::getDeferredColon() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AvailabilityLabeledArgumentSyntax::Cursor::Colon]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedAvailabilityLabeledArgumentSyntax::getDeferredValue() {
  return ParsedSyntax {getRaw().getDeferredChildren()[AvailabilityLabeledArgumentSyntax::Cursor::Value]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedTokenSyntax ParsedAvailabilityVersionRestrictionSyntax::getDeferredPlatform() {
  return ParsedTokenSyntax {getRaw().getDeferredChildren()[AvailabilityVersionRestrictionSyntax::Cursor::Platform]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedVersionTupleSyntax ParsedAvailabilityVersionRestrictionSyntax::getDeferredVersion() {
  return ParsedVersionTupleSyntax {getRaw().getDeferredChildren()[AvailabilityVersionRestrictionSyntax::Cursor::Version]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 37 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
ParsedSyntax ParsedVersionTupleSyntax::getDeferredMajorMinor() {
  return ParsedSyntax {getRaw().getDeferredChildren()[VersionTupleSyntax::Cursor::MajorMinor]};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedVersionTupleSyntax::getDeferredPatchPeriod() {
  auto RawChild = getRaw().getDeferredChildren()[VersionTupleSyntax::Cursor::PatchPeriod];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

#line 29 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"
Optional<ParsedTokenSyntax>
ParsedVersionTupleSyntax::getDeferredPatchVersion() {
  auto RawChild = getRaw().getDeferredChildren()[VersionTupleSyntax::Cursor::PatchVersion];
  if (RawChild.isNull())
    return None;
  return ParsedTokenSyntax {RawChild};
}
#line 41 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/lib/Parse/ParsedSyntaxNodes.cpp.gyb"

