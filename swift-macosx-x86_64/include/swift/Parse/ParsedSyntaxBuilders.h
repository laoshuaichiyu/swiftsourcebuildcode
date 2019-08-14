#line 7 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
//// Automatically Generated From ParsedSyntaxBuilders.h.gyb.
//// Do Not Edit Directly!
//===------------- ParsedSyntaxBuilders.h - Parsed Syntax Building --------===//
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

#ifndef SWIFT_PARSE_PARSEDSYNTAXBUILDERS_H
#define SWIFT_PARSE_PARSEDSYNTAXBUILDERS_H

#include "swift/Parse/ParsedRawSyntaxNode.h"
#include "swift/Parse/ParsedSyntaxNodes.h"
#include "swift/Parse/SyntaxParsingContext.h"

namespace swift {

class ParsedRawSyntaxRecorder;
class SyntaxParsingContext;

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedCodeBlockItemSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedCodeBlockItemSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCodeBlockItemSyntaxBuilder &useItem(ParsedSyntax Item);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCodeBlockItemSyntaxBuilder &useSemicolon(ParsedTokenSyntax Semicolon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCodeBlockItemSyntaxBuilder &useErrorTokens(ParsedSyntax ErrorTokens);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedCodeBlockItemSyntax build();
  ParsedCodeBlockItemSyntax makeDeferred();

private:
  ParsedCodeBlockItemSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedCodeBlockSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> StatementsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedCodeBlockSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCodeBlockSyntaxBuilder &useLeftBrace(ParsedTokenSyntax LeftBrace);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCodeBlockSyntaxBuilder &useStatements(ParsedCodeBlockItemListSyntax Statements);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCodeBlockSyntaxBuilder &addStatementsMember(ParsedCodeBlockItemSyntax CodeBlockItem);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCodeBlockSyntaxBuilder &useRightBrace(ParsedTokenSyntax RightBrace);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedCodeBlockSyntax build();
  ParsedCodeBlockSyntax makeDeferred();

private:
  ParsedCodeBlockSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedInOutExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedInOutExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInOutExprSyntaxBuilder &useAmpersand(ParsedTokenSyntax Ampersand);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInOutExprSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedInOutExprSyntax build();
  ParsedInOutExprSyntax makeDeferred();

private:
  ParsedInOutExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPoundColumnExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPoundColumnExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundColumnExprSyntaxBuilder &usePoundColumn(ParsedTokenSyntax PoundColumn);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPoundColumnExprSyntax build();
  ParsedPoundColumnExprSyntax makeDeferred();

private:
  ParsedPoundColumnExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTryExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTryExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTryExprSyntaxBuilder &useTryKeyword(ParsedTokenSyntax TryKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTryExprSyntaxBuilder &useQuestionOrExclamationMark(ParsedTokenSyntax QuestionOrExclamationMark);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTryExprSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTryExprSyntax build();
  ParsedTryExprSyntax makeDeferred();

private:
  ParsedTryExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDeclNameArgumentSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDeclNameArgumentSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclNameArgumentSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclNameArgumentSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDeclNameArgumentSyntax build();
  ParsedDeclNameArgumentSyntax makeDeferred();

private:
  ParsedDeclNameArgumentSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDeclNameArgumentsSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ArgumentsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDeclNameArgumentsSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclNameArgumentsSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclNameArgumentsSyntaxBuilder &useArguments(ParsedDeclNameArgumentListSyntax Arguments);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclNameArgumentsSyntaxBuilder &addArgumentsMember(ParsedDeclNameArgumentSyntax DeclNameArgument);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclNameArgumentsSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDeclNameArgumentsSyntax build();
  ParsedDeclNameArgumentsSyntax makeDeferred();

private:
  ParsedDeclNameArgumentsSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedIdentifierExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedIdentifierExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIdentifierExprSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIdentifierExprSyntaxBuilder &useDeclNameArguments(ParsedDeclNameArgumentsSyntax DeclNameArguments);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedIdentifierExprSyntax build();
  ParsedIdentifierExprSyntax makeDeferred();

private:
  ParsedIdentifierExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSuperRefExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSuperRefExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSuperRefExprSyntaxBuilder &useSuperKeyword(ParsedTokenSyntax SuperKeyword);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSuperRefExprSyntax build();
  ParsedSuperRefExprSyntax makeDeferred();

private:
  ParsedSuperRefExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedNilLiteralExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedNilLiteralExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedNilLiteralExprSyntaxBuilder &useNilKeyword(ParsedTokenSyntax NilKeyword);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedNilLiteralExprSyntax build();
  ParsedNilLiteralExprSyntax makeDeferred();

private:
  ParsedNilLiteralExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDiscardAssignmentExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDiscardAssignmentExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDiscardAssignmentExprSyntaxBuilder &useWildcard(ParsedTokenSyntax Wildcard);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDiscardAssignmentExprSyntax build();
  ParsedDiscardAssignmentExprSyntax makeDeferred();

private:
  ParsedDiscardAssignmentExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAssignmentExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAssignmentExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAssignmentExprSyntaxBuilder &useAssignToken(ParsedTokenSyntax AssignToken);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAssignmentExprSyntax build();
  ParsedAssignmentExprSyntax makeDeferred();

private:
  ParsedAssignmentExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSequenceExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ElementsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSequenceExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSequenceExprSyntaxBuilder &useElements(ParsedExprListSyntax Elements);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSequenceExprSyntaxBuilder &addElementsMember(ParsedExprSyntax Expression);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSequenceExprSyntax build();
  ParsedSequenceExprSyntax makeDeferred();

private:
  ParsedSequenceExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPoundLineExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPoundLineExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundLineExprSyntaxBuilder &usePoundLine(ParsedTokenSyntax PoundLine);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPoundLineExprSyntax build();
  ParsedPoundLineExprSyntax makeDeferred();

private:
  ParsedPoundLineExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPoundFileExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPoundFileExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundFileExprSyntaxBuilder &usePoundFile(ParsedTokenSyntax PoundFile);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPoundFileExprSyntax build();
  ParsedPoundFileExprSyntax makeDeferred();

private:
  ParsedPoundFileExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPoundFunctionExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPoundFunctionExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundFunctionExprSyntaxBuilder &usePoundFunction(ParsedTokenSyntax PoundFunction);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPoundFunctionExprSyntax build();
  ParsedPoundFunctionExprSyntax makeDeferred();

private:
  ParsedPoundFunctionExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPoundDsohandleExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPoundDsohandleExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundDsohandleExprSyntaxBuilder &usePoundDsohandle(ParsedTokenSyntax PoundDsohandle);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPoundDsohandleExprSyntax build();
  ParsedPoundDsohandleExprSyntax makeDeferred();

private:
  ParsedPoundDsohandleExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSymbolicReferenceExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSymbolicReferenceExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSymbolicReferenceExprSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSymbolicReferenceExprSyntaxBuilder &useGenericArgumentClause(ParsedGenericArgumentClauseSyntax GenericArgumentClause);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSymbolicReferenceExprSyntax build();
  ParsedSymbolicReferenceExprSyntax makeDeferred();

private:
  ParsedSymbolicReferenceExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPrefixOperatorExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPrefixOperatorExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrefixOperatorExprSyntaxBuilder &useOperatorToken(ParsedTokenSyntax OperatorToken);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrefixOperatorExprSyntaxBuilder &usePostfixExpression(ParsedExprSyntax PostfixExpression);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPrefixOperatorExprSyntax build();
  ParsedPrefixOperatorExprSyntax makeDeferred();

private:
  ParsedPrefixOperatorExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedBinaryOperatorExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedBinaryOperatorExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedBinaryOperatorExprSyntaxBuilder &useOperatorToken(ParsedTokenSyntax OperatorToken);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedBinaryOperatorExprSyntax build();
  ParsedBinaryOperatorExprSyntax makeDeferred();

private:
  ParsedBinaryOperatorExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedArrowExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedArrowExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedArrowExprSyntaxBuilder &useThrowsToken(ParsedTokenSyntax ThrowsToken);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedArrowExprSyntaxBuilder &useArrowToken(ParsedTokenSyntax ArrowToken);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedArrowExprSyntax build();
  ParsedArrowExprSyntax makeDeferred();

private:
  ParsedArrowExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedFloatLiteralExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedFloatLiteralExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFloatLiteralExprSyntaxBuilder &useFloatingDigits(ParsedTokenSyntax FloatingDigits);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedFloatLiteralExprSyntax build();
  ParsedFloatLiteralExprSyntax makeDeferred();

private:
  ParsedFloatLiteralExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTupleExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ElementListMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTupleExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleExprSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleExprSyntaxBuilder &useElementList(ParsedTupleElementListSyntax ElementList);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleExprSyntaxBuilder &addElementListMember(ParsedTupleElementSyntax TupleElement);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleExprSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTupleExprSyntax build();
  ParsedTupleExprSyntax makeDeferred();

private:
  ParsedTupleExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedArrayExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ElementsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedArrayExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedArrayExprSyntaxBuilder &useLeftSquare(ParsedTokenSyntax LeftSquare);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedArrayExprSyntaxBuilder &useElements(ParsedArrayElementListSyntax Elements);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedArrayExprSyntaxBuilder &addElementsMember(ParsedArrayElementSyntax ArrayElement);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedArrayExprSyntaxBuilder &useRightSquare(ParsedTokenSyntax RightSquare);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedArrayExprSyntax build();
  ParsedArrayExprSyntax makeDeferred();

private:
  ParsedArrayExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDictionaryExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDictionaryExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryExprSyntaxBuilder &useLeftSquare(ParsedTokenSyntax LeftSquare);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryExprSyntaxBuilder &useContent(ParsedSyntax Content);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryExprSyntaxBuilder &useRightSquare(ParsedTokenSyntax RightSquare);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDictionaryExprSyntax build();
  ParsedDictionaryExprSyntax makeDeferred();

private:
  ParsedDictionaryExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedFunctionCallArgumentSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedFunctionCallArgumentSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionCallArgumentSyntaxBuilder &useLabel(ParsedTokenSyntax Label);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionCallArgumentSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionCallArgumentSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionCallArgumentSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedFunctionCallArgumentSyntax build();
  ParsedFunctionCallArgumentSyntax makeDeferred();

private:
  ParsedFunctionCallArgumentSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTupleElementSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTupleElementSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleElementSyntaxBuilder &useLabel(ParsedTokenSyntax Label);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleElementSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleElementSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleElementSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTupleElementSyntax build();
  ParsedTupleElementSyntax makeDeferred();

private:
  ParsedTupleElementSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedArrayElementSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedArrayElementSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedArrayElementSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedArrayElementSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedArrayElementSyntax build();
  ParsedArrayElementSyntax makeDeferred();

private:
  ParsedArrayElementSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDictionaryElementSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDictionaryElementSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryElementSyntaxBuilder &useKeyExpression(ParsedExprSyntax KeyExpression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryElementSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryElementSyntaxBuilder &useValueExpression(ParsedExprSyntax ValueExpression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryElementSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDictionaryElementSyntax build();
  ParsedDictionaryElementSyntax makeDeferred();

private:
  ParsedDictionaryElementSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedIntegerLiteralExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedIntegerLiteralExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIntegerLiteralExprSyntaxBuilder &useDigits(ParsedTokenSyntax Digits);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedIntegerLiteralExprSyntax build();
  ParsedIntegerLiteralExprSyntax makeDeferred();

private:
  ParsedIntegerLiteralExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedBooleanLiteralExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedBooleanLiteralExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedBooleanLiteralExprSyntaxBuilder &useBooleanLiteral(ParsedTokenSyntax BooleanLiteral);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedBooleanLiteralExprSyntax build();
  ParsedBooleanLiteralExprSyntax makeDeferred();

private:
  ParsedBooleanLiteralExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTernaryExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTernaryExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTernaryExprSyntaxBuilder &useConditionExpression(ParsedExprSyntax ConditionExpression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTernaryExprSyntaxBuilder &useQuestionMark(ParsedTokenSyntax QuestionMark);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTernaryExprSyntaxBuilder &useFirstChoice(ParsedExprSyntax FirstChoice);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTernaryExprSyntaxBuilder &useColonMark(ParsedTokenSyntax ColonMark);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTernaryExprSyntaxBuilder &useSecondChoice(ParsedExprSyntax SecondChoice);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTernaryExprSyntax build();
  ParsedTernaryExprSyntax makeDeferred();

private:
  ParsedTernaryExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedMemberAccessExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedMemberAccessExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberAccessExprSyntaxBuilder &useBase(ParsedExprSyntax Base);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberAccessExprSyntaxBuilder &useDot(ParsedTokenSyntax Dot);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberAccessExprSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberAccessExprSyntaxBuilder &useDeclNameArguments(ParsedDeclNameArgumentsSyntax DeclNameArguments);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedMemberAccessExprSyntax build();
  ParsedMemberAccessExprSyntax makeDeferred();

private:
  ParsedMemberAccessExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedIsExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedIsExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIsExprSyntaxBuilder &useIsTok(ParsedTokenSyntax IsTok);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIsExprSyntaxBuilder &useTypeName(ParsedTypeSyntax TypeName);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedIsExprSyntax build();
  ParsedIsExprSyntax makeDeferred();

private:
  ParsedIsExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAsExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAsExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAsExprSyntaxBuilder &useAsTok(ParsedTokenSyntax AsTok);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAsExprSyntaxBuilder &useQuestionOrExclamationMark(ParsedTokenSyntax QuestionOrExclamationMark);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAsExprSyntaxBuilder &useTypeName(ParsedTypeSyntax TypeName);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAsExprSyntax build();
  ParsedAsExprSyntax makeDeferred();

private:
  ParsedAsExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTypeExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTypeExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypeExprSyntaxBuilder &useType(ParsedTypeSyntax Type);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTypeExprSyntax build();
  ParsedTypeExprSyntax makeDeferred();

private:
  ParsedTypeExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedClosureCaptureItemSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> SpecifierMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedClosureCaptureItemSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureCaptureItemSyntaxBuilder &useSpecifier(ParsedTokenListSyntax Specifier);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureCaptureItemSyntaxBuilder &addSpecifierMember(ParsedTokenSyntax Token);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureCaptureItemSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureCaptureItemSyntaxBuilder &useAssignToken(ParsedTokenSyntax AssignToken);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureCaptureItemSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureCaptureItemSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedClosureCaptureItemSyntax build();
  ParsedClosureCaptureItemSyntax makeDeferred();

private:
  ParsedClosureCaptureItemSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedClosureCaptureSignatureSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ItemsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedClosureCaptureSignatureSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureCaptureSignatureSyntaxBuilder &useLeftSquare(ParsedTokenSyntax LeftSquare);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureCaptureSignatureSyntaxBuilder &useItems(ParsedClosureCaptureItemListSyntax Items);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureCaptureSignatureSyntaxBuilder &addItemsMember(ParsedClosureCaptureItemSyntax ClosureCaptureItem);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureCaptureSignatureSyntaxBuilder &useRightSquare(ParsedTokenSyntax RightSquare);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedClosureCaptureSignatureSyntax build();
  ParsedClosureCaptureSignatureSyntax makeDeferred();

private:
  ParsedClosureCaptureSignatureSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedClosureParamSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedClosureParamSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureParamSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureParamSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedClosureParamSyntax build();
  ParsedClosureParamSyntax makeDeferred();

private:
  ParsedClosureParamSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedClosureSignatureSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedClosureSignatureSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureSignatureSyntaxBuilder &useCapture(ParsedClosureCaptureSignatureSyntax Capture);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureSignatureSyntaxBuilder &useInput(ParsedSyntax Input);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureSignatureSyntaxBuilder &useThrowsTok(ParsedTokenSyntax ThrowsTok);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureSignatureSyntaxBuilder &useOutput(ParsedReturnClauseSyntax Output);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureSignatureSyntaxBuilder &useInTok(ParsedTokenSyntax InTok);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedClosureSignatureSyntax build();
  ParsedClosureSignatureSyntax makeDeferred();

private:
  ParsedClosureSignatureSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedClosureExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> StatementsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedClosureExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureExprSyntaxBuilder &useLeftBrace(ParsedTokenSyntax LeftBrace);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureExprSyntaxBuilder &useSignature(ParsedClosureSignatureSyntax Signature);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureExprSyntaxBuilder &useStatements(ParsedCodeBlockItemListSyntax Statements);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureExprSyntaxBuilder &addStatementsMember(ParsedCodeBlockItemSyntax CodeBlockItem);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClosureExprSyntaxBuilder &useRightBrace(ParsedTokenSyntax RightBrace);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedClosureExprSyntax build();
  ParsedClosureExprSyntax makeDeferred();

private:
  ParsedClosureExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedUnresolvedPatternExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedUnresolvedPatternExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedUnresolvedPatternExprSyntaxBuilder &usePattern(ParsedPatternSyntax Pattern);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedUnresolvedPatternExprSyntax build();
  ParsedUnresolvedPatternExprSyntax makeDeferred();

private:
  ParsedUnresolvedPatternExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedFunctionCallExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ArgumentListMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedFunctionCallExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionCallExprSyntaxBuilder &useCalledExpression(ParsedExprSyntax CalledExpression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionCallExprSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionCallExprSyntaxBuilder &useArgumentList(ParsedFunctionCallArgumentListSyntax ArgumentList);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionCallExprSyntaxBuilder &addArgumentListMember(ParsedFunctionCallArgumentSyntax FunctionCallArgument);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionCallExprSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionCallExprSyntaxBuilder &useTrailingClosure(ParsedClosureExprSyntax TrailingClosure);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedFunctionCallExprSyntax build();
  ParsedFunctionCallExprSyntax makeDeferred();

private:
  ParsedFunctionCallExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSubscriptExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ArgumentListMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSubscriptExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptExprSyntaxBuilder &useCalledExpression(ParsedExprSyntax CalledExpression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptExprSyntaxBuilder &useLeftBracket(ParsedTokenSyntax LeftBracket);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptExprSyntaxBuilder &useArgumentList(ParsedFunctionCallArgumentListSyntax ArgumentList);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptExprSyntaxBuilder &addArgumentListMember(ParsedFunctionCallArgumentSyntax FunctionCallArgument);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptExprSyntaxBuilder &useRightBracket(ParsedTokenSyntax RightBracket);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptExprSyntaxBuilder &useTrailingClosure(ParsedClosureExprSyntax TrailingClosure);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSubscriptExprSyntax build();
  ParsedSubscriptExprSyntax makeDeferred();

private:
  ParsedSubscriptExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedOptionalChainingExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedOptionalChainingExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOptionalChainingExprSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOptionalChainingExprSyntaxBuilder &useQuestionMark(ParsedTokenSyntax QuestionMark);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedOptionalChainingExprSyntax build();
  ParsedOptionalChainingExprSyntax makeDeferred();

private:
  ParsedOptionalChainingExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedForcedValueExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedForcedValueExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForcedValueExprSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForcedValueExprSyntaxBuilder &useExclamationMark(ParsedTokenSyntax ExclamationMark);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedForcedValueExprSyntax build();
  ParsedForcedValueExprSyntax makeDeferred();

private:
  ParsedForcedValueExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPostfixUnaryExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPostfixUnaryExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPostfixUnaryExprSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPostfixUnaryExprSyntaxBuilder &useOperatorToken(ParsedTokenSyntax OperatorToken);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPostfixUnaryExprSyntax build();
  ParsedPostfixUnaryExprSyntax makeDeferred();

private:
  ParsedPostfixUnaryExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSpecializeExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSpecializeExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSpecializeExprSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSpecializeExprSyntaxBuilder &useGenericArgumentClause(ParsedGenericArgumentClauseSyntax GenericArgumentClause);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSpecializeExprSyntax build();
  ParsedSpecializeExprSyntax makeDeferred();

private:
  ParsedSpecializeExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedStringSegmentSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedStringSegmentSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStringSegmentSyntaxBuilder &useContent(ParsedTokenSyntax Content);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedStringSegmentSyntax build();
  ParsedStringSegmentSyntax makeDeferred();

private:
  ParsedStringSegmentSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedExpressionSegmentSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ExpressionsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedExpressionSegmentSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExpressionSegmentSyntaxBuilder &useBackslash(ParsedTokenSyntax Backslash);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExpressionSegmentSyntaxBuilder &useDelimiter(ParsedTokenSyntax Delimiter);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExpressionSegmentSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExpressionSegmentSyntaxBuilder &useExpressions(ParsedFunctionCallArgumentListSyntax Expressions);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExpressionSegmentSyntaxBuilder &addExpressionsMember(ParsedFunctionCallArgumentSyntax FunctionCallArgument);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExpressionSegmentSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedExpressionSegmentSyntax build();
  ParsedExpressionSegmentSyntax makeDeferred();

private:
  ParsedExpressionSegmentSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedStringLiteralExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> SegmentsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedStringLiteralExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStringLiteralExprSyntaxBuilder &useOpenDelimiter(ParsedTokenSyntax OpenDelimiter);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStringLiteralExprSyntaxBuilder &useOpenQuote(ParsedTokenSyntax OpenQuote);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStringLiteralExprSyntaxBuilder &useSegments(ParsedStringLiteralSegmentsSyntax Segments);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStringLiteralExprSyntaxBuilder &addSegmentsMember(ParsedSyntax Segment);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStringLiteralExprSyntaxBuilder &useCloseQuote(ParsedTokenSyntax CloseQuote);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStringLiteralExprSyntaxBuilder &useCloseDelimiter(ParsedTokenSyntax CloseDelimiter);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedStringLiteralExprSyntax build();
  ParsedStringLiteralExprSyntax makeDeferred();

private:
  ParsedStringLiteralExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedKeyPathExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedKeyPathExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedKeyPathExprSyntaxBuilder &useBackslash(ParsedTokenSyntax Backslash);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedKeyPathExprSyntaxBuilder &useRootExpr(ParsedExprSyntax RootExpr);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedKeyPathExprSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedKeyPathExprSyntax build();
  ParsedKeyPathExprSyntax makeDeferred();

private:
  ParsedKeyPathExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedKeyPathBaseExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedKeyPathBaseExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedKeyPathBaseExprSyntaxBuilder &usePeriod(ParsedTokenSyntax Period);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedKeyPathBaseExprSyntax build();
  ParsedKeyPathBaseExprSyntax makeDeferred();

private:
  ParsedKeyPathBaseExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedObjcNamePieceSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedObjcNamePieceSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcNamePieceSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcNamePieceSyntaxBuilder &useDot(ParsedTokenSyntax Dot);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedObjcNamePieceSyntax build();
  ParsedObjcNamePieceSyntax makeDeferred();

private:
  ParsedObjcNamePieceSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedObjcKeyPathExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> NameMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedObjcKeyPathExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcKeyPathExprSyntaxBuilder &useKeyPath(ParsedTokenSyntax KeyPath);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcKeyPathExprSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcKeyPathExprSyntaxBuilder &useName(ParsedObjcNameSyntax Name);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcKeyPathExprSyntaxBuilder &addNameMember(ParsedObjcNamePieceSyntax ObjcNamePiece);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcKeyPathExprSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedObjcKeyPathExprSyntax build();
  ParsedObjcKeyPathExprSyntax makeDeferred();

private:
  ParsedObjcKeyPathExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedObjcSelectorExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[6];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedObjcSelectorExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcSelectorExprSyntaxBuilder &usePoundSelector(ParsedTokenSyntax PoundSelector);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcSelectorExprSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcSelectorExprSyntaxBuilder &useKind(ParsedTokenSyntax Kind);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcSelectorExprSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcSelectorExprSyntaxBuilder &useName(ParsedExprSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjcSelectorExprSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedObjcSelectorExprSyntax build();
  ParsedObjcSelectorExprSyntax makeDeferred();

private:
  ParsedObjcSelectorExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedEditorPlaceholderExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedEditorPlaceholderExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEditorPlaceholderExprSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedEditorPlaceholderExprSyntax build();
  ParsedEditorPlaceholderExprSyntax makeDeferred();

private:
  ParsedEditorPlaceholderExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedObjectLiteralExprSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ArgumentsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedObjectLiteralExprSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjectLiteralExprSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjectLiteralExprSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjectLiteralExprSyntaxBuilder &useArguments(ParsedFunctionCallArgumentListSyntax Arguments);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjectLiteralExprSyntaxBuilder &addArgumentsMember(ParsedFunctionCallArgumentSyntax FunctionCallArgument);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjectLiteralExprSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedObjectLiteralExprSyntax build();
  ParsedObjectLiteralExprSyntax makeDeferred();

private:
  ParsedObjectLiteralExprSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTypeInitializerClauseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTypeInitializerClauseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypeInitializerClauseSyntaxBuilder &useEqual(ParsedTokenSyntax Equal);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypeInitializerClauseSyntaxBuilder &useValue(ParsedTypeSyntax Value);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTypeInitializerClauseSyntax build();
  ParsedTypeInitializerClauseSyntax makeDeferred();

private:
  ParsedTypeInitializerClauseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTypealiasDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[7];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTypealiasDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypealiasDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypealiasDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypealiasDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypealiasDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypealiasDeclSyntaxBuilder &useTypealiasKeyword(ParsedTokenSyntax TypealiasKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypealiasDeclSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypealiasDeclSyntaxBuilder &useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypealiasDeclSyntaxBuilder &useInitializer(ParsedTypeInitializerClauseSyntax Initializer);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypealiasDeclSyntaxBuilder &useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTypealiasDeclSyntax build();
  ParsedTypealiasDeclSyntax makeDeferred();

private:
  ParsedTypealiasDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAssociatedtypeDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[7];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAssociatedtypeDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAssociatedtypeDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAssociatedtypeDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAssociatedtypeDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAssociatedtypeDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAssociatedtypeDeclSyntaxBuilder &useAssociatedtypeKeyword(ParsedTokenSyntax AssociatedtypeKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAssociatedtypeDeclSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAssociatedtypeDeclSyntaxBuilder &useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAssociatedtypeDeclSyntaxBuilder &useInitializer(ParsedTypeInitializerClauseSyntax Initializer);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAssociatedtypeDeclSyntaxBuilder &useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAssociatedtypeDeclSyntax build();
  ParsedAssociatedtypeDeclSyntax makeDeferred();

private:
  ParsedAssociatedtypeDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedParameterClauseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ParameterListMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedParameterClauseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedParameterClauseSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedParameterClauseSyntaxBuilder &useParameterList(ParsedFunctionParameterListSyntax ParameterList);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedParameterClauseSyntaxBuilder &addParameterListMember(ParsedFunctionParameterSyntax FunctionParameter);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedParameterClauseSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedParameterClauseSyntax build();
  ParsedParameterClauseSyntax makeDeferred();

private:
  ParsedParameterClauseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedReturnClauseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedReturnClauseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedReturnClauseSyntaxBuilder &useArrow(ParsedTokenSyntax Arrow);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedReturnClauseSyntaxBuilder &useReturnType(ParsedTypeSyntax ReturnType);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedReturnClauseSyntax build();
  ParsedReturnClauseSyntax makeDeferred();

private:
  ParsedReturnClauseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedFunctionSignatureSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedFunctionSignatureSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionSignatureSyntaxBuilder &useInput(ParsedParameterClauseSyntax Input);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionSignatureSyntaxBuilder &useThrowsOrRethrowsKeyword(ParsedTokenSyntax ThrowsOrRethrowsKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionSignatureSyntaxBuilder &useOutput(ParsedReturnClauseSyntax Output);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedFunctionSignatureSyntax build();
  ParsedFunctionSignatureSyntax makeDeferred();

private:
  ParsedFunctionSignatureSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedIfConfigClauseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedIfConfigClauseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfConfigClauseSyntaxBuilder &usePoundKeyword(ParsedTokenSyntax PoundKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfConfigClauseSyntaxBuilder &useCondition(ParsedExprSyntax Condition);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfConfigClauseSyntaxBuilder &useElements(ParsedSyntax Elements);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedIfConfigClauseSyntax build();
  ParsedIfConfigClauseSyntax makeDeferred();

private:
  ParsedIfConfigClauseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedIfConfigDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ClausesMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedIfConfigDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfConfigDeclSyntaxBuilder &useClauses(ParsedIfConfigClauseListSyntax Clauses);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfConfigDeclSyntaxBuilder &addClausesMember(ParsedIfConfigClauseSyntax IfConfigClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfConfigDeclSyntaxBuilder &usePoundEndif(ParsedTokenSyntax PoundEndif);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedIfConfigDeclSyntax build();
  ParsedIfConfigDeclSyntax makeDeferred();

private:
  ParsedIfConfigDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPoundErrorDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPoundErrorDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundErrorDeclSyntaxBuilder &usePoundError(ParsedTokenSyntax PoundError);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundErrorDeclSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundErrorDeclSyntaxBuilder &useMessage(ParsedStringLiteralExprSyntax Message);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundErrorDeclSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPoundErrorDeclSyntax build();
  ParsedPoundErrorDeclSyntax makeDeferred();

private:
  ParsedPoundErrorDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPoundWarningDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPoundWarningDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundWarningDeclSyntaxBuilder &usePoundWarning(ParsedTokenSyntax PoundWarning);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundWarningDeclSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundWarningDeclSyntaxBuilder &useMessage(ParsedStringLiteralExprSyntax Message);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundWarningDeclSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPoundWarningDeclSyntax build();
  ParsedPoundWarningDeclSyntax makeDeferred();

private:
  ParsedPoundWarningDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPoundSourceLocationSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPoundSourceLocationSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundSourceLocationSyntaxBuilder &usePoundSourceLocation(ParsedTokenSyntax PoundSourceLocation);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundSourceLocationSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundSourceLocationSyntaxBuilder &useArgs(ParsedPoundSourceLocationArgsSyntax Args);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundSourceLocationSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPoundSourceLocationSyntax build();
  ParsedPoundSourceLocationSyntax makeDeferred();

private:
  ParsedPoundSourceLocationSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPoundSourceLocationArgsSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[7];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPoundSourceLocationArgsSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundSourceLocationArgsSyntaxBuilder &useFileArgLabel(ParsedTokenSyntax FileArgLabel);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundSourceLocationArgsSyntaxBuilder &useFileArgColon(ParsedTokenSyntax FileArgColon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundSourceLocationArgsSyntaxBuilder &useFileName(ParsedTokenSyntax FileName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundSourceLocationArgsSyntaxBuilder &useComma(ParsedTokenSyntax Comma);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundSourceLocationArgsSyntaxBuilder &useLineArgLabel(ParsedTokenSyntax LineArgLabel);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundSourceLocationArgsSyntaxBuilder &useLineArgColon(ParsedTokenSyntax LineArgColon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundSourceLocationArgsSyntaxBuilder &useLineNumber(ParsedTokenSyntax LineNumber);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPoundSourceLocationArgsSyntax build();
  ParsedPoundSourceLocationArgsSyntax makeDeferred();

private:
  ParsedPoundSourceLocationArgsSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDeclModifierSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDeclModifierSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclModifierSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclModifierSyntaxBuilder &useDetailLeftParen(ParsedTokenSyntax DetailLeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclModifierSyntaxBuilder &useDetail(ParsedTokenSyntax Detail);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclModifierSyntaxBuilder &useDetailRightParen(ParsedTokenSyntax DetailRightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDeclModifierSyntax build();
  ParsedDeclModifierSyntax makeDeferred();

private:
  ParsedDeclModifierSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedInheritedTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedInheritedTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInheritedTypeSyntaxBuilder &useTypeName(ParsedTypeSyntax TypeName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInheritedTypeSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedInheritedTypeSyntax build();
  ParsedInheritedTypeSyntax makeDeferred();

private:
  ParsedInheritedTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTypeInheritanceClauseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> InheritedTypeCollectionMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTypeInheritanceClauseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypeInheritanceClauseSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypeInheritanceClauseSyntaxBuilder &useInheritedTypeCollection(ParsedInheritedTypeListSyntax InheritedTypeCollection);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypeInheritanceClauseSyntaxBuilder &addInheritedTypeCollectionMember(ParsedInheritedTypeSyntax InheritedType);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTypeInheritanceClauseSyntax build();
  ParsedTypeInheritanceClauseSyntax makeDeferred();

private:
  ParsedTypeInheritanceClauseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedClassDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[8];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedClassDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClassDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClassDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClassDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClassDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClassDeclSyntaxBuilder &useClassKeyword(ParsedTokenSyntax ClassKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClassDeclSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClassDeclSyntaxBuilder &useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClassDeclSyntaxBuilder &useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClassDeclSyntaxBuilder &useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClassDeclSyntaxBuilder &useMembers(ParsedMemberDeclBlockSyntax Members);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedClassDeclSyntax build();
  ParsedClassDeclSyntax makeDeferred();

private:
  ParsedClassDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedStructDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[8];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedStructDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStructDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStructDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStructDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStructDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStructDeclSyntaxBuilder &useStructKeyword(ParsedTokenSyntax StructKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStructDeclSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStructDeclSyntaxBuilder &useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStructDeclSyntaxBuilder &useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStructDeclSyntaxBuilder &useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedStructDeclSyntaxBuilder &useMembers(ParsedMemberDeclBlockSyntax Members);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedStructDeclSyntax build();
  ParsedStructDeclSyntax makeDeferred();

private:
  ParsedStructDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedProtocolDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[7];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedProtocolDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedProtocolDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedProtocolDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedProtocolDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedProtocolDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedProtocolDeclSyntaxBuilder &useProtocolKeyword(ParsedTokenSyntax ProtocolKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedProtocolDeclSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedProtocolDeclSyntaxBuilder &useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedProtocolDeclSyntaxBuilder &useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedProtocolDeclSyntaxBuilder &useMembers(ParsedMemberDeclBlockSyntax Members);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedProtocolDeclSyntax build();
  ParsedProtocolDeclSyntax makeDeferred();

private:
  ParsedProtocolDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedExtensionDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[7];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedExtensionDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExtensionDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExtensionDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExtensionDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExtensionDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExtensionDeclSyntaxBuilder &useExtensionKeyword(ParsedTokenSyntax ExtensionKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExtensionDeclSyntaxBuilder &useExtendedType(ParsedTypeSyntax ExtendedType);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExtensionDeclSyntaxBuilder &useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExtensionDeclSyntaxBuilder &useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExtensionDeclSyntaxBuilder &useMembers(ParsedMemberDeclBlockSyntax Members);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedExtensionDeclSyntax build();
  ParsedExtensionDeclSyntax makeDeferred();

private:
  ParsedExtensionDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedMemberDeclBlockSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> MembersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedMemberDeclBlockSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberDeclBlockSyntaxBuilder &useLeftBrace(ParsedTokenSyntax LeftBrace);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberDeclBlockSyntaxBuilder &useMembers(ParsedMemberDeclListSyntax Members);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberDeclBlockSyntaxBuilder &addMembersMember(ParsedMemberDeclListItemSyntax MemberDeclListItem);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberDeclBlockSyntaxBuilder &useRightBrace(ParsedTokenSyntax RightBrace);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedMemberDeclBlockSyntax build();
  ParsedMemberDeclBlockSyntax makeDeferred();

private:
  ParsedMemberDeclBlockSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedMemberDeclListItemSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedMemberDeclListItemSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberDeclListItemSyntaxBuilder &useDecl(ParsedDeclSyntax Decl);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberDeclListItemSyntaxBuilder &useSemicolon(ParsedTokenSyntax Semicolon);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedMemberDeclListItemSyntax build();
  ParsedMemberDeclListItemSyntax makeDeferred();

private:
  ParsedMemberDeclListItemSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSourceFileSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> StatementsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSourceFileSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSourceFileSyntaxBuilder &useStatements(ParsedCodeBlockItemListSyntax Statements);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSourceFileSyntaxBuilder &addStatementsMember(ParsedCodeBlockItemSyntax CodeBlockItem);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSourceFileSyntaxBuilder &useEOFToken(ParsedTokenSyntax EOFToken);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSourceFileSyntax build();
  ParsedSourceFileSyntax makeDeferred();

private:
  ParsedSourceFileSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedInitializerClauseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedInitializerClauseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerClauseSyntaxBuilder &useEqual(ParsedTokenSyntax Equal);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerClauseSyntaxBuilder &useValue(ParsedExprSyntax Value);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedInitializerClauseSyntax build();
  ParsedInitializerClauseSyntax makeDeferred();

private:
  ParsedInitializerClauseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedFunctionParameterSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[8];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedFunctionParameterSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionParameterSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionParameterSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionParameterSyntaxBuilder &useFirstName(ParsedTokenSyntax FirstName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionParameterSyntaxBuilder &useSecondName(ParsedTokenSyntax SecondName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionParameterSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionParameterSyntaxBuilder &useType(ParsedTypeSyntax Type);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionParameterSyntaxBuilder &useEllipsis(ParsedTokenSyntax Ellipsis);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionParameterSyntaxBuilder &useDefaultArgument(ParsedInitializerClauseSyntax DefaultArgument);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionParameterSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedFunctionParameterSyntax build();
  ParsedFunctionParameterSyntax makeDeferred();

private:
  ParsedFunctionParameterSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedFunctionDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[8];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedFunctionDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionDeclSyntaxBuilder &useFuncKeyword(ParsedTokenSyntax FuncKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionDeclSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionDeclSyntaxBuilder &useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionDeclSyntaxBuilder &useSignature(ParsedFunctionSignatureSyntax Signature);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionDeclSyntaxBuilder &useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionDeclSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedFunctionDeclSyntax build();
  ParsedFunctionDeclSyntax makeDeferred();

private:
  ParsedFunctionDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedInitializerDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[9];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedInitializerDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerDeclSyntaxBuilder &useInitKeyword(ParsedTokenSyntax InitKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerDeclSyntaxBuilder &useOptionalMark(ParsedTokenSyntax OptionalMark);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerDeclSyntaxBuilder &useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerDeclSyntaxBuilder &useParameters(ParsedParameterClauseSyntax Parameters);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerDeclSyntaxBuilder &useThrowsOrRethrowsKeyword(ParsedTokenSyntax ThrowsOrRethrowsKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerDeclSyntaxBuilder &useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedInitializerDeclSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedInitializerDeclSyntax build();
  ParsedInitializerDeclSyntax makeDeferred();

private:
  ParsedInitializerDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDeinitializerDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDeinitializerDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeinitializerDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeinitializerDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeinitializerDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeinitializerDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeinitializerDeclSyntaxBuilder &useDeinitKeyword(ParsedTokenSyntax DeinitKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeinitializerDeclSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDeinitializerDeclSyntax build();
  ParsedDeinitializerDeclSyntax makeDeferred();

private:
  ParsedDeinitializerDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSubscriptDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[8];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSubscriptDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptDeclSyntaxBuilder &useSubscriptKeyword(ParsedTokenSyntax SubscriptKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptDeclSyntaxBuilder &useGenericParameterClause(ParsedGenericParameterClauseSyntax GenericParameterClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptDeclSyntaxBuilder &useIndices(ParsedParameterClauseSyntax Indices);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptDeclSyntaxBuilder &useResult(ParsedReturnClauseSyntax Result);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptDeclSyntaxBuilder &useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSubscriptDeclSyntaxBuilder &useAccessor(ParsedSyntax Accessor);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSubscriptDeclSyntax build();
  ParsedSubscriptDeclSyntax makeDeferred();

private:
  ParsedSubscriptDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAccessLevelModifierSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAccessLevelModifierSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessLevelModifierSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessLevelModifierSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessLevelModifierSyntaxBuilder &useModifier(ParsedTokenSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessLevelModifierSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAccessLevelModifierSyntax build();
  ParsedAccessLevelModifierSyntax makeDeferred();

private:
  ParsedAccessLevelModifierSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAccessPathComponentSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAccessPathComponentSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessPathComponentSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessPathComponentSyntaxBuilder &useTrailingDot(ParsedTokenSyntax TrailingDot);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAccessPathComponentSyntax build();
  ParsedAccessPathComponentSyntax makeDeferred();

private:
  ParsedAccessPathComponentSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedImportDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> PathMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedImportDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImportDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImportDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImportDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImportDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImportDeclSyntaxBuilder &useImportTok(ParsedTokenSyntax ImportTok);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImportDeclSyntaxBuilder &useImportKind(ParsedTokenSyntax ImportKind);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImportDeclSyntaxBuilder &usePath(ParsedAccessPathSyntax Path);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImportDeclSyntaxBuilder &addPathMember(ParsedAccessPathComponentSyntax AccessPathComponent);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedImportDeclSyntax build();
  ParsedImportDeclSyntax makeDeferred();

private:
  ParsedImportDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAccessorParameterSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAccessorParameterSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorParameterSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorParameterSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorParameterSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAccessorParameterSyntax build();
  ParsedAccessorParameterSyntax makeDeferred();

private:
  ParsedAccessorParameterSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAccessorDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAccessorDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorDeclSyntaxBuilder &useModifier(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorDeclSyntaxBuilder &useAccessorKind(ParsedTokenSyntax AccessorKind);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorDeclSyntaxBuilder &useParameter(ParsedAccessorParameterSyntax Parameter);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorDeclSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAccessorDeclSyntax build();
  ParsedAccessorDeclSyntax makeDeferred();

private:
  ParsedAccessorDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAccessorBlockSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AccessorsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAccessorBlockSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorBlockSyntaxBuilder &useLeftBrace(ParsedTokenSyntax LeftBrace);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorBlockSyntaxBuilder &useAccessors(ParsedAccessorListSyntax Accessors);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorBlockSyntaxBuilder &addAccessorsMember(ParsedAccessorDeclSyntax AccessorDecl);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAccessorBlockSyntaxBuilder &useRightBrace(ParsedTokenSyntax RightBrace);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAccessorBlockSyntax build();
  ParsedAccessorBlockSyntax makeDeferred();

private:
  ParsedAccessorBlockSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPatternBindingSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPatternBindingSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPatternBindingSyntaxBuilder &usePattern(ParsedPatternSyntax Pattern);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPatternBindingSyntaxBuilder &useTypeAnnotation(ParsedTypeAnnotationSyntax TypeAnnotation);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPatternBindingSyntaxBuilder &useInitializer(ParsedInitializerClauseSyntax Initializer);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPatternBindingSyntaxBuilder &useAccessor(ParsedSyntax Accessor);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPatternBindingSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPatternBindingSyntax build();
  ParsedPatternBindingSyntax makeDeferred();

private:
  ParsedPatternBindingSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedVariableDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> BindingsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedVariableDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedVariableDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedVariableDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedVariableDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedVariableDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedVariableDeclSyntaxBuilder &useLetOrVarKeyword(ParsedTokenSyntax LetOrVarKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedVariableDeclSyntaxBuilder &useBindings(ParsedPatternBindingListSyntax Bindings);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedVariableDeclSyntaxBuilder &addBindingsMember(ParsedPatternBindingSyntax PatternBinding);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedVariableDeclSyntax build();
  ParsedVariableDeclSyntax makeDeferred();

private:
  ParsedVariableDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedEnumCaseElementSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedEnumCaseElementSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCaseElementSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCaseElementSyntaxBuilder &useAssociatedValue(ParsedParameterClauseSyntax AssociatedValue);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCaseElementSyntaxBuilder &useRawValue(ParsedInitializerClauseSyntax RawValue);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCaseElementSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedEnumCaseElementSyntax build();
  ParsedEnumCaseElementSyntax makeDeferred();

private:
  ParsedEnumCaseElementSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedEnumCaseDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ElementsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedEnumCaseDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCaseDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCaseDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCaseDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCaseDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCaseDeclSyntaxBuilder &useCaseKeyword(ParsedTokenSyntax CaseKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCaseDeclSyntaxBuilder &useElements(ParsedEnumCaseElementListSyntax Elements);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCaseDeclSyntaxBuilder &addElementsMember(ParsedEnumCaseElementSyntax EnumCaseElement);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedEnumCaseDeclSyntax build();
  ParsedEnumCaseDeclSyntax makeDeferred();

private:
  ParsedEnumCaseDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedEnumDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[8];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedEnumDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumDeclSyntaxBuilder &useEnumKeyword(ParsedTokenSyntax EnumKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumDeclSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumDeclSyntaxBuilder &useGenericParameters(ParsedGenericParameterClauseSyntax GenericParameters);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumDeclSyntaxBuilder &useInheritanceClause(ParsedTypeInheritanceClauseSyntax InheritanceClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumDeclSyntaxBuilder &useGenericWhereClause(ParsedGenericWhereClauseSyntax GenericWhereClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumDeclSyntaxBuilder &useMembers(ParsedMemberDeclBlockSyntax Members);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedEnumDeclSyntax build();
  ParsedEnumDeclSyntax makeDeferred();

private:
  ParsedEnumDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedOperatorDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedOperatorDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOperatorDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOperatorDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOperatorDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOperatorDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOperatorDeclSyntaxBuilder &useOperatorKeyword(ParsedTokenSyntax OperatorKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOperatorDeclSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOperatorDeclSyntaxBuilder &useOperatorPrecedenceAndTypes(ParsedOperatorPrecedenceAndTypesSyntax OperatorPrecedenceAndTypes);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedOperatorDeclSyntax build();
  ParsedOperatorDeclSyntax makeDeferred();

private:
  ParsedOperatorDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedOperatorPrecedenceAndTypesSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> PrecedenceGroupAndDesignatedTypesMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedOperatorPrecedenceAndTypesSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOperatorPrecedenceAndTypesSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOperatorPrecedenceAndTypesSyntaxBuilder &usePrecedenceGroupAndDesignatedTypes(ParsedIdentifierListSyntax PrecedenceGroupAndDesignatedTypes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOperatorPrecedenceAndTypesSyntaxBuilder &addPrecedenceGroupAndDesignatedTypesMember(ParsedTokenSyntax IdentifierToken);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedOperatorPrecedenceAndTypesSyntax build();
  ParsedOperatorPrecedenceAndTypesSyntax makeDeferred();

private:
  ParsedOperatorPrecedenceAndTypesSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPrecedenceGroupDeclSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[7];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ModifiersMembers;
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> GroupAttributesMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPrecedenceGroupDeclSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupDeclSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupDeclSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupDeclSyntaxBuilder &useModifiers(ParsedModifierListSyntax Modifiers);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupDeclSyntaxBuilder &addModifiersMember(ParsedDeclModifierSyntax Modifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupDeclSyntaxBuilder &usePrecedencegroupKeyword(ParsedTokenSyntax PrecedencegroupKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupDeclSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupDeclSyntaxBuilder &useLeftBrace(ParsedTokenSyntax LeftBrace);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupDeclSyntaxBuilder &useGroupAttributes(ParsedPrecedenceGroupAttributeListSyntax GroupAttributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupDeclSyntaxBuilder &addGroupAttributesMember(ParsedSyntax PrecedenceGroupAttribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupDeclSyntaxBuilder &useRightBrace(ParsedTokenSyntax RightBrace);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPrecedenceGroupDeclSyntax build();
  ParsedPrecedenceGroupDeclSyntax makeDeferred();

private:
  ParsedPrecedenceGroupDeclSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPrecedenceGroupRelationSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> OtherNamesMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPrecedenceGroupRelationSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupRelationSyntaxBuilder &useHigherThanOrLowerThan(ParsedTokenSyntax HigherThanOrLowerThan);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupRelationSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupRelationSyntaxBuilder &useOtherNames(ParsedPrecedenceGroupNameListSyntax OtherNames);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupRelationSyntaxBuilder &addOtherNamesMember(ParsedPrecedenceGroupNameElementSyntax PrecedenceGroupNameElement);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPrecedenceGroupRelationSyntax build();
  ParsedPrecedenceGroupRelationSyntax makeDeferred();

private:
  ParsedPrecedenceGroupRelationSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPrecedenceGroupNameElementSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPrecedenceGroupNameElementSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupNameElementSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupNameElementSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPrecedenceGroupNameElementSyntax build();
  ParsedPrecedenceGroupNameElementSyntax makeDeferred();

private:
  ParsedPrecedenceGroupNameElementSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPrecedenceGroupAssignmentSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPrecedenceGroupAssignmentSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupAssignmentSyntaxBuilder &useAssignmentKeyword(ParsedTokenSyntax AssignmentKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupAssignmentSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupAssignmentSyntaxBuilder &useFlag(ParsedTokenSyntax Flag);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPrecedenceGroupAssignmentSyntax build();
  ParsedPrecedenceGroupAssignmentSyntax makeDeferred();

private:
  ParsedPrecedenceGroupAssignmentSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPrecedenceGroupAssociativitySyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPrecedenceGroupAssociativitySyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupAssociativitySyntaxBuilder &useAssociativityKeyword(ParsedTokenSyntax AssociativityKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupAssociativitySyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPrecedenceGroupAssociativitySyntaxBuilder &useValue(ParsedTokenSyntax Value);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPrecedenceGroupAssociativitySyntax build();
  ParsedPrecedenceGroupAssociativitySyntax makeDeferred();

private:
  ParsedPrecedenceGroupAssociativitySyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedCustomAttributeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ArgumentListMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedCustomAttributeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCustomAttributeSyntaxBuilder &useAtSignToken(ParsedTokenSyntax AtSignToken);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCustomAttributeSyntaxBuilder &useAttributeName(ParsedTypeSyntax AttributeName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCustomAttributeSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCustomAttributeSyntaxBuilder &useArgumentList(ParsedFunctionCallArgumentListSyntax ArgumentList);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCustomAttributeSyntaxBuilder &addArgumentListMember(ParsedFunctionCallArgumentSyntax FunctionCallArgument);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCustomAttributeSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedCustomAttributeSyntax build();
  ParsedCustomAttributeSyntax makeDeferred();

private:
  ParsedCustomAttributeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAttributeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[6];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> TokenListMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAttributeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAttributeSyntaxBuilder &useAtSignToken(ParsedTokenSyntax AtSignToken);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAttributeSyntaxBuilder &useAttributeName(ParsedTokenSyntax AttributeName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAttributeSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAttributeSyntaxBuilder &useArgument(ParsedSyntax Argument);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAttributeSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAttributeSyntaxBuilder &useTokenList(ParsedTokenListSyntax TokenList);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAttributeSyntaxBuilder &addTokenListMember(ParsedTokenSyntax Token);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAttributeSyntax build();
  ParsedAttributeSyntax makeDeferred();

private:
  ParsedAttributeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedLabeledSpecializeEntrySyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedLabeledSpecializeEntrySyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedLabeledSpecializeEntrySyntaxBuilder &useLabel(ParsedTokenSyntax Label);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedLabeledSpecializeEntrySyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedLabeledSpecializeEntrySyntaxBuilder &useValue(ParsedTokenSyntax Value);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedLabeledSpecializeEntrySyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedLabeledSpecializeEntrySyntax build();
  ParsedLabeledSpecializeEntrySyntax makeDeferred();

private:
  ParsedLabeledSpecializeEntrySyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedNamedAttributeStringArgumentSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedNamedAttributeStringArgumentSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedNamedAttributeStringArgumentSyntaxBuilder &useNameTok(ParsedTokenSyntax NameTok);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedNamedAttributeStringArgumentSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedNamedAttributeStringArgumentSyntaxBuilder &useStringOrDeclname(ParsedSyntax StringOrDeclname);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedNamedAttributeStringArgumentSyntax build();
  ParsedNamedAttributeStringArgumentSyntax makeDeferred();

private:
  ParsedNamedAttributeStringArgumentSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDeclNameSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDeclNameSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclNameSyntaxBuilder &useDeclBaseName(ParsedSyntax DeclBaseName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclNameSyntaxBuilder &useDeclNameArguments(ParsedDeclNameArgumentsSyntax DeclNameArguments);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDeclNameSyntax build();
  ParsedDeclNameSyntax makeDeferred();

private:
  ParsedDeclNameSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedImplementsAttributeArgumentsSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedImplementsAttributeArgumentsSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImplementsAttributeArgumentsSyntaxBuilder &useType(ParsedSimpleTypeIdentifierSyntax Type);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImplementsAttributeArgumentsSyntaxBuilder &useComma(ParsedTokenSyntax Comma);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImplementsAttributeArgumentsSyntaxBuilder &useDeclBaseName(ParsedSyntax DeclBaseName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImplementsAttributeArgumentsSyntaxBuilder &useDeclNameArguments(ParsedDeclNameArgumentsSyntax DeclNameArguments);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedImplementsAttributeArgumentsSyntax build();
  ParsedImplementsAttributeArgumentsSyntax makeDeferred();

private:
  ParsedImplementsAttributeArgumentsSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedObjCSelectorPieceSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedObjCSelectorPieceSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjCSelectorPieceSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedObjCSelectorPieceSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedObjCSelectorPieceSyntax build();
  ParsedObjCSelectorPieceSyntax makeDeferred();

private:
  ParsedObjCSelectorPieceSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedContinueStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedContinueStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedContinueStmtSyntaxBuilder &useContinueKeyword(ParsedTokenSyntax ContinueKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedContinueStmtSyntaxBuilder &useLabel(ParsedTokenSyntax Label);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedContinueStmtSyntax build();
  ParsedContinueStmtSyntax makeDeferred();

private:
  ParsedContinueStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedWhileStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ConditionsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedWhileStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedWhileStmtSyntaxBuilder &useLabelName(ParsedTokenSyntax LabelName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedWhileStmtSyntaxBuilder &useLabelColon(ParsedTokenSyntax LabelColon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedWhileStmtSyntaxBuilder &useWhileKeyword(ParsedTokenSyntax WhileKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedWhileStmtSyntaxBuilder &useConditions(ParsedConditionElementListSyntax Conditions);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedWhileStmtSyntaxBuilder &addConditionsMember(ParsedConditionElementSyntax ConditionElement);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedWhileStmtSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedWhileStmtSyntax build();
  ParsedWhileStmtSyntax makeDeferred();

private:
  ParsedWhileStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDeferStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDeferStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeferStmtSyntaxBuilder &useDeferKeyword(ParsedTokenSyntax DeferKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeferStmtSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDeferStmtSyntax build();
  ParsedDeferStmtSyntax makeDeferred();

private:
  ParsedDeferStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedExpressionStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedExpressionStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExpressionStmtSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedExpressionStmtSyntax build();
  ParsedExpressionStmtSyntax makeDeferred();

private:
  ParsedExpressionStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedRepeatWhileStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[6];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedRepeatWhileStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedRepeatWhileStmtSyntaxBuilder &useLabelName(ParsedTokenSyntax LabelName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedRepeatWhileStmtSyntaxBuilder &useLabelColon(ParsedTokenSyntax LabelColon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedRepeatWhileStmtSyntaxBuilder &useRepeatKeyword(ParsedTokenSyntax RepeatKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedRepeatWhileStmtSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedRepeatWhileStmtSyntaxBuilder &useWhileKeyword(ParsedTokenSyntax WhileKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedRepeatWhileStmtSyntaxBuilder &useCondition(ParsedExprSyntax Condition);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedRepeatWhileStmtSyntax build();
  ParsedRepeatWhileStmtSyntax makeDeferred();

private:
  ParsedRepeatWhileStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedGuardStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ConditionsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedGuardStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGuardStmtSyntaxBuilder &useGuardKeyword(ParsedTokenSyntax GuardKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGuardStmtSyntaxBuilder &useConditions(ParsedConditionElementListSyntax Conditions);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGuardStmtSyntaxBuilder &addConditionsMember(ParsedConditionElementSyntax ConditionElement);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGuardStmtSyntaxBuilder &useElseKeyword(ParsedTokenSyntax ElseKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGuardStmtSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedGuardStmtSyntax build();
  ParsedGuardStmtSyntax makeDeferred();

private:
  ParsedGuardStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedWhereClauseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedWhereClauseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedWhereClauseSyntaxBuilder &useWhereKeyword(ParsedTokenSyntax WhereKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedWhereClauseSyntaxBuilder &useGuardResult(ParsedExprSyntax GuardResult);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedWhereClauseSyntax build();
  ParsedWhereClauseSyntax makeDeferred();

private:
  ParsedWhereClauseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedForInStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[10];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedForInStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForInStmtSyntaxBuilder &useLabelName(ParsedTokenSyntax LabelName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForInStmtSyntaxBuilder &useLabelColon(ParsedTokenSyntax LabelColon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForInStmtSyntaxBuilder &useForKeyword(ParsedTokenSyntax ForKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForInStmtSyntaxBuilder &useCaseKeyword(ParsedTokenSyntax CaseKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForInStmtSyntaxBuilder &usePattern(ParsedPatternSyntax Pattern);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForInStmtSyntaxBuilder &useTypeAnnotation(ParsedTypeAnnotationSyntax TypeAnnotation);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForInStmtSyntaxBuilder &useInKeyword(ParsedTokenSyntax InKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForInStmtSyntaxBuilder &useSequenceExpr(ParsedExprSyntax SequenceExpr);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForInStmtSyntaxBuilder &useWhereClause(ParsedWhereClauseSyntax WhereClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedForInStmtSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedForInStmtSyntax build();
  ParsedForInStmtSyntax makeDeferred();

private:
  ParsedForInStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSwitchStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[7];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> CasesMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSwitchStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchStmtSyntaxBuilder &useLabelName(ParsedTokenSyntax LabelName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchStmtSyntaxBuilder &useLabelColon(ParsedTokenSyntax LabelColon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchStmtSyntaxBuilder &useSwitchKeyword(ParsedTokenSyntax SwitchKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchStmtSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchStmtSyntaxBuilder &useLeftBrace(ParsedTokenSyntax LeftBrace);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchStmtSyntaxBuilder &useCases(ParsedSwitchCaseListSyntax Cases);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchStmtSyntaxBuilder &addCasesMember(ParsedSyntax SwitchCase);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchStmtSyntaxBuilder &useRightBrace(ParsedTokenSyntax RightBrace);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSwitchStmtSyntax build();
  ParsedSwitchStmtSyntax makeDeferred();

private:
  ParsedSwitchStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDoStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> CatchClausesMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDoStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDoStmtSyntaxBuilder &useLabelName(ParsedTokenSyntax LabelName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDoStmtSyntaxBuilder &useLabelColon(ParsedTokenSyntax LabelColon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDoStmtSyntaxBuilder &useDoKeyword(ParsedTokenSyntax DoKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDoStmtSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDoStmtSyntaxBuilder &useCatchClauses(ParsedCatchClauseListSyntax CatchClauses);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDoStmtSyntaxBuilder &addCatchClausesMember(ParsedCatchClauseSyntax CatchClause);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDoStmtSyntax build();
  ParsedDoStmtSyntax makeDeferred();

private:
  ParsedDoStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedReturnStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedReturnStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedReturnStmtSyntaxBuilder &useReturnKeyword(ParsedTokenSyntax ReturnKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedReturnStmtSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedReturnStmtSyntax build();
  ParsedReturnStmtSyntax makeDeferred();

private:
  ParsedReturnStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedYieldStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedYieldStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedYieldStmtSyntaxBuilder &useYieldKeyword(ParsedTokenSyntax YieldKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedYieldStmtSyntaxBuilder &useYields(ParsedSyntax Yields);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedYieldStmtSyntax build();
  ParsedYieldStmtSyntax makeDeferred();

private:
  ParsedYieldStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedYieldListSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ElementListMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedYieldListSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedYieldListSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedYieldListSyntaxBuilder &useElementList(ParsedExprListSyntax ElementList);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedYieldListSyntaxBuilder &addElementListMember(ParsedExprSyntax Expression);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedYieldListSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedYieldListSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedYieldListSyntax build();
  ParsedYieldListSyntax makeDeferred();

private:
  ParsedYieldListSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedFallthroughStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedFallthroughStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFallthroughStmtSyntaxBuilder &useFallthroughKeyword(ParsedTokenSyntax FallthroughKeyword);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedFallthroughStmtSyntax build();
  ParsedFallthroughStmtSyntax makeDeferred();

private:
  ParsedFallthroughStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedBreakStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedBreakStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedBreakStmtSyntaxBuilder &useBreakKeyword(ParsedTokenSyntax BreakKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedBreakStmtSyntaxBuilder &useLabel(ParsedTokenSyntax Label);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedBreakStmtSyntax build();
  ParsedBreakStmtSyntax makeDeferred();

private:
  ParsedBreakStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedConditionElementSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedConditionElementSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedConditionElementSyntaxBuilder &useCondition(ParsedSyntax Condition);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedConditionElementSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedConditionElementSyntax build();
  ParsedConditionElementSyntax makeDeferred();

private:
  ParsedConditionElementSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAvailabilityConditionSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AvailabilitySpecMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAvailabilityConditionSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityConditionSyntaxBuilder &usePoundAvailableKeyword(ParsedTokenSyntax PoundAvailableKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityConditionSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityConditionSyntaxBuilder &useAvailabilitySpec(ParsedAvailabilitySpecListSyntax AvailabilitySpec);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityConditionSyntaxBuilder &addAvailabilitySpecMember(ParsedAvailabilityArgumentSyntax AvailabilityArgument);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityConditionSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAvailabilityConditionSyntax build();
  ParsedAvailabilityConditionSyntax makeDeferred();

private:
  ParsedAvailabilityConditionSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedMatchingPatternConditionSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedMatchingPatternConditionSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMatchingPatternConditionSyntaxBuilder &useCaseKeyword(ParsedTokenSyntax CaseKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMatchingPatternConditionSyntaxBuilder &usePattern(ParsedPatternSyntax Pattern);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMatchingPatternConditionSyntaxBuilder &useTypeAnnotation(ParsedTypeAnnotationSyntax TypeAnnotation);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMatchingPatternConditionSyntaxBuilder &useInitializer(ParsedInitializerClauseSyntax Initializer);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedMatchingPatternConditionSyntax build();
  ParsedMatchingPatternConditionSyntax makeDeferred();

private:
  ParsedMatchingPatternConditionSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedOptionalBindingConditionSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedOptionalBindingConditionSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOptionalBindingConditionSyntaxBuilder &useLetOrVarKeyword(ParsedTokenSyntax LetOrVarKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOptionalBindingConditionSyntaxBuilder &usePattern(ParsedPatternSyntax Pattern);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOptionalBindingConditionSyntaxBuilder &useTypeAnnotation(ParsedTypeAnnotationSyntax TypeAnnotation);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOptionalBindingConditionSyntaxBuilder &useInitializer(ParsedInitializerClauseSyntax Initializer);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedOptionalBindingConditionSyntax build();
  ParsedOptionalBindingConditionSyntax makeDeferred();

private:
  ParsedOptionalBindingConditionSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDeclarationStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDeclarationStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDeclarationStmtSyntaxBuilder &useDeclaration(ParsedDeclSyntax Declaration);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDeclarationStmtSyntax build();
  ParsedDeclarationStmtSyntax makeDeferred();

private:
  ParsedDeclarationStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedThrowStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedThrowStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedThrowStmtSyntaxBuilder &useThrowKeyword(ParsedTokenSyntax ThrowKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedThrowStmtSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedThrowStmtSyntax build();
  ParsedThrowStmtSyntax makeDeferred();

private:
  ParsedThrowStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedIfStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[7];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ConditionsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedIfStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfStmtSyntaxBuilder &useLabelName(ParsedTokenSyntax LabelName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfStmtSyntaxBuilder &useLabelColon(ParsedTokenSyntax LabelColon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfStmtSyntaxBuilder &useIfKeyword(ParsedTokenSyntax IfKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfStmtSyntaxBuilder &useConditions(ParsedConditionElementListSyntax Conditions);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfStmtSyntaxBuilder &addConditionsMember(ParsedConditionElementSyntax ConditionElement);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfStmtSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfStmtSyntaxBuilder &useElseKeyword(ParsedTokenSyntax ElseKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIfStmtSyntaxBuilder &useElseBody(ParsedSyntax ElseBody);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedIfStmtSyntax build();
  ParsedIfStmtSyntax makeDeferred();

private:
  ParsedIfStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedElseIfContinuationSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedElseIfContinuationSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedElseIfContinuationSyntaxBuilder &useIfStatement(ParsedIfStmtSyntax IfStatement);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedElseIfContinuationSyntax build();
  ParsedElseIfContinuationSyntax makeDeferred();

private:
  ParsedElseIfContinuationSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedElseBlockSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedElseBlockSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedElseBlockSyntaxBuilder &useElseKeyword(ParsedTokenSyntax ElseKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedElseBlockSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedElseBlockSyntax build();
  ParsedElseBlockSyntax makeDeferred();

private:
  ParsedElseBlockSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSwitchCaseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> StatementsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSwitchCaseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchCaseSyntaxBuilder &useUnknownAttr(ParsedAttributeSyntax UnknownAttr);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchCaseSyntaxBuilder &useLabel(ParsedSyntax Label);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchCaseSyntaxBuilder &useStatements(ParsedCodeBlockItemListSyntax Statements);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchCaseSyntaxBuilder &addStatementsMember(ParsedCodeBlockItemSyntax CodeBlockItem);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSwitchCaseSyntax build();
  ParsedSwitchCaseSyntax makeDeferred();

private:
  ParsedSwitchCaseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSwitchDefaultLabelSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSwitchDefaultLabelSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchDefaultLabelSyntaxBuilder &useDefaultKeyword(ParsedTokenSyntax DefaultKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchDefaultLabelSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSwitchDefaultLabelSyntax build();
  ParsedSwitchDefaultLabelSyntax makeDeferred();

private:
  ParsedSwitchDefaultLabelSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedCaseItemSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedCaseItemSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCaseItemSyntaxBuilder &usePattern(ParsedPatternSyntax Pattern);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCaseItemSyntaxBuilder &useWhereClause(ParsedWhereClauseSyntax WhereClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCaseItemSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedCaseItemSyntax build();
  ParsedCaseItemSyntax makeDeferred();

private:
  ParsedCaseItemSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSwitchCaseLabelSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> CaseItemsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSwitchCaseLabelSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchCaseLabelSyntaxBuilder &useCaseKeyword(ParsedTokenSyntax CaseKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchCaseLabelSyntaxBuilder &useCaseItems(ParsedCaseItemListSyntax CaseItems);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchCaseLabelSyntaxBuilder &addCaseItemsMember(ParsedCaseItemSyntax CaseItem);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSwitchCaseLabelSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSwitchCaseLabelSyntax build();
  ParsedSwitchCaseLabelSyntax makeDeferred();

private:
  ParsedSwitchCaseLabelSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedCatchClauseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedCatchClauseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCatchClauseSyntaxBuilder &useCatchKeyword(ParsedTokenSyntax CatchKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCatchClauseSyntaxBuilder &usePattern(ParsedPatternSyntax Pattern);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCatchClauseSyntaxBuilder &useWhereClause(ParsedWhereClauseSyntax WhereClause);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCatchClauseSyntaxBuilder &useBody(ParsedCodeBlockSyntax Body);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedCatchClauseSyntax build();
  ParsedCatchClauseSyntax makeDeferred();

private:
  ParsedCatchClauseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedPoundAssertStmtSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[6];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedPoundAssertStmtSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundAssertStmtSyntaxBuilder &usePoundAssert(ParsedTokenSyntax PoundAssert);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundAssertStmtSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundAssertStmtSyntaxBuilder &useCondition(ParsedExprSyntax Condition);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundAssertStmtSyntaxBuilder &useComma(ParsedTokenSyntax Comma);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundAssertStmtSyntaxBuilder &useMessage(ParsedTokenSyntax Message);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedPoundAssertStmtSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedPoundAssertStmtSyntax build();
  ParsedPoundAssertStmtSyntax makeDeferred();

private:
  ParsedPoundAssertStmtSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedGenericWhereClauseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> RequirementListMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedGenericWhereClauseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericWhereClauseSyntaxBuilder &useWhereKeyword(ParsedTokenSyntax WhereKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericWhereClauseSyntaxBuilder &useRequirementList(ParsedGenericRequirementListSyntax RequirementList);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericWhereClauseSyntaxBuilder &addRequirementListMember(ParsedSyntax GenericRequirement);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedGenericWhereClauseSyntax build();
  ParsedGenericWhereClauseSyntax makeDeferred();

private:
  ParsedGenericWhereClauseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSameTypeRequirementSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSameTypeRequirementSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSameTypeRequirementSyntaxBuilder &useLeftTypeIdentifier(ParsedTypeSyntax LeftTypeIdentifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSameTypeRequirementSyntaxBuilder &useEqualityToken(ParsedTokenSyntax EqualityToken);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSameTypeRequirementSyntaxBuilder &useRightTypeIdentifier(ParsedTypeSyntax RightTypeIdentifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSameTypeRequirementSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSameTypeRequirementSyntax build();
  ParsedSameTypeRequirementSyntax makeDeferred();

private:
  ParsedSameTypeRequirementSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedGenericParameterSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedGenericParameterSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericParameterSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericParameterSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericParameterSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericParameterSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericParameterSyntaxBuilder &useInheritedType(ParsedTypeSyntax InheritedType);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericParameterSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedGenericParameterSyntax build();
  ParsedGenericParameterSyntax makeDeferred();

private:
  ParsedGenericParameterSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedGenericParameterClauseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> GenericParameterListMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedGenericParameterClauseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericParameterClauseSyntaxBuilder &useLeftAngleBracket(ParsedTokenSyntax LeftAngleBracket);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericParameterClauseSyntaxBuilder &useGenericParameterList(ParsedGenericParameterListSyntax GenericParameterList);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericParameterClauseSyntaxBuilder &addGenericParameterListMember(ParsedGenericParameterSyntax GenericParameter);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericParameterClauseSyntaxBuilder &useRightAngleBracket(ParsedTokenSyntax RightAngleBracket);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedGenericParameterClauseSyntax build();
  ParsedGenericParameterClauseSyntax makeDeferred();

private:
  ParsedGenericParameterClauseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedConformanceRequirementSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedConformanceRequirementSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedConformanceRequirementSyntaxBuilder &useLeftTypeIdentifier(ParsedTypeSyntax LeftTypeIdentifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedConformanceRequirementSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedConformanceRequirementSyntaxBuilder &useRightTypeIdentifier(ParsedTypeSyntax RightTypeIdentifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedConformanceRequirementSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedConformanceRequirementSyntax build();
  ParsedConformanceRequirementSyntax makeDeferred();

private:
  ParsedConformanceRequirementSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSimpleTypeIdentifierSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSimpleTypeIdentifierSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSimpleTypeIdentifierSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSimpleTypeIdentifierSyntaxBuilder &useGenericArgumentClause(ParsedGenericArgumentClauseSyntax GenericArgumentClause);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSimpleTypeIdentifierSyntax build();
  ParsedSimpleTypeIdentifierSyntax makeDeferred();

private:
  ParsedSimpleTypeIdentifierSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedMemberTypeIdentifierSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedMemberTypeIdentifierSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberTypeIdentifierSyntaxBuilder &useBaseType(ParsedTypeSyntax BaseType);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberTypeIdentifierSyntaxBuilder &usePeriod(ParsedTokenSyntax Period);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberTypeIdentifierSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMemberTypeIdentifierSyntaxBuilder &useGenericArgumentClause(ParsedGenericArgumentClauseSyntax GenericArgumentClause);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedMemberTypeIdentifierSyntax build();
  ParsedMemberTypeIdentifierSyntax makeDeferred();

private:
  ParsedMemberTypeIdentifierSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedClassRestrictionTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedClassRestrictionTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedClassRestrictionTypeSyntaxBuilder &useClassKeyword(ParsedTokenSyntax ClassKeyword);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedClassRestrictionTypeSyntax build();
  ParsedClassRestrictionTypeSyntax makeDeferred();

private:
  ParsedClassRestrictionTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedArrayTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedArrayTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedArrayTypeSyntaxBuilder &useLeftSquareBracket(ParsedTokenSyntax LeftSquareBracket);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedArrayTypeSyntaxBuilder &useElementType(ParsedTypeSyntax ElementType);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedArrayTypeSyntaxBuilder &useRightSquareBracket(ParsedTokenSyntax RightSquareBracket);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedArrayTypeSyntax build();
  ParsedArrayTypeSyntax makeDeferred();

private:
  ParsedArrayTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedDictionaryTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[5];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedDictionaryTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryTypeSyntaxBuilder &useLeftSquareBracket(ParsedTokenSyntax LeftSquareBracket);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryTypeSyntaxBuilder &useKeyType(ParsedTypeSyntax KeyType);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryTypeSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryTypeSyntaxBuilder &useValueType(ParsedTypeSyntax ValueType);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedDictionaryTypeSyntaxBuilder &useRightSquareBracket(ParsedTokenSyntax RightSquareBracket);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedDictionaryTypeSyntax build();
  ParsedDictionaryTypeSyntax makeDeferred();

private:
  ParsedDictionaryTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedMetatypeTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedMetatypeTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMetatypeTypeSyntaxBuilder &useBaseType(ParsedTypeSyntax BaseType);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMetatypeTypeSyntaxBuilder &usePeriod(ParsedTokenSyntax Period);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedMetatypeTypeSyntaxBuilder &useTypeOrProtocol(ParsedTokenSyntax TypeOrProtocol);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedMetatypeTypeSyntax build();
  ParsedMetatypeTypeSyntax makeDeferred();

private:
  ParsedMetatypeTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedOptionalTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedOptionalTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOptionalTypeSyntaxBuilder &useWrappedType(ParsedTypeSyntax WrappedType);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOptionalTypeSyntaxBuilder &useQuestionMark(ParsedTokenSyntax QuestionMark);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedOptionalTypeSyntax build();
  ParsedOptionalTypeSyntax makeDeferred();

private:
  ParsedOptionalTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedSomeTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedSomeTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSomeTypeSyntaxBuilder &useSomeSpecifier(ParsedTokenSyntax SomeSpecifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedSomeTypeSyntaxBuilder &useBaseType(ParsedTypeSyntax BaseType);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedSomeTypeSyntax build();
  ParsedSomeTypeSyntax makeDeferred();

private:
  ParsedSomeTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder &useWrappedType(ParsedTypeSyntax WrappedType);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedImplicitlyUnwrappedOptionalTypeSyntaxBuilder &useExclamationMark(ParsedTokenSyntax ExclamationMark);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedImplicitlyUnwrappedOptionalTypeSyntax build();
  ParsedImplicitlyUnwrappedOptionalTypeSyntax makeDeferred();

private:
  ParsedImplicitlyUnwrappedOptionalTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedCompositionTypeElementSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedCompositionTypeElementSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCompositionTypeElementSyntaxBuilder &useType(ParsedTypeSyntax Type);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCompositionTypeElementSyntaxBuilder &useAmpersand(ParsedTokenSyntax Ampersand);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedCompositionTypeElementSyntax build();
  ParsedCompositionTypeElementSyntax makeDeferred();

private:
  ParsedCompositionTypeElementSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedCompositionTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ElementsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedCompositionTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCompositionTypeSyntaxBuilder &useElements(ParsedCompositionTypeElementListSyntax Elements);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedCompositionTypeSyntaxBuilder &addElementsMember(ParsedCompositionTypeElementSyntax CompositionTypeElement);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedCompositionTypeSyntax build();
  ParsedCompositionTypeSyntax makeDeferred();

private:
  ParsedCompositionTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTupleTypeElementSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[8];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTupleTypeElementSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeElementSyntaxBuilder &useInOut(ParsedTokenSyntax InOut);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeElementSyntaxBuilder &useName(ParsedTokenSyntax Name);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeElementSyntaxBuilder &useSecondName(ParsedTokenSyntax SecondName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeElementSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeElementSyntaxBuilder &useType(ParsedTypeSyntax Type);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeElementSyntaxBuilder &useEllipsis(ParsedTokenSyntax Ellipsis);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeElementSyntaxBuilder &useInitializer(ParsedInitializerClauseSyntax Initializer);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeElementSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTupleTypeElementSyntax build();
  ParsedTupleTypeElementSyntax makeDeferred();

private:
  ParsedTupleTypeElementSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTupleTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ElementsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTupleTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeSyntaxBuilder &useElements(ParsedTupleTypeElementListSyntax Elements);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeSyntaxBuilder &addElementsMember(ParsedTupleTypeElementSyntax TupleTypeElement);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTupleTypeSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTupleTypeSyntax build();
  ParsedTupleTypeSyntax makeDeferred();

private:
  ParsedTupleTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedFunctionTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[6];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ArgumentsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedFunctionTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionTypeSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionTypeSyntaxBuilder &useArguments(ParsedTupleTypeElementListSyntax Arguments);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionTypeSyntaxBuilder &addArgumentsMember(ParsedTupleTypeElementSyntax TupleTypeElement);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionTypeSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionTypeSyntaxBuilder &useThrowsOrRethrowsKeyword(ParsedTokenSyntax ThrowsOrRethrowsKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionTypeSyntaxBuilder &useArrow(ParsedTokenSyntax Arrow);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedFunctionTypeSyntaxBuilder &useReturnType(ParsedTypeSyntax ReturnType);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedFunctionTypeSyntax build();
  ParsedFunctionTypeSyntax makeDeferred();

private:
  ParsedFunctionTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAttributedTypeSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> AttributesMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAttributedTypeSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAttributedTypeSyntaxBuilder &useSpecifier(ParsedTokenSyntax Specifier);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAttributedTypeSyntaxBuilder &useAttributes(ParsedAttributeListSyntax Attributes);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAttributedTypeSyntaxBuilder &addAttributesMember(ParsedSyntax Attribute);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAttributedTypeSyntaxBuilder &useBaseType(ParsedTypeSyntax BaseType);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAttributedTypeSyntax build();
  ParsedAttributedTypeSyntax makeDeferred();

private:
  ParsedAttributedTypeSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedGenericArgumentSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedGenericArgumentSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericArgumentSyntaxBuilder &useArgumentType(ParsedTypeSyntax ArgumentType);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericArgumentSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedGenericArgumentSyntax build();
  ParsedGenericArgumentSyntax makeDeferred();

private:
  ParsedGenericArgumentSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedGenericArgumentClauseSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ArgumentsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedGenericArgumentClauseSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericArgumentClauseSyntaxBuilder &useLeftAngleBracket(ParsedTokenSyntax LeftAngleBracket);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericArgumentClauseSyntaxBuilder &useArguments(ParsedGenericArgumentListSyntax Arguments);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericArgumentClauseSyntaxBuilder &addArgumentsMember(ParsedGenericArgumentSyntax GenericArgument);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedGenericArgumentClauseSyntaxBuilder &useRightAngleBracket(ParsedTokenSyntax RightAngleBracket);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedGenericArgumentClauseSyntax build();
  ParsedGenericArgumentClauseSyntax makeDeferred();

private:
  ParsedGenericArgumentClauseSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTypeAnnotationSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTypeAnnotationSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypeAnnotationSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTypeAnnotationSyntaxBuilder &useType(ParsedTypeSyntax Type);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTypeAnnotationSyntax build();
  ParsedTypeAnnotationSyntax makeDeferred();

private:
  ParsedTypeAnnotationSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedEnumCasePatternSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedEnumCasePatternSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCasePatternSyntaxBuilder &useType(ParsedTypeSyntax Type);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCasePatternSyntaxBuilder &usePeriod(ParsedTokenSyntax Period);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCasePatternSyntaxBuilder &useCaseName(ParsedTokenSyntax CaseName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedEnumCasePatternSyntaxBuilder &useAssociatedTuple(ParsedTuplePatternSyntax AssociatedTuple);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedEnumCasePatternSyntax build();
  ParsedEnumCasePatternSyntax makeDeferred();

private:
  ParsedEnumCasePatternSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedIsTypePatternSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedIsTypePatternSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIsTypePatternSyntaxBuilder &useIsKeyword(ParsedTokenSyntax IsKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIsTypePatternSyntaxBuilder &useType(ParsedTypeSyntax Type);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedIsTypePatternSyntax build();
  ParsedIsTypePatternSyntax makeDeferred();

private:
  ParsedIsTypePatternSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedOptionalPatternSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedOptionalPatternSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOptionalPatternSyntaxBuilder &useSubPattern(ParsedPatternSyntax SubPattern);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedOptionalPatternSyntaxBuilder &useQuestionMark(ParsedTokenSyntax QuestionMark);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedOptionalPatternSyntax build();
  ParsedOptionalPatternSyntax makeDeferred();

private:
  ParsedOptionalPatternSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedIdentifierPatternSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedIdentifierPatternSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedIdentifierPatternSyntaxBuilder &useIdentifier(ParsedTokenSyntax Identifier);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedIdentifierPatternSyntax build();
  ParsedIdentifierPatternSyntax makeDeferred();

private:
  ParsedIdentifierPatternSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAsTypePatternSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAsTypePatternSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAsTypePatternSyntaxBuilder &usePattern(ParsedPatternSyntax Pattern);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAsTypePatternSyntaxBuilder &useAsKeyword(ParsedTokenSyntax AsKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAsTypePatternSyntaxBuilder &useType(ParsedTypeSyntax Type);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAsTypePatternSyntax build();
  ParsedAsTypePatternSyntax makeDeferred();

private:
  ParsedAsTypePatternSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTuplePatternSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 45 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  SmallVector<ParsedRawSyntaxNode, 8> ElementsMembers;
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTuplePatternSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTuplePatternSyntaxBuilder &useLeftParen(ParsedTokenSyntax LeftParen);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTuplePatternSyntaxBuilder &useElements(ParsedTuplePatternElementListSyntax Elements);
#line 60 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTuplePatternSyntaxBuilder &addElementsMember(ParsedTuplePatternElementSyntax TuplePatternElement);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTuplePatternSyntaxBuilder &useRightParen(ParsedTokenSyntax RightParen);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTuplePatternSyntax build();
  ParsedTuplePatternSyntax makeDeferred();

private:
  ParsedTuplePatternSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedWildcardPatternSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedWildcardPatternSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedWildcardPatternSyntaxBuilder &useWildcard(ParsedTokenSyntax Wildcard);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedWildcardPatternSyntaxBuilder &useTypeAnnotation(ParsedTypeAnnotationSyntax TypeAnnotation);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedWildcardPatternSyntax build();
  ParsedWildcardPatternSyntax makeDeferred();

private:
  ParsedWildcardPatternSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedTuplePatternElementSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[4];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedTuplePatternElementSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTuplePatternElementSyntaxBuilder &useLabelName(ParsedTokenSyntax LabelName);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTuplePatternElementSyntaxBuilder &useLabelColon(ParsedTokenSyntax LabelColon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTuplePatternElementSyntaxBuilder &usePattern(ParsedPatternSyntax Pattern);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedTuplePatternElementSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedTuplePatternElementSyntax build();
  ParsedTuplePatternElementSyntax makeDeferred();

private:
  ParsedTuplePatternElementSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedExpressionPatternSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[1];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedExpressionPatternSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedExpressionPatternSyntaxBuilder &useExpression(ParsedExprSyntax Expression);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedExpressionPatternSyntax build();
  ParsedExpressionPatternSyntax makeDeferred();

private:
  ParsedExpressionPatternSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedValueBindingPatternSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedValueBindingPatternSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedValueBindingPatternSyntaxBuilder &useLetOrVarKeyword(ParsedTokenSyntax LetOrVarKeyword);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedValueBindingPatternSyntaxBuilder &useValuePattern(ParsedPatternSyntax ValuePattern);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedValueBindingPatternSyntax build();
  ParsedValueBindingPatternSyntax makeDeferred();

private:
  ParsedValueBindingPatternSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAvailabilityArgumentSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAvailabilityArgumentSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityArgumentSyntaxBuilder &useEntry(ParsedSyntax Entry);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityArgumentSyntaxBuilder &useTrailingComma(ParsedTokenSyntax TrailingComma);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAvailabilityArgumentSyntax build();
  ParsedAvailabilityArgumentSyntax makeDeferred();

private:
  ParsedAvailabilityArgumentSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAvailabilityLabeledArgumentSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAvailabilityLabeledArgumentSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityLabeledArgumentSyntaxBuilder &useLabel(ParsedTokenSyntax Label);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityLabeledArgumentSyntaxBuilder &useColon(ParsedTokenSyntax Colon);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityLabeledArgumentSyntaxBuilder &useValue(ParsedSyntax Value);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAvailabilityLabeledArgumentSyntax build();
  ParsedAvailabilityLabeledArgumentSyntax makeDeferred();

private:
  ParsedAvailabilityLabeledArgumentSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedAvailabilityVersionRestrictionSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[2];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedAvailabilityVersionRestrictionSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityVersionRestrictionSyntaxBuilder &usePlatform(ParsedTokenSyntax Platform);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedAvailabilityVersionRestrictionSyntaxBuilder &useVersion(ParsedVersionTupleSyntax Version);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedAvailabilityVersionRestrictionSyntax build();
  ParsedAvailabilityVersionRestrictionSyntax makeDeferred();

private:
  ParsedAvailabilityVersionRestrictionSyntax record();
  void finishLayout(bool deferred);
};

#line 36 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
class ParsedVersionTupleSyntaxBuilder {
  SyntaxParsingContext &SPCtx;
  ParsedRawSyntaxNode Layout[3];
#line 48 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

public:
  explicit ParsedVersionTupleSyntaxBuilder(SyntaxParsingContext &SPCtx)
    : SPCtx(SPCtx) {}

#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedVersionTupleSyntaxBuilder &useMajorMinor(ParsedSyntax MajorMinor);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedVersionTupleSyntaxBuilder &usePatchPeriod(ParsedTokenSyntax PatchPeriod);
#line 54 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"
  ParsedVersionTupleSyntaxBuilder &usePatchVersion(ParsedTokenSyntax PatchVersion);
#line 63 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

  ParsedVersionTupleSyntax build();
  ParsedVersionTupleSyntax makeDeferred();

private:
  ParsedVersionTupleSyntax record();
  void finishLayout(bool deferred);
};

#line 74 "/Users/zhuzhenhua/Documents/SwiftSourceCode/swift/include/swift/Parse/ParsedSyntaxBuilders.h.gyb"

}

#endif // SWIFT_PARSE_PARSEDSYNTAXBUILDERS_H
