#line 6 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
//// Automatically Generated From ParsedSyntaxRecorder.h.gyb.
//// Do Not Edit Directly!
//===--- ParsedSyntaxRecorder.h - Parsed Syntax Recorder ------------------===//
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

#ifndef SWIFT_PARSE_PARSEDSYNTAXRECORDER_H
#define SWIFT_PARSE_PARSEDSYNTAXRECORDER_H

#include "swift/Basic/LLVM.h"
#include "swift/Parse/ParsedSyntaxNodes.h"
#include "swift/Syntax/SyntaxKind.h"

namespace swift {

class ParsedRawSyntaxRecorder;
class SyntaxParsingContext;

struct ParsedSyntaxRecorder {

#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedUnknownDeclSyntax recordUnknownDecl(
      ArrayRef<ParsedSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedUnknownDeclSyntax deferUnknownDecl(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedUnknownDeclSyntax makeUnknownDecl(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedUnknownExprSyntax recordUnknownExpr(
      ArrayRef<ParsedSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedUnknownExprSyntax deferUnknownExpr(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedUnknownExprSyntax makeUnknownExpr(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedUnknownStmtSyntax recordUnknownStmt(
      ArrayRef<ParsedSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedUnknownStmtSyntax deferUnknownStmt(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedUnknownStmtSyntax makeUnknownStmt(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedUnknownTypeSyntax recordUnknownType(
      ArrayRef<ParsedSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedUnknownTypeSyntax deferUnknownType(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedUnknownTypeSyntax makeUnknownType(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);
#line 70 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedUnknownPatternSyntax recordUnknownPattern(
      ArrayRef<ParsedSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedUnknownPatternSyntax deferUnknownPattern(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedUnknownPatternSyntax makeUnknownPattern(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedCodeBlockItemSyntax recordCodeBlockItem(ParsedSyntax Item, Optional<ParsedTokenSyntax> Semicolon, Optional<ParsedSyntax> ErrorTokens,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedCodeBlockItemSyntax deferCodeBlockItem(ParsedSyntax Item, Optional<ParsedTokenSyntax> Semicolon, Optional<ParsedSyntax> ErrorTokens,
                                              SyntaxParsingContext &SPCtx);
  static ParsedCodeBlockItemSyntax makeCodeBlockItem(ParsedSyntax Item, Optional<ParsedTokenSyntax> Semicolon, Optional<ParsedSyntax> ErrorTokens,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedCodeBlockItemListSyntax recordCodeBlockItemList(
      ArrayRef<ParsedCodeBlockItemSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedCodeBlockItemListSyntax deferCodeBlockItemList(
      ArrayRef<ParsedCodeBlockItemSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedCodeBlockItemListSyntax makeCodeBlockItemList(
      ArrayRef<ParsedCodeBlockItemSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedCodeBlockItemListSyntax makeBlankCodeBlockItemList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedCodeBlockSyntax recordCodeBlock(ParsedTokenSyntax LeftBrace, ParsedCodeBlockItemListSyntax Statements, ParsedTokenSyntax RightBrace,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedCodeBlockSyntax deferCodeBlock(ParsedTokenSyntax LeftBrace, ParsedCodeBlockItemListSyntax Statements, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
  static ParsedCodeBlockSyntax makeCodeBlock(ParsedTokenSyntax LeftBrace, ParsedCodeBlockItemListSyntax Statements, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedInOutExprSyntax recordInOutExpr(ParsedTokenSyntax Ampersand, ParsedExprSyntax Expression,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedInOutExprSyntax deferInOutExpr(ParsedTokenSyntax Ampersand, ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
  static ParsedInOutExprSyntax makeInOutExpr(ParsedTokenSyntax Ampersand, ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPoundColumnExprSyntax recordPoundColumnExpr(ParsedTokenSyntax PoundColumn,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPoundColumnExprSyntax deferPoundColumnExpr(ParsedTokenSyntax PoundColumn,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPoundColumnExprSyntax makePoundColumnExpr(ParsedTokenSyntax PoundColumn,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedFunctionCallArgumentListSyntax recordFunctionCallArgumentList(
      ArrayRef<ParsedFunctionCallArgumentSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedFunctionCallArgumentListSyntax deferFunctionCallArgumentList(
      ArrayRef<ParsedFunctionCallArgumentSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedFunctionCallArgumentListSyntax makeFunctionCallArgumentList(
      ArrayRef<ParsedFunctionCallArgumentSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedFunctionCallArgumentListSyntax makeBlankFunctionCallArgumentList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTupleElementListSyntax recordTupleElementList(
      ArrayRef<ParsedTupleElementSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedTupleElementListSyntax deferTupleElementList(
      ArrayRef<ParsedTupleElementSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedTupleElementListSyntax makeTupleElementList(
      ArrayRef<ParsedTupleElementSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedTupleElementListSyntax makeBlankTupleElementList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedArrayElementListSyntax recordArrayElementList(
      ArrayRef<ParsedArrayElementSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedArrayElementListSyntax deferArrayElementList(
      ArrayRef<ParsedArrayElementSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedArrayElementListSyntax makeArrayElementList(
      ArrayRef<ParsedArrayElementSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedArrayElementListSyntax makeBlankArrayElementList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDictionaryElementListSyntax recordDictionaryElementList(
      ArrayRef<ParsedDictionaryElementSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedDictionaryElementListSyntax deferDictionaryElementList(
      ArrayRef<ParsedDictionaryElementSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedDictionaryElementListSyntax makeDictionaryElementList(
      ArrayRef<ParsedDictionaryElementSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedDictionaryElementListSyntax makeBlankDictionaryElementList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedStringLiteralSegmentsSyntax recordStringLiteralSegments(
      ArrayRef<ParsedSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedStringLiteralSegmentsSyntax deferStringLiteralSegments(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedStringLiteralSegmentsSyntax makeStringLiteralSegments(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedStringLiteralSegmentsSyntax makeBlankStringLiteralSegments(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTryExprSyntax recordTryExpr(ParsedTokenSyntax TryKeyword, Optional<ParsedTokenSyntax> QuestionOrExclamationMark, ParsedExprSyntax Expression,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTryExprSyntax deferTryExpr(ParsedTokenSyntax TryKeyword, Optional<ParsedTokenSyntax> QuestionOrExclamationMark, ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTryExprSyntax makeTryExpr(ParsedTokenSyntax TryKeyword, Optional<ParsedTokenSyntax> QuestionOrExclamationMark, ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDeclNameArgumentSyntax recordDeclNameArgument(ParsedTokenSyntax Name, ParsedTokenSyntax Colon,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDeclNameArgumentSyntax deferDeclNameArgument(ParsedTokenSyntax Name, ParsedTokenSyntax Colon,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDeclNameArgumentSyntax makeDeclNameArgument(ParsedTokenSyntax Name, ParsedTokenSyntax Colon,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDeclNameArgumentListSyntax recordDeclNameArgumentList(
      ArrayRef<ParsedDeclNameArgumentSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedDeclNameArgumentListSyntax deferDeclNameArgumentList(
      ArrayRef<ParsedDeclNameArgumentSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedDeclNameArgumentListSyntax makeDeclNameArgumentList(
      ArrayRef<ParsedDeclNameArgumentSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedDeclNameArgumentListSyntax makeBlankDeclNameArgumentList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDeclNameArgumentsSyntax recordDeclNameArguments(ParsedTokenSyntax LeftParen, ParsedDeclNameArgumentListSyntax Arguments, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDeclNameArgumentsSyntax deferDeclNameArguments(ParsedTokenSyntax LeftParen, ParsedDeclNameArgumentListSyntax Arguments, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDeclNameArgumentsSyntax makeDeclNameArguments(ParsedTokenSyntax LeftParen, ParsedDeclNameArgumentListSyntax Arguments, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedIdentifierExprSyntax recordIdentifierExpr(ParsedTokenSyntax Identifier, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedIdentifierExprSyntax deferIdentifierExpr(ParsedTokenSyntax Identifier, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              SyntaxParsingContext &SPCtx);
  static ParsedIdentifierExprSyntax makeIdentifierExpr(ParsedTokenSyntax Identifier, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSuperRefExprSyntax recordSuperRefExpr(ParsedTokenSyntax SuperKeyword,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSuperRefExprSyntax deferSuperRefExpr(ParsedTokenSyntax SuperKeyword,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSuperRefExprSyntax makeSuperRefExpr(ParsedTokenSyntax SuperKeyword,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedNilLiteralExprSyntax recordNilLiteralExpr(ParsedTokenSyntax NilKeyword,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedNilLiteralExprSyntax deferNilLiteralExpr(ParsedTokenSyntax NilKeyword,
                                              SyntaxParsingContext &SPCtx);
  static ParsedNilLiteralExprSyntax makeNilLiteralExpr(ParsedTokenSyntax NilKeyword,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDiscardAssignmentExprSyntax recordDiscardAssignmentExpr(ParsedTokenSyntax Wildcard,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDiscardAssignmentExprSyntax deferDiscardAssignmentExpr(ParsedTokenSyntax Wildcard,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDiscardAssignmentExprSyntax makeDiscardAssignmentExpr(ParsedTokenSyntax Wildcard,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAssignmentExprSyntax recordAssignmentExpr(ParsedTokenSyntax AssignToken,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAssignmentExprSyntax deferAssignmentExpr(ParsedTokenSyntax AssignToken,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAssignmentExprSyntax makeAssignmentExpr(ParsedTokenSyntax AssignToken,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSequenceExprSyntax recordSequenceExpr(ParsedExprListSyntax Elements,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSequenceExprSyntax deferSequenceExpr(ParsedExprListSyntax Elements,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSequenceExprSyntax makeSequenceExpr(ParsedExprListSyntax Elements,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedExprListSyntax recordExprList(
      ArrayRef<ParsedExprSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedExprListSyntax deferExprList(
      ArrayRef<ParsedExprSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedExprListSyntax makeExprList(
      ArrayRef<ParsedExprSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedExprListSyntax makeBlankExprList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPoundLineExprSyntax recordPoundLineExpr(ParsedTokenSyntax PoundLine,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPoundLineExprSyntax deferPoundLineExpr(ParsedTokenSyntax PoundLine,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPoundLineExprSyntax makePoundLineExpr(ParsedTokenSyntax PoundLine,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPoundFileExprSyntax recordPoundFileExpr(ParsedTokenSyntax PoundFile,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPoundFileExprSyntax deferPoundFileExpr(ParsedTokenSyntax PoundFile,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPoundFileExprSyntax makePoundFileExpr(ParsedTokenSyntax PoundFile,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPoundFunctionExprSyntax recordPoundFunctionExpr(ParsedTokenSyntax PoundFunction,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPoundFunctionExprSyntax deferPoundFunctionExpr(ParsedTokenSyntax PoundFunction,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPoundFunctionExprSyntax makePoundFunctionExpr(ParsedTokenSyntax PoundFunction,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPoundDsohandleExprSyntax recordPoundDsohandleExpr(ParsedTokenSyntax PoundDsohandle,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPoundDsohandleExprSyntax deferPoundDsohandleExpr(ParsedTokenSyntax PoundDsohandle,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPoundDsohandleExprSyntax makePoundDsohandleExpr(ParsedTokenSyntax PoundDsohandle,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSymbolicReferenceExprSyntax recordSymbolicReferenceExpr(ParsedTokenSyntax Identifier, Optional<ParsedGenericArgumentClauseSyntax> GenericArgumentClause,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSymbolicReferenceExprSyntax deferSymbolicReferenceExpr(ParsedTokenSyntax Identifier, Optional<ParsedGenericArgumentClauseSyntax> GenericArgumentClause,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSymbolicReferenceExprSyntax makeSymbolicReferenceExpr(ParsedTokenSyntax Identifier, Optional<ParsedGenericArgumentClauseSyntax> GenericArgumentClause,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPrefixOperatorExprSyntax recordPrefixOperatorExpr(Optional<ParsedTokenSyntax> OperatorToken, ParsedExprSyntax PostfixExpression,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPrefixOperatorExprSyntax deferPrefixOperatorExpr(Optional<ParsedTokenSyntax> OperatorToken, ParsedExprSyntax PostfixExpression,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPrefixOperatorExprSyntax makePrefixOperatorExpr(Optional<ParsedTokenSyntax> OperatorToken, ParsedExprSyntax PostfixExpression,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedBinaryOperatorExprSyntax recordBinaryOperatorExpr(ParsedTokenSyntax OperatorToken,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedBinaryOperatorExprSyntax deferBinaryOperatorExpr(ParsedTokenSyntax OperatorToken,
                                              SyntaxParsingContext &SPCtx);
  static ParsedBinaryOperatorExprSyntax makeBinaryOperatorExpr(ParsedTokenSyntax OperatorToken,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedArrowExprSyntax recordArrowExpr(Optional<ParsedTokenSyntax> ThrowsToken, ParsedTokenSyntax ArrowToken,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedArrowExprSyntax deferArrowExpr(Optional<ParsedTokenSyntax> ThrowsToken, ParsedTokenSyntax ArrowToken,
                                              SyntaxParsingContext &SPCtx);
  static ParsedArrowExprSyntax makeArrowExpr(Optional<ParsedTokenSyntax> ThrowsToken, ParsedTokenSyntax ArrowToken,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedFloatLiteralExprSyntax recordFloatLiteralExpr(ParsedTokenSyntax FloatingDigits,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedFloatLiteralExprSyntax deferFloatLiteralExpr(ParsedTokenSyntax FloatingDigits,
                                              SyntaxParsingContext &SPCtx);
  static ParsedFloatLiteralExprSyntax makeFloatLiteralExpr(ParsedTokenSyntax FloatingDigits,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTupleExprSyntax recordTupleExpr(ParsedTokenSyntax LeftParen, ParsedTupleElementListSyntax ElementList, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTupleExprSyntax deferTupleExpr(ParsedTokenSyntax LeftParen, ParsedTupleElementListSyntax ElementList, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTupleExprSyntax makeTupleExpr(ParsedTokenSyntax LeftParen, ParsedTupleElementListSyntax ElementList, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedArrayExprSyntax recordArrayExpr(ParsedTokenSyntax LeftSquare, ParsedArrayElementListSyntax Elements, ParsedTokenSyntax RightSquare,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedArrayExprSyntax deferArrayExpr(ParsedTokenSyntax LeftSquare, ParsedArrayElementListSyntax Elements, ParsedTokenSyntax RightSquare,
                                              SyntaxParsingContext &SPCtx);
  static ParsedArrayExprSyntax makeArrayExpr(ParsedTokenSyntax LeftSquare, ParsedArrayElementListSyntax Elements, ParsedTokenSyntax RightSquare,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDictionaryExprSyntax recordDictionaryExpr(ParsedTokenSyntax LeftSquare, ParsedSyntax Content, ParsedTokenSyntax RightSquare,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDictionaryExprSyntax deferDictionaryExpr(ParsedTokenSyntax LeftSquare, ParsedSyntax Content, ParsedTokenSyntax RightSquare,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDictionaryExprSyntax makeDictionaryExpr(ParsedTokenSyntax LeftSquare, ParsedSyntax Content, ParsedTokenSyntax RightSquare,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedFunctionCallArgumentSyntax recordFunctionCallArgument(Optional<ParsedTokenSyntax> Label, Optional<ParsedTokenSyntax> Colon, ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedFunctionCallArgumentSyntax deferFunctionCallArgument(Optional<ParsedTokenSyntax> Label, Optional<ParsedTokenSyntax> Colon, ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedFunctionCallArgumentSyntax makeFunctionCallArgument(Optional<ParsedTokenSyntax> Label, Optional<ParsedTokenSyntax> Colon, ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTupleElementSyntax recordTupleElement(Optional<ParsedTokenSyntax> Label, Optional<ParsedTokenSyntax> Colon, ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTupleElementSyntax deferTupleElement(Optional<ParsedTokenSyntax> Label, Optional<ParsedTokenSyntax> Colon, ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTupleElementSyntax makeTupleElement(Optional<ParsedTokenSyntax> Label, Optional<ParsedTokenSyntax> Colon, ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedArrayElementSyntax recordArrayElement(ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedArrayElementSyntax deferArrayElement(ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedArrayElementSyntax makeArrayElement(ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDictionaryElementSyntax recordDictionaryElement(ParsedExprSyntax KeyExpression, ParsedTokenSyntax Colon, ParsedExprSyntax ValueExpression, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDictionaryElementSyntax deferDictionaryElement(ParsedExprSyntax KeyExpression, ParsedTokenSyntax Colon, ParsedExprSyntax ValueExpression, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDictionaryElementSyntax makeDictionaryElement(ParsedExprSyntax KeyExpression, ParsedTokenSyntax Colon, ParsedExprSyntax ValueExpression, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedIntegerLiteralExprSyntax recordIntegerLiteralExpr(ParsedTokenSyntax Digits,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedIntegerLiteralExprSyntax deferIntegerLiteralExpr(ParsedTokenSyntax Digits,
                                              SyntaxParsingContext &SPCtx);
  static ParsedIntegerLiteralExprSyntax makeIntegerLiteralExpr(ParsedTokenSyntax Digits,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedBooleanLiteralExprSyntax recordBooleanLiteralExpr(ParsedTokenSyntax BooleanLiteral,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedBooleanLiteralExprSyntax deferBooleanLiteralExpr(ParsedTokenSyntax BooleanLiteral,
                                              SyntaxParsingContext &SPCtx);
  static ParsedBooleanLiteralExprSyntax makeBooleanLiteralExpr(ParsedTokenSyntax BooleanLiteral,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTernaryExprSyntax recordTernaryExpr(ParsedExprSyntax ConditionExpression, ParsedTokenSyntax QuestionMark, ParsedExprSyntax FirstChoice, ParsedTokenSyntax ColonMark, ParsedExprSyntax SecondChoice,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTernaryExprSyntax deferTernaryExpr(ParsedExprSyntax ConditionExpression, ParsedTokenSyntax QuestionMark, ParsedExprSyntax FirstChoice, ParsedTokenSyntax ColonMark, ParsedExprSyntax SecondChoice,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTernaryExprSyntax makeTernaryExpr(ParsedExprSyntax ConditionExpression, ParsedTokenSyntax QuestionMark, ParsedExprSyntax FirstChoice, ParsedTokenSyntax ColonMark, ParsedExprSyntax SecondChoice,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedMemberAccessExprSyntax recordMemberAccessExpr(Optional<ParsedExprSyntax> Base, ParsedTokenSyntax Dot, ParsedTokenSyntax Name, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedMemberAccessExprSyntax deferMemberAccessExpr(Optional<ParsedExprSyntax> Base, ParsedTokenSyntax Dot, ParsedTokenSyntax Name, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              SyntaxParsingContext &SPCtx);
  static ParsedMemberAccessExprSyntax makeMemberAccessExpr(Optional<ParsedExprSyntax> Base, ParsedTokenSyntax Dot, ParsedTokenSyntax Name, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedIsExprSyntax recordIsExpr(ParsedTokenSyntax IsTok, ParsedTypeSyntax TypeName,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedIsExprSyntax deferIsExpr(ParsedTokenSyntax IsTok, ParsedTypeSyntax TypeName,
                                              SyntaxParsingContext &SPCtx);
  static ParsedIsExprSyntax makeIsExpr(ParsedTokenSyntax IsTok, ParsedTypeSyntax TypeName,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAsExprSyntax recordAsExpr(ParsedTokenSyntax AsTok, Optional<ParsedTokenSyntax> QuestionOrExclamationMark, ParsedTypeSyntax TypeName,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAsExprSyntax deferAsExpr(ParsedTokenSyntax AsTok, Optional<ParsedTokenSyntax> QuestionOrExclamationMark, ParsedTypeSyntax TypeName,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAsExprSyntax makeAsExpr(ParsedTokenSyntax AsTok, Optional<ParsedTokenSyntax> QuestionOrExclamationMark, ParsedTypeSyntax TypeName,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTypeExprSyntax recordTypeExpr(ParsedTypeSyntax Type,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTypeExprSyntax deferTypeExpr(ParsedTypeSyntax Type,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTypeExprSyntax makeTypeExpr(ParsedTypeSyntax Type,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedClosureCaptureItemSyntax recordClosureCaptureItem(Optional<ParsedTokenListSyntax> Specifier, Optional<ParsedTokenSyntax> Name, Optional<ParsedTokenSyntax> AssignToken, ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedClosureCaptureItemSyntax deferClosureCaptureItem(Optional<ParsedTokenListSyntax> Specifier, Optional<ParsedTokenSyntax> Name, Optional<ParsedTokenSyntax> AssignToken, ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedClosureCaptureItemSyntax makeClosureCaptureItem(Optional<ParsedTokenListSyntax> Specifier, Optional<ParsedTokenSyntax> Name, Optional<ParsedTokenSyntax> AssignToken, ParsedExprSyntax Expression, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedClosureCaptureItemListSyntax recordClosureCaptureItemList(
      ArrayRef<ParsedClosureCaptureItemSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedClosureCaptureItemListSyntax deferClosureCaptureItemList(
      ArrayRef<ParsedClosureCaptureItemSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedClosureCaptureItemListSyntax makeClosureCaptureItemList(
      ArrayRef<ParsedClosureCaptureItemSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedClosureCaptureItemListSyntax makeBlankClosureCaptureItemList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedClosureCaptureSignatureSyntax recordClosureCaptureSignature(ParsedTokenSyntax LeftSquare, Optional<ParsedClosureCaptureItemListSyntax> Items, ParsedTokenSyntax RightSquare,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedClosureCaptureSignatureSyntax deferClosureCaptureSignature(ParsedTokenSyntax LeftSquare, Optional<ParsedClosureCaptureItemListSyntax> Items, ParsedTokenSyntax RightSquare,
                                              SyntaxParsingContext &SPCtx);
  static ParsedClosureCaptureSignatureSyntax makeClosureCaptureSignature(ParsedTokenSyntax LeftSquare, Optional<ParsedClosureCaptureItemListSyntax> Items, ParsedTokenSyntax RightSquare,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedClosureParamSyntax recordClosureParam(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedClosureParamSyntax deferClosureParam(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedClosureParamSyntax makeClosureParam(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedClosureParamListSyntax recordClosureParamList(
      ArrayRef<ParsedClosureParamSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedClosureParamListSyntax deferClosureParamList(
      ArrayRef<ParsedClosureParamSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedClosureParamListSyntax makeClosureParamList(
      ArrayRef<ParsedClosureParamSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedClosureParamListSyntax makeBlankClosureParamList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedClosureSignatureSyntax recordClosureSignature(Optional<ParsedClosureCaptureSignatureSyntax> Capture, Optional<ParsedSyntax> Input, Optional<ParsedTokenSyntax> ThrowsTok, Optional<ParsedReturnClauseSyntax> Output, ParsedTokenSyntax InTok,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedClosureSignatureSyntax deferClosureSignature(Optional<ParsedClosureCaptureSignatureSyntax> Capture, Optional<ParsedSyntax> Input, Optional<ParsedTokenSyntax> ThrowsTok, Optional<ParsedReturnClauseSyntax> Output, ParsedTokenSyntax InTok,
                                              SyntaxParsingContext &SPCtx);
  static ParsedClosureSignatureSyntax makeClosureSignature(Optional<ParsedClosureCaptureSignatureSyntax> Capture, Optional<ParsedSyntax> Input, Optional<ParsedTokenSyntax> ThrowsTok, Optional<ParsedReturnClauseSyntax> Output, ParsedTokenSyntax InTok,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedClosureExprSyntax recordClosureExpr(ParsedTokenSyntax LeftBrace, Optional<ParsedClosureSignatureSyntax> Signature, ParsedCodeBlockItemListSyntax Statements, ParsedTokenSyntax RightBrace,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedClosureExprSyntax deferClosureExpr(ParsedTokenSyntax LeftBrace, Optional<ParsedClosureSignatureSyntax> Signature, ParsedCodeBlockItemListSyntax Statements, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
  static ParsedClosureExprSyntax makeClosureExpr(ParsedTokenSyntax LeftBrace, Optional<ParsedClosureSignatureSyntax> Signature, ParsedCodeBlockItemListSyntax Statements, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedUnresolvedPatternExprSyntax recordUnresolvedPatternExpr(ParsedPatternSyntax Pattern,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedUnresolvedPatternExprSyntax deferUnresolvedPatternExpr(ParsedPatternSyntax Pattern,
                                              SyntaxParsingContext &SPCtx);
  static ParsedUnresolvedPatternExprSyntax makeUnresolvedPatternExpr(ParsedPatternSyntax Pattern,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedFunctionCallExprSyntax recordFunctionCallExpr(ParsedExprSyntax CalledExpression, Optional<ParsedTokenSyntax> LeftParen, ParsedFunctionCallArgumentListSyntax ArgumentList, Optional<ParsedTokenSyntax> RightParen, Optional<ParsedClosureExprSyntax> TrailingClosure,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedFunctionCallExprSyntax deferFunctionCallExpr(ParsedExprSyntax CalledExpression, Optional<ParsedTokenSyntax> LeftParen, ParsedFunctionCallArgumentListSyntax ArgumentList, Optional<ParsedTokenSyntax> RightParen, Optional<ParsedClosureExprSyntax> TrailingClosure,
                                              SyntaxParsingContext &SPCtx);
  static ParsedFunctionCallExprSyntax makeFunctionCallExpr(ParsedExprSyntax CalledExpression, Optional<ParsedTokenSyntax> LeftParen, ParsedFunctionCallArgumentListSyntax ArgumentList, Optional<ParsedTokenSyntax> RightParen, Optional<ParsedClosureExprSyntax> TrailingClosure,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSubscriptExprSyntax recordSubscriptExpr(ParsedExprSyntax CalledExpression, ParsedTokenSyntax LeftBracket, ParsedFunctionCallArgumentListSyntax ArgumentList, ParsedTokenSyntax RightBracket, Optional<ParsedClosureExprSyntax> TrailingClosure,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSubscriptExprSyntax deferSubscriptExpr(ParsedExprSyntax CalledExpression, ParsedTokenSyntax LeftBracket, ParsedFunctionCallArgumentListSyntax ArgumentList, ParsedTokenSyntax RightBracket, Optional<ParsedClosureExprSyntax> TrailingClosure,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSubscriptExprSyntax makeSubscriptExpr(ParsedExprSyntax CalledExpression, ParsedTokenSyntax LeftBracket, ParsedFunctionCallArgumentListSyntax ArgumentList, ParsedTokenSyntax RightBracket, Optional<ParsedClosureExprSyntax> TrailingClosure,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedOptionalChainingExprSyntax recordOptionalChainingExpr(ParsedExprSyntax Expression, ParsedTokenSyntax QuestionMark,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedOptionalChainingExprSyntax deferOptionalChainingExpr(ParsedExprSyntax Expression, ParsedTokenSyntax QuestionMark,
                                              SyntaxParsingContext &SPCtx);
  static ParsedOptionalChainingExprSyntax makeOptionalChainingExpr(ParsedExprSyntax Expression, ParsedTokenSyntax QuestionMark,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedForcedValueExprSyntax recordForcedValueExpr(ParsedExprSyntax Expression, ParsedTokenSyntax ExclamationMark,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedForcedValueExprSyntax deferForcedValueExpr(ParsedExprSyntax Expression, ParsedTokenSyntax ExclamationMark,
                                              SyntaxParsingContext &SPCtx);
  static ParsedForcedValueExprSyntax makeForcedValueExpr(ParsedExprSyntax Expression, ParsedTokenSyntax ExclamationMark,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPostfixUnaryExprSyntax recordPostfixUnaryExpr(ParsedExprSyntax Expression, ParsedTokenSyntax OperatorToken,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPostfixUnaryExprSyntax deferPostfixUnaryExpr(ParsedExprSyntax Expression, ParsedTokenSyntax OperatorToken,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPostfixUnaryExprSyntax makePostfixUnaryExpr(ParsedExprSyntax Expression, ParsedTokenSyntax OperatorToken,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSpecializeExprSyntax recordSpecializeExpr(ParsedExprSyntax Expression, ParsedGenericArgumentClauseSyntax GenericArgumentClause,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSpecializeExprSyntax deferSpecializeExpr(ParsedExprSyntax Expression, ParsedGenericArgumentClauseSyntax GenericArgumentClause,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSpecializeExprSyntax makeSpecializeExpr(ParsedExprSyntax Expression, ParsedGenericArgumentClauseSyntax GenericArgumentClause,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedStringSegmentSyntax recordStringSegment(ParsedTokenSyntax Content,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedStringSegmentSyntax deferStringSegment(ParsedTokenSyntax Content,
                                              SyntaxParsingContext &SPCtx);
  static ParsedStringSegmentSyntax makeStringSegment(ParsedTokenSyntax Content,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedExpressionSegmentSyntax recordExpressionSegment(ParsedTokenSyntax Backslash, Optional<ParsedTokenSyntax> Delimiter, ParsedTokenSyntax LeftParen, ParsedFunctionCallArgumentListSyntax Expressions, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedExpressionSegmentSyntax deferExpressionSegment(ParsedTokenSyntax Backslash, Optional<ParsedTokenSyntax> Delimiter, ParsedTokenSyntax LeftParen, ParsedFunctionCallArgumentListSyntax Expressions, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedExpressionSegmentSyntax makeExpressionSegment(ParsedTokenSyntax Backslash, Optional<ParsedTokenSyntax> Delimiter, ParsedTokenSyntax LeftParen, ParsedFunctionCallArgumentListSyntax Expressions, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedStringLiteralExprSyntax recordStringLiteralExpr(Optional<ParsedTokenSyntax> OpenDelimiter, ParsedTokenSyntax OpenQuote, ParsedStringLiteralSegmentsSyntax Segments, ParsedTokenSyntax CloseQuote, Optional<ParsedTokenSyntax> CloseDelimiter,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedStringLiteralExprSyntax deferStringLiteralExpr(Optional<ParsedTokenSyntax> OpenDelimiter, ParsedTokenSyntax OpenQuote, ParsedStringLiteralSegmentsSyntax Segments, ParsedTokenSyntax CloseQuote, Optional<ParsedTokenSyntax> CloseDelimiter,
                                              SyntaxParsingContext &SPCtx);
  static ParsedStringLiteralExprSyntax makeStringLiteralExpr(Optional<ParsedTokenSyntax> OpenDelimiter, ParsedTokenSyntax OpenQuote, ParsedStringLiteralSegmentsSyntax Segments, ParsedTokenSyntax CloseQuote, Optional<ParsedTokenSyntax> CloseDelimiter,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedKeyPathExprSyntax recordKeyPathExpr(ParsedTokenSyntax Backslash, Optional<ParsedExprSyntax> RootExpr, ParsedExprSyntax Expression,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedKeyPathExprSyntax deferKeyPathExpr(ParsedTokenSyntax Backslash, Optional<ParsedExprSyntax> RootExpr, ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
  static ParsedKeyPathExprSyntax makeKeyPathExpr(ParsedTokenSyntax Backslash, Optional<ParsedExprSyntax> RootExpr, ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedKeyPathBaseExprSyntax recordKeyPathBaseExpr(ParsedTokenSyntax Period,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedKeyPathBaseExprSyntax deferKeyPathBaseExpr(ParsedTokenSyntax Period,
                                              SyntaxParsingContext &SPCtx);
  static ParsedKeyPathBaseExprSyntax makeKeyPathBaseExpr(ParsedTokenSyntax Period,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedObjcNamePieceSyntax recordObjcNamePiece(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> Dot,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedObjcNamePieceSyntax deferObjcNamePiece(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> Dot,
                                              SyntaxParsingContext &SPCtx);
  static ParsedObjcNamePieceSyntax makeObjcNamePiece(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> Dot,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedObjcNameSyntax recordObjcName(
      ArrayRef<ParsedObjcNamePieceSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedObjcNameSyntax deferObjcName(
      ArrayRef<ParsedObjcNamePieceSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedObjcNameSyntax makeObjcName(
      ArrayRef<ParsedObjcNamePieceSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedObjcNameSyntax makeBlankObjcName(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedObjcKeyPathExprSyntax recordObjcKeyPathExpr(ParsedTokenSyntax KeyPath, ParsedTokenSyntax LeftParen, ParsedObjcNameSyntax Name, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedObjcKeyPathExprSyntax deferObjcKeyPathExpr(ParsedTokenSyntax KeyPath, ParsedTokenSyntax LeftParen, ParsedObjcNameSyntax Name, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedObjcKeyPathExprSyntax makeObjcKeyPathExpr(ParsedTokenSyntax KeyPath, ParsedTokenSyntax LeftParen, ParsedObjcNameSyntax Name, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedObjcSelectorExprSyntax recordObjcSelectorExpr(ParsedTokenSyntax PoundSelector, ParsedTokenSyntax LeftParen, Optional<ParsedTokenSyntax> Kind, Optional<ParsedTokenSyntax> Colon, ParsedExprSyntax Name, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedObjcSelectorExprSyntax deferObjcSelectorExpr(ParsedTokenSyntax PoundSelector, ParsedTokenSyntax LeftParen, Optional<ParsedTokenSyntax> Kind, Optional<ParsedTokenSyntax> Colon, ParsedExprSyntax Name, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedObjcSelectorExprSyntax makeObjcSelectorExpr(ParsedTokenSyntax PoundSelector, ParsedTokenSyntax LeftParen, Optional<ParsedTokenSyntax> Kind, Optional<ParsedTokenSyntax> Colon, ParsedExprSyntax Name, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedEditorPlaceholderExprSyntax recordEditorPlaceholderExpr(ParsedTokenSyntax Identifier,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedEditorPlaceholderExprSyntax deferEditorPlaceholderExpr(ParsedTokenSyntax Identifier,
                                              SyntaxParsingContext &SPCtx);
  static ParsedEditorPlaceholderExprSyntax makeEditorPlaceholderExpr(ParsedTokenSyntax Identifier,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedObjectLiteralExprSyntax recordObjectLiteralExpr(ParsedTokenSyntax Identifier, ParsedTokenSyntax LeftParen, ParsedFunctionCallArgumentListSyntax Arguments, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedObjectLiteralExprSyntax deferObjectLiteralExpr(ParsedTokenSyntax Identifier, ParsedTokenSyntax LeftParen, ParsedFunctionCallArgumentListSyntax Arguments, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedObjectLiteralExprSyntax makeObjectLiteralExpr(ParsedTokenSyntax Identifier, ParsedTokenSyntax LeftParen, ParsedFunctionCallArgumentListSyntax Arguments, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTypeInitializerClauseSyntax recordTypeInitializerClause(ParsedTokenSyntax Equal, ParsedTypeSyntax Value,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTypeInitializerClauseSyntax deferTypeInitializerClause(ParsedTokenSyntax Equal, ParsedTypeSyntax Value,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTypeInitializerClauseSyntax makeTypeInitializerClause(ParsedTokenSyntax Equal, ParsedTypeSyntax Value,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTypealiasDeclSyntax recordTypealiasDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax TypealiasKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, Optional<ParsedTypeInitializerClauseSyntax> Initializer, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTypealiasDeclSyntax deferTypealiasDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax TypealiasKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, Optional<ParsedTypeInitializerClauseSyntax> Initializer, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTypealiasDeclSyntax makeTypealiasDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax TypealiasKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, Optional<ParsedTypeInitializerClauseSyntax> Initializer, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAssociatedtypeDeclSyntax recordAssociatedtypeDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax AssociatedtypeKeyword, ParsedTokenSyntax Identifier, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedTypeInitializerClauseSyntax> Initializer, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAssociatedtypeDeclSyntax deferAssociatedtypeDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax AssociatedtypeKeyword, ParsedTokenSyntax Identifier, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedTypeInitializerClauseSyntax> Initializer, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAssociatedtypeDeclSyntax makeAssociatedtypeDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax AssociatedtypeKeyword, ParsedTokenSyntax Identifier, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedTypeInitializerClauseSyntax> Initializer, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedFunctionParameterListSyntax recordFunctionParameterList(
      ArrayRef<ParsedFunctionParameterSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedFunctionParameterListSyntax deferFunctionParameterList(
      ArrayRef<ParsedFunctionParameterSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedFunctionParameterListSyntax makeFunctionParameterList(
      ArrayRef<ParsedFunctionParameterSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedFunctionParameterListSyntax makeBlankFunctionParameterList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedParameterClauseSyntax recordParameterClause(ParsedTokenSyntax LeftParen, ParsedFunctionParameterListSyntax ParameterList, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedParameterClauseSyntax deferParameterClause(ParsedTokenSyntax LeftParen, ParsedFunctionParameterListSyntax ParameterList, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedParameterClauseSyntax makeParameterClause(ParsedTokenSyntax LeftParen, ParsedFunctionParameterListSyntax ParameterList, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedReturnClauseSyntax recordReturnClause(ParsedTokenSyntax Arrow, ParsedTypeSyntax ReturnType,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedReturnClauseSyntax deferReturnClause(ParsedTokenSyntax Arrow, ParsedTypeSyntax ReturnType,
                                              SyntaxParsingContext &SPCtx);
  static ParsedReturnClauseSyntax makeReturnClause(ParsedTokenSyntax Arrow, ParsedTypeSyntax ReturnType,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedFunctionSignatureSyntax recordFunctionSignature(ParsedParameterClauseSyntax Input, Optional<ParsedTokenSyntax> ThrowsOrRethrowsKeyword, Optional<ParsedReturnClauseSyntax> Output,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedFunctionSignatureSyntax deferFunctionSignature(ParsedParameterClauseSyntax Input, Optional<ParsedTokenSyntax> ThrowsOrRethrowsKeyword, Optional<ParsedReturnClauseSyntax> Output,
                                              SyntaxParsingContext &SPCtx);
  static ParsedFunctionSignatureSyntax makeFunctionSignature(ParsedParameterClauseSyntax Input, Optional<ParsedTokenSyntax> ThrowsOrRethrowsKeyword, Optional<ParsedReturnClauseSyntax> Output,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedIfConfigClauseSyntax recordIfConfigClause(ParsedTokenSyntax PoundKeyword, Optional<ParsedExprSyntax> Condition, ParsedSyntax Elements,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedIfConfigClauseSyntax deferIfConfigClause(ParsedTokenSyntax PoundKeyword, Optional<ParsedExprSyntax> Condition, ParsedSyntax Elements,
                                              SyntaxParsingContext &SPCtx);
  static ParsedIfConfigClauseSyntax makeIfConfigClause(ParsedTokenSyntax PoundKeyword, Optional<ParsedExprSyntax> Condition, ParsedSyntax Elements,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedIfConfigClauseListSyntax recordIfConfigClauseList(
      ArrayRef<ParsedIfConfigClauseSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedIfConfigClauseListSyntax deferIfConfigClauseList(
      ArrayRef<ParsedIfConfigClauseSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedIfConfigClauseListSyntax makeIfConfigClauseList(
      ArrayRef<ParsedIfConfigClauseSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedIfConfigClauseListSyntax makeBlankIfConfigClauseList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedIfConfigDeclSyntax recordIfConfigDecl(ParsedIfConfigClauseListSyntax Clauses, ParsedTokenSyntax PoundEndif,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedIfConfigDeclSyntax deferIfConfigDecl(ParsedIfConfigClauseListSyntax Clauses, ParsedTokenSyntax PoundEndif,
                                              SyntaxParsingContext &SPCtx);
  static ParsedIfConfigDeclSyntax makeIfConfigDecl(ParsedIfConfigClauseListSyntax Clauses, ParsedTokenSyntax PoundEndif,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPoundErrorDeclSyntax recordPoundErrorDecl(ParsedTokenSyntax PoundError, ParsedTokenSyntax LeftParen, ParsedStringLiteralExprSyntax Message, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPoundErrorDeclSyntax deferPoundErrorDecl(ParsedTokenSyntax PoundError, ParsedTokenSyntax LeftParen, ParsedStringLiteralExprSyntax Message, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPoundErrorDeclSyntax makePoundErrorDecl(ParsedTokenSyntax PoundError, ParsedTokenSyntax LeftParen, ParsedStringLiteralExprSyntax Message, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPoundWarningDeclSyntax recordPoundWarningDecl(ParsedTokenSyntax PoundWarning, ParsedTokenSyntax LeftParen, ParsedStringLiteralExprSyntax Message, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPoundWarningDeclSyntax deferPoundWarningDecl(ParsedTokenSyntax PoundWarning, ParsedTokenSyntax LeftParen, ParsedStringLiteralExprSyntax Message, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPoundWarningDeclSyntax makePoundWarningDecl(ParsedTokenSyntax PoundWarning, ParsedTokenSyntax LeftParen, ParsedStringLiteralExprSyntax Message, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPoundSourceLocationSyntax recordPoundSourceLocation(ParsedTokenSyntax PoundSourceLocation, ParsedTokenSyntax LeftParen, Optional<ParsedPoundSourceLocationArgsSyntax> Args, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPoundSourceLocationSyntax deferPoundSourceLocation(ParsedTokenSyntax PoundSourceLocation, ParsedTokenSyntax LeftParen, Optional<ParsedPoundSourceLocationArgsSyntax> Args, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPoundSourceLocationSyntax makePoundSourceLocation(ParsedTokenSyntax PoundSourceLocation, ParsedTokenSyntax LeftParen, Optional<ParsedPoundSourceLocationArgsSyntax> Args, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPoundSourceLocationArgsSyntax recordPoundSourceLocationArgs(ParsedTokenSyntax FileArgLabel, ParsedTokenSyntax FileArgColon, ParsedTokenSyntax FileName, ParsedTokenSyntax Comma, ParsedTokenSyntax LineArgLabel, ParsedTokenSyntax LineArgColon, ParsedTokenSyntax LineNumber,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPoundSourceLocationArgsSyntax deferPoundSourceLocationArgs(ParsedTokenSyntax FileArgLabel, ParsedTokenSyntax FileArgColon, ParsedTokenSyntax FileName, ParsedTokenSyntax Comma, ParsedTokenSyntax LineArgLabel, ParsedTokenSyntax LineArgColon, ParsedTokenSyntax LineNumber,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPoundSourceLocationArgsSyntax makePoundSourceLocationArgs(ParsedTokenSyntax FileArgLabel, ParsedTokenSyntax FileArgColon, ParsedTokenSyntax FileName, ParsedTokenSyntax Comma, ParsedTokenSyntax LineArgLabel, ParsedTokenSyntax LineArgColon, ParsedTokenSyntax LineNumber,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDeclModifierSyntax recordDeclModifier(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> DetailLeftParen, Optional<ParsedTokenSyntax> Detail, Optional<ParsedTokenSyntax> DetailRightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDeclModifierSyntax deferDeclModifier(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> DetailLeftParen, Optional<ParsedTokenSyntax> Detail, Optional<ParsedTokenSyntax> DetailRightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDeclModifierSyntax makeDeclModifier(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> DetailLeftParen, Optional<ParsedTokenSyntax> Detail, Optional<ParsedTokenSyntax> DetailRightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedInheritedTypeSyntax recordInheritedType(ParsedTypeSyntax TypeName, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedInheritedTypeSyntax deferInheritedType(ParsedTypeSyntax TypeName, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedInheritedTypeSyntax makeInheritedType(ParsedTypeSyntax TypeName, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedInheritedTypeListSyntax recordInheritedTypeList(
      ArrayRef<ParsedInheritedTypeSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedInheritedTypeListSyntax deferInheritedTypeList(
      ArrayRef<ParsedInheritedTypeSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedInheritedTypeListSyntax makeInheritedTypeList(
      ArrayRef<ParsedInheritedTypeSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedInheritedTypeListSyntax makeBlankInheritedTypeList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTypeInheritanceClauseSyntax recordTypeInheritanceClause(ParsedTokenSyntax Colon, ParsedInheritedTypeListSyntax InheritedTypeCollection,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTypeInheritanceClauseSyntax deferTypeInheritanceClause(ParsedTokenSyntax Colon, ParsedInheritedTypeListSyntax InheritedTypeCollection,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTypeInheritanceClauseSyntax makeTypeInheritanceClause(ParsedTokenSyntax Colon, ParsedInheritedTypeListSyntax InheritedTypeCollection,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedClassDeclSyntax recordClassDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ClassKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedClassDeclSyntax deferClassDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ClassKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              SyntaxParsingContext &SPCtx);
  static ParsedClassDeclSyntax makeClassDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ClassKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedStructDeclSyntax recordStructDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax StructKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedStructDeclSyntax deferStructDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax StructKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              SyntaxParsingContext &SPCtx);
  static ParsedStructDeclSyntax makeStructDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax StructKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedProtocolDeclSyntax recordProtocolDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ProtocolKeyword, ParsedTokenSyntax Identifier, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedProtocolDeclSyntax deferProtocolDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ProtocolKeyword, ParsedTokenSyntax Identifier, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              SyntaxParsingContext &SPCtx);
  static ParsedProtocolDeclSyntax makeProtocolDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ProtocolKeyword, ParsedTokenSyntax Identifier, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedExtensionDeclSyntax recordExtensionDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ExtensionKeyword, ParsedTypeSyntax ExtendedType, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedExtensionDeclSyntax deferExtensionDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ExtensionKeyword, ParsedTypeSyntax ExtendedType, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              SyntaxParsingContext &SPCtx);
  static ParsedExtensionDeclSyntax makeExtensionDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ExtensionKeyword, ParsedTypeSyntax ExtendedType, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedMemberDeclBlockSyntax recordMemberDeclBlock(ParsedTokenSyntax LeftBrace, ParsedMemberDeclListSyntax Members, ParsedTokenSyntax RightBrace,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedMemberDeclBlockSyntax deferMemberDeclBlock(ParsedTokenSyntax LeftBrace, ParsedMemberDeclListSyntax Members, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
  static ParsedMemberDeclBlockSyntax makeMemberDeclBlock(ParsedTokenSyntax LeftBrace, ParsedMemberDeclListSyntax Members, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedMemberDeclListSyntax recordMemberDeclList(
      ArrayRef<ParsedMemberDeclListItemSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedMemberDeclListSyntax deferMemberDeclList(
      ArrayRef<ParsedMemberDeclListItemSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedMemberDeclListSyntax makeMemberDeclList(
      ArrayRef<ParsedMemberDeclListItemSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedMemberDeclListSyntax makeBlankMemberDeclList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedMemberDeclListItemSyntax recordMemberDeclListItem(ParsedDeclSyntax Decl, Optional<ParsedTokenSyntax> Semicolon,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedMemberDeclListItemSyntax deferMemberDeclListItem(ParsedDeclSyntax Decl, Optional<ParsedTokenSyntax> Semicolon,
                                              SyntaxParsingContext &SPCtx);
  static ParsedMemberDeclListItemSyntax makeMemberDeclListItem(ParsedDeclSyntax Decl, Optional<ParsedTokenSyntax> Semicolon,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSourceFileSyntax recordSourceFile(ParsedCodeBlockItemListSyntax Statements, ParsedTokenSyntax EOFToken,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSourceFileSyntax deferSourceFile(ParsedCodeBlockItemListSyntax Statements, ParsedTokenSyntax EOFToken,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSourceFileSyntax makeSourceFile(ParsedCodeBlockItemListSyntax Statements, ParsedTokenSyntax EOFToken,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedInitializerClauseSyntax recordInitializerClause(ParsedTokenSyntax Equal, ParsedExprSyntax Value,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedInitializerClauseSyntax deferInitializerClause(ParsedTokenSyntax Equal, ParsedExprSyntax Value,
                                              SyntaxParsingContext &SPCtx);
  static ParsedInitializerClauseSyntax makeInitializerClause(ParsedTokenSyntax Equal, ParsedExprSyntax Value,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedFunctionParameterSyntax recordFunctionParameter(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedTokenSyntax> FirstName, Optional<ParsedTokenSyntax> SecondName, Optional<ParsedTokenSyntax> Colon, Optional<ParsedTypeSyntax> Type, Optional<ParsedTokenSyntax> Ellipsis, Optional<ParsedInitializerClauseSyntax> DefaultArgument, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedFunctionParameterSyntax deferFunctionParameter(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedTokenSyntax> FirstName, Optional<ParsedTokenSyntax> SecondName, Optional<ParsedTokenSyntax> Colon, Optional<ParsedTypeSyntax> Type, Optional<ParsedTokenSyntax> Ellipsis, Optional<ParsedInitializerClauseSyntax> DefaultArgument, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedFunctionParameterSyntax makeFunctionParameter(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedTokenSyntax> FirstName, Optional<ParsedTokenSyntax> SecondName, Optional<ParsedTokenSyntax> Colon, Optional<ParsedTypeSyntax> Type, Optional<ParsedTokenSyntax> Ellipsis, Optional<ParsedInitializerClauseSyntax> DefaultArgument, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedModifierListSyntax recordModifierList(
      ArrayRef<ParsedDeclModifierSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedModifierListSyntax deferModifierList(
      ArrayRef<ParsedDeclModifierSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedModifierListSyntax makeModifierList(
      ArrayRef<ParsedDeclModifierSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedModifierListSyntax makeBlankModifierList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedFunctionDeclSyntax recordFunctionDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax FuncKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, ParsedFunctionSignatureSyntax Signature, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, Optional<ParsedCodeBlockSyntax> Body,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedFunctionDeclSyntax deferFunctionDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax FuncKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, ParsedFunctionSignatureSyntax Signature, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, Optional<ParsedCodeBlockSyntax> Body,
                                              SyntaxParsingContext &SPCtx);
  static ParsedFunctionDeclSyntax makeFunctionDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax FuncKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, ParsedFunctionSignatureSyntax Signature, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, Optional<ParsedCodeBlockSyntax> Body,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedInitializerDeclSyntax recordInitializerDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax InitKeyword, Optional<ParsedTokenSyntax> OptionalMark, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, ParsedParameterClauseSyntax Parameters, Optional<ParsedTokenSyntax> ThrowsOrRethrowsKeyword, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, Optional<ParsedCodeBlockSyntax> Body,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedInitializerDeclSyntax deferInitializerDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax InitKeyword, Optional<ParsedTokenSyntax> OptionalMark, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, ParsedParameterClauseSyntax Parameters, Optional<ParsedTokenSyntax> ThrowsOrRethrowsKeyword, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, Optional<ParsedCodeBlockSyntax> Body,
                                              SyntaxParsingContext &SPCtx);
  static ParsedInitializerDeclSyntax makeInitializerDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax InitKeyword, Optional<ParsedTokenSyntax> OptionalMark, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, ParsedParameterClauseSyntax Parameters, Optional<ParsedTokenSyntax> ThrowsOrRethrowsKeyword, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, Optional<ParsedCodeBlockSyntax> Body,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDeinitializerDeclSyntax recordDeinitializerDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax DeinitKeyword, ParsedCodeBlockSyntax Body,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDeinitializerDeclSyntax deferDeinitializerDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax DeinitKeyword, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDeinitializerDeclSyntax makeDeinitializerDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax DeinitKeyword, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSubscriptDeclSyntax recordSubscriptDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax SubscriptKeyword, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, ParsedParameterClauseSyntax Indices, ParsedReturnClauseSyntax Result, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, Optional<ParsedSyntax> Accessor,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSubscriptDeclSyntax deferSubscriptDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax SubscriptKeyword, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, ParsedParameterClauseSyntax Indices, ParsedReturnClauseSyntax Result, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, Optional<ParsedSyntax> Accessor,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSubscriptDeclSyntax makeSubscriptDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax SubscriptKeyword, Optional<ParsedGenericParameterClauseSyntax> GenericParameterClause, ParsedParameterClauseSyntax Indices, ParsedReturnClauseSyntax Result, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, Optional<ParsedSyntax> Accessor,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAccessLevelModifierSyntax recordAccessLevelModifier(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> LeftParen, Optional<ParsedTokenSyntax> Modifier, Optional<ParsedTokenSyntax> RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAccessLevelModifierSyntax deferAccessLevelModifier(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> LeftParen, Optional<ParsedTokenSyntax> Modifier, Optional<ParsedTokenSyntax> RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAccessLevelModifierSyntax makeAccessLevelModifier(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> LeftParen, Optional<ParsedTokenSyntax> Modifier, Optional<ParsedTokenSyntax> RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAccessPathComponentSyntax recordAccessPathComponent(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> TrailingDot,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAccessPathComponentSyntax deferAccessPathComponent(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> TrailingDot,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAccessPathComponentSyntax makeAccessPathComponent(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> TrailingDot,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAccessPathSyntax recordAccessPath(
      ArrayRef<ParsedAccessPathComponentSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedAccessPathSyntax deferAccessPath(
      ArrayRef<ParsedAccessPathComponentSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedAccessPathSyntax makeAccessPath(
      ArrayRef<ParsedAccessPathComponentSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedAccessPathSyntax makeBlankAccessPath(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedImportDeclSyntax recordImportDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ImportTok, Optional<ParsedTokenSyntax> ImportKind, ParsedAccessPathSyntax Path,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedImportDeclSyntax deferImportDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ImportTok, Optional<ParsedTokenSyntax> ImportKind, ParsedAccessPathSyntax Path,
                                              SyntaxParsingContext &SPCtx);
  static ParsedImportDeclSyntax makeImportDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax ImportTok, Optional<ParsedTokenSyntax> ImportKind, ParsedAccessPathSyntax Path,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAccessorParameterSyntax recordAccessorParameter(ParsedTokenSyntax LeftParen, ParsedTokenSyntax Name, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAccessorParameterSyntax deferAccessorParameter(ParsedTokenSyntax LeftParen, ParsedTokenSyntax Name, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAccessorParameterSyntax makeAccessorParameter(ParsedTokenSyntax LeftParen, ParsedTokenSyntax Name, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAccessorDeclSyntax recordAccessorDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedDeclModifierSyntax> Modifier, ParsedTokenSyntax AccessorKind, Optional<ParsedAccessorParameterSyntax> Parameter, Optional<ParsedCodeBlockSyntax> Body,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAccessorDeclSyntax deferAccessorDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedDeclModifierSyntax> Modifier, ParsedTokenSyntax AccessorKind, Optional<ParsedAccessorParameterSyntax> Parameter, Optional<ParsedCodeBlockSyntax> Body,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAccessorDeclSyntax makeAccessorDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedDeclModifierSyntax> Modifier, ParsedTokenSyntax AccessorKind, Optional<ParsedAccessorParameterSyntax> Parameter, Optional<ParsedCodeBlockSyntax> Body,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAccessorListSyntax recordAccessorList(
      ArrayRef<ParsedAccessorDeclSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedAccessorListSyntax deferAccessorList(
      ArrayRef<ParsedAccessorDeclSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedAccessorListSyntax makeAccessorList(
      ArrayRef<ParsedAccessorDeclSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedAccessorListSyntax makeBlankAccessorList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAccessorBlockSyntax recordAccessorBlock(ParsedTokenSyntax LeftBrace, ParsedAccessorListSyntax Accessors, ParsedTokenSyntax RightBrace,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAccessorBlockSyntax deferAccessorBlock(ParsedTokenSyntax LeftBrace, ParsedAccessorListSyntax Accessors, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAccessorBlockSyntax makeAccessorBlock(ParsedTokenSyntax LeftBrace, ParsedAccessorListSyntax Accessors, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPatternBindingSyntax recordPatternBinding(ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, Optional<ParsedInitializerClauseSyntax> Initializer, Optional<ParsedSyntax> Accessor, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPatternBindingSyntax deferPatternBinding(ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, Optional<ParsedInitializerClauseSyntax> Initializer, Optional<ParsedSyntax> Accessor, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPatternBindingSyntax makePatternBinding(ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, Optional<ParsedInitializerClauseSyntax> Initializer, Optional<ParsedSyntax> Accessor, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPatternBindingListSyntax recordPatternBindingList(
      ArrayRef<ParsedPatternBindingSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedPatternBindingListSyntax deferPatternBindingList(
      ArrayRef<ParsedPatternBindingSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedPatternBindingListSyntax makePatternBindingList(
      ArrayRef<ParsedPatternBindingSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedPatternBindingListSyntax makeBlankPatternBindingList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedVariableDeclSyntax recordVariableDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax LetOrVarKeyword, ParsedPatternBindingListSyntax Bindings,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedVariableDeclSyntax deferVariableDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax LetOrVarKeyword, ParsedPatternBindingListSyntax Bindings,
                                              SyntaxParsingContext &SPCtx);
  static ParsedVariableDeclSyntax makeVariableDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax LetOrVarKeyword, ParsedPatternBindingListSyntax Bindings,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedEnumCaseElementSyntax recordEnumCaseElement(ParsedTokenSyntax Identifier, Optional<ParsedParameterClauseSyntax> AssociatedValue, Optional<ParsedInitializerClauseSyntax> RawValue, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedEnumCaseElementSyntax deferEnumCaseElement(ParsedTokenSyntax Identifier, Optional<ParsedParameterClauseSyntax> AssociatedValue, Optional<ParsedInitializerClauseSyntax> RawValue, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedEnumCaseElementSyntax makeEnumCaseElement(ParsedTokenSyntax Identifier, Optional<ParsedParameterClauseSyntax> AssociatedValue, Optional<ParsedInitializerClauseSyntax> RawValue, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedEnumCaseElementListSyntax recordEnumCaseElementList(
      ArrayRef<ParsedEnumCaseElementSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedEnumCaseElementListSyntax deferEnumCaseElementList(
      ArrayRef<ParsedEnumCaseElementSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedEnumCaseElementListSyntax makeEnumCaseElementList(
      ArrayRef<ParsedEnumCaseElementSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedEnumCaseElementListSyntax makeBlankEnumCaseElementList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedEnumCaseDeclSyntax recordEnumCaseDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax CaseKeyword, ParsedEnumCaseElementListSyntax Elements,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedEnumCaseDeclSyntax deferEnumCaseDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax CaseKeyword, ParsedEnumCaseElementListSyntax Elements,
                                              SyntaxParsingContext &SPCtx);
  static ParsedEnumCaseDeclSyntax makeEnumCaseDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax CaseKeyword, ParsedEnumCaseElementListSyntax Elements,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedEnumDeclSyntax recordEnumDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax EnumKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameters, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedEnumDeclSyntax deferEnumDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax EnumKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameters, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              SyntaxParsingContext &SPCtx);
  static ParsedEnumDeclSyntax makeEnumDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax EnumKeyword, ParsedTokenSyntax Identifier, Optional<ParsedGenericParameterClauseSyntax> GenericParameters, Optional<ParsedTypeInheritanceClauseSyntax> InheritanceClause, Optional<ParsedGenericWhereClauseSyntax> GenericWhereClause, ParsedMemberDeclBlockSyntax Members,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedOperatorDeclSyntax recordOperatorDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax OperatorKeyword, ParsedTokenSyntax Identifier, Optional<ParsedOperatorPrecedenceAndTypesSyntax> OperatorPrecedenceAndTypes,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedOperatorDeclSyntax deferOperatorDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax OperatorKeyword, ParsedTokenSyntax Identifier, Optional<ParsedOperatorPrecedenceAndTypesSyntax> OperatorPrecedenceAndTypes,
                                              SyntaxParsingContext &SPCtx);
  static ParsedOperatorDeclSyntax makeOperatorDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax OperatorKeyword, ParsedTokenSyntax Identifier, Optional<ParsedOperatorPrecedenceAndTypesSyntax> OperatorPrecedenceAndTypes,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedIdentifierListSyntax recordIdentifierList(
      ArrayRef<ParsedTokenSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedIdentifierListSyntax deferIdentifierList(
      ArrayRef<ParsedTokenSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedIdentifierListSyntax makeIdentifierList(
      ArrayRef<ParsedTokenSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedIdentifierListSyntax makeBlankIdentifierList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedOperatorPrecedenceAndTypesSyntax recordOperatorPrecedenceAndTypes(ParsedTokenSyntax Colon, ParsedIdentifierListSyntax PrecedenceGroupAndDesignatedTypes,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedOperatorPrecedenceAndTypesSyntax deferOperatorPrecedenceAndTypes(ParsedTokenSyntax Colon, ParsedIdentifierListSyntax PrecedenceGroupAndDesignatedTypes,
                                              SyntaxParsingContext &SPCtx);
  static ParsedOperatorPrecedenceAndTypesSyntax makeOperatorPrecedenceAndTypes(ParsedTokenSyntax Colon, ParsedIdentifierListSyntax PrecedenceGroupAndDesignatedTypes,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPrecedenceGroupDeclSyntax recordPrecedenceGroupDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax PrecedencegroupKeyword, ParsedTokenSyntax Identifier, ParsedTokenSyntax LeftBrace, ParsedPrecedenceGroupAttributeListSyntax GroupAttributes, ParsedTokenSyntax RightBrace,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPrecedenceGroupDeclSyntax deferPrecedenceGroupDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax PrecedencegroupKeyword, ParsedTokenSyntax Identifier, ParsedTokenSyntax LeftBrace, ParsedPrecedenceGroupAttributeListSyntax GroupAttributes, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPrecedenceGroupDeclSyntax makePrecedenceGroupDecl(Optional<ParsedAttributeListSyntax> Attributes, Optional<ParsedModifierListSyntax> Modifiers, ParsedTokenSyntax PrecedencegroupKeyword, ParsedTokenSyntax Identifier, ParsedTokenSyntax LeftBrace, ParsedPrecedenceGroupAttributeListSyntax GroupAttributes, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPrecedenceGroupAttributeListSyntax recordPrecedenceGroupAttributeList(
      ArrayRef<ParsedSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedPrecedenceGroupAttributeListSyntax deferPrecedenceGroupAttributeList(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedPrecedenceGroupAttributeListSyntax makePrecedenceGroupAttributeList(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedPrecedenceGroupAttributeListSyntax makeBlankPrecedenceGroupAttributeList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPrecedenceGroupRelationSyntax recordPrecedenceGroupRelation(ParsedTokenSyntax HigherThanOrLowerThan, ParsedTokenSyntax Colon, ParsedPrecedenceGroupNameListSyntax OtherNames,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPrecedenceGroupRelationSyntax deferPrecedenceGroupRelation(ParsedTokenSyntax HigherThanOrLowerThan, ParsedTokenSyntax Colon, ParsedPrecedenceGroupNameListSyntax OtherNames,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPrecedenceGroupRelationSyntax makePrecedenceGroupRelation(ParsedTokenSyntax HigherThanOrLowerThan, ParsedTokenSyntax Colon, ParsedPrecedenceGroupNameListSyntax OtherNames,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPrecedenceGroupNameListSyntax recordPrecedenceGroupNameList(
      ArrayRef<ParsedPrecedenceGroupNameElementSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedPrecedenceGroupNameListSyntax deferPrecedenceGroupNameList(
      ArrayRef<ParsedPrecedenceGroupNameElementSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedPrecedenceGroupNameListSyntax makePrecedenceGroupNameList(
      ArrayRef<ParsedPrecedenceGroupNameElementSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedPrecedenceGroupNameListSyntax makeBlankPrecedenceGroupNameList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPrecedenceGroupNameElementSyntax recordPrecedenceGroupNameElement(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPrecedenceGroupNameElementSyntax deferPrecedenceGroupNameElement(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPrecedenceGroupNameElementSyntax makePrecedenceGroupNameElement(ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPrecedenceGroupAssignmentSyntax recordPrecedenceGroupAssignment(ParsedTokenSyntax AssignmentKeyword, ParsedTokenSyntax Colon, ParsedTokenSyntax Flag,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPrecedenceGroupAssignmentSyntax deferPrecedenceGroupAssignment(ParsedTokenSyntax AssignmentKeyword, ParsedTokenSyntax Colon, ParsedTokenSyntax Flag,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPrecedenceGroupAssignmentSyntax makePrecedenceGroupAssignment(ParsedTokenSyntax AssignmentKeyword, ParsedTokenSyntax Colon, ParsedTokenSyntax Flag,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPrecedenceGroupAssociativitySyntax recordPrecedenceGroupAssociativity(ParsedTokenSyntax AssociativityKeyword, ParsedTokenSyntax Colon, ParsedTokenSyntax Value,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPrecedenceGroupAssociativitySyntax deferPrecedenceGroupAssociativity(ParsedTokenSyntax AssociativityKeyword, ParsedTokenSyntax Colon, ParsedTokenSyntax Value,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPrecedenceGroupAssociativitySyntax makePrecedenceGroupAssociativity(ParsedTokenSyntax AssociativityKeyword, ParsedTokenSyntax Colon, ParsedTokenSyntax Value,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTokenListSyntax recordTokenList(
      ArrayRef<ParsedTokenSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedTokenListSyntax deferTokenList(
      ArrayRef<ParsedTokenSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedTokenListSyntax makeTokenList(
      ArrayRef<ParsedTokenSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedTokenListSyntax makeBlankTokenList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedNonEmptyTokenListSyntax recordNonEmptyTokenList(
      ArrayRef<ParsedTokenSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedNonEmptyTokenListSyntax deferNonEmptyTokenList(
      ArrayRef<ParsedTokenSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedNonEmptyTokenListSyntax makeNonEmptyTokenList(
      ArrayRef<ParsedTokenSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedNonEmptyTokenListSyntax makeBlankNonEmptyTokenList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedCustomAttributeSyntax recordCustomAttribute(ParsedTokenSyntax AtSignToken, ParsedTypeSyntax AttributeName, Optional<ParsedTokenSyntax> LeftParen, Optional<ParsedFunctionCallArgumentListSyntax> ArgumentList, Optional<ParsedTokenSyntax> RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedCustomAttributeSyntax deferCustomAttribute(ParsedTokenSyntax AtSignToken, ParsedTypeSyntax AttributeName, Optional<ParsedTokenSyntax> LeftParen, Optional<ParsedFunctionCallArgumentListSyntax> ArgumentList, Optional<ParsedTokenSyntax> RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedCustomAttributeSyntax makeCustomAttribute(ParsedTokenSyntax AtSignToken, ParsedTypeSyntax AttributeName, Optional<ParsedTokenSyntax> LeftParen, Optional<ParsedFunctionCallArgumentListSyntax> ArgumentList, Optional<ParsedTokenSyntax> RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAttributeSyntax recordAttribute(ParsedTokenSyntax AtSignToken, ParsedTokenSyntax AttributeName, Optional<ParsedTokenSyntax> LeftParen, Optional<ParsedSyntax> Argument, Optional<ParsedTokenSyntax> RightParen, Optional<ParsedTokenListSyntax> TokenList,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAttributeSyntax deferAttribute(ParsedTokenSyntax AtSignToken, ParsedTokenSyntax AttributeName, Optional<ParsedTokenSyntax> LeftParen, Optional<ParsedSyntax> Argument, Optional<ParsedTokenSyntax> RightParen, Optional<ParsedTokenListSyntax> TokenList,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAttributeSyntax makeAttribute(ParsedTokenSyntax AtSignToken, ParsedTokenSyntax AttributeName, Optional<ParsedTokenSyntax> LeftParen, Optional<ParsedSyntax> Argument, Optional<ParsedTokenSyntax> RightParen, Optional<ParsedTokenListSyntax> TokenList,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAttributeListSyntax recordAttributeList(
      ArrayRef<ParsedSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedAttributeListSyntax deferAttributeList(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedAttributeListSyntax makeAttributeList(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedAttributeListSyntax makeBlankAttributeList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSpecializeAttributeSpecListSyntax recordSpecializeAttributeSpecList(
      ArrayRef<ParsedSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedSpecializeAttributeSpecListSyntax deferSpecializeAttributeSpecList(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedSpecializeAttributeSpecListSyntax makeSpecializeAttributeSpecList(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedSpecializeAttributeSpecListSyntax makeBlankSpecializeAttributeSpecList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedLabeledSpecializeEntrySyntax recordLabeledSpecializeEntry(ParsedTokenSyntax Label, ParsedTokenSyntax Colon, ParsedTokenSyntax Value, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedLabeledSpecializeEntrySyntax deferLabeledSpecializeEntry(ParsedTokenSyntax Label, ParsedTokenSyntax Colon, ParsedTokenSyntax Value, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedLabeledSpecializeEntrySyntax makeLabeledSpecializeEntry(ParsedTokenSyntax Label, ParsedTokenSyntax Colon, ParsedTokenSyntax Value, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedNamedAttributeStringArgumentSyntax recordNamedAttributeStringArgument(ParsedTokenSyntax NameTok, ParsedTokenSyntax Colon, ParsedSyntax StringOrDeclname,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedNamedAttributeStringArgumentSyntax deferNamedAttributeStringArgument(ParsedTokenSyntax NameTok, ParsedTokenSyntax Colon, ParsedSyntax StringOrDeclname,
                                              SyntaxParsingContext &SPCtx);
  static ParsedNamedAttributeStringArgumentSyntax makeNamedAttributeStringArgument(ParsedTokenSyntax NameTok, ParsedTokenSyntax Colon, ParsedSyntax StringOrDeclname,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDeclNameSyntax recordDeclName(ParsedSyntax DeclBaseName, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDeclNameSyntax deferDeclName(ParsedSyntax DeclBaseName, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDeclNameSyntax makeDeclName(ParsedSyntax DeclBaseName, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedImplementsAttributeArgumentsSyntax recordImplementsAttributeArguments(ParsedSimpleTypeIdentifierSyntax Type, ParsedTokenSyntax Comma, ParsedSyntax DeclBaseName, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedImplementsAttributeArgumentsSyntax deferImplementsAttributeArguments(ParsedSimpleTypeIdentifierSyntax Type, ParsedTokenSyntax Comma, ParsedSyntax DeclBaseName, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              SyntaxParsingContext &SPCtx);
  static ParsedImplementsAttributeArgumentsSyntax makeImplementsAttributeArguments(ParsedSimpleTypeIdentifierSyntax Type, ParsedTokenSyntax Comma, ParsedSyntax DeclBaseName, Optional<ParsedDeclNameArgumentsSyntax> DeclNameArguments,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedObjCSelectorPieceSyntax recordObjCSelectorPiece(Optional<ParsedTokenSyntax> Name, Optional<ParsedTokenSyntax> Colon,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedObjCSelectorPieceSyntax deferObjCSelectorPiece(Optional<ParsedTokenSyntax> Name, Optional<ParsedTokenSyntax> Colon,
                                              SyntaxParsingContext &SPCtx);
  static ParsedObjCSelectorPieceSyntax makeObjCSelectorPiece(Optional<ParsedTokenSyntax> Name, Optional<ParsedTokenSyntax> Colon,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedObjCSelectorSyntax recordObjCSelector(
      ArrayRef<ParsedObjCSelectorPieceSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedObjCSelectorSyntax deferObjCSelector(
      ArrayRef<ParsedObjCSelectorPieceSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedObjCSelectorSyntax makeObjCSelector(
      ArrayRef<ParsedObjCSelectorPieceSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedObjCSelectorSyntax makeBlankObjCSelector(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedContinueStmtSyntax recordContinueStmt(ParsedTokenSyntax ContinueKeyword, Optional<ParsedTokenSyntax> Label,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedContinueStmtSyntax deferContinueStmt(ParsedTokenSyntax ContinueKeyword, Optional<ParsedTokenSyntax> Label,
                                              SyntaxParsingContext &SPCtx);
  static ParsedContinueStmtSyntax makeContinueStmt(ParsedTokenSyntax ContinueKeyword, Optional<ParsedTokenSyntax> Label,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedWhileStmtSyntax recordWhileStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax WhileKeyword, ParsedConditionElementListSyntax Conditions, ParsedCodeBlockSyntax Body,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedWhileStmtSyntax deferWhileStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax WhileKeyword, ParsedConditionElementListSyntax Conditions, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
  static ParsedWhileStmtSyntax makeWhileStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax WhileKeyword, ParsedConditionElementListSyntax Conditions, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDeferStmtSyntax recordDeferStmt(ParsedTokenSyntax DeferKeyword, ParsedCodeBlockSyntax Body,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDeferStmtSyntax deferDeferStmt(ParsedTokenSyntax DeferKeyword, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDeferStmtSyntax makeDeferStmt(ParsedTokenSyntax DeferKeyword, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedExpressionStmtSyntax recordExpressionStmt(ParsedExprSyntax Expression,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedExpressionStmtSyntax deferExpressionStmt(ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
  static ParsedExpressionStmtSyntax makeExpressionStmt(ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSwitchCaseListSyntax recordSwitchCaseList(
      ArrayRef<ParsedSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedSwitchCaseListSyntax deferSwitchCaseList(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedSwitchCaseListSyntax makeSwitchCaseList(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedSwitchCaseListSyntax makeBlankSwitchCaseList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedRepeatWhileStmtSyntax recordRepeatWhileStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax RepeatKeyword, ParsedCodeBlockSyntax Body, ParsedTokenSyntax WhileKeyword, ParsedExprSyntax Condition,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedRepeatWhileStmtSyntax deferRepeatWhileStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax RepeatKeyword, ParsedCodeBlockSyntax Body, ParsedTokenSyntax WhileKeyword, ParsedExprSyntax Condition,
                                              SyntaxParsingContext &SPCtx);
  static ParsedRepeatWhileStmtSyntax makeRepeatWhileStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax RepeatKeyword, ParsedCodeBlockSyntax Body, ParsedTokenSyntax WhileKeyword, ParsedExprSyntax Condition,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedGuardStmtSyntax recordGuardStmt(ParsedTokenSyntax GuardKeyword, ParsedConditionElementListSyntax Conditions, ParsedTokenSyntax ElseKeyword, ParsedCodeBlockSyntax Body,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedGuardStmtSyntax deferGuardStmt(ParsedTokenSyntax GuardKeyword, ParsedConditionElementListSyntax Conditions, ParsedTokenSyntax ElseKeyword, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
  static ParsedGuardStmtSyntax makeGuardStmt(ParsedTokenSyntax GuardKeyword, ParsedConditionElementListSyntax Conditions, ParsedTokenSyntax ElseKeyword, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedWhereClauseSyntax recordWhereClause(ParsedTokenSyntax WhereKeyword, ParsedExprSyntax GuardResult,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedWhereClauseSyntax deferWhereClause(ParsedTokenSyntax WhereKeyword, ParsedExprSyntax GuardResult,
                                              SyntaxParsingContext &SPCtx);
  static ParsedWhereClauseSyntax makeWhereClause(ParsedTokenSyntax WhereKeyword, ParsedExprSyntax GuardResult,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedForInStmtSyntax recordForInStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax ForKeyword, Optional<ParsedTokenSyntax> CaseKeyword, ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, ParsedTokenSyntax InKeyword, ParsedExprSyntax SequenceExpr, Optional<ParsedWhereClauseSyntax> WhereClause, ParsedCodeBlockSyntax Body,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedForInStmtSyntax deferForInStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax ForKeyword, Optional<ParsedTokenSyntax> CaseKeyword, ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, ParsedTokenSyntax InKeyword, ParsedExprSyntax SequenceExpr, Optional<ParsedWhereClauseSyntax> WhereClause, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
  static ParsedForInStmtSyntax makeForInStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax ForKeyword, Optional<ParsedTokenSyntax> CaseKeyword, ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, ParsedTokenSyntax InKeyword, ParsedExprSyntax SequenceExpr, Optional<ParsedWhereClauseSyntax> WhereClause, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSwitchStmtSyntax recordSwitchStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax SwitchKeyword, ParsedExprSyntax Expression, ParsedTokenSyntax LeftBrace, ParsedSwitchCaseListSyntax Cases, ParsedTokenSyntax RightBrace,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSwitchStmtSyntax deferSwitchStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax SwitchKeyword, ParsedExprSyntax Expression, ParsedTokenSyntax LeftBrace, ParsedSwitchCaseListSyntax Cases, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSwitchStmtSyntax makeSwitchStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax SwitchKeyword, ParsedExprSyntax Expression, ParsedTokenSyntax LeftBrace, ParsedSwitchCaseListSyntax Cases, ParsedTokenSyntax RightBrace,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedCatchClauseListSyntax recordCatchClauseList(
      ArrayRef<ParsedCatchClauseSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedCatchClauseListSyntax deferCatchClauseList(
      ArrayRef<ParsedCatchClauseSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedCatchClauseListSyntax makeCatchClauseList(
      ArrayRef<ParsedCatchClauseSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedCatchClauseListSyntax makeBlankCatchClauseList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDoStmtSyntax recordDoStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax DoKeyword, ParsedCodeBlockSyntax Body, Optional<ParsedCatchClauseListSyntax> CatchClauses,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDoStmtSyntax deferDoStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax DoKeyword, ParsedCodeBlockSyntax Body, Optional<ParsedCatchClauseListSyntax> CatchClauses,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDoStmtSyntax makeDoStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax DoKeyword, ParsedCodeBlockSyntax Body, Optional<ParsedCatchClauseListSyntax> CatchClauses,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedReturnStmtSyntax recordReturnStmt(ParsedTokenSyntax ReturnKeyword, Optional<ParsedExprSyntax> Expression,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedReturnStmtSyntax deferReturnStmt(ParsedTokenSyntax ReturnKeyword, Optional<ParsedExprSyntax> Expression,
                                              SyntaxParsingContext &SPCtx);
  static ParsedReturnStmtSyntax makeReturnStmt(ParsedTokenSyntax ReturnKeyword, Optional<ParsedExprSyntax> Expression,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedYieldStmtSyntax recordYieldStmt(ParsedTokenSyntax YieldKeyword, ParsedSyntax Yields,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedYieldStmtSyntax deferYieldStmt(ParsedTokenSyntax YieldKeyword, ParsedSyntax Yields,
                                              SyntaxParsingContext &SPCtx);
  static ParsedYieldStmtSyntax makeYieldStmt(ParsedTokenSyntax YieldKeyword, ParsedSyntax Yields,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedYieldListSyntax recordYieldList(ParsedTokenSyntax LeftParen, ParsedExprListSyntax ElementList, Optional<ParsedTokenSyntax> TrailingComma, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedYieldListSyntax deferYieldList(ParsedTokenSyntax LeftParen, ParsedExprListSyntax ElementList, Optional<ParsedTokenSyntax> TrailingComma, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedYieldListSyntax makeYieldList(ParsedTokenSyntax LeftParen, ParsedExprListSyntax ElementList, Optional<ParsedTokenSyntax> TrailingComma, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedFallthroughStmtSyntax recordFallthroughStmt(ParsedTokenSyntax FallthroughKeyword,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedFallthroughStmtSyntax deferFallthroughStmt(ParsedTokenSyntax FallthroughKeyword,
                                              SyntaxParsingContext &SPCtx);
  static ParsedFallthroughStmtSyntax makeFallthroughStmt(ParsedTokenSyntax FallthroughKeyword,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedBreakStmtSyntax recordBreakStmt(ParsedTokenSyntax BreakKeyword, Optional<ParsedTokenSyntax> Label,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedBreakStmtSyntax deferBreakStmt(ParsedTokenSyntax BreakKeyword, Optional<ParsedTokenSyntax> Label,
                                              SyntaxParsingContext &SPCtx);
  static ParsedBreakStmtSyntax makeBreakStmt(ParsedTokenSyntax BreakKeyword, Optional<ParsedTokenSyntax> Label,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedCaseItemListSyntax recordCaseItemList(
      ArrayRef<ParsedCaseItemSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedCaseItemListSyntax deferCaseItemList(
      ArrayRef<ParsedCaseItemSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedCaseItemListSyntax makeCaseItemList(
      ArrayRef<ParsedCaseItemSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedCaseItemListSyntax makeBlankCaseItemList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedConditionElementSyntax recordConditionElement(ParsedSyntax Condition, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedConditionElementSyntax deferConditionElement(ParsedSyntax Condition, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedConditionElementSyntax makeConditionElement(ParsedSyntax Condition, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAvailabilityConditionSyntax recordAvailabilityCondition(ParsedTokenSyntax PoundAvailableKeyword, ParsedTokenSyntax LeftParen, ParsedAvailabilitySpecListSyntax AvailabilitySpec, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAvailabilityConditionSyntax deferAvailabilityCondition(ParsedTokenSyntax PoundAvailableKeyword, ParsedTokenSyntax LeftParen, ParsedAvailabilitySpecListSyntax AvailabilitySpec, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAvailabilityConditionSyntax makeAvailabilityCondition(ParsedTokenSyntax PoundAvailableKeyword, ParsedTokenSyntax LeftParen, ParsedAvailabilitySpecListSyntax AvailabilitySpec, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedMatchingPatternConditionSyntax recordMatchingPatternCondition(ParsedTokenSyntax CaseKeyword, ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, ParsedInitializerClauseSyntax Initializer,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedMatchingPatternConditionSyntax deferMatchingPatternCondition(ParsedTokenSyntax CaseKeyword, ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, ParsedInitializerClauseSyntax Initializer,
                                              SyntaxParsingContext &SPCtx);
  static ParsedMatchingPatternConditionSyntax makeMatchingPatternCondition(ParsedTokenSyntax CaseKeyword, ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, ParsedInitializerClauseSyntax Initializer,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedOptionalBindingConditionSyntax recordOptionalBindingCondition(ParsedTokenSyntax LetOrVarKeyword, ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, ParsedInitializerClauseSyntax Initializer,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedOptionalBindingConditionSyntax deferOptionalBindingCondition(ParsedTokenSyntax LetOrVarKeyword, ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, ParsedInitializerClauseSyntax Initializer,
                                              SyntaxParsingContext &SPCtx);
  static ParsedOptionalBindingConditionSyntax makeOptionalBindingCondition(ParsedTokenSyntax LetOrVarKeyword, ParsedPatternSyntax Pattern, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation, ParsedInitializerClauseSyntax Initializer,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedConditionElementListSyntax recordConditionElementList(
      ArrayRef<ParsedConditionElementSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedConditionElementListSyntax deferConditionElementList(
      ArrayRef<ParsedConditionElementSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedConditionElementListSyntax makeConditionElementList(
      ArrayRef<ParsedConditionElementSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedConditionElementListSyntax makeBlankConditionElementList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDeclarationStmtSyntax recordDeclarationStmt(ParsedDeclSyntax Declaration,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDeclarationStmtSyntax deferDeclarationStmt(ParsedDeclSyntax Declaration,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDeclarationStmtSyntax makeDeclarationStmt(ParsedDeclSyntax Declaration,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedThrowStmtSyntax recordThrowStmt(ParsedTokenSyntax ThrowKeyword, ParsedExprSyntax Expression,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedThrowStmtSyntax deferThrowStmt(ParsedTokenSyntax ThrowKeyword, ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
  static ParsedThrowStmtSyntax makeThrowStmt(ParsedTokenSyntax ThrowKeyword, ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedIfStmtSyntax recordIfStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax IfKeyword, ParsedConditionElementListSyntax Conditions, ParsedCodeBlockSyntax Body, Optional<ParsedTokenSyntax> ElseKeyword, Optional<ParsedSyntax> ElseBody,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedIfStmtSyntax deferIfStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax IfKeyword, ParsedConditionElementListSyntax Conditions, ParsedCodeBlockSyntax Body, Optional<ParsedTokenSyntax> ElseKeyword, Optional<ParsedSyntax> ElseBody,
                                              SyntaxParsingContext &SPCtx);
  static ParsedIfStmtSyntax makeIfStmt(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedTokenSyntax IfKeyword, ParsedConditionElementListSyntax Conditions, ParsedCodeBlockSyntax Body, Optional<ParsedTokenSyntax> ElseKeyword, Optional<ParsedSyntax> ElseBody,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedElseIfContinuationSyntax recordElseIfContinuation(ParsedIfStmtSyntax IfStatement,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedElseIfContinuationSyntax deferElseIfContinuation(ParsedIfStmtSyntax IfStatement,
                                              SyntaxParsingContext &SPCtx);
  static ParsedElseIfContinuationSyntax makeElseIfContinuation(ParsedIfStmtSyntax IfStatement,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedElseBlockSyntax recordElseBlock(ParsedTokenSyntax ElseKeyword, ParsedCodeBlockSyntax Body,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedElseBlockSyntax deferElseBlock(ParsedTokenSyntax ElseKeyword, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
  static ParsedElseBlockSyntax makeElseBlock(ParsedTokenSyntax ElseKeyword, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSwitchCaseSyntax recordSwitchCase(Optional<ParsedAttributeSyntax> UnknownAttr, ParsedSyntax Label, ParsedCodeBlockItemListSyntax Statements,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSwitchCaseSyntax deferSwitchCase(Optional<ParsedAttributeSyntax> UnknownAttr, ParsedSyntax Label, ParsedCodeBlockItemListSyntax Statements,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSwitchCaseSyntax makeSwitchCase(Optional<ParsedAttributeSyntax> UnknownAttr, ParsedSyntax Label, ParsedCodeBlockItemListSyntax Statements,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSwitchDefaultLabelSyntax recordSwitchDefaultLabel(ParsedTokenSyntax DefaultKeyword, ParsedTokenSyntax Colon,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSwitchDefaultLabelSyntax deferSwitchDefaultLabel(ParsedTokenSyntax DefaultKeyword, ParsedTokenSyntax Colon,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSwitchDefaultLabelSyntax makeSwitchDefaultLabel(ParsedTokenSyntax DefaultKeyword, ParsedTokenSyntax Colon,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedCaseItemSyntax recordCaseItem(ParsedPatternSyntax Pattern, Optional<ParsedWhereClauseSyntax> WhereClause, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedCaseItemSyntax deferCaseItem(ParsedPatternSyntax Pattern, Optional<ParsedWhereClauseSyntax> WhereClause, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedCaseItemSyntax makeCaseItem(ParsedPatternSyntax Pattern, Optional<ParsedWhereClauseSyntax> WhereClause, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSwitchCaseLabelSyntax recordSwitchCaseLabel(ParsedTokenSyntax CaseKeyword, ParsedCaseItemListSyntax CaseItems, ParsedTokenSyntax Colon,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSwitchCaseLabelSyntax deferSwitchCaseLabel(ParsedTokenSyntax CaseKeyword, ParsedCaseItemListSyntax CaseItems, ParsedTokenSyntax Colon,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSwitchCaseLabelSyntax makeSwitchCaseLabel(ParsedTokenSyntax CaseKeyword, ParsedCaseItemListSyntax CaseItems, ParsedTokenSyntax Colon,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedCatchClauseSyntax recordCatchClause(ParsedTokenSyntax CatchKeyword, Optional<ParsedPatternSyntax> Pattern, Optional<ParsedWhereClauseSyntax> WhereClause, ParsedCodeBlockSyntax Body,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedCatchClauseSyntax deferCatchClause(ParsedTokenSyntax CatchKeyword, Optional<ParsedPatternSyntax> Pattern, Optional<ParsedWhereClauseSyntax> WhereClause, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
  static ParsedCatchClauseSyntax makeCatchClause(ParsedTokenSyntax CatchKeyword, Optional<ParsedPatternSyntax> Pattern, Optional<ParsedWhereClauseSyntax> WhereClause, ParsedCodeBlockSyntax Body,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedPoundAssertStmtSyntax recordPoundAssertStmt(ParsedTokenSyntax PoundAssert, ParsedTokenSyntax LeftParen, ParsedExprSyntax Condition, Optional<ParsedTokenSyntax> Comma, Optional<ParsedTokenSyntax> Message, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedPoundAssertStmtSyntax deferPoundAssertStmt(ParsedTokenSyntax PoundAssert, ParsedTokenSyntax LeftParen, ParsedExprSyntax Condition, Optional<ParsedTokenSyntax> Comma, Optional<ParsedTokenSyntax> Message, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedPoundAssertStmtSyntax makePoundAssertStmt(ParsedTokenSyntax PoundAssert, ParsedTokenSyntax LeftParen, ParsedExprSyntax Condition, Optional<ParsedTokenSyntax> Comma, Optional<ParsedTokenSyntax> Message, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedGenericWhereClauseSyntax recordGenericWhereClause(ParsedTokenSyntax WhereKeyword, ParsedGenericRequirementListSyntax RequirementList,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedGenericWhereClauseSyntax deferGenericWhereClause(ParsedTokenSyntax WhereKeyword, ParsedGenericRequirementListSyntax RequirementList,
                                              SyntaxParsingContext &SPCtx);
  static ParsedGenericWhereClauseSyntax makeGenericWhereClause(ParsedTokenSyntax WhereKeyword, ParsedGenericRequirementListSyntax RequirementList,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedGenericRequirementListSyntax recordGenericRequirementList(
      ArrayRef<ParsedSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedGenericRequirementListSyntax deferGenericRequirementList(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedGenericRequirementListSyntax makeGenericRequirementList(
      ArrayRef<ParsedSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedGenericRequirementListSyntax makeBlankGenericRequirementList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSameTypeRequirementSyntax recordSameTypeRequirement(ParsedTypeSyntax LeftTypeIdentifier, ParsedTokenSyntax EqualityToken, ParsedTypeSyntax RightTypeIdentifier, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSameTypeRequirementSyntax deferSameTypeRequirement(ParsedTypeSyntax LeftTypeIdentifier, ParsedTokenSyntax EqualityToken, ParsedTypeSyntax RightTypeIdentifier, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSameTypeRequirementSyntax makeSameTypeRequirement(ParsedTypeSyntax LeftTypeIdentifier, ParsedTokenSyntax EqualityToken, ParsedTypeSyntax RightTypeIdentifier, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedGenericParameterListSyntax recordGenericParameterList(
      ArrayRef<ParsedGenericParameterSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedGenericParameterListSyntax deferGenericParameterList(
      ArrayRef<ParsedGenericParameterSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedGenericParameterListSyntax makeGenericParameterList(
      ArrayRef<ParsedGenericParameterSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedGenericParameterListSyntax makeBlankGenericParameterList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedGenericParameterSyntax recordGenericParameter(Optional<ParsedAttributeListSyntax> Attributes, ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> Colon, Optional<ParsedTypeSyntax> InheritedType, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedGenericParameterSyntax deferGenericParameter(Optional<ParsedAttributeListSyntax> Attributes, ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> Colon, Optional<ParsedTypeSyntax> InheritedType, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedGenericParameterSyntax makeGenericParameter(Optional<ParsedAttributeListSyntax> Attributes, ParsedTokenSyntax Name, Optional<ParsedTokenSyntax> Colon, Optional<ParsedTypeSyntax> InheritedType, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedGenericParameterClauseSyntax recordGenericParameterClause(ParsedTokenSyntax LeftAngleBracket, ParsedGenericParameterListSyntax GenericParameterList, ParsedTokenSyntax RightAngleBracket,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedGenericParameterClauseSyntax deferGenericParameterClause(ParsedTokenSyntax LeftAngleBracket, ParsedGenericParameterListSyntax GenericParameterList, ParsedTokenSyntax RightAngleBracket,
                                              SyntaxParsingContext &SPCtx);
  static ParsedGenericParameterClauseSyntax makeGenericParameterClause(ParsedTokenSyntax LeftAngleBracket, ParsedGenericParameterListSyntax GenericParameterList, ParsedTokenSyntax RightAngleBracket,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedConformanceRequirementSyntax recordConformanceRequirement(ParsedTypeSyntax LeftTypeIdentifier, ParsedTokenSyntax Colon, ParsedTypeSyntax RightTypeIdentifier, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedConformanceRequirementSyntax deferConformanceRequirement(ParsedTypeSyntax LeftTypeIdentifier, ParsedTokenSyntax Colon, ParsedTypeSyntax RightTypeIdentifier, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedConformanceRequirementSyntax makeConformanceRequirement(ParsedTypeSyntax LeftTypeIdentifier, ParsedTokenSyntax Colon, ParsedTypeSyntax RightTypeIdentifier, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSimpleTypeIdentifierSyntax recordSimpleTypeIdentifier(ParsedTokenSyntax Name, Optional<ParsedGenericArgumentClauseSyntax> GenericArgumentClause,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSimpleTypeIdentifierSyntax deferSimpleTypeIdentifier(ParsedTokenSyntax Name, Optional<ParsedGenericArgumentClauseSyntax> GenericArgumentClause,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSimpleTypeIdentifierSyntax makeSimpleTypeIdentifier(ParsedTokenSyntax Name, Optional<ParsedGenericArgumentClauseSyntax> GenericArgumentClause,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedMemberTypeIdentifierSyntax recordMemberTypeIdentifier(ParsedTypeSyntax BaseType, ParsedTokenSyntax Period, ParsedTokenSyntax Name, Optional<ParsedGenericArgumentClauseSyntax> GenericArgumentClause,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedMemberTypeIdentifierSyntax deferMemberTypeIdentifier(ParsedTypeSyntax BaseType, ParsedTokenSyntax Period, ParsedTokenSyntax Name, Optional<ParsedGenericArgumentClauseSyntax> GenericArgumentClause,
                                              SyntaxParsingContext &SPCtx);
  static ParsedMemberTypeIdentifierSyntax makeMemberTypeIdentifier(ParsedTypeSyntax BaseType, ParsedTokenSyntax Period, ParsedTokenSyntax Name, Optional<ParsedGenericArgumentClauseSyntax> GenericArgumentClause,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedClassRestrictionTypeSyntax recordClassRestrictionType(ParsedTokenSyntax ClassKeyword,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedClassRestrictionTypeSyntax deferClassRestrictionType(ParsedTokenSyntax ClassKeyword,
                                              SyntaxParsingContext &SPCtx);
  static ParsedClassRestrictionTypeSyntax makeClassRestrictionType(ParsedTokenSyntax ClassKeyword,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedArrayTypeSyntax recordArrayType(ParsedTokenSyntax LeftSquareBracket, ParsedTypeSyntax ElementType, ParsedTokenSyntax RightSquareBracket,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedArrayTypeSyntax deferArrayType(ParsedTokenSyntax LeftSquareBracket, ParsedTypeSyntax ElementType, ParsedTokenSyntax RightSquareBracket,
                                              SyntaxParsingContext &SPCtx);
  static ParsedArrayTypeSyntax makeArrayType(ParsedTokenSyntax LeftSquareBracket, ParsedTypeSyntax ElementType, ParsedTokenSyntax RightSquareBracket,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedDictionaryTypeSyntax recordDictionaryType(ParsedTokenSyntax LeftSquareBracket, ParsedTypeSyntax KeyType, ParsedTokenSyntax Colon, ParsedTypeSyntax ValueType, ParsedTokenSyntax RightSquareBracket,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedDictionaryTypeSyntax deferDictionaryType(ParsedTokenSyntax LeftSquareBracket, ParsedTypeSyntax KeyType, ParsedTokenSyntax Colon, ParsedTypeSyntax ValueType, ParsedTokenSyntax RightSquareBracket,
                                              SyntaxParsingContext &SPCtx);
  static ParsedDictionaryTypeSyntax makeDictionaryType(ParsedTokenSyntax LeftSquareBracket, ParsedTypeSyntax KeyType, ParsedTokenSyntax Colon, ParsedTypeSyntax ValueType, ParsedTokenSyntax RightSquareBracket,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedMetatypeTypeSyntax recordMetatypeType(ParsedTypeSyntax BaseType, ParsedTokenSyntax Period, ParsedTokenSyntax TypeOrProtocol,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedMetatypeTypeSyntax deferMetatypeType(ParsedTypeSyntax BaseType, ParsedTokenSyntax Period, ParsedTokenSyntax TypeOrProtocol,
                                              SyntaxParsingContext &SPCtx);
  static ParsedMetatypeTypeSyntax makeMetatypeType(ParsedTypeSyntax BaseType, ParsedTokenSyntax Period, ParsedTokenSyntax TypeOrProtocol,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedOptionalTypeSyntax recordOptionalType(ParsedTypeSyntax WrappedType, ParsedTokenSyntax QuestionMark,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedOptionalTypeSyntax deferOptionalType(ParsedTypeSyntax WrappedType, ParsedTokenSyntax QuestionMark,
                                              SyntaxParsingContext &SPCtx);
  static ParsedOptionalTypeSyntax makeOptionalType(ParsedTypeSyntax WrappedType, ParsedTokenSyntax QuestionMark,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedSomeTypeSyntax recordSomeType(ParsedTokenSyntax SomeSpecifier, ParsedTypeSyntax BaseType,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedSomeTypeSyntax deferSomeType(ParsedTokenSyntax SomeSpecifier, ParsedTypeSyntax BaseType,
                                              SyntaxParsingContext &SPCtx);
  static ParsedSomeTypeSyntax makeSomeType(ParsedTokenSyntax SomeSpecifier, ParsedTypeSyntax BaseType,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedImplicitlyUnwrappedOptionalTypeSyntax recordImplicitlyUnwrappedOptionalType(ParsedTypeSyntax WrappedType, ParsedTokenSyntax ExclamationMark,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedImplicitlyUnwrappedOptionalTypeSyntax deferImplicitlyUnwrappedOptionalType(ParsedTypeSyntax WrappedType, ParsedTokenSyntax ExclamationMark,
                                              SyntaxParsingContext &SPCtx);
  static ParsedImplicitlyUnwrappedOptionalTypeSyntax makeImplicitlyUnwrappedOptionalType(ParsedTypeSyntax WrappedType, ParsedTokenSyntax ExclamationMark,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedCompositionTypeElementSyntax recordCompositionTypeElement(ParsedTypeSyntax Type, Optional<ParsedTokenSyntax> Ampersand,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedCompositionTypeElementSyntax deferCompositionTypeElement(ParsedTypeSyntax Type, Optional<ParsedTokenSyntax> Ampersand,
                                              SyntaxParsingContext &SPCtx);
  static ParsedCompositionTypeElementSyntax makeCompositionTypeElement(ParsedTypeSyntax Type, Optional<ParsedTokenSyntax> Ampersand,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedCompositionTypeElementListSyntax recordCompositionTypeElementList(
      ArrayRef<ParsedCompositionTypeElementSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedCompositionTypeElementListSyntax deferCompositionTypeElementList(
      ArrayRef<ParsedCompositionTypeElementSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedCompositionTypeElementListSyntax makeCompositionTypeElementList(
      ArrayRef<ParsedCompositionTypeElementSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedCompositionTypeElementListSyntax makeBlankCompositionTypeElementList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedCompositionTypeSyntax recordCompositionType(ParsedCompositionTypeElementListSyntax Elements,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedCompositionTypeSyntax deferCompositionType(ParsedCompositionTypeElementListSyntax Elements,
                                              SyntaxParsingContext &SPCtx);
  static ParsedCompositionTypeSyntax makeCompositionType(ParsedCompositionTypeElementListSyntax Elements,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTupleTypeElementSyntax recordTupleTypeElement(Optional<ParsedTokenSyntax> InOut, Optional<ParsedTokenSyntax> Name, Optional<ParsedTokenSyntax> SecondName, Optional<ParsedTokenSyntax> Colon, ParsedTypeSyntax Type, Optional<ParsedTokenSyntax> Ellipsis, Optional<ParsedInitializerClauseSyntax> Initializer, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTupleTypeElementSyntax deferTupleTypeElement(Optional<ParsedTokenSyntax> InOut, Optional<ParsedTokenSyntax> Name, Optional<ParsedTokenSyntax> SecondName, Optional<ParsedTokenSyntax> Colon, ParsedTypeSyntax Type, Optional<ParsedTokenSyntax> Ellipsis, Optional<ParsedInitializerClauseSyntax> Initializer, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTupleTypeElementSyntax makeTupleTypeElement(Optional<ParsedTokenSyntax> InOut, Optional<ParsedTokenSyntax> Name, Optional<ParsedTokenSyntax> SecondName, Optional<ParsedTokenSyntax> Colon, ParsedTypeSyntax Type, Optional<ParsedTokenSyntax> Ellipsis, Optional<ParsedInitializerClauseSyntax> Initializer, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTupleTypeElementListSyntax recordTupleTypeElementList(
      ArrayRef<ParsedTupleTypeElementSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedTupleTypeElementListSyntax deferTupleTypeElementList(
      ArrayRef<ParsedTupleTypeElementSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedTupleTypeElementListSyntax makeTupleTypeElementList(
      ArrayRef<ParsedTupleTypeElementSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedTupleTypeElementListSyntax makeBlankTupleTypeElementList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTupleTypeSyntax recordTupleType(ParsedTokenSyntax LeftParen, ParsedTupleTypeElementListSyntax Elements, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTupleTypeSyntax deferTupleType(ParsedTokenSyntax LeftParen, ParsedTupleTypeElementListSyntax Elements, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTupleTypeSyntax makeTupleType(ParsedTokenSyntax LeftParen, ParsedTupleTypeElementListSyntax Elements, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedFunctionTypeSyntax recordFunctionType(ParsedTokenSyntax LeftParen, ParsedTupleTypeElementListSyntax Arguments, ParsedTokenSyntax RightParen, Optional<ParsedTokenSyntax> ThrowsOrRethrowsKeyword, ParsedTokenSyntax Arrow, ParsedTypeSyntax ReturnType,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedFunctionTypeSyntax deferFunctionType(ParsedTokenSyntax LeftParen, ParsedTupleTypeElementListSyntax Arguments, ParsedTokenSyntax RightParen, Optional<ParsedTokenSyntax> ThrowsOrRethrowsKeyword, ParsedTokenSyntax Arrow, ParsedTypeSyntax ReturnType,
                                              SyntaxParsingContext &SPCtx);
  static ParsedFunctionTypeSyntax makeFunctionType(ParsedTokenSyntax LeftParen, ParsedTupleTypeElementListSyntax Arguments, ParsedTokenSyntax RightParen, Optional<ParsedTokenSyntax> ThrowsOrRethrowsKeyword, ParsedTokenSyntax Arrow, ParsedTypeSyntax ReturnType,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAttributedTypeSyntax recordAttributedType(Optional<ParsedTokenSyntax> Specifier, Optional<ParsedAttributeListSyntax> Attributes, ParsedTypeSyntax BaseType,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAttributedTypeSyntax deferAttributedType(Optional<ParsedTokenSyntax> Specifier, Optional<ParsedAttributeListSyntax> Attributes, ParsedTypeSyntax BaseType,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAttributedTypeSyntax makeAttributedType(Optional<ParsedTokenSyntax> Specifier, Optional<ParsedAttributeListSyntax> Attributes, ParsedTypeSyntax BaseType,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedGenericArgumentListSyntax recordGenericArgumentList(
      ArrayRef<ParsedGenericArgumentSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedGenericArgumentListSyntax deferGenericArgumentList(
      ArrayRef<ParsedGenericArgumentSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedGenericArgumentListSyntax makeGenericArgumentList(
      ArrayRef<ParsedGenericArgumentSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedGenericArgumentListSyntax makeBlankGenericArgumentList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedGenericArgumentSyntax recordGenericArgument(ParsedTypeSyntax ArgumentType, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedGenericArgumentSyntax deferGenericArgument(ParsedTypeSyntax ArgumentType, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedGenericArgumentSyntax makeGenericArgument(ParsedTypeSyntax ArgumentType, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedGenericArgumentClauseSyntax recordGenericArgumentClause(ParsedTokenSyntax LeftAngleBracket, ParsedGenericArgumentListSyntax Arguments, ParsedTokenSyntax RightAngleBracket,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedGenericArgumentClauseSyntax deferGenericArgumentClause(ParsedTokenSyntax LeftAngleBracket, ParsedGenericArgumentListSyntax Arguments, ParsedTokenSyntax RightAngleBracket,
                                              SyntaxParsingContext &SPCtx);
  static ParsedGenericArgumentClauseSyntax makeGenericArgumentClause(ParsedTokenSyntax LeftAngleBracket, ParsedGenericArgumentListSyntax Arguments, ParsedTokenSyntax RightAngleBracket,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTypeAnnotationSyntax recordTypeAnnotation(ParsedTokenSyntax Colon, ParsedTypeSyntax Type,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTypeAnnotationSyntax deferTypeAnnotation(ParsedTokenSyntax Colon, ParsedTypeSyntax Type,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTypeAnnotationSyntax makeTypeAnnotation(ParsedTokenSyntax Colon, ParsedTypeSyntax Type,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedEnumCasePatternSyntax recordEnumCasePattern(Optional<ParsedTypeSyntax> Type, ParsedTokenSyntax Period, ParsedTokenSyntax CaseName, Optional<ParsedTuplePatternSyntax> AssociatedTuple,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedEnumCasePatternSyntax deferEnumCasePattern(Optional<ParsedTypeSyntax> Type, ParsedTokenSyntax Period, ParsedTokenSyntax CaseName, Optional<ParsedTuplePatternSyntax> AssociatedTuple,
                                              SyntaxParsingContext &SPCtx);
  static ParsedEnumCasePatternSyntax makeEnumCasePattern(Optional<ParsedTypeSyntax> Type, ParsedTokenSyntax Period, ParsedTokenSyntax CaseName, Optional<ParsedTuplePatternSyntax> AssociatedTuple,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedIsTypePatternSyntax recordIsTypePattern(ParsedTokenSyntax IsKeyword, ParsedTypeSyntax Type,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedIsTypePatternSyntax deferIsTypePattern(ParsedTokenSyntax IsKeyword, ParsedTypeSyntax Type,
                                              SyntaxParsingContext &SPCtx);
  static ParsedIsTypePatternSyntax makeIsTypePattern(ParsedTokenSyntax IsKeyword, ParsedTypeSyntax Type,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedOptionalPatternSyntax recordOptionalPattern(ParsedPatternSyntax SubPattern, ParsedTokenSyntax QuestionMark,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedOptionalPatternSyntax deferOptionalPattern(ParsedPatternSyntax SubPattern, ParsedTokenSyntax QuestionMark,
                                              SyntaxParsingContext &SPCtx);
  static ParsedOptionalPatternSyntax makeOptionalPattern(ParsedPatternSyntax SubPattern, ParsedTokenSyntax QuestionMark,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedIdentifierPatternSyntax recordIdentifierPattern(ParsedTokenSyntax Identifier,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedIdentifierPatternSyntax deferIdentifierPattern(ParsedTokenSyntax Identifier,
                                              SyntaxParsingContext &SPCtx);
  static ParsedIdentifierPatternSyntax makeIdentifierPattern(ParsedTokenSyntax Identifier,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAsTypePatternSyntax recordAsTypePattern(ParsedPatternSyntax Pattern, ParsedTokenSyntax AsKeyword, ParsedTypeSyntax Type,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAsTypePatternSyntax deferAsTypePattern(ParsedPatternSyntax Pattern, ParsedTokenSyntax AsKeyword, ParsedTypeSyntax Type,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAsTypePatternSyntax makeAsTypePattern(ParsedPatternSyntax Pattern, ParsedTokenSyntax AsKeyword, ParsedTypeSyntax Type,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTuplePatternSyntax recordTuplePattern(ParsedTokenSyntax LeftParen, ParsedTuplePatternElementListSyntax Elements, ParsedTokenSyntax RightParen,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTuplePatternSyntax deferTuplePattern(ParsedTokenSyntax LeftParen, ParsedTuplePatternElementListSyntax Elements, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTuplePatternSyntax makeTuplePattern(ParsedTokenSyntax LeftParen, ParsedTuplePatternElementListSyntax Elements, ParsedTokenSyntax RightParen,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedWildcardPatternSyntax recordWildcardPattern(ParsedTokenSyntax Wildcard, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedWildcardPatternSyntax deferWildcardPattern(ParsedTokenSyntax Wildcard, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation,
                                              SyntaxParsingContext &SPCtx);
  static ParsedWildcardPatternSyntax makeWildcardPattern(ParsedTokenSyntax Wildcard, Optional<ParsedTypeAnnotationSyntax> TypeAnnotation,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTuplePatternElementSyntax recordTuplePatternElement(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedPatternSyntax Pattern, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedTuplePatternElementSyntax deferTuplePatternElement(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedPatternSyntax Pattern, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedTuplePatternElementSyntax makeTuplePatternElement(Optional<ParsedTokenSyntax> LabelName, Optional<ParsedTokenSyntax> LabelColon, ParsedPatternSyntax Pattern, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedExpressionPatternSyntax recordExpressionPattern(ParsedExprSyntax Expression,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedExpressionPatternSyntax deferExpressionPattern(ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
  static ParsedExpressionPatternSyntax makeExpressionPattern(ParsedExprSyntax Expression,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedTuplePatternElementListSyntax recordTuplePatternElementList(
      ArrayRef<ParsedTuplePatternElementSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedTuplePatternElementListSyntax deferTuplePatternElementList(
      ArrayRef<ParsedTuplePatternElementSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedTuplePatternElementListSyntax makeTuplePatternElementList(
      ArrayRef<ParsedTuplePatternElementSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedTuplePatternElementListSyntax makeBlankTuplePatternElementList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedValueBindingPatternSyntax recordValueBindingPattern(ParsedTokenSyntax LetOrVarKeyword, ParsedPatternSyntax ValuePattern,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedValueBindingPatternSyntax deferValueBindingPattern(ParsedTokenSyntax LetOrVarKeyword, ParsedPatternSyntax ValuePattern,
                                              SyntaxParsingContext &SPCtx);
  static ParsedValueBindingPatternSyntax makeValueBindingPattern(ParsedTokenSyntax LetOrVarKeyword, ParsedPatternSyntax ValuePattern,
                                              SyntaxParsingContext &SPCtx);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAvailabilitySpecListSyntax recordAvailabilitySpecList(
      ArrayRef<ParsedAvailabilityArgumentSyntax> elts,
      ParsedRawSyntaxRecorder &rec);

public:
  static ParsedAvailabilitySpecListSyntax deferAvailabilitySpecList(
      ArrayRef<ParsedAvailabilityArgumentSyntax> elts,
      SyntaxParsingContext &SPCtx);
  static ParsedAvailabilitySpecListSyntax makeAvailabilitySpecList(
      ArrayRef<ParsedAvailabilityArgumentSyntax> elts,
      SyntaxParsingContext &SPCtx);

  static ParsedAvailabilitySpecListSyntax makeBlankAvailabilitySpecList(SourceLoc loc,
      SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAvailabilityArgumentSyntax recordAvailabilityArgument(ParsedSyntax Entry, Optional<ParsedTokenSyntax> TrailingComma,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAvailabilityArgumentSyntax deferAvailabilityArgument(ParsedSyntax Entry, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAvailabilityArgumentSyntax makeAvailabilityArgument(ParsedSyntax Entry, Optional<ParsedTokenSyntax> TrailingComma,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAvailabilityLabeledArgumentSyntax recordAvailabilityLabeledArgument(ParsedTokenSyntax Label, ParsedTokenSyntax Colon, ParsedSyntax Value,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAvailabilityLabeledArgumentSyntax deferAvailabilityLabeledArgument(ParsedTokenSyntax Label, ParsedTokenSyntax Colon, ParsedSyntax Value,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAvailabilityLabeledArgumentSyntax makeAvailabilityLabeledArgument(ParsedTokenSyntax Label, ParsedTokenSyntax Colon, ParsedSyntax Value,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedAvailabilityVersionRestrictionSyntax recordAvailabilityVersionRestriction(ParsedTokenSyntax Platform, ParsedVersionTupleSyntax Version,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedAvailabilityVersionRestrictionSyntax deferAvailabilityVersionRestriction(ParsedTokenSyntax Platform, ParsedVersionTupleSyntax Version,
                                              SyntaxParsingContext &SPCtx);
  static ParsedAvailabilityVersionRestrictionSyntax makeAvailabilityVersionRestriction(ParsedTokenSyntax Platform, ParsedVersionTupleSyntax Version,
                                              SyntaxParsingContext &SPCtx);
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"
private:
  static ParsedVersionTupleSyntax recordVersionTuple(ParsedSyntax MajorMinor, Optional<ParsedTokenSyntax> PatchPeriod, Optional<ParsedTokenSyntax> PatchVersion,
                                              ParsedRawSyntaxRecorder &rec);
public:
  static ParsedVersionTupleSyntax deferVersionTuple(ParsedSyntax MajorMinor, Optional<ParsedTokenSyntax> PatchPeriod, Optional<ParsedTokenSyntax> PatchVersion,
                                              SyntaxParsingContext &SPCtx);
  static ParsedVersionTupleSyntax makeVersionTuple(ParsedSyntax MajorMinor, Optional<ParsedTokenSyntax> PatchPeriod, Optional<ParsedTokenSyntax> PatchVersion,
                                              SyntaxParsingContext &SPCtx);
#line 85 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxRecorder.h.gyb"

#pragma mark - Convenience APIs

public:
  static ParsedTokenSyntax makeToken(const Token &Tok,
                                     const ParsedTrivia &LeadingTrivia,
                                     const ParsedTrivia &TrailingTrivia,
                                     SyntaxParsingContext &SPCtx);

  /// Records an unlabelled TupleTypeElementSyntax with the provided type and
  /// optional trailing comma.
  static ParsedTupleTypeElementSyntax
  makeTupleTypeElement(ParsedTypeSyntax Type,
                         Optional<ParsedTokenSyntax> TrailingComma,
                         SyntaxParsingContext &SPCtx);

  /// The provided \c elements are in the appropriate order for the syntax
  /// \c kind's layout but optional elements are not be included.
  /// This function will form the exact layout based on the provided elements,
  /// substituting missing parts with a null ParsedRawSyntaxNode object.
  ///
  /// \returns true if the layout could be formed, false otherwise.
  static bool formExactLayoutFor(syntax::SyntaxKind kind,
                                 ArrayRef<ParsedRawSyntaxNode> elements,
         function_ref<void(syntax::SyntaxKind, ArrayRef<ParsedRawSyntaxNode>)> receiver);
};
}

#endif // SWIFT_PARSE_PARSEDSYNTAXRECORDER_H
